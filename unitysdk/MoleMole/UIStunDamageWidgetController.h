#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1F1130A3BA9E01B4.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/UIStunDamageWidgetController_ShowFlag.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_C1025CB3979D101D;
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }

#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_ADDCONDITION_OFFSET UNITYSDK_OFFSET(0x15501BD0)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_ADDSPECIALSTUNCONDITION_OFFSET UNITYSDK_OFFSET(0x15501B70)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_GETENTITYSPACERATIO_OFFSET UNITYSDK_OFFSET(0x155033A0)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_GETNOTSTUNTAKERATIO_OFFSET UNITYSDK_OFFSET(0x155027F0)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_GETSTUNDAMAGEVALUE_OFFSET UNITYSDK_OFFSET(0x15502E20)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_GET__STUNDAMAGESHOWFLAG_OFFSET UNITYSDK_OFFSET(0x15503390)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x15502360)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15502010)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_ONROOTCACHEDUIRELEASED_OFFSET UNITYSDK_OFFSET(0x155020A0)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_ONSPACERATIOCHANGE_OFFSET UNITYSDK_OFFSET(0x15503530)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x155022D0)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15501A70)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_REFRESHSHOWFLAG_OFFSET UNITYSDK_OFFSET(0x155029B0)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_REMOVEABILITYCALLBACK_OFFSET UNITYSDK_OFFSET(0x15502110)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_REMOVECONDITION_OFFSET UNITYSDK_OFFSET(0x15501E30)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_REMOVESPECIALSTUNCONDITION_OFFSET UNITYSDK_OFFSET(0x15501DD0)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_SETENTITY_OFFSET UNITYSDK_OFFSET(0x15502AA0)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_SET__STUNDAMAGESHOWFLAG_OFFSET UNITYSDK_OFFSET(0x15502530)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_SHOWSTUNDAMAGEVALUEINNER_OFFSET UNITYSDK_OFFSET(0x15503050)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_SHOWSTUNDAMAGEVALUE_OFFSET UNITYSDK_OFFSET(0x155031F0)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_UPDATECOLORSTATE_OFFSET UNITYSDK_OFFSET(0x15503270)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_UPDATENUMUPTRIGGER_OFFSET UNITYSDK_OFFSET(0x15502600)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_UPDATESTUNDAMAGEUIINNER_OFFSET UNITYSDK_OFFSET(0x15503190)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER_UPDATESTUNDAMAGEUI_OFFSET UNITYSDK_OFFSET(0x155030C0)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15503650)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x155035F0)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x155036D0)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER___BASE_ONROOTCACHEDUIRELEASED_OFFSET UNITYSDK_OFFSET(0x15503760)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x155037F0)
#define MOLEMOLE_UISTUNDAMAGEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15503880)

namespace MoleMole
{
	inline static constexpr unsigned int UIStunDamageWidgetController_TypeDefinitionIndex = 48402;

	class UIStunDamageWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_Show()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIStunDamageWidgetController_TypeDefinitionIndex)->GetStaticField(0xACA0);
		}
		static ::System::Int32* StaticGet_Grey()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIStunDamageWidgetController_TypeDefinitionIndex)->GetStaticField(0xACA4);
		}
		static ::System::Int32* StaticGet_Special()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIStunDamageWidgetController_TypeDefinitionIndex)->GetStaticField(0xACA8);
		}
		static ::System::Int32* StaticGet_NumUp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIStunDamageWidgetController_TypeDefinitionIndex)->GetStaticField(0xACAC);
		}
		::Class_2_C1025CB3979D101D* _view; // 0x2B8
		::MoleMole::EntityHandle _entity; // 0x2C0
		::System::Single _showTimeLeft; // 0x2D0
		::System::Boolean _stunShowState; // 0x2D4
		::System::Single _notStunTakeRatio; // 0x2D8
		::MoleMole::UIStunDamageWidgetController_ShowFlag __stunDamageShowFlag; // 0x2DC
		::Enum_3_1F1130A3BA9E01B4 _condition; // 0x2E0
		::System::Int32 _lastFrameStunDamageValue; // 0x2E4
		::System::Int32 _currentFrameStunDamageValue; // 0x2E8

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
