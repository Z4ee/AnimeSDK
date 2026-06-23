#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class FloorSubsystem; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_FLOORSUBSYSTEM_FGAMEPLAYTAGSUPPORT_ONVISITONE_OFFSET UNITYSDK_OFFSET(0x12FFC540)
#define MOLEMOLE_FLOORSUBSYSTEM_FGAMEPLAYTAGSUPPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x12FFC530)

namespace MoleMole
{
	inline static constexpr unsigned int FloorSubsystem_FGamePlayTagSupport_TypeDefinitionIndex = 40435;

	class FloorSubsystem_FGamePlayTagSupport : public ::System::Object
	{
	public:
		::System::Action_1<::Foundation::Unreal::FGameplayTag>* _action; // 0x10
		::MoleMole::FloorSubsystem* _owner; // 0x18

		::System::Void _ctor(::MoleMole::FloorSubsystem* owner, ::System::Action_1<::Foundation::Unreal::FGameplayTag>* action)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FloorSubsystem*, ::System::Action_1<::Foundation::Unreal::FGameplayTag>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_FGAMEPLAYTAGSUPPORT__CTOR_OFFSET))(this, owner, action);
		}

		::System::Void OnVisitOne(::Foundation::Unreal::FGameplayTag tag)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_FGAMEPLAYTAGSUPPORT_ONVISITONE_OFFSET))(this, tag);
		}
	};
}
