#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FloorConnectivityData.h"

namespace RPG::Client { class FloorConnectivityData_EdgeConnectionInfo; }
namespace RPG::Client { class RogueSiteData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_73B9079F533003D4_METHOD_2_087E38163DAC2360_OFFSET UNITYSDK_OFFSET(0x16440840)
#define CLASS_2_73B9079F533003D4_METHOD_2_A7C4A6FA5DA2B20C_OFFSET UNITYSDK_OFFSET(0x16440350)
#define CLASS_2_73B9079F533003D4_METHOD_2_F9B6DBA30D57FE77_OFFSET UNITYSDK_OFFSET(0x16440EB0)
#define CLASS_2_73B9079F533003D4_SETUPDATA_OFFSET UNITYSDK_OFFSET(0x1643FB30)
#define CLASS_2_73B9079F533003D4_TRYFINDNEXTPOINT_OFFSET UNITYSDK_OFFSET(0x16440AF0)
#define CLASS_2_73B9079F533003D4__CTOR_OFFSET UNITYSDK_OFFSET(0x16440F70)

inline static constexpr unsigned int Class_2_73B9079F533003D4_TypeDefinitionIndex = 64297;

class Class_2_73B9079F533003D4 : public ::RPG::Client::FloorConnectivityData
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* EKACEGACALB; // 0x40
	::System::Collections::Generic::List_1<::RPG::Client::RogueSiteData*>* DPNAHECJMBC; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73B9079F533003D4__CTOR_OFFSET))(this);
	}

	::System::Void SetupData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73B9079F533003D4_SETUPDATA_OFFSET))(this);
	}

	::System::Void Method_2_A7C4A6FA5DA2B20C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73B9079F533003D4_METHOD_2_A7C4A6FA5DA2B20C_OFFSET))(this);
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
};
