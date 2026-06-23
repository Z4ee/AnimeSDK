#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1F1130A3BA9E01B4.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/UIStunDamageWidgetController_ShowFlag.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_C1025CB3979D101D;
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }

#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_ADDCONDITION_OFFSET UNITYSDK_OFFSET(0x103D78B0)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_ADDSPECIALSTUNCONDITION_OFFSET UNITYSDK_OFFSET(0x103D7850)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_GETENTITYSPACERATIO_OFFSET UNITYSDK_OFFSET(0x103D9090)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_GETNOTSTUNTAKERATIO_OFFSET UNITYSDK_OFFSET(0x103D84E0)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_GETSTUNDAMAGEVALUE_OFFSET UNITYSDK_OFFSET(0x103D8B10)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_GET__STUNDAMAGESHOWFLAG_OFFSET UNITYSDK_OFFSET(0x103D9080)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x103D8050)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x103D7CF0)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_ONROOTCACHEDUIRELEASED_OFFSET UNITYSDK_OFFSET(0x103D7D80)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_ONSPACERATIOCHANGE_OFFSET UNITYSDK_OFFSET(0x103D9220)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x103D7FC0)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x103D7740)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_REFRESHSHOWFLAG_OFFSET UNITYSDK_OFFSET(0x103D86A0)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_REMOVEABILITYCALLBACK_OFFSET UNITYSDK_OFFSET(0x103D7DF0)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_REMOVECONDITION_OFFSET UNITYSDK_OFFSET(0x103D7B10)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_REMOVESPECIALSTUNCONDITION_OFFSET UNITYSDK_OFFSET(0x103D7AB0)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_SETENTITY_OFFSET UNITYSDK_OFFSET(0x103D8790)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_SET__STUNDAMAGESHOWFLAG_OFFSET UNITYSDK_OFFSET(0x103D8220)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_SHOWSTUNDAMAGEVALUEINNER_OFFSET UNITYSDK_OFFSET(0x103D8D40)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_SHOWSTUNDAMAGEVALUE_OFFSET UNITYSDK_OFFSET(0x103D8EE0)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_UPDATECOLORSTATE_OFFSET UNITYSDK_OFFSET(0x103D8F60)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_UPDATENUMUPTRIGGER_OFFSET UNITYSDK_OFFSET(0x103D82F0)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_UPDATESTUNDAMAGEUIINNER_OFFSET UNITYSDK_OFFSET(0x103D8E80)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_UPDATESTUNDAMAGEUI_OFFSET UNITYSDK_OFFSET(0x103D8DB0)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x103D9340)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x103D92E0)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x103D93C0)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER___BASE_ONROOTCACHEDUIRELEASED_OFFSET UNITYSDK_OFFSET(0x103D9450)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x103D94E0)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x103D9570)

namespace MoleMole
{
	inline static constexpr unsigned int UIStunDamageWidgetController_TypeDefinitionIndex = 56590;

	class UIStunDamageWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_Show()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIStunDamageWidgetController_TypeDefinitionIndex)->GetStaticField(0xB230);
		}
		static ::System::Int32* StaticGet_Grey()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIStunDamageWidgetController_TypeDefinitionIndex)->GetStaticField(0xB234);
		}
		static ::System::Int32* StaticGet_Special()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIStunDamageWidgetController_TypeDefinitionIndex)->GetStaticField(0xB238);
		}
		static ::System::Int32* StaticGet_NumUp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIStunDamageWidgetController_TypeDefinitionIndex)->GetStaticField(0xB23C);
		}
		::Class_2_C1025CB3979D101D* _view; // 0x2C0
		::MoleMole::EntityHandle _entity; // 0x2C8
		::System::Single _showTimeLeft; // 0x2D8
		::System::Boolean _stunShowState; // 0x2DC
		::System::Single _notStunTakeRatio; // 0x2E0
		::MoleMole::UIStunDamageWidgetController_ShowFlag __stunDamageShowFlag; // 0x2E4
		::Enum_3_1F1130A3BA9E01B4 _condition; // 0x2E8
		::System::Int32 _lastFrameStunDamageValue; // 0x2EC
		::System::Int32 _currentFrameStunDamageValue; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void AddSpecialStunCondition(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_ADDSPECIALSTUNCONDITION_OFFSET))(this, args);
		}

		::System::Void RemoveSpecialStunCondition(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_REMOVESPECIALSTUNCONDITION_OFFSET))(this, args);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnRootCachedUIReleased()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_ONROOTCACHEDUIRELEASED_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RemoveAbilityCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_REMOVEABILITYCALLBACK_OFFSET))(this);
		}

		::System::Void ManualUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_MANUALUPDATE_OFFSET))(this);
		}

		::System::Void SetEntity(::MoleMole::EntityHandle entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_SETENTITY_OFFSET))(this, entity);
		}

		::System::Void UpdateStunDamageUI(::System::Single cur, ::System::Int32 oldIndex, ::System::Single max, ::System::Int32 newIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_UPDATESTUNDAMAGEUI_OFFSET))(this, cur, oldIndex, max, newIndex);
		}

		::System::Void ShowStunDamageValue(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_SHOWSTUNDAMAGEVALUE_OFFSET))(this, isShow);
		}

		::System::Void UpdateColorState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_UPDATECOLORSTATE_OFFSET))(this);
		}

		::System::Void UpdateNumUpTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_UPDATENUMUPTRIGGER_OFFSET))(this);
		}

		::System::Void UpdateStunDamageUIInner()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_UPDATESTUNDAMAGEUIINNER_OFFSET))(this);
		}

		::System::Void ShowStunDamageValueInner(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_SHOWSTUNDAMAGEVALUEINNER_OFFSET))(this, isShow);
		}

		::System::Int32 GetStunDamageValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_GETSTUNDAMAGEVALUE_OFFSET))(this);
		}

		::System::Void RefreshShowFlag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_REFRESHSHOWFLAG_OFFSET))(this);
		}

		::System::Single GetNotStunTakeRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_GETNOTSTUNTAKERATIO_OFFSET))(this);
		}

		::MoleMole::UIStunDamageWidgetController_ShowFlag get__stunDamageShowFlag()
		{
			return ((::MoleMole::UIStunDamageWidgetController_ShowFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_GET__STUNDAMAGESHOWFLAG_OFFSET))(this);
		}

		::System::Void set__stunDamageShowFlag(::MoleMole::UIStunDamageWidgetController_ShowFlag value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIStunDamageWidgetController_ShowFlag))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_SET__STUNDAMAGESHOWFLAG_OFFSET))(this, value);
		}

		::System::Void AddCondition(::Enum_3_1F1130A3BA9E01B4 condition)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_1F1130A3BA9E01B4))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_ADDCONDITION_OFFSET))(this, condition);
		}

		::System::Int32 GetEntitySpaceRatio()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_GETENTITYSPACERATIO_OFFSET))(this);
		}

		::System::Void OnSpaceRatioChange(::System::Single _1, ::System::Int32 _2, ::System::Single _3, ::System::Int32 _4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_ONSPACERATIOCHANGE_OFFSET))(this, _1, _2, _3, _4);
		}

		::System::Void RemoveCondition(::Enum_3_1F1130A3BA9E01B4 condition)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_1F1130A3BA9E01B4))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_REMOVECONDITION_OFFSET))(this, condition);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnRootCachedUIReleased()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER___BASE_ONROOTCACHEDUIRELEASED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
