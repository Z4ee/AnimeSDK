#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_B6B482D5E3A4F997.h"

class Class_1_1487A3F820CB8361;
class Class_3_F97B015544BE936B;
namespace MoleMole { class CharacterScriptConfig_ConfigCustomPropertyUI; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MONOCUSTOMPROPERTYUICONTROLLERBASE_ATTACHENTITY_OFFSET UNITYSDK_OFFSET(0x10D93660)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_COLLECTANIMATIONS_OFFSET UNITYSDK_OFFSET(0x10D94440)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_DOONCANVASWILLRENDER_OFFSET UNITYSDK_OFFSET(0x10D93180)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_DOONDISABLE_OFFSET UNITYSDK_OFFSET(0x10D92F00)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_DOONENABLE_OFFSET UNITYSDK_OFFSET(0x10D92FD0)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_GETANIMCLIPLENGTH_OFFSET UNITYSDK_OFFSET(0x10D94560)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_GETCUSTOMPROPERTYMAXVALUE_OFFSET UNITYSDK_OFFSET(0x10D94250)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_GETCUSTOMPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x10D94050)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x10D91FD0)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x10D91E40)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_HANDLEPROGRESS_OFFSET UNITYSDK_OFFSET(0x10D94600)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_LOGCUSTOMTYPEHOLDERERROR_OFFSET UNITYSDK_OFFSET(0x10D94200)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_MOLEMOLE_BATTLE_IPROPERTYCHANGEINCURFRAMECALLBACK_ONPROPERTYLISTCHANGEINCURFRAME_OFFSET UNITYSDK_OFFSET(0x10D94A00)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_ONATTACHENTITY_OFFSET UNITYSDK_OFFSET(0x10D92E50)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_ONCANVASWILLRENDER_OFFSET UNITYSDK_OFFSET(0x10D93030)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10D92BC0)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10D92E90)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10D92F50)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x10D92620)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x10D92980)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_ONPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0x10D926C0)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_ONPROPERTYLISTCHANGEINCURFRAME_OFFSET UNITYSDK_OFFSET(0x10D92820)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x10D92170)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10D92E00)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10D91FF0)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_REDIRECTCUSTOMPROPERTIES_OFFSET UNITYSDK_OFFSET(0x10D93970)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_REGISTERPROPCHANGECB_OFFSET UNITYSDK_OFFSET(0x10D92590)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_REMOVEPROEPRTYCALLBACK_OFFSET UNITYSDK_OFFSET(0x10D92C10)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_SETFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x10D931C0)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_SETPROPERTYCHANGEHANDLEMODE_OFFSET UNITYSDK_OFFSET(0x10D92130)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x10D91FE0)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_UNREGISTERPROPCHANGECB_OFFSET UNITYSDK_OFFSET(0x10D92430)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D949F0)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10D94A70)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x10D94A80)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x10D94B10)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10D94A50)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10D94A60)

inline static constexpr unsigned int MonoCustomPropertyUIControllerBase_TypeDefinitionIndex = 59586;

class MonoCustomPropertyUIControllerBase : public ::MoleMole::UIWindowController
{
public:
	::System::UInt32 _ownerEntityID; // 0x310
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _placeholder2CustomTypes; // 0x318
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _customType2Placeholders; // 0x320
	::Class_1_1487A3F820CB8361* _property; // 0x328
	::System::Collections::Generic::List_1<::UnityEngine::Animation*>* _allAnimationComponents; // 0x330
	::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUI* _config_k__BackingField; // 0x338
	::System::Boolean _needHandleAllCustomPropertiesOnEnable; // 0x340
	::System::Boolean _handlePropertiesExecutedInOnEnable; // 0x341
	::System::Boolean _mergeHandleEnable; // 0x342

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE__CTOR_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* get_ownerEntity()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_GET_OWNERENTITY_OFFSET))(this);
	}

	::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUI* get_config()
	{
		return ((::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_config(::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUI* value)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUI*))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_SET_CONFIG_OFFSET))(this, value);
	}

	::System::Void OnUIInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_ONUIINIT_OFFSET))(this);
	}

	::System::Void SetPropertyChangeHandleMode()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_SETPROPERTYCHANGEHANDLEMODE_OFFSET))(this);
	}

	::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_ONSHOW_OFFSET))(this, showCtrlContext);
	}

	::System::Void RegisterPropChangeCb(::Class_3_F97B015544BE936B* dataComponent)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_REGISTERPROPCHANGECB_OFFSET))(this, dataComponent);
	}

	::System::Void UnregisterPropChangeCb(::Class_3_F97B015544BE936B* dataComponent)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_UNREGISTERPROPCHANGECB_OFFSET))(this, dataComponent);
	}

	::System::Void OnFighter_PropertyValueChanged(::System::UInt32 FighterId, ::MoleMole::Config::BaseProperty type, ::System::String* customType, ::System::Double oldValue, ::System::Double newValue)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET))(this, FighterId, type, customType, oldValue, newValue);
	}

	::System::Void OnPropertyListChangeInCurFrame(::System::Collections::Generic::List_1<::Struct_2_B6B482D5E3A4F997>*& bodyList)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_B6B482D5E3A4F997>*&))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_ONPROPERTYLISTCHANGEINCURFRAME_OFFSET))(this, bodyList);
	}

	::System::Void OnHide()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_ONHIDE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_ONDESTROY_OFFSET))(this);
	}

	::System::Void OnUIDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_ONUIDESTROY_OFFSET))(this);
	}

	::System::Void OnAttachEntity()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_ONATTACHENTITY_OFFSET))(this);
	}

	::System::Void RemoveProeprtyCallBack()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_REMOVEPROEPRTYCALLBACK_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_ONDISABLE_OFFSET))(this);
	}

	::System::Void DoOnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_DOONDISABLE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_ONENABLE_OFFSET))(this);
	}

	::System::Void DoOnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_DOONENABLE_OFFSET))(this);
	}

	::System::Void OnCanvasWillRender()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_ONCANVASWILLRENDER_OFFSET))(this);
	}

	::System::Void DoOnCanvasWillRender()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_DOONCANVASWILLRENDER_OFFSET))(this);
	}

	::System::Void SetFollowTarget(::UnityEngine::Transform* target)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_SETFOLLOWTARGET_OFFSET))(this, target);
	}

	::System::Void AttachEntity(::MoleMole::Battle::Entity* entity)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_ATTACHENTITY_OFFSET))(this, entity);
	}

	::System::Void RedirectCustomProperties()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_REDIRECTCUSTOMPROPERTIES_OFFSET))(this);
	}

	::System::Void OnPropertyChange(::MoleMole::Config::BaseProperty propertyType, ::System::String* customType, ::System::Double oldValue, ::System::Double newValue)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_ONPROPERTYCHANGE_OFFSET))(this, propertyType, customType, oldValue, newValue);
	}

	::System::Boolean GetCustomPropertyValue(::System::String* customTypePlaceholder, ::System::Double& result)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Double&))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_GETCUSTOMPROPERTYVALUE_OFFSET))(this, customTypePlaceholder, result);
	}

	::System::Double GetCustomPropertyMaxValue(::System::String* customTypePlaceholder)
	{
		return ((::System::Double(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_GETCUSTOMPROPERTYMAXVALUE_OFFSET))(this, customTypePlaceholder);
	}

	::System::Void LogCustomTypeholderError(::System::String* customTypePlaceholder)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_LOGCUSTOMTYPEHOLDERERROR_OFFSET))(this, customTypePlaceholder);
	}

	::System::Void CollectAnimations(::Il2CppArray<::UnityEngine::Animation*>* animations)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Animation*>*))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_COLLECTANIMATIONS_OFFSET))(this, animations);
	}

	::System::Single GetAnimClipLength(::UnityEngine::Animation* anim, ::System::String* clipName)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_GETANIMCLIPLENGTH_OFFSET))(this, anim, clipName);
	}

	::System::Void HandleProgress(::UnityEngine::RectTransform* progress, ::System::Single fullWidth, ::System::Single percentage)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_HANDLEPROGRESS_OFFSET))(this, progress, fullWidth, percentage);
	}

	::System::Void MoleMole_Battle_IPropertyChangeInCurFrameCallback_OnPropertyListChangeInCurFrame(::System::Collections::Generic::List_1<::Struct_2_B6B482D5E3A4F997>*& bodyList)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_B6B482D5E3A4F997>*&))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_MOLEMOLE_BATTLE_IPROPERTYCHANGEINCURFRAMECALLBACK_ONPROPERTYLISTCHANGEINCURFRAME_OFFSET))(this, bodyList);
	}

	::System::Void __base_OnUIDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE___BASE_ONUIDESTROY_OFFSET))(this);
	}

	::System::Void __base_OnUIInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE___BASE_ONUIINIT_OFFSET))(this);
	}

	::System::Void __base_OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE___BASE_ONDESTROY_OFFSET))(this);
	}

	::System::Void __base_OnHide()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE___BASE_ONHIDE_OFFSET))(this);
	}

	::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE___BASE_ONSHOW_OFFSET))(this, P0);
	}
};
