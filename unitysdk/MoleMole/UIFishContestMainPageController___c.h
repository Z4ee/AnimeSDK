#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DAA670)
#define MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__CHANGETOFISHQTE_B__44_0_OFFSET UNITYSDK_OFFSET(0x16DAA840)
#define MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__CHANGETOSTARTFISH_B__43_0_OFFSET UNITYSDK_OFFSET(0x16DAA780)
#define MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__CHANGETOWAITFISH_B__42_0_OFFSET UNITYSDK_OFFSET(0x16DAA6C0)
#define MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16DAA6B0)
#define MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__ONFISHINGSTARTSINGLEBATTLEHANDLE_B__49_4_OFFSET UNITYSDK_OFFSET(0x16DAA900)
#define MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__ONFISHINGSTARTSINGLEBATTLEHANDLE_B__49_5_OFFSET UNITYSDK_OFFSET(0x16DAA9C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFishContestMainPageController___c_TypeDefinitionIndex = 52888;

	class UIFishContestMainPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__42_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIFishContestMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x32C70);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__49_5()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIFishContestMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x32C78);
		}
		static ::MoleMole::UIFishContestMainPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIFishContestMainPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIFishContestMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x32C80);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__49_4()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIFishContestMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x32C88);
		}
		static ::System::Action** StaticGet___9__44_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIFishContestMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x32C90);
		}
		static ::System::Action** StaticGet___9__43_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIFishContestMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x32C98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ChangeToWaitFish_b__42_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__CHANGETOWAITFISH_B__42_0_OFFSET))(this);
		}

		::System::Void _ChangeToStartFish_b__43_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__CHANGETOSTARTFISH_B__43_0_OFFSET))(this);
		}

		::System::Void _ChangeToFishQTE_b__44_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__CHANGETOFISHQTE_B__44_0_OFFSET))(this);
		}

		::System::Void _OnFishingStartSingleBattleHandle_b__49_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__ONFISHINGSTARTSINGLEBATTLEHANDLE_B__49_4_OFFSET))(this);
		}

		::System::Void _OnFishingStartSingleBattleHandle_b__49_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__ONFISHINGSTARTSINGLEBATTLEHANDLE_B__49_5_OFFSET))(this);
		}
	};
}
