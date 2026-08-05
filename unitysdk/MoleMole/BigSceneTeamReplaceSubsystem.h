#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

class Class_1_2BEAA93324417DF4;
class Class_1_B7E341C5F1A6F199;
class Class_2_1824EF69C8E376A3;
class Class_2_5E8E56AB26D3F10E_Class_1_73C31DDA126AE455;
class Class_2_5E8E56AB26D3F10E_Class_1_E2EAEB159D32F976;
class Class_2_F7CAAD54879BD084;
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_CHANGETEAMDATAS_OFFSET UNITYSDK_OFFSET(0x177B11A0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_CHECKNEEDREALODAVATAR_OFFSET UNITYSDK_OFFSET(0x177AFF50)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_GETAVATARPROPERTYMAP_OFFSET UNITYSDK_OFFSET(0x177B1850)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_GET_FORCEOPENTEAM_OFFSET UNITYSDK_OFFSET(0x177AEF20)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_GET_ISCUSTOMTEAM_OFFSET UNITYSDK_OFFSET(0x177AEF40)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_GET_SKIPLOADINGREPLACE_OFFSET UNITYSDK_OFFSET(0x177AEF60)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_HIDEBATTLEBUDDY_OFFSET UNITYSDK_OFFSET(0x177B2120)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_INITPREDATA_OFFSET UNITYSDK_OFFSET(0x177AF7A0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISAVATARAWAKENDIFFERENT_OFFSET UNITYSDK_OFFSET(0x177B0040)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISAVATARITEMDIFFERENT_OFFSET UNITYSDK_OFFSET(0x177B01F0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISAVATARSKINDIFFERENT_OFFSET UNITYSDK_OFFSET(0x177B0300)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISBUDDYITEMDIFFERENT_OFFSET UNITYSDK_OFFSET(0x177B00A0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISEQUIPMENDATASDIFFERENT_OFFSET UNITYSDK_OFFSET(0x177B0B90)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISEQUIPMENSUITDIFFERENT_OFFSET UNITYSDK_OFFSET(0x177B0410)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISPROPERTYDIFFERENT_OFFSET UNITYSDK_OFFSET(0x177B10D0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISWEAPONDATADIFFERENT_OFFSET UNITYSDK_OFFSET(0x177B0820)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x177B2420)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x177B1B00)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ONEVTLEVELREPLACETEAMAVATARCOMPLETE_OFFSET UNITYSDK_OFFSET(0x177B20D0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ONUIROLESELECTCHANGESTATE_OFFSET UNITYSDK_OFFSET(0x177AF490)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_PLAYMATEFFECTREPLACEFINISH_OFFSET UNITYSDK_OFFSET(0x177B2260)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x177AEF80)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_REGISTERSKIPLOADINGREPLACE_OFFSET UNITYSDK_OFFSET(0x177AF410)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_REGISTERUIEVENTNOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x177AF200)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_SET_FORCEOPENTEAM_OFFSET UNITYSDK_OFFSET(0x177AEF30)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_SET_ISCUSTOMTEAM_OFFSET UNITYSDK_OFFSET(0x177AEF50)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_SET_SKIPLOADINGREPLACE_OFFSET UNITYSDK_OFFSET(0x177AEF70)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_UNREGISTERSKIPLOADINGREPLACE_OFFSET UNITYSDK_OFFSET(0x177AF450)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x177B26C0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM__REGISTERUIEVENTNOTIFYTYPE_B__27_0_OFFSET UNITYSDK_OFFSET(0x177B2720)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM__REGISTERUIEVENTNOTIFYTYPE_B__27_1_OFFSET UNITYSDK_OFFSET(0x177B2740)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x177B2990)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x177B2A20)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x177B2AB0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneTeamReplaceSubsystem_TypeDefinitionIndex = 86921;

	class BigSceneTeamReplaceSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::BigSceneTeamReplaceSubsystem*>
	{
	public:
		// static const ::System::String* MuteLogicTimerTag; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_F7CAAD54879BD084*>* _preWeaponDatas; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_2_5E8E56AB26D3F10E_Class_1_73C31DDA126AE455*>*>* _preSuitDatas; // 0x18
		::Class_1_2BEAA93324417DF4* _generalEventCollection; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_5E8E56AB26D3F10E_Class_1_E2EAEB159D32F976*>* _preEquipmentDatas; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _avatarsAwakenChangeRecord; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _preAvatarSkinDatas; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>* _prePropertyMap; // 0x40
		::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* _preAvatarItemList; // 0x48
		::System::Boolean _forceCheckReload; // 0x50
		::System::Boolean _curIsMainUIHide; // 0x51
		::System::Boolean _IsCustomTeam_k__BackingField; // 0x52
		::System::Boolean _SkipLoadingReplace_k__BackingField; // 0x53
		::System::Boolean _ForceOpenTeam_k__BackingField; // 0x54
		::System::Int32 _preBuddyId; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ForceOpenTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_GET_FORCEOPENTEAM_OFFSET))(this);
		}

		::System::Void set_ForceOpenTeam(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_SET_FORCEOPENTEAM_OFFSET))(this, value);
		}

		::System::Boolean get_IsCustomTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_GET_ISCUSTOMTEAM_OFFSET))(this);
		}

		::System::Void set_IsCustomTeam(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_SET_ISCUSTOMTEAM_OFFSET))(this, value);
		}

		::System::Boolean get_SkipLoadingReplace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_GET_SKIPLOADINGREPLACE_OFFSET))(this);
		}

		::System::Void set_SkipLoadingReplace(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_SET_SKIPLOADINGREPLACE_OFFSET))(this, value);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void RegisterSkipLoadingReplace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_REGISTERSKIPLOADINGREPLACE_OFFSET))(this);
		}

		::System::Void UnregisterSkipLoadingReplace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_UNREGISTERSKIPLOADINGREPLACE_OFFSET))(this);
		}

		::System::Void RegisterUIEventNotifyType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_REGISTERUIEVENTNOTIFYTYPE_OFFSET))(this);
		}

		::System::Void OnUIRoleSelectChangeState(::System::Boolean mainUIHide)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ONUIROLESELECTCHANGESTATE_OFFSET))(this, mainUIHide);
		}

		::System::Void CheckNeedRealodAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_CHECKNEEDREALODAVATAR_OFFSET))(this);
		}

		::System::Boolean IsAvatarItemDifferent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISAVATARITEMDIFFERENT_OFFSET))(this);
		}

		::System::Boolean IsAvatarSkinDifferent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISAVATARSKINDIFFERENT_OFFSET))(this);
		}

		::System::Boolean IsAvatarAwakenDifferent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISAVATARAWAKENDIFFERENT_OFFSET))(this);
		}

		::System::Boolean IsBuddyItemDifferent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISBUDDYITEMDIFFERENT_OFFSET))(this);
		}

		::System::Boolean IsPropertyDifferent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISPROPERTYDIFFERENT_OFFSET))(this);
		}

		::System::Boolean IsEquipmenSuitDifferent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISEQUIPMENSUITDIFFERENT_OFFSET))(this);
		}

		::System::Boolean IsWeaponDataDifferent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISWEAPONDATADIFFERENT_OFFSET))(this);
		}

		::System::Boolean IsEquipmenDatasDifferent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISEQUIPMENDATASDIFFERENT_OFFSET))(this);
		}

		::System::Void ChangeTeamDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_CHANGETEAMDATAS_OFFSET))(this);
		}

		::System::Void InitPreData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_INITPREDATA_OFFSET))(this);
		}

		::System::Void GetAvatarPropertyMap(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>*& avatarPropertyMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_GETAVATARPROPERTYMAP_OFFSET))(this, avatarPropertyMap);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void OnEvtLevelReplaceTeamAvatarComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ONEVTLEVELREPLACETEAMAVATARCOMPLETE_OFFSET))(this);
		}

		::System::Void HideBattleBuddy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_HIDEBATTLEBUDDY_OFFSET))(this);
		}

		::System::Void PlayMatEffectReplaceFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_PLAYMATEFFECTREPLACEFINISH_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void _RegisterUIEventNotifyType_b__27_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM__REGISTERUIEVENTNOTIFYTYPE_B__27_0_OFFSET))(this, args);
		}

		::System::Void _RegisterUIEventNotifyType_b__27_1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM__REGISTERUIEVENTNOTIFYTYPE_B__27_1_OFFSET))(this, args);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
