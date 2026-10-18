#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerRogueDialogue; }

#define CLASS_2_B50F083A780F8A3F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB86FE40)
#define CLASS_2_B50F083A780F8A3F_METHOD_2_14E4A1BEAAFEDF2F_OFFSET UNITYSDK_OFFSET(0xB8702A0)
#define CLASS_2_B50F083A780F8A3F_METHOD_2_3BFE3B9EF8374F61_OFFSET UNITYSDK_OFFSET(0xB870690)
#define CLASS_2_B50F083A780F8A3F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB86FE80)
#define CLASS_2_B50F083A780F8A3F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8705E0)
#define CLASS_2_B50F083A780F8A3F_TICK_OFFSET UNITYSDK_OFFSET(0xB870630)
#define CLASS_2_B50F083A780F8A3F__CTOR_OFFSET UNITYSDK_OFFSET(0xB86FE30)
#define CLASS_2_B50F083A780F8A3F__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0xB8709D0)

inline static constexpr unsigned int Class_2_B50F083A780F8A3F_TypeDefinitionIndex = 58795;

class Class_2_B50F083A780F8A3F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::LevelGraphComponent* JBCGBIOECCL; // 0x20
	::RPG::GameCore::TriggerRogueDialogue* OFKGLJOAMLD; // 0x28
	::System::UInt32 ICLEAOCAEII; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerRogueDialogue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerRogueDialogue*))((::PBYTE)hIl2Cpp + CLASS_2_B50F083A780F8A3F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B50F083A780F8A3F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B50F083A780F8A3F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B50F083A780F8A3F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B50F083A780F8A3F_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_14E4A1BEAAFEDF2F(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B50F083A780F8A3F_METHOD_2_14E4A1BEAAFEDF2F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3BFE3B9EF8374F61()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B50F083A780F8A3F_METHOD_2_3BFE3B9EF8374F61_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__2_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B50F083A780F8A3F__ONTASKBEGIN_B__2_0_OFFSET))(this);
	}
};
