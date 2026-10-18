#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_8E3C7CE527FAD01A;
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_MONSTERHPBARSTYLE_CREATE_OFFSET UNITYSDK_OFFSET(0xD8BDB30)
#define RPG_CLIENT_MONSTERHPBARSTYLE_GETPLURALITYBACKCOLOR_OFFSET UNITYSDK_OFFSET(0xD8BE0E0)
#define RPG_CLIENT_MONSTERHPBARSTYLE_GETPLURALITYFRONTCOLOR_OFFSET UNITYSDK_OFFSET(0xD8BDEE0)
#define RPG_CLIENT_MONSTERHPBARSTYLE_GET_COLORL_OFFSET UNITYSDK_OFFSET(0xD8BD6B0)
#define RPG_CLIENT_MONSTERHPBARSTYLE_GET_COLORR_OFFSET UNITYSDK_OFFSET(0xD8BD6D0)
#define RPG_CLIENT_MONSTERHPBARSTYLE_GET_ISDAMAGEUPSTYLE_OFFSET UNITYSDK_OFFSET(0xD8BD6F0)
#define RPG_CLIENT_MONSTERHPBARSTYLE_GET_SHOULDAPPLYMAINCOLOR_OFFSET UNITYSDK_OFFSET(0xD8BD710)
#define RPG_CLIENT_MONSTERHPBARSTYLE_REFRESH_OFFSET UNITYSDK_OFFSET(0xD8BDC50)
#define RPG_CLIENT_MONSTERHPBARSTYLE_SETGAMEENTITY_OFFSET UNITYSDK_OFFSET(0xD8BDC00)
#define RPG_CLIENT_MONSTERHPBARSTYLE_SETNORMALCOLOR_OFFSET UNITYSDK_OFFSET(0xD8BDDD0)
#define RPG_CLIENT_MONSTERHPBARSTYLE_SETSUPERARMORBREAK_OFFSET UNITYSDK_OFFSET(0xD8BDD30)
#define RPG_CLIENT_MONSTERHPBARSTYLE_SETTOTALPLURALITYNUM_OFFSET UNITYSDK_OFFSET(0xD8BDD80)
#define RPG_CLIENT_MONSTERHPBARSTYLE_SET_COLORL_OFFSET UNITYSDK_OFFSET(0xD8BD6C0)
#define RPG_CLIENT_MONSTERHPBARSTYLE_SET_COLORR_OFFSET UNITYSDK_OFFSET(0xD8BD6E0)
#define RPG_CLIENT_MONSTERHPBARSTYLE_SET_ISDAMAGEUPSTYLE_OFFSET UNITYSDK_OFFSET(0xD8BD700)
#define RPG_CLIENT_MONSTERHPBARSTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0xD8BD760)
#define RPG_CLIENT_MONSTERHPBARSTYLE__ENSURECOLORS_OFFSET UNITYSDK_OFFSET(0xD8BD7B0)
#define RPG_CLIENT_MONSTERHPBARSTYLE__ENSURESTAGEINVASIONMODULE_OFFSET UNITYSDK_OFFSET(0xD8BE240)
#define RPG_CLIENT_MONSTERHPBARSTYLE__GETPLURALITYCOLORINDEX_OFFSET UNITYSDK_OFFSET(0xD8BE050)
#define RPG_CLIENT_MONSTERHPBARSTYLE__SHOULDUSEINVASIONCOLOR_OFFSET UNITYSDK_OFFSET(0xD8BDE40)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterHPBarStyle_TypeDefinitionIndex = 71678;

	class MonsterHPBarStyle : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Color>** StaticGet_s_PluralityRight()
		{
			return (::Il2CppArray<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(MonsterHPBarStyle_TypeDefinitionIndex)->GetStaticField(0x6DA30);
		}
		static ::Il2CppArray<::UnityEngine::Color>** StaticGet_s_PluralityLeft()
		{
			return (::Il2CppArray<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(MonsterHPBarStyle_TypeDefinitionIndex)->GetStaticField(0x6DA38);
		}
		static ::UnityEngine::Color* StaticGet_s_InvasionActivatedL()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(MonsterHPBarStyle_TypeDefinitionIndex)->GetStaticField(0x151C0);
		}
		static ::UnityEngine::Color* StaticGet_s_NormalR()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(MonsterHPBarStyle_TypeDefinitionIndex)->GetStaticField(0x151D0);
		}
		static ::System::Boolean* StaticGet_s_ColorsLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonsterHPBarStyle_TypeDefinitionIndex)->GetStaticField(0x151E0);
		}
		static ::UnityEngine::Color* StaticGet_s_DamageUpL()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(MonsterHPBarStyle_TypeDefinitionIndex)->GetStaticField(0x151E4);
		}
		static ::UnityEngine::Color* StaticGet_s_NormalL()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(MonsterHPBarStyle_TypeDefinitionIndex)->GetStaticField(0x151F4);
		}
		static ::UnityEngine::Color* StaticGet_s_InvasionActivatedR()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(MonsterHPBarStyle_TypeDefinitionIndex)->GetStaticField(0x15204);
		}
		static ::UnityEngine::Color* StaticGet_s_LastBarR()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(MonsterHPBarStyle_TypeDefinitionIndex)->GetStaticField(0x15214);
		}
		static ::UnityEngine::Color* StaticGet_s_LastBarL()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(MonsterHPBarStyle_TypeDefinitionIndex)->GetStaticField(0x15224);
		}
		static ::UnityEngine::Color* StaticGet_s_DamageUpR()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(MonsterHPBarStyle_TypeDefinitionIndex)->GetStaticField(0x15234);
		}
		// static const ::System::Int32 _PLURALITY_COLOR_NUM = 0x3; // 0x0
		::Class_1_8E3C7CE527FAD01A* _StageInvasionModule; // 0x10
		::RPG::GameCore::GameEntity* _Entity; // 0x18
		::UnityEngine::Color _NormalColorR; // 0x20
		::UnityEngine::Color _ColorR_k__BackingField; // 0x30
		::UnityEngine::Color _NormalColorL; // 0x40
		::System::Int32 _TotalPluralityNum; // 0x50
		::UnityEngine::Color _ColorL_k__BackingField; // 0x54
		::System::Boolean _IsDamageUpStyle_k__BackingField; // 0x64
		::System::Boolean _IsSuperArmorBreak; // 0x65

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

		::System::Boolean get_ShouldApplyMainColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERHPBARSTYLE_GET_SHOULDAPPLYMAINCOLOR_OFFSET))(this);
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

		::System::Void SetTotalPluralityNum(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERHPBARSTYLE_SETTOTALPLURALITYNUM_OFFSET))(this, a1);
		}

		::System::Void SetNormalColor(::UnityEngine::Color a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERHPBARSTYLE_SETNORMALCOLOR_OFFSET))(this, a1, a2);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERHPBARSTYLE_REFRESH_OFFSET))(this);
		}

		::System::Void GetPluralityFrontColor(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Color& a3, ::UnityEngine::Color& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Color&, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERHPBARSTYLE_GETPLURALITYFRONTCOLOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GetPluralityBackColor(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Color& a3, ::UnityEngine::Color& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Color&, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERHPBARSTYLE_GETPLURALITYBACKCOLOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean _ShouldUseInvasionColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERHPBARSTYLE__SHOULDUSEINVASIONCOLOR_OFFSET))(this);
		}

		::Class_1_8E3C7CE527FAD01A* _EnsureStageInvasionModule()
		{
			return ((::Class_1_8E3C7CE527FAD01A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERHPBARSTYLE__ENSURESTAGEINVASIONMODULE_OFFSET))(this);
		}

		static ::System::Int32 _GetPluralityColorIndex(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERHPBARSTYLE__GETPLURALITYCOLORINDEX_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _EnsureColors()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERHPBARSTYLE__ENSURECOLORS_OFFSET))();
		}
	};
}
