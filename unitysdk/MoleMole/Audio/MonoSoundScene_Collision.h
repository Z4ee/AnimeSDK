#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Collision; }

#define MOLEMOLE_AUDIO_MONOSOUNDSCENE_COLLISION_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x13E9F2D0)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENE_COLLISION__CTOR_OFFSET UNITYSDK_OFFSET(0x13E9F810)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSoundScene_Collision_TypeDefinitionIndex = 64514;

	class MonoSoundScene_Collision : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single threshold; // 0x18
		::System::Single cooldown; // 0x1C
		::System::Single Field_5_0; // 0x20
		::System::String* collisionEventName; // 0x28
		::System::String* collisionRTPCName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENE_COLLISION__CTOR_OFFSET))(this);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENE_COLLISION_ONCOLLISIONENTER_OFFSET))(this, a1);
		}
	};
}
