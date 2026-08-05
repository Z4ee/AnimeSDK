#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_1B0A36368606660E_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIZenkovLotteryGameRoleHudWidgetControllerContext; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11E493D0)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11E49460)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11E48E80)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11E490A0)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x11E49110)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E49700)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11E496A0)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11E49760)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11E497F0)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11E49880)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11E49910)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovLotteryGameRoleHudWidgetController_TypeDefinitionIndex = 78503;

	class UIZenkovLotteryGameRoleHudWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_MaxHPReductionPercentageShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIZenkovLotteryGameRoleHudWidgetController_TypeDefinitionIndex)->GetStaticField(0x12210);
		}
		static ::System::Int32* StaticGet_DamageHpShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIZenkovLotteryGameRoleHudWidgetController_TypeDefinitionIndex)->GetStaticField(0x12214);
		}
		static ::System::Int32* StaticGet_CurHpShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIZenkovLotteryGameRoleHudWidgetController_TypeDefinitionIndex)->GetStaticField(0x12218);
		}
		::UnityEngine::Material* _hpMaterial; // 0x2C0
		::Class_2_1B0A36368606660E_2* _view; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void Refresh(::MoleMole::UIZenkovLotteryGameRoleHudWidgetControllerContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovLotteryGameRoleHudWidgetControllerContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER_REFRESH_OFFSET))(this, context);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
