#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Enum_3_B9002106B360C669.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/ButtonPressType.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_C5FDB00B12827EE9;
class Class_2_03F4D9B3111E6159;
class Class_2_208CC9941471731A_131;
class Class_2_2DFDAF0B881128C6;
class Class_2_79F6D62CE30E3F8E_88;
class Class_2_888734130AA1067E;
class Class_2_A63C194229EB6BF2;
class Class_2_C2B4B123B5A9B78A;
class Class_2_F7CAAD54879BD084;
class MonoUILoopBGText;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIEquipDevelopContext; }
namespace MoleMole { class UIGeneralConversionTipsPopWindowContext; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ALLOCRTUNIT_OFFSET UNITYSDK_OFFSET(0x16F3D940)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_CALCURITEMMAX_OFFSET UNITYSDK_OFFSET(0x15E8FF40)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_CALEQUIPLEFTEXP_OFFSET UNITYSDK_OFFSET(0x15E8E8F0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_CALWEAPONLEFTEXP_OFFSET UNITYSDK_OFFSET(0x15E8F5B0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_CLEARMATERIAL_OFFSET UNITYSDK_OFFSET(0x15E8BF60)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_DOREFRESHSTARUPVIEW_OFFSET UNITYSDK_OFFSET(0x15E8A110)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_DOREFRESHVIEWCOMMON_OFFSET UNITYSDK_OFFSET(0x16F3EE80)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_DOSETSTARUPCONSUME_OFFSET UNITYSDK_OFFSET(0x15E8A450)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_GETALLSELECTLEVELUPMATERIAL_OFFSET UNITYSDK_OFFSET(0x15E89600)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_GETHASSELECTMATERIAL_OFFSET UNITYSDK_OFFSET(0x15E89500)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_GETLEVELUPITEMS_OFFSET UNITYSDK_OFFSET(0x15E87BB0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_GETREALADDEDVALUE_OFFSET UNITYSDK_OFFSET(0x15E89DA0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_GETSELECTLEVELUPMATERIALEXCEPTI_OFFSET UNITYSDK_OFFSET(0x15E901A0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_GETWEAPONRTANIMATOR_OFFSET UNITYSDK_OFFSET(0x16F3FF10)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x15E84990)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15E829A0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_HANDLEZHENZHENWEAPONSTART_OFFSET UNITYSDK_OFFSET(0x16F3FB80)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_INITLEVELUPVIEW_OFFSET UNITYSDK_OFFSET(0x15E88590)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_INITSTARUPVIEW_OFFSET UNITYSDK_OFFSET(0x15E885E0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x15E83220)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ISLEVELUPMATERIALITEMEMPTY_OFFSET UNITYSDK_OFFSET(0x15E8F680)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONAUTOBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x15E88B00)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONBEFOREWORLDUPDATE_OFFSET UNITYSDK_OFFSET(0x15E852C0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONCLICKCONSOLECHECKCONSUMEBTN_OFFSET UNITYSDK_OFFSET(0x16F3D740)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONCLICKCONSUMEICONBTN_OFFSET UNITYSDK_OFFSET(0x16F3D6A0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONCLICKEQUIPLEVELBTN_OFFSET UNITYSDK_OFFSET(0x15E8B870)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONCLICKEQUIPSTARBTN_OFFSET UNITYSDK_OFFSET(0x15E88630)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONCLICKINFOBTN_OFFSET UNITYSDK_OFFSET(0x15E8BD50)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONCLICKSPINFOBTN_OFFSET UNITYSDK_OFFSET(0x16F3E290)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E84900)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONEQUIPRTLOADED_OFFSET UNITYSDK_OFFSET(0x16F408B0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x15E84D20)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x15E85BD0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONITEMCHANGE_OFFSET UNITYSDK_OFFSET(0x15E87790)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x15E849A0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONLEVELUPMATCHANGED_OFFSET UNITYSDK_OFFSET(0x15E8F7C0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONSTARUPANIMATIONFINISH_OFFSET UNITYSDK_OFFSET(0x15E89AD0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONSTARUPHANDLE_OFFSET UNITYSDK_OFFSET(0x15E89910)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONSTORYINFOBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x16F3DAF0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E862A0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E829B0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E830A0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONWEAPONLEVELUPRSP_OFFSET UNITYSDK_OFFSET(0x15E88430)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONWEAPONRTLOADED_OFFSET UNITYSDK_OFFSET(0x16F3F600)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_REALLOCRTUNIT_OFFSET UNITYSDK_OFFSET(0x16F3D830)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_REFRESHLEVELUPINPUTKEY_OFFSET UNITYSDK_OFFSET(0x15E84E40)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_REFRESHLEVELUPVIEWFOREQUIP_OFFSET UNITYSDK_OFFSET(0x15E8C020)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_REFRESHLEVELUPVIEWFORWEAPON_OFFSET UNITYSDK_OFFSET(0x15E8D880)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_REFRESHLEVELUPVIEW_OFFSET UNITYSDK_OFFSET(0x15E87CD0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_REFRESHSTARUPVIEW_OFFSET UNITYSDK_OFFSET(0x15E87E20)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_REFRESHVIEWFOREQUIP_OFFSET UNITYSDK_OFFSET(0x16F3E570)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_REFRESHVIEWFORWEAPON_OFFSET UNITYSDK_OFFSET(0x16F3E8D0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x16F3E4E0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_RELEASERTUNIT_OFFSET UNITYSDK_OFFSET(0x16F3D8D0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_SETEQUIPDEVELOPCONTENT_OFFSET UNITYSDK_OFFSET(0x15E86CB0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_SETLEVELUPCONSUME_OFFSET UNITYSDK_OFFSET(0x15E8EB40)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0x15E8E9C0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_SETSTARUPCONSUME_OFFSET UNITYSDK_OFFSET(0x15E89BF0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_SHOULDWEAPONSHOWSP_OFFSET UNITYSDK_OFFSET(0x16F3F590)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_SHOWBACKITEMLISTDIALOG_OFFSET UNITYSDK_OFFSET(0x15E86B00)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_TICKRTROTATING_OFFSET UNITYSDK_OFFSET(0x16F401C0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_TRIGGERGAMEPADADDBTN_OFFSET UNITYSDK_OFFSET(0x15E85370)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_TRIGGERGAMEPADREDUCEBTN_OFFSET UNITYSDK_OFFSET(0x15E857A0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_TRIGGERSTARTWEAPONPERFORM_OFFSET UNITYSDK_OFFSET(0x16F3F8B0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15E86250)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F41240)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16F41020)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER__DOSETSTARUPCONSUME_B__49_1_OFFSET UNITYSDK_OFFSET(0x16F41330)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER__ONCLICKEQUIPSTARBTN_B__38_0_OFFSET UNITYSDK_OFFSET(0x16F412D0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER__ONCLICKEQUIPSTARBTN_B__38_1_OFFSET UNITYSDK_OFFSET(0x16F41290)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER__ONCLICKSPINFOBTN_B__74_0_OFFSET UNITYSDK_OFFSET(0x16F41540)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER__ONCLICKSPINFOBTN_B__74_1_OFFSET UNITYSDK_OFFSET(0x16F41570)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER__ONSTORYINFOBTNCLICKED_B__73_0_OFFSET UNITYSDK_OFFSET(0x16F41350)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER__TRIGGERSTARTWEAPONPERFORM_B__81_0_OFFSET UNITYSDK_OFFSET(0x16F415A0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16F416E0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x16F41770)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16F41820)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x16F41850)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16F418E0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16F418F0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16F41900)

namespace MoleMole
{
	inline static constexpr unsigned int UIEquipDevelopPopWindowController_TypeDefinitionIndex = 84128;

	class UIEquipDevelopPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Int32* StaticGet_SecondaryMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIEquipDevelopPopWindowController_TypeDefinitionIndex)->GetStaticField(0x117D0);
		}
		static ::System::Int32* StaticGet_BaseMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIEquipDevelopPopWindowController_TypeDefinitionIndex)->GetStaticField(0x117D4);
		}
		// static const ::System::String* LEVEL_UP_MATERIAL_EMPTY_TEXT_KEY; // 0x0
		// static const ::System::String* LEVEL_UP_MATERIAL_NOT_EMPTY_TEXT_KEY; // 0x0
		// static const ::System::Int32 MAX_BASE_PROP_COUNT = 0x1; // 0x0
		// static const ::System::Int32 MAX_PROPERTY_COUNT = 0x2; // 0x0
		// static const ::System::Int32 MAX_RANDOMPROPERTY_COUNT = 0x4; // 0x0
		// static const ::System::String* WEAPON_TRANSFORM_TRIGGER_NAME; // 0x0
		// static const ::System::Single WEAPON_TRANSFORM_TRIGGER_RESET_TIME; // 0x0
		::System::Int32 firstUnenoughID; // 0x318
		::System::Boolean isJumpToCompose; // 0x31C
		::System::Int32 jumpToItemID; // 0x320
		::System::Int32 jumpTabIndex; // 0x324
		::System::Int32 composeNeedCount; // 0x328
		::System::Boolean isSuggestUseMaterialConversion; // 0x32C
		::MoleMole::UIGeneralConversionTipsPopWindowContext* conversionContext; // 0x330
		::System::Boolean isSuggestUseMaterialConversionAndAdaptive; // 0x338
		::System::Boolean isSuggestUseAdaptiveMaterial; // 0x339
		::System::Boolean isUseAdaptiveMaterial; // 0x33A
		::System::Int32 useAdaptiveItemID; // 0x33C
		::System::Int32 useAdaptiveItemCount; // 0x340
		::Foundation::Coroutine::CoroutineHandle okBtnDisableHandle; // 0x344
		::System::Boolean isStarUping; // 0x348
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* hasMaterialDir; // 0x350
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* suggestMaterialDir; // 0x358
		::System::Int32 lastRandomPropertyCount; // 0x360
		::Class_2_79F6D62CE30E3F8E_88* _view; // 0x368
		::MoleMole::UIEquipDevelopContext* _context; // 0x370
		::Enum_3_B9002106B360C669 _curDevelopType; // 0x378
		::Class_1_0D6706375CDAAE8C* _curItemData; // 0x380
		::Class_2_2DFDAF0B881128C6* _equipmentDataProxy; // 0x388
		::Class_2_A63C194229EB6BF2* _equipmentModel; // 0x390
		::Class_2_03F4D9B3111E6159* _itemModel; // 0x398
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _levelUpMats; // 0x3A0
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _equipStarUpMats; // 0x3A8
		::System::Collections::Generic::List_1<::Class_1_C5FDB00B12827EE9*>* _equipBasePropertyItems; // 0x3B0
		::System::Collections::Generic::List_1<::Class_1_C5FDB00B12827EE9*>* _equipRandomPropertyItems; // 0x3B8
		::System::Collections::Generic::List_1<::MonoUILoopBGText*>* _loopTxtList; // 0x3C0
		::System::Single _allNeedCountpercent; // 0x3C8
		::System::Single _curCountPercent; // 0x3CC
		::System::Boolean _isDevelopedUp; // 0x3D0
		::System::Boolean _isEquipLevelUpMaxLevel; // 0x3D1
		::UnityEngine::Material* _processMaterial; // 0x3D8
		::System::Int32 curLeftExp; // 0x3E0
		::System::Int32 weaponToMaxLvNeedExp; // 0x3E4
		::System::Int32 equipToNextLvNeedExp; // 0x3E8
		::MoleMole::MonoGamepadCustomList* _monoGamepadCustomList; // 0x3F0
		::System::Int32 _gamepadAddSelectIndex; // 0x3F8
		::System::Int32 _gamepadReduceSelectIndex; // 0x3FC
		::System::Boolean _isGamepadAddBtnPressed; // 0x400
		::System::Boolean _isGamepadReduceBtnPressed; // 0x401
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* backItemList; // 0x408
		::System::Int32 _consumeItemID; // 0x410
		::Class_2_C2B4B123B5A9B78A* _iconRTUnit; // 0x418
		::System::Boolean hasWeaponFirstRefreshed; // 0x420
		::System::Boolean shouldShowSP; // 0x421
		::System::Boolean isSPInfoExpand; // 0x422
		::Foundation::Coroutine::CoroutineHandle _weaponTransformTriggerResetHandle; // 0x424
		::System::Single _weaponTransformTriggerRotateCounter; // 0x428
		::System::String* DefaultTipsTextTextMap; // 0x430

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void RefreshLevelUpInputKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_REFRESHLEVELUPINPUTKEY_OFFSET))(this);
		}

		::System::Void OnBeforeWorldUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONBEFOREWORLDUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void TriggerGamepadAddBtn(::System::Int32 selectIndex, ::MoleMole::ButtonPressType pressType, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::ButtonPressType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_TRIGGERGAMEPADADDBTN_OFFSET))(this, selectIndex, pressType, force);
		}

		::System::Void TriggerGamepadReduceBtn(::System::Int32 selectIndex, ::MoleMole::ButtonPressType pressType, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::ButtonPressType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_TRIGGERGAMEPADREDUCEBTN_OFFSET))(this, selectIndex, pressType, force);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnItemChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONITEMCHANGE_OFFSET))(this, args);
		}

		::System::Void OnWeaponLevelUpRsp(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONWEAPONLEVELUPRSP_OFFSET))(this, args);
		}

		::System::Void SetEquipDevelopContent(::Enum_3_B9002106B360C669 developType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_B9002106B360C669))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_SETEQUIPDEVELOPCONTENT_OFFSET))(this, developType);
		}

		::System::Void InitStarUpView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_INITSTARUPVIEW_OFFSET))(this);
		}

		::System::Void InitLevelUpView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_INITLEVELUPVIEW_OFFSET))(this);
		}

		::System::Void OnClickEquipStarBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONCLICKEQUIPSTARBTN_OFFSET))(this);
		}

		::System::Boolean GetHasSelectMaterial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_GETHASSELECTMATERIAL_OFFSET))(this);
		}

		::System::Void OnAutoBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONAUTOBTNCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnStarUpHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONSTARUPHANDLE_OFFSET))(this);
		}

		::System::Void OnStarUpAnimationFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONSTARUPANIMATIONFINISH_OFFSET))(this);
		}

		::System::Void RefreshStarUpView(::System::Single RefreshStarUpDelay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_REFRESHSTARUPVIEW_OFFSET))(this, RefreshStarUpDelay);
		}

		::System::Int32 GetRealAddedValue(::System::Int32 propertyId, ::System::Int32 finalRandValue, ::System::Int32 nextLevelRandValue)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_GETREALADDEDVALUE_OFFSET))(this, propertyId, finalRandValue, nextLevelRandValue);
		}

		::System::Void DoRefreshStarUpView(::System::Int32 rarity, ::System::UInt32 star, ::System::Int32 maxStar, ::System::UInt32 level, ::System::UInt32 maxLevel, ::System::UInt32 nextMaxLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_DOREFRESHSTARUPVIEW_OFFSET))(this, rarity, star, maxStar, level, maxLevel, nextMaxLevel);
		}

		::System::Void SetStarUpConsume(::System::Boolean isMaxStar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_SETSTARUPCONSUME_OFFSET))(this, isMaxStar);
		}

		::System::Void DoSetStarUpConsume(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* consumeInfo, ::System::Boolean isMaxStar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_DOSETSTARUPCONSUME_OFFSET))(this, consumeInfo, isMaxStar);
		}

		::System::Void OnClickEquipLevelBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONCLICKEQUIPLEVELBTN_OFFSET))(this);
		}

		::System::Void OnClickInfoBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONCLICKINFOBTN_OFFSET))(this);
		}

		::System::Void ShowBackItemListDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_SHOWBACKITEMLISTDIALOG_OFFSET))(this);
		}

		::System::Void ClearMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_CLEARMATERIAL_OFFSET))(this);
		}

		::System::Void RefreshLevelUpView(::System::Boolean isinit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_REFRESHLEVELUPVIEW_OFFSET))(this, isinit);
		}

		::System::Void CalEquipLeftExp(::System::Int32 maxlevel, ::System::Int32 rarity, ::System::Int32 curLevel, ::System::Int32 leftExp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_CALEQUIPLEFTEXP_OFFSET))(this, maxlevel, rarity, curLevel, leftExp);
		}

		::System::Void RefreshLevelUpViewForEquip(::System::Boolean isinit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_REFRESHLEVELUPVIEWFOREQUIP_OFFSET))(this, isinit);
		}

		::System::Void SetProgress(::System::Single cur, ::System::Single total, ::System::Int32 tarLv, ::System::Int32 nowLv, ::System::Int32 tarLvOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_SETPROGRESS_OFFSET))(this, cur, total, tarLv, nowLv, tarLvOffset);
		}

		::System::Void CalWeaponLeftExp(::System::Int32 maxlevel, ::System::Int32 rarity, ::System::Int32 curLevel, ::System::Int32 leftExp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_CALWEAPONLEFTEXP_OFFSET))(this, maxlevel, rarity, curLevel, leftExp);
		}

		::System::Void RefreshLevelUpViewForWeapon(::System::Boolean isinit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_REFRESHLEVELUPVIEWFORWEAPON_OFFSET))(this, isinit);
		}

		::System::Boolean IsLevelUpMaterialItemEmpty(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ISLEVELUPMATERIALITEMEMPTY_OFFSET))(this, index);
		}

		::System::Void OnLevelUpMatChanged(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONLEVELUPMATCHANGED_OFFSET))(this, index);
		}

		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_131*>* GetLevelupItems()
		{
			return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_131*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_GETLEVELUPITEMS_OFFSET))(this);
		}

		::System::Boolean SetLevelupConsume(::System::Boolean isenableClick, ::System::Boolean isinit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_SETLEVELUPCONSUME_OFFSET))(this, isenableClick, isinit);
		}

		::System::Int32 CalCurItemMax(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_CALCURITEMMAX_OFFSET))(this, index);
		}

		::System::Void GetSelectLevelUpMaterialExceptI(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* ret, ::System::Int32 exceptIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_GETSELECTLEVELUPMATERIALEXCEPTI_OFFSET))(this, ret, exceptIndex);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GetAllSelectLevelUpMaterial()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_GETALLSELECTLEVELUPMATERIAL_OFFSET))(this);
		}

		::System::Void OnClickConsumeIconBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONCLICKCONSUMEICONBTN_OFFSET))(this);
		}

		::System::Void OnClickConsoleCheckConsumeBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONCLICKCONSOLECHECKCONSUMEBTN_OFFSET))(this);
		}

		::System::Void ReAllocRTUnit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_REALLOCRTUNIT_OFFSET))(this);
		}

		::System::Void ReleaseRTUnit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_RELEASERTUNIT_OFFSET))(this);
		}

		::System::Void AllocRTUnit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ALLOCRTUNIT_OFFSET))(this);
		}

		::System::Void OnStoryInfoBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONSTORYINFOBTNCLICKED_OFFSET))(this);
		}

		::System::Void OnClickSPInfoBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONCLICKSPINFOBTN_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Boolean isRefreshRT)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this, isRefreshRT);
		}

		::System::Void RefreshViewForEquip(::System::Boolean isRefreshRT)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_REFRESHVIEWFOREQUIP_OFFSET))(this, isRefreshRT);
		}

		::System::Void RefreshViewForWeapon(::System::Boolean isRefreshRT, ::System::Boolean withOutProperty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_REFRESHVIEWFORWEAPON_OFFSET))(this, isRefreshRT, withOutProperty);
		}

		::System::Boolean ShouldWeaponShowSP(::Class_2_F7CAAD54879BD084* weaponData, ::Class_2_888734130AA1067E* weaponConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_F7CAAD54879BD084*, ::Class_2_888734130AA1067E*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_SHOULDWEAPONSHOWSP_OFFSET))(this, weaponData, weaponConfig);
		}

		::System::Void DoRefreshViewCommon(::System::Int32 templateID, ::Class_2_208CC9941471731A_131* itemConfig, ::System::UInt32 avatarUID, ::System::String* iconPath, ::System::Boolean isEquip, ::System::Boolean isRefreshRT)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_208CC9941471731A_131*, ::System::UInt32, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_DOREFRESHVIEWCOMMON_OFFSET))(this, templateID, itemConfig, avatarUID, iconPath, isEquip, isRefreshRT);
		}

		::System::Void OnWeaponRTLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONWEAPONRTLOADED_OFFSET))(this);
		}

		::System::Void TriggerStartWeaponPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_TRIGGERSTARTWEAPONPERFORM_OFFSET))(this);
		}

		::UnityEngine::Animator* GetWeaponRTAnimator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_GETWEAPONRTANIMATOR_OFFSET))(this);
		}

		::System::Void TickRTRotating()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_TICKRTROTATING_OFFSET))(this);
		}

		::System::Void OnEquipRTLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_ONEQUIPRTLOADED_OFFSET))(this);
		}

		::System::Void HandleZhenzhenWeaponStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER_HANDLEZHENZHENWEAPONSTART_OFFSET))(this);
		}

		::System::Void _OnClickEquipStarBtn_b__38_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER__ONCLICKEQUIPSTARBTN_B__38_1_OFFSET))(this);
		}

		::System::Void _OnClickEquipStarBtn_b__38_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER__ONCLICKEQUIPSTARBTN_B__38_0_OFFSET))(this);
		}

		::System::Void _DoSetStarUpConsume_b__49_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER__DOSETSTARUPCONSUME_B__49_1_OFFSET))(this);
		}

		::System::Void _OnStoryInfoBtnClicked_b__73_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER__ONSTORYINFOBTNCLICKED_B__73_0_OFFSET))(this);
		}

		::System::Void _OnClickSPInfoBtn_b__74_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER__ONCLICKSPINFOBTN_B__74_0_OFFSET))(this);
		}

		::System::Void _OnClickSPInfoBtn_b__74_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER__ONCLICKSPINFOBTN_B__74_1_OFFSET))(this);
		}

		::System::Void _TriggerStartWeaponPerform_b__81_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER__TRIGGERSTARTWEAPONPERFORM_B__81_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
