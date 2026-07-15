#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C5E5FE6832D0C155.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define CLASS_3_3100354E684764E9_2_DOONENTER_OFFSET UNITYSDK_OFFSET(0x17F85930)
#define CLASS_3_3100354E684764E9_2_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x17F859B0)
#define CLASS_3_3100354E684764E9_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17F858C0)

inline static constexpr unsigned int Class_3_3100354E684764E9_2_TypeDefinitionIndex = 74883;

class Class_3_3100354E684764E9_2 : public ::Class_2_C5E5FE6832D0C155
{
public:
	::System::Action* Field_3_0; // 0xC0
	::System::Action* Field_3_1; // 0xC8

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* a3, ::Il2CppArray<::System::Action*>* a4, ::System::Func_1<::System::Boolean>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>*, ::Il2CppArray<::System::Action*>*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_3100354E684764E9_2__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_3100354E684764E9_2_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_3_3100354E684764E9_2_DOONEXIT_OFFSET))(this, a1, a2);
	}
};
