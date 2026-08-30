#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_4FBAE6148E0D2FAE;
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_MONSTERHPBARSTYLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1960D660)
#define RPG_CLIENT_MONSTERHPBARSTYLE_GET_COLORL_OFFSET UNITYSDK_OFFSET(0x1960D400)
#define RPG_CLIENT_MONSTERHPBARSTYLE_GET_COLORR_OFFSET UNITYSDK_OFFSET(0x1960D420)
#define RPG_CLIENT_MONSTERHPBARSTYLE_GET_ISDAMAGEUPSTYLE_OFFSET UNITYSDK_OFFSET(0x1960D440)
#define RPG_CLIENT_MONSTERHPBARSTYLE_REFRESH_OFFSET UNITYSDK_OFFSET(0x1960D840)
#define RPG_CLIENT_MONSTERHPBARSTYLE_SETGAMEENTITY_OFFSET UNITYSDK_OFFSET(0x1960D7F0)
#define RPG_CLIENT_MONSTERHPBARSTYLE_SETINVASIONCOLORENABLED_OFFSET UNITYSDK_OFFSET(0x1960D930)
#define RPG_CLIENT_MONSTERHPBARSTYLE_SETNORMALCOLOR_OFFSET UNITYSDK_OFFSET(0x1960D980)
#define RPG_CLIENT_MONSTERHPBARSTYLE_SETSUPERARMORBREAK_OFFSET UNITYSDK_OFFSET(0x1960D8E0)
#define RPG_CLIENT_MONSTERHPBARSTYLE_SET_COLORL_OFFSET UNITYSDK_OFFSET(0x1960D410)
#define RPG_CLIENT_MONSTERHPBARSTYLE_SET_COLORR_OFFSET UNITYSDK_OFFSET(0x1960D430)
#define RPG_CLIENT_MONSTERHPBARSTYLE_SET_ISDAMAGEUPSTYLE_OFFSET UNITYSDK_OFFSET(0x1960D450)
#define RPG_CLIENT_MONSTERHPBARSTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1960D460)
#define RPG_CLIENT_MONSTERHPBARSTYLE__ENSURECOLORS_OFFSET UNITYSDK_OFFSET(0x1960D4B0)
#define RPG_CLIENT_MONSTERHPBARSTYLE__ENSURESTAGEINVASIONMODULE_OFFSET UNITYSDK_OFFSET(0x1960DA90)
#define RPG_CLIENT_MONSTERHPBARSTYLE__SHOULDUSEINVASIONCOLOR_OFFSET UNITYSDK_OFFSET(0x1960D9F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterHPBarStyle_TypeDefinitionIndex = 71624;

	class MonsterHPBarStyle : public ::System::Object
	{
	public:
		static ::UnityEngine::Color* StaticGet_s_DamageUpR()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(MonsterHPBarStyle_TypeDefinitionIndex)->GetStaticField(0xA930);
		}
		static ::UnityEngine::Color* StaticGet_s_NormalL()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(MonsterHPBarStyle_TypeDefinitionIndex)->GetStaticField(0xA940);
		}
		static ::UnityEngine::Color* StaticGet_s_NormalR()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(MonsterHPBarStyle_TypeDefinitionIndex)->GetStaticField(0xA950);
		}
		static ::UnityEngine::Color* StaticGet_s_InvasionActivatedR()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(MonsterHPBarStyle_TypeDefinitionIndex)->GetStaticField(0xA960);
		}
		static ::System::Boolean* StaticGet_s_ColorsLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonsterHPBarStyle_TypeDefinitionIndex)->GetStaticField(0xA970);
		}
		static ::UnityEngine::Color* StaticGet_s_DamageUpL()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(MonsterHPBarStyle_TypeDefinitionIndex)->GetStaticField(0xA974);
		}
		static ::UnityEngine::Color* StaticGet_s_InvasionActivatedL()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(MonsterHPBarStyle_TypeDefinitionIndex)->GetStaticField(0xA984);
		}
		::RPG::GameCore::GameEntity* _Entity; // 0x10
		::Class_1_4FBAE6148E0D2FAE* _StageInvasionModule; // 0x18
		::UnityEngine::Color _NormalColorL; // 0x20
		::UnityEngine::Color _ColorL_k__BackingField; // 0x30
		::UnityEngine::Color _ColorR_k__BackingField; // 0x40
		::UnityEngine::Color _NormalColorR; // 0x50
		::System::Boolean _InvasionColorEnabled; // 0x60
		::System::Boolean _IsSuperArmorBreak; // 0x61
		::System::Boolean _IsDamageUpStyle_k__BackingField; // 0x62

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERHPBARSTYLE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color get_ColorL()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERHPBARSTYLE_GET_COLORL_OFFSET))(this);
		}

		::System::Void set_ColorL(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERHPBARSTYLE_SET_COLORL_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_ColorR()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERHPBARSTYLE_GET_COLORR_OFFSET))(this);
		}

		::System::Void set_ColorR(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERHPBARSTYLE_SET_COLORR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDamageUpStyle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERHPBARSTYLE_GET_ISDAMAGEUPSTYLE_OFFSET))(this);
		}

		::System::Void set_IsDamageUpStyle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERHPBARSTYLE_SET_ISDAMAGEUPSTYLE_OFFSET))(this, a1);
		}

		static ::RPG::Client::MonsterHPBarStyle* Create(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::MonsterHPBarStyle*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERHPBARSTYLE_CREATE_OFFSET))(a1);
		}

		::System::Void SetGameEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERHPBARSTYLE_SETGAMEENTITY_OFFSET))(this, a1);
		}

		::System::Void SetSuperArmorBreak(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERHPBARSTYLE_SETSUPERARMORBREAK_OFFSET))(this, a1);
		}

		::System::Void SetInvasionColorEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERHPBARSTYLE_SETINVASIONCOLORENABLED_OFFSET))(this, a1);
		}

		::System::Void SetNormalColor(::UnityEngine::Color a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERHPBARSTYLE_SETNORMALCOLOR_OFFSET))(this, a1, a2);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERHPBARSTYLE_REFRESH_OFFSET))(this);
		}

		::System::Boolean _ShouldUseInvasionColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERHPBARSTYLE__SHOULDUSEINVASIONCOLOR_OFFSET))(this);
		}

		::Class_1_4FBAE6148E0D2FAE* _EnsureStageInvasionModule()
		{
			return ((::Class_1_4FBAE6148E0D2FAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERHPBARSTYLE__ENSURESTAGEINVASIONMODULE_OFFSET))(this);
		}

		static ::System::Void _EnsureColors()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERHPBARSTYLE__ENSURECOLORS_OFFSET))();
		}
	};
}
