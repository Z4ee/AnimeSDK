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

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x931FB60)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x931FE60)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x931FB50)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x931FC10)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x931FD80)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER_PLAYLOOPPARTICLEEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0x9320130)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER_PLAYPARTICLEEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0x931FEB0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER_REMOVELOOPPARTICLEEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0x93204C0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9320610)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleEffectController_TypeDefinitionIndex = 62164;

	class ChenLingBattleEffectController : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::Client::ChenLingBattle::ChenLingBattleEffectController** StaticGet_Instance()
		{
			return (::RPG::Client::ChenLingBattle::ChenLingBattleEffectController**)Il2CppClass::FromTypeDefinitionIndex(ChenLingBattleEffectController_TypeDefinitionIndex)->GetStaticField(0x45AB0);
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

		::System::Void PlayParticleEffectByPath(::UnityEngine::Transform* trans, ::System::String* effectPath, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER_PLAYPARTICLEEFFECTBYPATH_OFFSET))(this, trans, effectPath, callback);
		}

		::System::Void PlayLoopParticleEffectByPath(::UnityEngine::Transform* trans, ::RPG::Client::ChenLingBattle::GridIndex* index, ::System::String* effectPath, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::ChenLingBattle::GridIndex*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER_PLAYLOOPPARTICLEEFFECTBYPATH_OFFSET))(this, trans, index, effectPath, callback);
		}

		::System::Void RemoveLoopParticleEffectByPath(::UnityEngine::Transform* trans, ::RPG::Client::ChenLingBattle::GridIndex* index, ::System::String* effectPath)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::ChenLingBattle::GridIndex*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER_REMOVELOOPPARTICLEEFFECTBYPATH_OFFSET))(this, trans, index, effectPath);
		}
	};
}
