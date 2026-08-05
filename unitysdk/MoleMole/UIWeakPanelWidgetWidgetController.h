#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_C7C8DAC9B7F55F6A;
class Class_2_4E92AFC82E302868;
class Class_2_51341DB11CDF46F9;
class Class_2_C2DE7756E351C461;
class Class_3_710CD2A9B301B56D;
class Class_3_F7296D35BE816971;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_CACHEPENDINGELEMENT_OFFSET UNITYSDK_OFFSET(0x15ED47F0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_CANSHOWTHISELEMENTDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x15ED42B0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_CHECKDAMAGEELEMENT_OFFSET UNITYSDK_OFFSET(0x15ED3D90)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_CLEARPENDINGELEMENT_OFFSET UNITYSDK_OFFSET(0x15ED6180)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_FLUSHPENDINGELEMENT_OFFSET UNITYSDK_OFFSET(0x15ED60A0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_GET_ELEMENTABNORMALSWITCHICONCDTIME_OFFSET UNITYSDK_OFFSET(0x15ED5B80)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_GET_LUMENWEAKPANELCDTIME_OFFSET UNITYSDK_OFFSET(0x15ED6CE0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_GET__ENTITY_OFFSET UNITYSDK_OFFSET(0x15ED3380)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_GET__FILLMAT_OFFSET UNITYSDK_OFFSET(0x15ED1F20)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_GET__LOCKELEMENTABNORMALMAT_OFFSET UNITYSDK_OFFSET(0x15ED25C0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15ED17D0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_GET__VIEW_OFFSET UNITYSDK_OFFSET(0x15ED1840)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x15ED20A0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ISINLUMENCDPROTECTION_OFFSET UNITYSDK_OFFSET(0x15ED4650)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONANIMFILLLUMIFLUX_OFFSET UNITYSDK_OFFSET(0x15ED6D40)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONANIMSWITCHTOLUMEN_OFFSET UNITYSDK_OFFSET(0x15ED68F0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15ED2000)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONELEMENTABNORMALLOCKSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x15ED61D0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONELEMENTABNORMALTRIGGERED_1_OFFSET UNITYSDK_OFFSET(0x15ED4A00)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONELEMENTABNORMALTRIGGERED_OFFSET UNITYSDK_OFFSET(0x15ED4360)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONEVTCHANGEELEMENTABNORMALACCUMULATION_1_OFFSET UNITYSDK_OFFSET(0x15ED53F0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONEVTCHANGEELEMENTABNORMALACCUMULATION_2_OFFSET UNITYSDK_OFFSET(0x15ED5680)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONEVTCHANGEELEMENTABNORMALACCUMULATION_OFFSET UNITYSDK_OFFSET(0x15ED4F20)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONFILLLUMIFLUXANIMCOMPLETE_OFFSET UNITYSDK_OFFSET(0x15ED5FF0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15ED20E0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15ED1920)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15ED1F90)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONWEAKSWITCHANIMCOMPLETE_OFFSET UNITYSDK_OFFSET(0x15ED6C40)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_PLAYLUMENSWITCHSEQUENCE_OFFSET UNITYSDK_OFFSET(0x15ED6B80)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_PLAYRESETANIM_OFFSET UNITYSDK_OFFSET(0x15ED5BE0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_REFRESHLUMENFILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x15ED6780)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x15ED3400)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_SETENTITY_OFFSET UNITYSDK_OFFSET(0x15ED2630)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_SETFILLBARMODE_OFFSET UNITYSDK_OFFSET(0x15ED4880)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_SET__ENTITY_OFFSET UNITYSDK_OFFSET(0x15ED32D0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_SET__FILLMAT_OFFSET UNITYSDK_OFFSET(0x15ED1DC0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_SET__LOCKELEMENTABNORMALMAT_OFFSET UNITYSDK_OFFSET(0x15ED1E70)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_SHOWWITHANIM_OFFSET UNITYSDK_OFFSET(0x15ED3CE0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15ED5C70)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15ED6F10)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED6D90)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__ONUIINIT_B__5_0_OFFSET UNITYSDK_OFFSET(0x15ED6F50)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__SETENTITY_G__FINDFIRSTELEMENTABNORMAL_10_0_OFFSET UNITYSDK_OFFSET(0x15ED3510)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x15ED75C0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15ED7650)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15ED76F0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15ED7780)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15ED7810)

namespace MoleMole
{
	inline static constexpr unsigned int UIWeakPanelWidgetWidgetController_TypeDefinitionIndex = 77822;

	class UIWeakPanelWidgetWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_ShaderProgress()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIWeakPanelWidgetWidgetController_TypeDefinitionIndex)->GetStaticField(0xDD50);
		}
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Int32>* dmgResistRatioByTypeDict; // 0x2C0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Int32>* weaknessByTypeDict; // 0x2C8
		::System::Single _cdLeft; // 0x2D0
		::System::Boolean _hasPendingElement; // 0x2D4
		::MoleMole::Config::DamageElementType _pendingElementType; // 0x2D8
		::MoleMole::Config::EVariantElement _pendingVariantElement; // 0x2DC
		::System::Single _pendingRatio; // 0x2E0
		::System::Boolean _pendingIsTriggered; // 0x2E4
		::System::Boolean _isPlayingLumenSwitchAnim; // 0x2E5
		::System::Single _lumenSwitchAnimTimeoutRealtime; // 0x2E8
		::System::Single LumenSwitchAnimTimeoutSec; // 0x2EC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::Class_2_51341DB11CDF46F9* get__viewModel()
		{
			return ((::Class_2_51341DB11CDF46F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::Class_3_F7296D35BE816971* get__view()
		{
			return ((::Class_3_F7296D35BE816971*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_GET__VIEW_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetEntity(::MoleMole::EntityHandle entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_SETENTITY_OFFSET))(this, entity);
		}

		::System::Boolean CheckDamageElement(::MoleMole::Config::DamageElementType key, ::Class_1_C7C8DAC9B7F55F6A* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::DamageElementType, ::Class_1_C7C8DAC9B7F55F6A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_CHECKDAMAGEELEMENT_OFFSET))(this, key, value);
		}

		::System::Void OnElementAbnormalTriggered(::Class_2_4E92AFC82E302868* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_4E92AFC82E302868*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONELEMENTABNORMALTRIGGERED_OFFSET))(this, evt);
		}

		::System::Void OnEvtChangeElementAbnormalAccumulation(::Class_2_C2DE7756E351C461* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_C2DE7756E351C461*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONEVTCHANGEELEMENTABNORMALACCUMULATION_OFFSET))(this, evt);
		}

		::System::Void ShowWithAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_SHOWWITHANIM_OFFSET))(this);
		}

		::System::Void PlayResetAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_PLAYRESETANIM_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void OnElementAbnormalTriggered_1(::System::Single accumulationRatio, ::MoleMole::Config::DamageElementType damageElementType, ::MoleMole::Config::EVariantElement variantElement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONELEMENTABNORMALTRIGGERED_1_OFFSET))(this, accumulationRatio, damageElementType, variantElement);
		}

		::System::Void OnEvtChangeElementAbnormalAccumulation_1(::System::Single accumulationRatio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONEVTCHANGEELEMENTABNORMALACCUMULATION_1_OFFSET))(this, accumulationRatio);
		}

		::System::Void OnEvtChangeElementAbnormalAccumulation_2(::System::Single accumulationRatio, ::MoleMole::Config::DamageElementType damageElementType, ::MoleMole::Config::EVariantElement variantElement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONEVTCHANGEELEMENTABNORMALACCUMULATION_2_OFFSET))(this, accumulationRatio, damageElementType, variantElement);
		}

		::System::Void OnElementAbnormalLockStateChange(::Class_3_710CD2A9B301B56D* elementAbnormalComponent, ::MoleMole::Config::DamageElementType elementType, ::MoleMole::Config::EVariantElement variantElement)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_710CD2A9B301B56D*, ::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONELEMENTABNORMALLOCKSTATECHANGE_OFFSET))(this, elementAbnormalComponent, elementType, variantElement);
		}

		::System::Boolean CanShowThisElementDamageType(::MoleMole::Config::DamageElementType damageElementType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_CANSHOWTHISELEMENTDAMAGETYPE_OFFSET))(this, damageElementType);
		}

		::System::Boolean IsInLumenCdProtection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ISINLUMENCDPROTECTION_OFFSET))(this);
		}

		::System::Void CachePendingElement(::MoleMole::Config::DamageElementType elementType, ::MoleMole::Config::EVariantElement variantElement, ::System::Single ratio, ::System::Boolean isTriggered)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_CACHEPENDINGELEMENT_OFFSET))(this, elementType, variantElement, ratio, isTriggered);
		}

		::System::Void FlushPendingElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_FLUSHPENDINGELEMENT_OFFSET))(this);
		}

		::System::Void ClearPendingElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_CLEARPENDINGELEMENT_OFFSET))(this);
		}

		::System::Void SetFillBarMode(::System::Boolean isLumen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_SETFILLBARMODE_OFFSET))(this, isLumen);
		}

		::System::Void RefreshLumenFillAmount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_REFRESHLUMENFILLAMOUNT_OFFSET))(this);
		}

		::System::Void OnAnimSwitchToLumen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONANIMSWITCHTOLUMEN_OFFSET))(this);
		}

		::System::Void PlayLumenSwitchSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_PLAYLUMENSWITCHSEQUENCE_OFFSET))(this);
		}

		::System::Void OnWeakSwitchAnimComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONWEAKSWITCHANIMCOMPLETE_OFFSET))(this);
		}

		::System::Void OnFillLumifluxAnimComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONFILLLUMIFLUXANIMCOMPLETE_OFFSET))(this);
		}

		::System::Void OnAnimFillLumiflux()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONANIMFILLLUMIFLUX_OFFSET))(this);
		}

		::MoleMole::EntityHandle get__entity()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_GET__ENTITY_OFFSET))(this);
		}

		::System::Void set__entity(::MoleMole::EntityHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_SET__ENTITY_OFFSET))(this, value);
		}

		::System::Single get_ElementAbnormalSwitchIconCdTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_GET_ELEMENTABNORMALSWITCHICONCDTIME_OFFSET))(this);
		}

		::System::Single get_LumenWeakPanelCdTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_GET_LUMENWEAKPANELCDTIME_OFFSET))(this);
		}

		::UnityEngine::Material* get__fillMat()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_GET__FILLMAT_OFFSET))(this);
		}

		::System::Void set__fillMat(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_SET__FILLMAT_OFFSET))(this, value);
		}

		::UnityEngine::Material* get__lockElementAbnormalMat()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_GET__LOCKELEMENTABNORMALMAT_OFFSET))(this);
		}

		::System::Void set__lockElementAbnormalMat(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_SET__LOCKELEMENTABNORMALMAT_OFFSET))(this, value);
		}

		::System::Void _OnUIInit_b__5_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__ONUIINIT_B__5_0_OFFSET))(this, args);
		}

		::System::Boolean _SetEntity_g__FindFirstElementAbnormal_10_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__SETENTITY_G__FINDFIRSTELEMENTABNORMAL_10_0_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
