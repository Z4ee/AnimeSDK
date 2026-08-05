#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole { class FloorSubsystem; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_FLOORSUBSYSTEM_FGAMEPLAYTAGSUPPORT_ONVISITONE_OFFSET UNITYSDK_OFFSET(0x1A03EF90)
#define MOLEMOLE_FLOORSUBSYSTEM_FGAMEPLAYTAGSUPPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A03EF80)

namespace MoleMole
{
	inline static constexpr unsigned int FloorSubsystem_FGamePlayTagSupport_TypeDefinitionIndex = 79591;

	class FloorSubsystem_FGamePlayTagSupport : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::CurvySpline* SearchSpline; // 0x10
		::MoleMole::FloorSubsystem* _owner; // 0x18
		::System::Action_2<::FluffyUnderware::Curvy::CurvySpline*, ::Foundation::Unreal::FGameplayTag>* _action; // 0x20

		::System::Void _ctor(::MoleMole::FloorSubsystem* owner, ::System::Action_2<::FluffyUnderware::Curvy::CurvySpline*, ::Foundation::Unreal::FGameplayTag>* action)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FloorSubsystem*, ::System::Action_2<::FluffyUnderware::Curvy::CurvySpline*, ::Foundation::Unreal::FGameplayTag>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_FGAMEPLAYTAGSUPPORT__CTOR_OFFSET))(this, owner, action);
		}

		::System::Void OnVisitOne(::Foundation::Unreal::FGameplayTag tag)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_FGAMEPLAYTAGSUPPORT_ONVISITONE_OFFSET))(this, tag);
		}
	};
}
