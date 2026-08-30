#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERFARMELEMENTANIMSTATE_METHOD_3_06CAA78944AF71C0_OFFSET UNITYSDK_OFFSET(0x1D28E470)
#define RPG_GAMECORE_TRIGGERFARMELEMENTANIMSTATE_METHOD_3_E0FE990A761437C9_OFFSET UNITYSDK_OFFSET(0x1D28E4C0)
#define RPG_GAMECORE_TRIGGERFARMELEMENTANIMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D28E4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerFarmElementAnimState_TypeDefinitionIndex = 21844;

	class TriggerFarmElementAnimState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AnimStateName; // 0x18
		::System::Single NormalizedTimeStart; // 0x20
		::System::Single TransitionDuration; // 0x24
		::System::Boolean FixedTransitionDuration; // 0x28
		::System::Boolean WatiAnimFinish; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERFARMELEMENTANIMSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_06CAA78944AF71C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerFarmElementAnimState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerFarmElementAnimState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERFARMELEMENTANIMSTATE_METHOD_3_06CAA78944AF71C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E0FE990A761437C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerFarmElementAnimState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerFarmElementAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERFARMELEMENTANIMSTATE_METHOD_3_E0FE990A761437C9_OFFSET))(a1, a2);
		}
	};
}
