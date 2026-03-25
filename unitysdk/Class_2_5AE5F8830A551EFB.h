#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FloorConnectivityData.h"

namespace RPG::Client { class FloorConnectivityData_EdgeConnectionInfo; }
namespace RPG::Client { class RogueSiteData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5AE5F8830A551EFB_METHOD_2_270B21E60698F09C_OFFSET UNITYSDK_OFFSET(0x8983290)
#define CLASS_2_5AE5F8830A551EFB_METHOD_2_A3B36CD562D22DD5_OFFSET UNITYSDK_OFFSET(0x8982E50)
#define CLASS_2_5AE5F8830A551EFB_METHOD_2_F9B6DBA30D57FE77_OFFSET UNITYSDK_OFFSET(0x8983860)
#define CLASS_2_5AE5F8830A551EFB_SETUPDATA_OFFSET UNITYSDK_OFFSET(0x89827B0)
#define CLASS_2_5AE5F8830A551EFB_TRYFINDNEXTPOINT_OFFSET UNITYSDK_OFFSET(0x8983570)
#define CLASS_2_5AE5F8830A551EFB__CTOR_OFFSET UNITYSDK_OFFSET(0x8983920)
#define CLASS_2_5AE5F8830A551EFB___IFIXBASEPROXY_SETUPDATA_OFFSET UNITYSDK_OFFSET(0x89839A0)
#define CLASS_2_5AE5F8830A551EFB___IFIXBASEPROXY_TRYFINDNEXTPOINT_OFFSET UNITYSDK_OFFSET(0x8983A00)

inline static constexpr unsigned int Class_2_5AE5F8830A551EFB_TypeDefinitionIndex = 52151;

class Class_2_5AE5F8830A551EFB : public ::RPG::Client::FloorConnectivityData
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::RogueSiteData*>* Field_2_0; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_2_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AE5F8830A551EFB__CTOR_OFFSET))(this);
	}

	::System::Void SetupData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AE5F8830A551EFB_SETUPDATA_OFFSET))(this);
	}

	::System::Void Method_2_A3B36CD562D22DD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AE5F8830A551EFB_METHOD_2_A3B36CD562D22DD5_OFFSET))(this);
	}

	::System::Void Method_2_270B21E60698F09C(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5AE5F8830A551EFB_METHOD_2_270B21E60698F09C_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* TryFindNextPoint(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* a3)
	{
		return ((::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*))((::PBYTE)hIl2Cpp + CLASS_2_5AE5F8830A551EFB_TRYFINDNEXTPOINT_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_F9B6DBA30D57FE77(::RPG::Client::RogueSiteData* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueSiteData*))((::PBYTE)hIl2Cpp + CLASS_2_5AE5F8830A551EFB_METHOD_2_F9B6DBA30D57FE77_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_SetupData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AE5F8830A551EFB___IFIXBASEPROXY_SETUPDATA_OFFSET))(this);
	}

	::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* __iFixBaseProxy_TryFindNextPoint(::System::UInt32 P0, ::System::UInt32 P1, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* P2)
	{
		return ((::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*))((::PBYTE)hIl2Cpp + CLASS_2_5AE5F8830A551EFB___IFIXBASEPROXY_TRYFINDNEXTPOINT_OFFSET))(this, P0, P1, P2);
	}
};
