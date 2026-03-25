#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Collision; }

#define RPG_CLIENT_MONODICECOMBATDICECOLLISIONSOUND_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x9C2EFD0)
#define RPG_CLIENT_MONODICECOMBATDICECOLLISIONSOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x9C2F1A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDiceCombatDiceCollisionSound_TypeDefinitionIndex = 51613;

	class MonoDiceCombatDiceCollisionSound : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single ShortestTriggerInterval; // 0x18
		::System::Single MaxVolumeCorrespondedRelativeVelocity; // 0x1C
		::System::Single MixVolumeCorrespondedRelativeVelocity; // 0x20
		::System::String* Field_5_3; // 0x28
		::System::String* Field_5_4; // 0x30
		::System::Single Field_5_5; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICECOLLISIONSOUND__CTOR_OFFSET))(this);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICECOLLISIONSOUND_ONCOLLISIONENTER_OFFSET))(this, a1);
		}
	};
}
