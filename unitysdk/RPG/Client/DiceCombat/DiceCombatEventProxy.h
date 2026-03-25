#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceType.h"
#include "unitysdk/RPG/GameCore/DiceCombatDirectDamageStyle.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/CombatPerformanceEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_8;
class Class_3_6B9658F527402856;
namespace RPG::Client::DiceCombat { class DiceCombatSpecialRuleData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GETATTACKANIMATION_OFFSET UNITYSDK_OFFSET(0x9474F10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GETIGNOREDEFENDPOINTVALUE_OFFSET UNITYSDK_OFFSET(0x9474F90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GETSPECIALHINTCONTENT_OFFSET UNITYSDK_OFFSET(0x9474FF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GETSTATMAXVALUE_OFFSET UNITYSDK_OFFSET(0x9474EB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GETSTATVALUE_OFFSET UNITYSDK_OFFSET(0x9474E50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0x94750F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_DIRECTDAMAGESTYLE_OFFSET UNITYSDK_OFFSET(0x9475680)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_DIRECTDAMAGEVALUE_OFFSET UNITYSDK_OFFSET(0x9475620)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x94750B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_HEALVALUE_OFFSET UNITYSDK_OFFSET(0x94755C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_HITDAMAGE_OFFSET UNITYSDK_OFFSET(0x9475240)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_ICEEFFECTTARGETUID_OFFSET UNITYSDK_OFFSET(0x9475560)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_ISHIT_OFFSET UNITYSDK_OFFSET(0x94751D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_ISKILL_OFFSET UNITYSDK_OFFSET(0x94751B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_ISLOCALPLAYER_OFFSET UNITYSDK_OFFSET(0x94750D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_NEWWEATHER_OFFSET UNITYSDK_OFFSET(0x9475390)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_OLDWEATHER_OFFSET UNITYSDK_OFFSET(0x94752A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_OVERRIDEDICEMODELTRANS_OFFSET UNITYSDK_OFFSET(0x94756E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_OVERRIDEDICETYPE_OFFSET UNITYSDK_OFFSET(0x9475700)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_WEATHERCHANGE_OFFSET UNITYSDK_OFFSET(0x94754F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_WEATHERIDRECORDDICT_OFFSET UNITYSDK_OFFSET(0x9475480)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_SET_ISKILL_OFFSET UNITYSDK_OFFSET(0x94751C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_SET_ISLOCALPLAYER_OFFSET UNITYSDK_OFFSET(0x94750E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_SET_OVERRIDEDICEMODELTRANS_OFFSET UNITYSDK_OFFSET(0x94756F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_SET_OVERRIDEDICETYPE_OFFSET UNITYSDK_OFFSET(0x9475710)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_SYNC_OFFSET UNITYSDK_OFFSET(0x946DEF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x946DEE0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatEventProxy_TypeDefinitionIndex = 61886;

	class DiceCombatEventProxy : public ::System::Object
	{
	public:
		::Class_3_6B9658F527402856* _OwnerGameInstance; // 0x10
		::Class_1_43BD383C98B4C0C5_8* _Event; // 0x18
		::UnityEngine::Transform* _OverrideDiceModelTrans_k__BackingField; // 0x20
		::System::Boolean _IsLocalPlayer_k__BackingField; // 0x28
		::System::Boolean _IsKill_k__BackingField; // 0x29
		::RPG::GameCore::DiceCombatDiceType _OverrideDiceType_k__BackingField; // 0x2C

		::System::Void _ctor(::Class_3_6B9658F527402856* gameInstance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_6B9658F527402856*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY__CTOR_OFFSET))(this, gameInstance);
		}

		::System::Void Sync(::Class_1_43BD383C98B4C0C5_8* e, ::System::Boolean isLocalPlayer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_8*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_SYNC_OFFSET))(this, e, isLocalPlayer);
		}

		::System::Int32 GetStatValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GETSTATVALUE_OFFSET))(this);
		}

		::System::Int32 GetStatMaxValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GETSTATMAXVALUE_OFFSET))(this);
		}

		::System::String* GetAttackAnimation()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GETATTACKANIMATION_OFFSET))(this);
		}

		::System::Int32 GetIgnoreDefendPointValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GETIGNOREDEFENDPOINTVALUE_OFFSET))(this);
		}

		::RPG::Client::TextID GetSpecialHintContent()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GETSPECIALHINTCONTENT_OFFSET))(this);
		}

		::RPG::LittleGameShare::DiceCombatCore::CombatPerformanceEventType get_EventType()
		{
			return ((::RPG::LittleGameShare::DiceCombatCore::CombatPerformanceEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_EVENTTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsLocalPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_ISLOCALPLAYER_OFFSET))(this);
		}

		::System::Void set_IsLocalPlayer(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_SET_ISLOCALPLAYER_OFFSET))(this, value);
		}

		::System::UInt32 get_BuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_BUFFID_OFFSET))(this);
		}

		::System::Boolean get_IsKill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_ISKILL_OFFSET))(this);
		}

		::System::Void set_IsKill(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_SET_ISKILL_OFFSET))(this, value);
		}

		::System::Boolean get_IsHit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_ISHIT_OFFSET))(this);
		}

		::System::Int32 get_HitDamage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_HITDAMAGE_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatSpecialRuleData* get_OldWeather()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatSpecialRuleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_OLDWEATHER_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatSpecialRuleData* get_NewWeather()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatSpecialRuleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_NEWWEATHER_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_WeatherIDRecordDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_WEATHERIDRECORDDICT_OFFSET))(this);
		}

		::System::Boolean get_WeatherChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_WEATHERCHANGE_OFFSET))(this);
		}

		::System::UInt32 get_IceEffectTargetUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_ICEEFFECTTARGETUID_OFFSET))(this);
		}

		::System::Int32 get_HealValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_HEALVALUE_OFFSET))(this);
		}

		::System::Int32 get_DirectDamageValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_DIRECTDAMAGEVALUE_OFFSET))(this);
		}

		::RPG::GameCore::DiceCombatDirectDamageStyle get_DirectDamageStyle()
		{
			return ((::RPG::GameCore::DiceCombatDirectDamageStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_DIRECTDAMAGESTYLE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_OverrideDiceModelTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_OVERRIDEDICEMODELTRANS_OFFSET))(this);
		}

		::System::Void set_OverrideDiceModelTrans(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_SET_OVERRIDEDICEMODELTRANS_OFFSET))(this, value);
		}

		::RPG::GameCore::DiceCombatDiceType get_OverrideDiceType()
		{
			return ((::RPG::GameCore::DiceCombatDiceType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_GET_OVERRIDEDICETYPE_OFFSET))(this);
		}

		::System::Void set_OverrideDiceType(::RPG::GameCore::DiceCombatDiceType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATEVENTPROXY_SET_OVERRIDEDICETYPE_OFFSET))(this, value);
		}
	};
}
