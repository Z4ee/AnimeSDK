#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_BD5036E8E5743F9F;
namespace RPG::GameCore { class LevelGraph; }

#define CLASS_2_BD5036E8E5743F9F___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB58F070)
#define CLASS_2_BD5036E8E5743F9F___C__DISPLAYCLASS5_0__TRYSTARTOWNINTERACTION_B__0_OFFSET UNITYSDK_OFFSET(0xB590040)

inline static constexpr unsigned int Class_2_BD5036E8E5743F9F___c__DisplayClass5_0_TypeDefinitionIndex = 53542;

class Class_2_BD5036E8E5743F9F___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_2_BD5036E8E5743F9F* __4__this; // 0x10
	::RPG::GameCore::LevelGraph* graph; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD5036E8E5743F9F___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void _TryStartOwnInteraction_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD5036E8E5743F9F___C__DISPLAYCLASS5_0__TRYSTARTOWNINTERACTION_B__0_OFFSET))(this);
	}
};
