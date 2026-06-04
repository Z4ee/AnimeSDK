#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleHintToastServiceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_584A6534C6157D2A;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_F93583A3108A809E_METHOD_3_99AC8556B83941E4_OFFSET UNITYSDK_OFFSET(0x18FF81E0)
#define CLASS_3_F93583A3108A809E_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x18FF8140)
#define CLASS_3_F93583A3108A809E__CTOR_OFFSET UNITYSDK_OFFSET(0x18FF81A0)

inline static constexpr unsigned int Class_3_F93583A3108A809E_TypeDefinitionIndex = 22067;

class Class_3_F93583A3108A809E : public ::RPG::GameCore::TaskConfig
{
public:
	::Class_2_584A6534C6157D2A* Field_3_0; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x28
	::RPG::GameCore::BattleHintToastServiceType Field_3_3; // 0x30
	::System::Boolean Field_3_4; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F93583A3108A809E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F93583A3108A809E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F93583A3108A809E*&))((::PBYTE)hIl2Cpp + CLASS_3_F93583A3108A809E_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_99AC8556B83941E4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F93583A3108A809E* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F93583A3108A809E*))((::PBYTE)hIl2Cpp + CLASS_3_F93583A3108A809E_METHOD_3_99AC8556B83941E4_OFFSET))(a1, a2);
	}
};
