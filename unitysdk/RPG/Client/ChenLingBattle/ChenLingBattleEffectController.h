#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_95E1BEF84A79D9EB;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleParticleEffect; }
namespace RPG::Client::ChenLingBattle { class GridIndex; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xB5A7A20)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5A7CE0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER_GET_ROOT_OFFSET UNITYSDK_OFFSET(0xB5A7A10)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xB5A7AB0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB5A7C20)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER_PLAYLOOPPARTICLEEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0xB5A7FB0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER_PLAYPARTICLEEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0xB5A7D30)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER_REMOVELOOPPARTICLEEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0xB5A8350)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB5A84A0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleEffectController_TypeDefinitionIndex = 70975;

	class ChenLingBattleEffectController : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::Client::ChenLingBattle::ChenLingBattleEffectController** StaticGet_Instance()
		{
			return (::RPG::Client::ChenLingBattle::ChenLingBattleEffectController**)Il2CppClass::FromTypeDefinitionIndex(ChenLingBattleEffectController_TypeDefinitionIndex)->GetStaticField(0x46AC0);
		}
		// static const ::System::String* ENTITY_LEVEL_UP_EFFECT_PATH; // 0x0
		// static const ::System::String* ENTITY_BORN_EFFECT_PATH; // 0x0
		// static const ::System::String* ENTITY_Promotion_EFFECT_PATH; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _EffectAudios; // 0x18
		::Class_1_95E1BEF84A79D9EB* _PoolMgr; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ChenLingBattle::GridIndex*, ::RPG::Client::ChenLingBattle::ChenLingBattleParticleEffect*>* _LoopingEffects; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Root()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER_GET_ROOT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void PlayParticleEffectByPath(::UnityEngine::Transform* a1, ::System::String* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER_PLAYPARTICLEEFFECTBYPATH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayLoopParticleEffectByPath(::UnityEngine::Transform* a1, ::RPG::Client::ChenLingBattle::GridIndex* a2, ::System::String* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::ChenLingBattle::GridIndex*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER_PLAYLOOPPARTICLEEFFECTBYPATH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RemoveLoopParticleEffectByPath(::UnityEngine::Transform* a1, ::RPG::Client::ChenLingBattle::GridIndex* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::ChenLingBattle::GridIndex*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER_REMOVELOOPPARTICLEEFFECTBYPATH_OFFSET))(this, a1, a2, a3);
		}
	};
}
