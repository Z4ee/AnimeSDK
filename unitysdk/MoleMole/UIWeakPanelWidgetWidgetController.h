#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_48D56DACBE4271BC;
class Class_1_C7C8DAC9B7F55F6A;
class Class_2_4E92AFC82E302868;
class Class_2_8EE34DB2F88514D5;
class Class_2_C2DE7756E351C461;
class Class_3_710CD2A9B301B56D;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWeakPanelWidgetWidgetController_ViewModel; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET UNITYSDK_OFFSET(0x1158B790)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_CANSHOWTHISELEMENTDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x1158D480)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_CHECKDAMAGEELEMENT_OFFSET UNITYSDK_OFFSET(0x1158D070)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_GET_ELEMENTABNORMALSWITCHICONCDTIME_OFFSET UNITYSDK_OFFSET(0x1158EB20)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x1158BCF0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1158BC60)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONELEMENTABNORMALLOCKSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1158ECD0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONELEMENTABNORMALTRIGGERED_1_OFFSET UNITYSDK_OFFSET(0x1158D710)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONELEMENTABNORMALTRIGGERED_OFFSET UNITYSDK_OFFSET(0x1158D530)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONEVTCHANGEELEMENTABNORMALACCUMULATION_1_OFFSET UNITYSDK_OFFSET(0x1158E4E0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONEVTCHANGEELEMENTABNORMALACCUMULATION_2_OFFSET UNITYSDK_OFFSET(0x1158E720)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONEVTCHANGEELEMENTABNORMALACCUMULATION_OFFSET UNITYSDK_OFFSET(0x1158DB30)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1158BD90)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1158B510)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1158BBF0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_PLAYRESETANIM_OFFSET UNITYSDK_OFFSET(0x1158EBD0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x1158CC40)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_SETELEMENTABNORMALLOCKSTATE_OFFSET UNITYSDK_OFFSET(0x1158F240)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_SETELEMENTABNORMALUNLOCKSTATE_OFFSET UNITYSDK_OFFSET(0x1158DED0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_SETENTITY_OFFSET UNITYSDK_OFFSET(0x1158C0E0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_SHOWWITHANIM_OFFSET UNITYSDK_OFFSET(0x1158CFC0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1158EC60)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__10_0_OFFSET UNITYSDK_OFFSET(0x1158F7E0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__10_1_OFFSET UNITYSDK_OFFSET(0x1158F960)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__10_2_OFFSET UNITYSDK_OFFSET(0x1158FAE0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__10_3_OFFSET UNITYSDK_OFFSET(0x1158FC30)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__10_4_OFFSET UNITYSDK_OFFSET(0x1158FD90)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1158F7A0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1158F630)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__SETENTITY_G__FINDFIRSTELEMENTABNORMAL_6_0_OFFSET UNITYSDK_OFFSET(0x1158CCA0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x1158FEB0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1158FF40)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1158FFD0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11590060)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x115900F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWeakPanelWidgetWidgetController_TypeDefinitionIndex = 39769;

	class UIWeakPanelWidgetWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_ShaderProgress()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIWeakPanelWidgetWidgetController_TypeDefinitionIndex)->GetStaticField(0xDCD0);
		}
		::Class_2_8EE34DB2F88514D5* _view; // 0x2C0
		::MoleMole::Config::DamageElementType _lockedElementType; // 0x2C8
		::MoleMole::Config::EVariantElement _lockedVariantElement; // 0x2CC
		::MoleMole::EntityHandle _entity; // 0x2D0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Int32>* dmgResistRatioByTypeDict; // 0x2E0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Int32>* weaknessByTypeDict; // 0x2E8
		::System::Single _cdLeft; // 0x2F0
		::UnityEngine::Material* _fillMat; // 0x2F8
		::UnityEngine::Material* _lockElementAbnormalMat; // 0x300
		::MoleMole::UIWeakPanelWidgetWidgetController_ViewModel* _viewModel; // 0x308
		::Class_1_48D56DACBE4271BC* _propertySyncHelper_ViewModel; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
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

		::System::Void BuildViewModelDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET))(this);
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

		::System::Void SetElementAbnormalLockState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_SETELEMENTABNORMALLOCKSTATE_OFFSET))(this);
		}

		::System::Void SetElementAbnormalUnLockState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_SETELEMENTABNORMALUNLOCKSTATE_OFFSET))(this);
		}

		::System::Boolean CanShowThisElementDamageType(::MoleMole::Config::DamageElementType damageElementType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_CANSHOWTHISELEMENTDAMAGETYPE_OFFSET))(this, damageElementType);
		}

		::System::Single get_ElementAbnormalSwitchIconCdTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_GET_ELEMENTABNORMALSWITCHICONCDTIME_OFFSET))(this);
		}

		::System::Boolean _SetEntity_g__FindFirstElementAbnormal_6_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__SETENTITY_G__FINDFIRSTELEMENTABNORMAL_6_0_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__10_0_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_b__10_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__10_1_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_b__10_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__10_2_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_b__10_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__10_3_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_b__10_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__10_4_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
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
