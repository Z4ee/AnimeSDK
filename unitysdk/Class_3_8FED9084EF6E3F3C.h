#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DispelOrder.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_8FED9084EF6E3F3C_METHOD_3_797574F762C9D389_OFFSET UNITYSDK_OFFSET(0x1B41C6E0)
#define CLASS_3_8FED9084EF6E3F3C_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x1B41C680)
#define CLASS_3_8FED9084EF6E3F3C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B41C6C0)

inline static constexpr unsigned int Class_3_8FED9084EF6E3F3C_TypeDefinitionIndex = 23337;

class Class_3_8FED9084EF6E3F3C : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* Field_3_1; // 0x20
	::RPG::GameCore::DynamicFloat* Field_3_2; // 0x28
	::System::String* Field_3_3; // 0x30
	::System::Boolean Field_3_4; // 0x38
	::System::Boolean Field_3_5; // 0x39
	::System::Boolean Field_3_6; // 0x3A
	::System::Boolean Field_3_7; // 0x3B
	::RPG::GameCore::DispelOrder Field_3_8; // 0x3C
	::RPG::GameCore::EnumStatusType Field_3_9; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FED9084EF6E3F3C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8FED9084EF6E3F3C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8FED9084EF6E3F3C*&))((::PBYTE)hIl2Cpp + CLASS_3_8FED9084EF6E3F3C_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_797574F762C9D389(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8FED9084EF6E3F3C* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8FED9084EF6E3F3C*))((::PBYTE)hIl2Cpp + CLASS_3_8FED9084EF6E3F3C_METHOD_3_797574F762C9D389_OFFSET))(a1, a2);
	}
};
