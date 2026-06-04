#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class Effect_AfterImageNew; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_EFFECTPLUGIN_AFTERIMAGE_RAPPABAKE_ALLOWBAKEMESH_OFFSET UNITYSDK_OFFSET(0xB83B150)
#define RPG_CLIENT_EFFECTPLUGIN_AFTERIMAGE_RAPPABAKE__CTOR_OFFSET UNITYSDK_OFFSET(0xB83B1B0)

namespace RPG::Client
{
	inline static constexpr unsigned int EffectPlugin_AfterImage_RappaBake_TypeDefinitionIndex = 65842;

	class EffectPlugin_AfterImage_RappaBake : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Active; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGIN_AFTERIMAGE_RAPPABAKE__CTOR_OFFSET))(this);
		}

		::System::Boolean AllowBakeMesh(::RPG::Client::Effect_AfterImageNew* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Effect_AfterImageNew*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGIN_AFTERIMAGE_RAPPABAKE_ALLOWBAKEMESH_OFFSET))(this, a1, a2);
		}
	};
}
