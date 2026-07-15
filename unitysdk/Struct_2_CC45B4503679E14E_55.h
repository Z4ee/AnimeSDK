#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_43BD383C98B4C0C5_3;
namespace RPG::GameCore { class PerFloorConflictRelativeMissionBakedData; }

#define STRUCT_2_CC45B4503679E14E_55_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7B0860)
#define STRUCT_2_CC45B4503679E14E_55_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x881730)
#define STRUCT_2_CC45B4503679E14E_55_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x676EB0)
#define STRUCT_2_CC45B4503679E14E_55_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1651A0)
#define STRUCT_2_CC45B4503679E14E_55_INIT_OFFSET UNITYSDK_OFFSET(0x6E35A0)
#define STRUCT_2_CC45B4503679E14E_55_METHOD_2_1AD9311017BB6671_OFFSET UNITYSDK_OFFSET(0x3A30C60)
#define STRUCT_2_CC45B4503679E14E_55_METHOD_2_6879A8B2C2E7F263_1_OFFSET UNITYSDK_OFFSET(0x3A30C10)
#define STRUCT_2_CC45B4503679E14E_55_METHOD_2_6879A8B2C2E7F263_OFFSET UNITYSDK_OFFSET(0x3A30B80)
#define STRUCT_2_CC45B4503679E14E_55_METHOD_2_D151763A2B2370A1_1_OFFSET UNITYSDK_OFFSET(0x3A30BD0)
#define STRUCT_2_CC45B4503679E14E_55_METHOD_2_D151763A2B2370A1_OFFSET UNITYSDK_OFFSET(0x3A30B40)

inline static constexpr unsigned int Struct_2_CC45B4503679E14E_55_TypeDefinitionIndex = 10376;

struct alignas(8) Struct_2_CC45B4503679E14E_55
{
	::Class_1_43BD383C98B4C0C5_3* Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x18

	::System::Void Init(::Class_1_43BD383C98B4C0C5_3* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_3*, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_55_INIT_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_IsValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_55_GET_ISVALID_OFFSET))(this);
	}

	::System::UInt32 get_Offset()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_55_GET_OFFSET_OFFSET))(this);
	}

	::Class_1_43BD383C98B4C0C5_3* get_Pool()
	{
		return ((::Class_1_43BD383C98B4C0C5_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_55_GET_POOL_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_55_DISPOSE_OFFSET))(this);
	}

	/*
	::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> Method_2_D151763A2B2370A1()
	{
		return ((::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_55_METHOD_2_D151763A2B2370A1_OFFSET))(this);
	}
	*/

	/*
	::System::Void Method_2_6879A8B2C2E7F263(::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_55_METHOD_2_6879A8B2C2E7F263_OFFSET))(this, a1);
	}
	*/

	/*
	::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> Method_2_D151763A2B2370A1_1()
	{
		return ((::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_55_METHOD_2_D151763A2B2370A1_1_OFFSET))(this);
	}
	*/

	/*
	::System::Void Method_2_6879A8B2C2E7F263_1(::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_55_METHOD_2_6879A8B2C2E7F263_1_OFFSET))(this, a1);
	}
	*/

	::RPG::GameCore::PerFloorConflictRelativeMissionBakedData* Method_2_1AD9311017BB6671()
	{
		return ((::RPG::GameCore::PerFloorConflictRelativeMissionBakedData*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_55_METHOD_2_1AD9311017BB6671_OFFSET))(this);
	}
};
