#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FloorConnectivityData.h"

namespace RPG::Client { class FloorConnectivityData_EdgeConnectionInfo; }
namespace RPG::Client { class RogueSiteData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_73B9079F533003D4_METHOD_2_087E38163DAC2360_OFFSET UNITYSDK_OFFSET(0x145B0A30)
#define CLASS_2_73B9079F533003D4_METHOD_2_A3B36CD562D22DD5_OFFSET UNITYSDK_OFFSET(0x145B0570)
#define CLASS_2_73B9079F533003D4_METHOD_2_F9B6DBA30D57FE77_OFFSET UNITYSDK_OFFSET(0x145B10A0)
#define CLASS_2_73B9079F533003D4_SETUPDATA_OFFSET UNITYSDK_OFFSET(0x145AFD50)
#define CLASS_2_73B9079F533003D4_TRYFINDNEXTPOINT_OFFSET UNITYSDK_OFFSET(0x145B0CE0)
#define CLASS_2_73B9079F533003D4__CTOR_OFFSET UNITYSDK_OFFSET(0x145B1160)
#define CLASS_2_73B9079F533003D4___IFIXBASEPROXY_SETUPDATA_OFFSET UNITYSDK_OFFSET(0x145B11E0)
#define CLASS_2_73B9079F533003D4___IFIXBASEPROXY_TRYFINDNEXTPOINT_OFFSET UNITYSDK_OFFSET(0x145B1240)

inline static constexpr unsigned int Class_2_73B9079F533003D4_TypeDefinitionIndex = 60031;

class Class_2_73B9079F533003D4 : public ::RPG::Client::FloorConnectivityData
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::RogueSiteData*>* Field_2_0; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_2_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73B9079F533003D4__CTOR_OFFSET))(this);
	}

	::System::Void SetupData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73B9079F533003D4_SETUPDATA_OFFSET))(this);
	}

	::System::Void Method_2_A3B36CD562D22DD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73B9079F533003D4_METHOD_2_A3B36CD562D22DD5_OFFSET))(this);
	}

	::System::Void Method_2_087E38163DAC2360(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_73B9079F533003D4_METHOD_2_087E38163DAC2360_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* TryFindNextPoint(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* a3)
	{
		return ((::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*))((::PBYTE)hIl2Cpp + CLASS_2_73B9079F533003D4_TRYFINDNEXTPOINT_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_F9B6DBA30D57FE77(::RPG::Client::RogueSiteData* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueSiteData*))((::PBYTE)hIl2Cpp + CLASS_2_73B9079F533003D4_METHOD_2_F9B6DBA30D57FE77_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_SetupData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73B9079F533003D4___IFIXBASEPROXY_SETUPDATA_OFFSET))(this);
	}

	::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* __iFixBaseProxy_TryFindNextPoint(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* a3)
	{
		return ((::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*))((::PBYTE)hIl2Cpp + CLASS_2_73B9079F533003D4___IFIXBASEPROXY_TRYFINDNEXTPOINT_OFFSET))(this, a1, a2, a3);
	}
};
