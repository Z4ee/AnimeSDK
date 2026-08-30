#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"

namespace RPG::GameCore { class HideModifierEffect; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_3_6592CC03D95C5FF7_METHOD_3_02A7FCEDE09AD0D7_OFFSET UNITYSDK_OFFSET(0xC433670)
#define CLASS_3_6592CC03D95C5FF7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC432C90)
#define CLASS_3_6592CC03D95C5FF7__CTOR_OFFSET UNITYSDK_OFFSET(0xC432C60)

inline static constexpr unsigned int Class_3_6592CC03D95C5FF7_TypeDefinitionIndex = 55305;

class Class_3_6592CC03D95C5FF7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::HideModifierEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideModifierEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideModifierEffect*))((::PBYTE)hIl2Cpp + CLASS_3_6592CC03D95C5FF7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6592CC03D95C5FF7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_02A7FCEDE09AD0D7(::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_6592CC03D95C5FF7_METHOD_3_02A7FCEDE09AD0D7_OFFSET))(this, a1, a2);
	}
};
