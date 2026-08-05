#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ChallengeSubTypeCharacterCounter_StatusTypeCounter.h"
#include "unitysdk/MoleMole/Battle/ChallengeSubTypeItem.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_208CC9941471731A_566;
class Class_2_E275F6568FBD98FA;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_BATTLE_CHALLENGESUBTYPECHARACTERCOUNTER_GETCURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0x177999F0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPECHARACTERCOUNTER_GETPROGRESSSTRING_OFFSET UNITYSDK_OFFSET(0x17799A80)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPECHARACTERCOUNTER_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x17799A30)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPECHARACTERCOUNTER_GET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x177999A0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPECHARACTERCOUNTER_ONANIMATORZONETAGCHANGED_OFFSET UNITYSDK_OFFSET(0x17799960)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPECHARACTERCOUNTER_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x17798E10)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPECHARACTERCOUNTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17798CE0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPECHARACTERCOUNTER__LISTENHITCALLBACK_OFFSET UNITYSDK_OFFSET(0x17799510)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPECHARACTERCOUNTER__ONANIMATORZONECHANGED_OFFSET UNITYSDK_OFFSET(0x177997C0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPECHARACTERCOUNTER__UNLISTENHITCALLBACK_OFFSET UNITYSDK_OFFSET(0x17799610)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPECHARACTERCOUNTER___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x17799B70)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ChallengeSubTypeCharacterCounter_TypeDefinitionIndex = 87927;

	class ChallengeSubTypeCharacterCounter : public ::MoleMole::Battle::ChallengeSubTypeItem
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_E275F6568FBD98FA*>* _cacheSkillSource; // 0x20
		::MoleMole::Battle::Entity* _listenEntity; // 0x28
		::MoleMole::Battle::Entity* _curAvatar; // 0x30
		::System::UInt32 _attackerID; // 0x38
		::MoleMole::Battle::ChallengeSubTypeCharacterCounter_StatusTypeCounter counterType; // 0x3C
		::System::Single _lastCalcTime; // 0x40
		::System::Int32 _challengeCount; // 0x44
		::System::Int32 _currentCount; // 0x48
		::System::Boolean _isInListen; // 0x4C

		::System::Void _ctor(::Class_2_208CC9941471731A_566* inTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_566*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPECHARACTERCOUNTER__CTOR_OFFSET))(this, inTemplate);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPECHARACTERCOUNTER_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void _ListenHitCallback(::Class_3_F33F9DC5F4112336* animatorComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPECHARACTERCOUNTER__LISTENHITCALLBACK_OFFSET))(this, animatorComponent);
		}

		::System::Void _UnListenHitCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPECHARACTERCOUNTER__UNLISTENHITCALLBACK_OFFSET))(this);
		}

		::System::Void _OnAnimatorZoneChanged(::UnityEngine::AnimatorStateInfo from, ::UnityEngine::AnimatorStateInfo to, ::System::Int32 layer, ::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPECHARACTERCOUNTER__ONANIMATORZONECHANGED_OFFSET))(this, from, to, layer, entityID);
		}

		::System::Void OnAnimatorZoneTagChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPECHARACTERCOUNTER_ONANIMATORZONETAGCHANGED_OFFSET))(this);
		}

		::System::Boolean get_IsSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPECHARACTERCOUNTER_GET_ISSUCCESS_OFFSET))(this);
		}

		::System::Int32 GetCurrentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPECHARACTERCOUNTER_GETCURRENTCOUNT_OFFSET))(this);
		}

		::System::Single GetProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPECHARACTERCOUNTER_GETPROGRESS_OFFSET))(this);
		}

		::System::String* GetProgressString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPECHARACTERCOUNTER_GETPROGRESSSTRING_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPECHARACTERCOUNTER___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}
	};
}
