#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleHintToastServiceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_6D0E8932F0D4E197;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_92D509F8C09BDC99_METHOD_3_620F752B8758282A_OFFSET UNITYSDK_OFFSET(0x19072190)
#define CLASS_3_92D509F8C09BDC99_METHOD_3_99AC8556B83941E4_OFFSET UNITYSDK_OFFSET(0x19072210)
#define CLASS_3_92D509F8C09BDC99__CTOR_OFFSET UNITYSDK_OFFSET(0x190721E0)

inline static constexpr unsigned int Class_3_92D509F8C09BDC99_TypeDefinitionIndex = 22310;

class Class_3_92D509F8C09BDC99 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_3; // 0x18
	::Class_2_6D0E8932F0D4E197* Field_3_4; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_2; // 0x28
	::RPG::GameCore::BattleHintToastServiceType Field_3_0; // 0x30
	::System::Boolean Field_3_1; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_92D509F8C09BDC99__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_620F752B8758282A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_92D509F8C09BDC99*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_92D509F8C09BDC99*&))((::PBYTE)hIl2Cpp + CLASS_3_92D509F8C09BDC99_METHOD_3_620F752B8758282A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_99AC8556B83941E4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_92D509F8C09BDC99* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_92D509F8C09BDC99*))((::PBYTE)hIl2Cpp + CLASS_3_92D509F8C09BDC99_METHOD_3_99AC8556B83941E4_OFFSET))(a1, a2);
	}
};
