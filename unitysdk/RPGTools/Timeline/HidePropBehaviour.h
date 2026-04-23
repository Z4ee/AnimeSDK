#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class PropComponent; }

#define RPGTOOLS_TIMELINE_HIDEPROPBEHAVIOUR_GET_PROPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB8E00A0)
#define RPGTOOLS_TIMELINE_HIDEPROPBEHAVIOUR_GET_VISIBLECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB8E0260)
#define RPGTOOLS_TIMELINE_HIDEPROPBEHAVIOUR_METHOD_2_A1168610D32C43E0_OFFSET UNITYSDK_OFFSET(0xB8E0130)
#define RPGTOOLS_TIMELINE_HIDEPROPBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xB8E0360)
#define RPGTOOLS_TIMELINE_HIDEPROPBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8E03C0)
#define RPGTOOLS_TIMELINE_HIDEPROPBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xB8E03D0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int HidePropBehaviour_TypeDefinitionIndex = 44871;

	class HidePropBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 PropID; // 0x14
		::RPG::GameCore::PropComponent* _propComponent; // 0x18
		::RPG::GameCore::CharacterVisibleComponent* _VisibleComponent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEPROPBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::PropComponent* get_PropComponent()
		{
			return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEPROPBEHAVIOUR_GET_PROPCOMPONENT_OFFSET))(this);
		}

		::RPG::GameCore::CharacterVisibleComponent* get_VisibleComponent()
		{
			return ((::RPG::GameCore::CharacterVisibleComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEPROPBEHAVIOUR_GET_VISIBLECOMPONENT_OFFSET))(this);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEPROPBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void Method_2_A1168610D32C43E0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEPROPBEHAVIOUR_METHOD_2_A1168610D32C43E0_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEPROPBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, P0);
		}
	};
}
