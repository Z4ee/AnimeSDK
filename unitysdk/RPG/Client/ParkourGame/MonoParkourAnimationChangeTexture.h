#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURANIMATIONCHANGETEXTURE_CHANGELIGHTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C4DA7E0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURANIMATIONCHANGETEXTURE_METHOD_5_9A5D3DBD0AFC14C3_OFFSET UNITYSDK_OFFSET(0x1C4DA8D0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURANIMATIONCHANGETEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4DA980)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourAnimationChangeTexture_TypeDefinitionIndex = 74023;

	class MonoParkourAnimationChangeTexture : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* Anim; // 0x18
		::UnityEngine::Texture* textureRed; // 0x20
		::UnityEngine::Texture* textureNone; // 0x28
		::UnityEngine::Texture* textureGreen; // 0x30
		::UnityEngine::MeshRenderer* renderer1; // 0x38
		::UnityEngine::MeshRenderer* renderer2; // 0x40
		::UnityEngine::MeshRenderer* renderer3; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURANIMATIONCHANGETEXTURE__CTOR_OFFSET))(this);
		}

		::System::Void ChangeLightTexture(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURANIMATIONCHANGETEXTURE_CHANGELIGHTTEXTURE_OFFSET))(this, a1);
		}

		::System::Void Method_5_9A5D3DBD0AFC14C3(::UnityEngine::MeshRenderer* a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURANIMATIONCHANGETEXTURE_METHOD_5_9A5D3DBD0AFC14C3_OFFSET))(this, a1, a2);
		}
	};
}
