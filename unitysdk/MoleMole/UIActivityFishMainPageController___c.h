#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x173C31B0)
#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x173C31F0)
#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__ONUIINIT_B__10_1_OFFSET UNITYSDK_OFFSET(0x173C3200)
#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__ONUIINIT_B__10_2_OFFSET UNITYSDK_OFFSET(0x173C3280)
#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__ONUIINIT_B__10_3_OFFSET UNITYSDK_OFFSET(0x173C3300)
#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__REFRESHWEAPONREWARD_B__22_2_OFFSET UNITYSDK_OFFSET(0x173C3970)
#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__REFRESHWEAPONREWARD_G__ONINFOBTNCLICK_22_1_OFFSET UNITYSDK_OFFSET(0x173C3460)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFishMainPageController___c_TypeDefinitionIndex = 82076;

	class UIActivityFishMainPageController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__10_2()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIActivityFishMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C750);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__10_1()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIActivityFishMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C758);
		}
		static ::MoleMole::UIActivityFishMainPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityFishMainPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityFishMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C760);
		}
		static ::System::Func_2<::System::Int32, ::System::UInt32>** StaticGet___9__22_2()
		{
			return (::System::Func_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityFishMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C768);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__10_3()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIActivityFishMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C770);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__10_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__ONUIINIT_B__10_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__10_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__ONUIINIT_B__10_2_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__10_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__ONUIINIT_B__10_3_OFFSET))(this);
		}

		::System::Void _RefreshWeaponReward_g__OnInfoBtnClick_22_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__REFRESHWEAPONREWARD_G__ONINFOBTNCLICK_22_1_OFFSET))(this);
		}

		::System::UInt32 _RefreshWeaponReward_b__22_2(::System::Int32 x)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__REFRESHWEAPONREWARD_B__22_2_OFFSET))(this, x);
		}
	};
}
