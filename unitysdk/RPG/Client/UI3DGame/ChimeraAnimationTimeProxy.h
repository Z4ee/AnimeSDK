#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_UI3DGAME_CHIMERAANIMATIONTIMEPROXY_METHOD_5_73D9152D2B0F9D38_OFFSET UNITYSDK_OFFSET(0xE318330)
#define RPG_CLIENT_UI3DGAME_CHIMERAANIMATIONTIMEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE3182B0)
#define RPG_CLIENT_UI3DGAME_CHIMERAANIMATIONTIMEPROXY_START_OFFSET UNITYSDK_OFFSET(0xE317CD0)
#define RPG_CLIENT_UI3DGAME_CHIMERAANIMATIONTIMEPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xE318800)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int ChimeraAnimationTimeProxy_TypeDefinitionIndex = 75355;

	class ChimeraAnimationTimeProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animation* PMOJILOJEPE; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERAANIMATIONTIMEPROXY__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERAANIMATIONTIMEPROXY_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERAANIMATIONTIMEPROXY_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_73D9152D2B0F9D38(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERAANIMATIONTIMEPROXY_METHOD_5_73D9152D2B0F9D38_OFFSET))(this, a1);
		}
	};
}
