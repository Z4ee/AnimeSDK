#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_778D44A66A0719FE.h"

namespace RPG::GameCore { class CreateBattleEventFromGridFightBackend; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_4_14270264688A00C9_METHOD_4_1AD51778485AD495_OFFSET UNITYSDK_OFFSET(0x15A8A540)
#define CLASS_4_14270264688A00C9_METHOD_4_D614052883633F12_OFFSET UNITYSDK_OFFSET(0x15A89630)
#define CLASS_4_14270264688A00C9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A89350)
#define CLASS_4_14270264688A00C9__CTOR_OFFSET UNITYSDK_OFFSET(0x15A89330)

inline static constexpr unsigned int Class_4_14270264688A00C9_TypeDefinitionIndex = 58192;

class Class_4_14270264688A00C9 : public ::Class_3_778D44A66A0719FE
{
public:
	::RPG::GameCore::CreateBattleEventFromGridFightBackend* CGCGDKLLBPL; // 0x40
	::RPG::GameCore::GameEntity* MAFEOONDEOD; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateBattleEventFromGridFightBackend* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateBattleEventFromGridFightBackend*))((::PBYTE)hIl2Cpp + CLASS_4_14270264688A00C9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_14270264688A00C9_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_4_D614052883633F12(::System::UInt32 a1, ::RPG::GameCore::StageRow* a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + CLASS_4_14270264688A00C9_METHOD_4_D614052883633F12_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_1AD51778485AD495(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_4_14270264688A00C9_METHOD_4_1AD51778485AD495_OFFSET))(this, a1);
	}
};
