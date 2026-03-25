#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleHintToastServiceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_584A6534C6157D2A;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_D983BF2FAAA4C0BD_METHOD_3_18338215AC7BEB04_OFFSET UNITYSDK_OFFSET(0x170D4D60)
#define CLASS_3_D983BF2FAAA4C0BD_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x170D4CE0)
#define CLASS_3_D983BF2FAAA4C0BD__CTOR_OFFSET UNITYSDK_OFFSET(0x170D4D30)

inline static constexpr unsigned int Class_3_D983BF2FAAA4C0BD_TypeDefinitionIndex = 21572;

class Class_3_D983BF2FAAA4C0BD : public ::RPG::GameCore::TaskConfig
{
public:
	::Class_2_584A6534C6157D2A* Field_3_4; // 0x18
	::System::String* Field_3_3; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_2; // 0x28
	::System::Boolean Field_3_1; // 0x30
	::RPG::GameCore::BattleHintToastServiceType Field_3_0; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D983BF2FAAA4C0BD__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D983BF2FAAA4C0BD*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D983BF2FAAA4C0BD*&))((::PBYTE)hIl2Cpp + CLASS_3_D983BF2FAAA4C0BD_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_18338215AC7BEB04(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D983BF2FAAA4C0BD* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D983BF2FAAA4C0BD*))((::PBYTE)hIl2Cpp + CLASS_3_D983BF2FAAA4C0BD_METHOD_3_18338215AC7BEB04_OFFSET))(a1, a2);
	}
};
