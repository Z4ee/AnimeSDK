#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class Effect_AfterImageNew; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_EFFECTPLUGIN_AFTERIMAGE_YUKONGBAKE_ALLOWBAKEMESH_OFFSET UNITYSDK_OFFSET(0xA1B85C0)
#define RPG_CLIENT_EFFECTPLUGIN_AFTERIMAGE_YUKONGBAKE_AWAKE_OFFSET UNITYSDK_OFFSET(0xA1B84B0)
#define RPG_CLIENT_EFFECTPLUGIN_AFTERIMAGE_YUKONGBAKE__CTOR_OFFSET UNITYSDK_OFFSET(0xA1B8860)

namespace RPG::Client
{
	inline static constexpr unsigned int EffectPlugin_AfterImage_YukongBake_TypeDefinitionIndex = 64917;

	class EffectPlugin_AfterImage_YukongBake : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x18
		::Il2CppArray<::System::String*>* AllowAnimStatesOnNoneMotionFlag; // 0x20
		::Il2CppArray<::System::Int32>* Field_5_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGIN_AFTERIMAGE_YUKONGBAKE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGIN_AFTERIMAGE_YUKONGBAKE_AWAKE_OFFSET))(this);
		}

		::System::Boolean AllowBakeMesh(::RPG::Client::Effect_AfterImageNew* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Effect_AfterImageNew*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGIN_AFTERIMAGE_YUKONGBAKE_ALLOWBAKEMESH_OFFSET))(this, a1, a2);
		}
	};
}
