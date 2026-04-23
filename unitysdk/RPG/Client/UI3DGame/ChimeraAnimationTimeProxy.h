#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_UI3DGAME_CHIMERAANIMATIONTIMEPROXY_METHOD_5_0278C58BA5A6AE4B_OFFSET UNITYSDK_OFFSET(0xB3AC370)
#define RPG_CLIENT_UI3DGAME_CHIMERAANIMATIONTIMEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB3AC2F0)
#define RPG_CLIENT_UI3DGAME_CHIMERAANIMATIONTIMEPROXY_START_OFFSET UNITYSDK_OFFSET(0xB3ABE90)
#define RPG_CLIENT_UI3DGAME_CHIMERAANIMATIONTIMEPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xB3AC700)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int ChimeraAnimationTimeProxy_TypeDefinitionIndex = 69712;

	class ChimeraAnimationTimeProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animation* Field_5_0; // 0x18

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

		::System::Void Method_5_0278C58BA5A6AE4B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERAANIMATIONTIMEPROXY_METHOD_5_0278C58BA5A6AE4B_OFFSET))(this, a1);
		}
	};
}
