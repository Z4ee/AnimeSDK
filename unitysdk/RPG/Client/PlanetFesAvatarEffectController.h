#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_B18A907A8E4C5C9C;
namespace RPG::GameCore { class PlanetFesAvatarEmojiEffectConfig; }
namespace System { class String; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER_GET_OFFSET UNITYSDK_OFFSET(0x1A956DE0)
#define RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x1A956E70)
#define RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A9570D0)
#define RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER_SHOWAVATARAPPEAREFFECT_OFFSET UNITYSDK_OFFSET(0x1A957120)
#define RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER_SHOWAVATAREMOJIEFFECT_OFFSET UNITYSDK_OFFSET(0x1A957900)
#define RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER_SHOWAVATARGENBUFFEFFECT_OFFSET UNITYSDK_OFFSET(0x1A9573C0)
#define RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER_SHOWAVATARLEVELUPEFFECT_OFFSET UNITYSDK_OFFSET(0x1A957660)
#define RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A957CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAvatarEffectController_TypeDefinitionIndex = 63522;

	class PlanetFesAvatarEffectController : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* AVATAR_APPEAR_EFFECT_PATH; // 0x0
		// static const ::System::String* AVATAR_GEN_BUFF_EFFECT_PATH; // 0x0
		// static const ::System::String* AVATAR_LEVEL_EFFECT_PATH; // 0x0
		// static const ::System::String* AVATAR_EMOJI_EFFECT_CONFIG_PATH; // 0x0
		::RPG::GameCore::PlanetFesAvatarEmojiEffectConfig* _EffectConfig; // 0x18
		::Class_1_B18A907A8E4C5C9C* _PoolMgr; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesAvatarEffectController* Get(::UnityEngine::GameObject* a1)
		{
			return ((::RPG::Client::PlanetFesAvatarEffectController*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER_GET_OFFSET))(a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void ShowAvatarAppearEffect(::System::Single a1, ::UnityEngine::Transform* a2, ::UnityEngine::Canvas* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Transform*, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER_SHOWAVATARAPPEAREFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowAvatarGenBuffEffect(::System::Single a1, ::UnityEngine::Transform* a2, ::UnityEngine::Canvas* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Transform*, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER_SHOWAVATARGENBUFFEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowAvatarLevelUpEffect(::System::Single a1, ::UnityEngine::Transform* a2, ::UnityEngine::Canvas* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Transform*, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER_SHOWAVATARLEVELUPEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowAvatarEmojiEffect(::System::UInt32 a1, ::UnityEngine::Transform* a2, ::UnityEngine::Canvas* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Transform*, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER_SHOWAVATAREMOJIEFFECT_OFFSET))(this, a1, a2, a3);
		}
	};
}
