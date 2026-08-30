#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvSetRushBtnInteractable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_994CC268629E6AE5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB814F90)
#define CLASS_3_994CC268629E6AE5__CTOR_OFFSET UNITYSDK_OFFSET(0xB814F60)

inline static constexpr unsigned int Class_3_994CC268629E6AE5_TypeDefinitionIndex = 58041;

class Class_3_994CC268629E6AE5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvSetRushBtnInteractable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetRushBtnInteractable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetRushBtnInteractable*))((::PBYTE)hIl2Cpp + CLASS_3_994CC268629E6AE5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_994CC268629E6AE5_ONTASKBEGIN_OFFSET))(this);
	}
};
