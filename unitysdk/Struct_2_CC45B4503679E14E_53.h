#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeConditionLogicType.h"
#include "unitysdk/System/ValueType.h"

class Class_1_43BD383C98B4C0C5_3;
namespace RPG::GameCore { class LevelNavNodeConditionInfo; }
namespace RPG::GameCore { class LevelNavNodeConditionInfos; }

#define STRUCT_2_CC45B4503679E14E_53_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7B0860)
#define STRUCT_2_CC45B4503679E14E_53_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x881730)
#define STRUCT_2_CC45B4503679E14E_53_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x676EB0)
#define STRUCT_2_CC45B4503679E14E_53_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1651A0)
#define STRUCT_2_CC45B4503679E14E_53_INIT_OFFSET UNITYSDK_OFFSET(0x6E35A0)
#define STRUCT_2_CC45B4503679E14E_53_METHOD_2_020B4FCF613D9C93_OFFSET UNITYSDK_OFFSET(0x3A2FCA0)
#define STRUCT_2_CC45B4503679E14E_53_METHOD_2_5B3D5EA3206070ED_OFFSET UNITYSDK_OFFSET(0x3A2FC70)
#define STRUCT_2_CC45B4503679E14E_53_METHOD_2_A5DC9CCF0684FC44_OFFSET UNITYSDK_OFFSET(0x3A2FD00)
#define STRUCT_2_CC45B4503679E14E_53_METHOD_2_E251C88A970339AC_OFFSET UNITYSDK_OFFSET(0x3A2FCF0)
#define STRUCT_2_CC45B4503679E14E_53_METHOD_2_EF197E045C0C22E4_OFFSET UNITYSDK_OFFSET(0x3A2FD50)

inline static constexpr unsigned int Struct_2_CC45B4503679E14E_53_TypeDefinitionIndex = 10374;

struct alignas(8) Struct_2_CC45B4503679E14E_53
{
	::Class_1_43BD383C98B4C0C5_3* Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x18

	::System::Void Init(::Class_1_43BD383C98B4C0C5_3* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_3*, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_53_INIT_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_IsValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_53_GET_ISVALID_OFFSET))(this);
	}

	::System::UInt32 get_Offset()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_53_GET_OFFSET_OFFSET))(this);
	}

	::Class_1_43BD383C98B4C0C5_3* get_Pool()
	{
		return ((::Class_1_43BD383C98B4C0C5_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_53_GET_POOL_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_53_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::LevelNavNodeConditionLogicType Method_2_5B3D5EA3206070ED()
	{
		return ((::RPG::GameCore::LevelNavNodeConditionLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_53_METHOD_2_5B3D5EA3206070ED_OFFSET))(this);
	}

	::System::Void Method_2_020B4FCF613D9C93(::RPG::GameCore::LevelNavNodeConditionLogicType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNavNodeConditionLogicType))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_53_METHOD_2_020B4FCF613D9C93_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfo*>* Method_2_E251C88A970339AC()
	{
		return ((::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_53_METHOD_2_E251C88A970339AC_OFFSET))(this);
	}

	::System::Void Method_2_A5DC9CCF0684FC44(::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfo*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfo*>*))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_53_METHOD_2_A5DC9CCF0684FC44_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelNavNodeConditionInfos* Method_2_EF197E045C0C22E4()
	{
		return ((::RPG::GameCore::LevelNavNodeConditionInfos*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_53_METHOD_2_EF197E045C0C22E4_OFFSET))(this);
	}
};
