#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_49722073307230E6.h"
#include "unitysdk/Enum_3_D5C6B7155F87FB8F.h"
#include "unitysdk/Enum_3_DB663931210BBC27_48.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/BigSceneCommonSkillConfig.h"
#include "unitysdk/MoleMole/BigSceneMiscLogicSubSystem_StoryModeMonsterAdjustmentFlags.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_53CBFE47A73426AB.h"
#include "unitysdk/Struct_2_9E75F47F2670B678.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_28F0414D4F296993;
class Class_1_B7E341C5F1A6F199;
class Class_1_F84D85BE7187BFCA;
class Class_2_208CC9941471731A_963;
class Class_2_229B237862F47DF7;
class Class_2_3671DCF57496B272;
class Class_3_BE75AAF0F7C40C75;
namespace MoleMole { class BigSceneMiscLogicSubSystem_BigSceneCommonSkill; }
namespace MoleMole { class BigSceneMiscLogicSubSystem_DebugView; }
namespace MoleMole { class BigSceneMiscLogicSubSystem_HiddenRenderLayer; }
namespace MoleMole { class BigSceneMiscLogicSubSystem_TwoGroupsVisibility; }
namespace MoleMole { class MonoSceneGameObjectsSwitcher; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_4BBF2D747CC2DDFA;

#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ADDCOMMONSKILLRUNTIMETAG_OFFSET UNITYSDK_OFFSET(0x11450850)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ADDSKILL_OFFSET UNITYSDK_OFFSET(0x11450490)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_BIGSCENETELEPORTFADEOUTBEGIN_OFFSET UNITYSDK_OFFSET(0x1144B060)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_BIGSCENETELEPORTFADEOUTEND_OFFSET UNITYSDK_OFFSET(0x1144B240)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_CALLSIMPLEMOVETASKCALLBACK_OFFSET UNITYSDK_OFFSET(0x1144FCF0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_CHECKISCURRTRACKEDQUESTSTORYMODELOCKED_OFFSET UNITYSDK_OFFSET(0x1144B8D0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_CLEARHIDDENRENDERLAYERON_OFFSET UNITYSDK_OFFSET(0x1144A6E0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_CLEARTWOGROUPSVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1144A730)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_COMMONSKILLONAWAKE_OFFSET UNITYSDK_OFFSET(0x1144A160)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_COMMONSKILLONDESTROY_OFFSET UNITYSDK_OFFSET(0x1144A780)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_DISPATCHABILITYEVENT_OFFSET UNITYSDK_OFFSET(0x1144C090)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_DISPATCHGROUPABILITYEVENT_OFFSET UNITYSDK_OFFSET(0x1144C270)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ENTERBATTLESTATISTICS_OFFSET UNITYSDK_OFFSET(0x1144D170)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_EXITBATTLESTATISTICS_OFFSET UNITYSDK_OFFSET(0x1144D700)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_FLIPBATTLESTATISTICSWHENTEAMRELOAD_OFFSET UNITYSDK_OFFSET(0x1144F2D0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETACTIVATEDCOMMONSKILLTYPE_OFFSET UNITYSDK_OFFSET(0x11450A70)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETLOADINGPAGETIPSTITLEBYTRANSITIONID_OFFSET UNITYSDK_OFFSET(0x1144B440)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETMAXACCUMULATIONADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x1144BBA0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETPROPERTYADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x1144B660)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETSTORYMODEMONSTERADJUSTMENTFLAGS_OFFSET UNITYSDK_OFFSET(0x1144B600)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GET_LASTTELEPORTEVENT_OFFSET UNITYSDK_OFFSET(0x1144B420)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_HASINBATTLEENEMYMONSTERALIVE_OFFSET UNITYSDK_OFFSET(0x1144EE20)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONANYSIMPLEMOVETASKFINISHED_OFFSET UNITYSDK_OFFSET(0x1144DAA0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1144A0B0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1144A450)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONDYNAMICEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x1144DB40)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONENTITYENTERBATTLESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1144D880)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x1144CAF0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONTELEPORTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1144A820)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_POPHIDDENRENDERLAYERON_OFFSET UNITYSDK_OFFSET(0x1144FED0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_POPSCENEGAMEOBJECTSSWITCHER_OFFSET UNITYSDK_OFFSET(0x114502A0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_POPTWOGROUPSVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1144FFB0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_PUSHHIDDENRENDERLAYERON_OFFSET UNITYSDK_OFFSET(0x1144FE60)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_PUSHSCENEGAMEOBJECTSSWITCHER_OFFSET UNITYSDK_OFFSET(0x11450020)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_PUSHTWOGROUPSVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1144FF40)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REFRESHACTIVATEDSKILL_OFFSET UNITYSDK_OFFSET(0x11450790)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REGISTERABILITYEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x1144BE90)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REGISTERBASEEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x1144DED0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1144C4C0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REMOVECOMMONSKILLRUNTIMETAG_OFFSET UNITYSDK_OFFSET(0x114509F0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REMOVESIMPLEMOVETASKGRAPHCALLBACK_OFFSET UNITYSDK_OFFSET(0x1144F9C0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REMOVESKILL_OFFSET UNITYSDK_OFFSET(0x11450600)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SENDTELEPORTEVENT_OFFSET UNITYSDK_OFFSET(0x1144AA40)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SETSIMPLEMOVETASKGRAPHCALLBACK_OFFSET UNITYSDK_OFFSET(0x1144F810)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SET_LASTTELEPORTEVENT_OFFSET UNITYSDK_OFFSET(0x1144B430)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SHOWTELEPORTPOINTNAMETIP_OFFSET UNITYSDK_OFFSET(0x1144B500)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SPECIALCOOPUPLOADSTATISTICS_OFFSET UNITYSDK_OFFSET(0x1144F090)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_TRYSHOWTELEPORTPOINTNAMETIP_OFFSET UNITYSDK_OFFSET(0x1144A8D0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_UNREGISTERABILITYEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x1144C000)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_UNREGISTERBASEEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x1144E620)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1144C850)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x11450AD0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM__GENUPLOAD_OFFSET UNITYSDK_OFFSET(0x1144ED20)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM__SENDAVATARCHANGE_OFFSET UNITYSDK_OFFSET(0x1144BD50)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x11450EB0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11450F40)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x11450FD0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x11451060)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x114510F0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneMiscLogicSubSystem_TypeDefinitionIndex = 51411;

	class BigSceneMiscLogicSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::BigSceneMiscLogicSubSystem*>
	{
	public:
		// static const ::System::String* PassTimeRecordReasonEnterBattleStatistics; // 0x0
		::MoleMole::BigSceneMiscLogicSubSystem_TwoGroupsVisibility* _twoGroupsVisibility; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::BigSceneMiscLogicSubSystem_BigSceneCommonSkill*>* _skills; // 0x18
		::MoleMole::EntityHandle _localAvatar; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* SceneGameObjectsSwitcherStack; // 0x30
		::MoleMole::BigSceneMiscLogicSubSystem_HiddenRenderLayer* _hiddenRenderLayer; // 0x38
		::Class_1_4BBF2D747CC2DDFA<::System::UInt16, ::Struct_2_53CBFE47A73426AB>* _dynamicEventListenerMap; // 0x40
		::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTag>* _runtimeTags; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::ValueTuple_3<::Foundation::ViewObject::ViewObjectHandle, ::System::Int32, ::System::Action*>>* _simpleMoveTaskGraphCallbacks; // 0x50
		::System::Collections::Generic::List_1<::Class_1_28F0414D4F296993*>* _abilityEventListenerMap; // 0x58
		::MoleMole::BigSceneMiscLogicSubSystem_BigSceneCommonSkill* _activatedSkill; // 0x60
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _inBattleMonsters; // 0x68
		::System::Action_1<::Class_1_B7E341C5F1A6F199*>* _dynamicEventDelegate; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MonoSceneGameObjectsSwitcher*>* SceneGameObjectsSwitchers; // 0x78
		::MoleMole::BigSceneMiscLogicSubSystem_DebugView* _debugView; // 0x80
		::Struct_2_9E75F47F2670B678 _cachedEventMask; // 0x88
		::System::Int32 _teleportNewsBubbleTipID; // 0xC8
		::Struct_2_9E75F47F2670B678 _dynamicEventMask; // 0xD0
		::MoleMole::BigSceneMiscLogicSubSystem_StoryModeMonsterAdjustmentFlags _storyModeMonsterAdjustmentFlags; // 0x110
		::System::Boolean _isInBattle; // 0x112
		::System::ValueTuple_2<::Enum_3_49722073307230E6, ::System::Int32> _LastTeleportEvent_k__BackingField; // 0x114

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnTeleportCompleted(::Class_1_F84D85BE7187BFCA* teleportInstance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F84D85BE7187BFCA*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONTELEPORTCOMPLETED_OFFSET))(this, teleportInstance);
		}

		::System::Void BigSceneTeleportFadeOutBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_BIGSCENETELEPORTFADEOUTBEGIN_OFFSET))(this);
		}

		::System::Void BigSceneTeleportFadeOutEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_BIGSCENETELEPORTFADEOUTEND_OFFSET))(this);
		}

		::System::ValueTuple_2<::Enum_3_49722073307230E6, ::System::Int32> get_LastTeleportEvent()
		{
			return ((::System::ValueTuple_2<::Enum_3_49722073307230E6, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GET_LASTTELEPORTEVENT_OFFSET))(this);
		}

		::System::Void set_LastTeleportEvent(::System::ValueTuple_2<::Enum_3_49722073307230E6, ::System::Int32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::Enum_3_49722073307230E6, ::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SET_LASTTELEPORTEVENT_OFFSET))(this, value);
		}

		::System::Void SendTeleportEvent(::Enum_3_49722073307230E6 graphEvent, ::System::Int32 teleportID)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_49722073307230E6, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SENDTELEPORTEVENT_OFFSET))(this, graphEvent, teleportID);
		}

		::System::Void TryShowTeleportPointNameTip(::Class_1_F84D85BE7187BFCA* teleportInstance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F84D85BE7187BFCA*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_TRYSHOWTELEPORTPOINTNAMETIP_OFFSET))(this, teleportInstance);
		}

		static ::System::String* GetLoadingPageTipsTitleByTransitionID(::System::Int32 transitionID)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETLOADINGPAGETIPSTITLEBYTRANSITIONID_OFFSET))(transitionID);
		}

		static ::System::Void ShowTeleportPointNameTip(::System::Int32 tipID, ::System::String* teleportPointName)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SHOWTELEPORTPOINTNAMETIP_OFFSET))(tipID, teleportPointName);
		}

		::MoleMole::BigSceneMiscLogicSubSystem_StoryModeMonsterAdjustmentFlags GetStoryModeMonsterAdjustmentFlags(::System::Boolean reset)
		{
			return ((::MoleMole::BigSceneMiscLogicSubSystem_StoryModeMonsterAdjustmentFlags(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETSTORYMODEMONSTERADJUSTMENTFLAGS_OFFSET))(this, reset);
		}

		::System::Single GetPropertyAdjustment(::MoleMole::Config::BaseProperty property)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETPROPERTYADJUSTMENT_OFFSET))(this, property);
		}

		::System::Single GetMaxAccumulationAdjustment()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETMAXACCUMULATIONADJUSTMENT_OFFSET))(this);
		}

		static ::System::Boolean CheckIsCurrTrackedQuestStoryModeLocked(::Class_2_208CC9941471731A_963*& curPresetRule, ::System::Boolean isStrict)
		{
			return ((::System::Boolean(*)(::Class_2_208CC9941471731A_963*&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_CHECKISCURRTRACKEDQUESTSTORYMODELOCKED_OFFSET))(curPresetRule, isStrict);
		}

		::System::Void _SendAvatarChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM__SENDAVATARCHANGE_OFFSET))(this);
		}

		::System::Void RegisterAbilityEventListener(::Class_1_28F0414D4F296993* listener)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_28F0414D4F296993*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REGISTERABILITYEVENTLISTENER_OFFSET))(this, listener);
		}

		::System::Void UnregisterAbilityEventListener(::Class_1_28F0414D4F296993* listener)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_28F0414D4F296993*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_UNREGISTERABILITYEVENTLISTENER_OFFSET))(this, listener);
		}

		::System::Void DispatchAbilityEvent(::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_DISPATCHABILITYEVENT_OFFSET))(this, eventName);
		}

		::System::Void DispatchGroupAbilityEvent(::MoleMole::EntityHandle entity, ::Foundation::ViewObject::ViewObjectHandle viewObject, ::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::Foundation::ViewObject::ViewObjectHandle, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_DISPATCHGROUPABILITYEVENT_OFFSET))(this, entity, viewObject, eventName);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void OnDynamicEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONDYNAMICEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void RegisterBaseEventListener(::Struct_2_53CBFE47A73426AB listener)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_53CBFE47A73426AB))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REGISTERBASEEVENTLISTENER_OFFSET))(this, listener);
		}

		::System::Void UnregisterBaseEventListener(::Struct_2_53CBFE47A73426AB listener)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_53CBFE47A73426AB))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_UNREGISTERBASEEVENTLISTENER_OFFSET))(this, listener);
		}

		::System::Void EnterBattleStatistics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ENTERBATTLESTATISTICS_OFFSET))(this);
		}

		::System::Void ExitBattleStatistics(::System::Boolean avatarAllKilled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_EXITBATTLESTATISTICS_OFFSET))(this, avatarAllKilled);
		}

		::System::ValueTuple_2<::Class_3_BE75AAF0F7C40C75*, ::Enum_3_DB663931210BBC27_48> _GenUpload(::System::Boolean avatarAllKilled)
		{
			return ((::System::ValueTuple_2<::Class_3_BE75AAF0F7C40C75*, ::Enum_3_DB663931210BBC27_48>(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM__GENUPLOAD_OFFSET))(this, avatarAllKilled);
		}

		::System::Void SpecialCoopUploadStatistics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SPECIALCOOPUPLOADSTATISTICS_OFFSET))(this);
		}

		::System::Void FlipBattleStatisticsWhenTeamReload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_FLIPBATTLESTATISTICSWHENTEAMRELOAD_OFFSET))(this);
		}

		::System::Void OnEntityEnterBattleStateChanged(::Class_2_3671DCF57496B272* evtEnterBattleStateChange)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_3671DCF57496B272*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONENTITYENTERBATTLESTATECHANGED_OFFSET))(this, evtEnterBattleStateChange);
		}

		::System::Boolean HasInBattleEnemyMonsterAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_HASINBATTLEENEMYMONSTERALIVE_OFFSET))(this);
		}

		::System::Void SetSimpleMoveTaskGraphCallback(::Foundation::ViewObject::ViewObjectHandle graphVo, ::System::Int32 graphID, ::System::Object* task, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::Int32, ::System::Object*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SETSIMPLEMOVETASKGRAPHCALLBACK_OFFSET))(this, graphVo, graphID, task, callback);
		}

		::System::Void RemoveSimpleMoveTaskGraphCallback(::System::Int32 graphID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REMOVESIMPLEMOVETASKGRAPHCALLBACK_OFFSET))(this, graphID);
		}

		::System::Void CallSimpleMoveTaskCallback(::System::Object* task, ::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_CALLSIMPLEMOVETASKCALLBACK_OFFSET))(this, task, success);
		}

		::System::Void OnAnySimpleMoveTaskFinished(::Class_2_229B237862F47DF7* simpleMoveFinished)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_229B237862F47DF7*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONANYSIMPLEMOVETASKFINISHED_OFFSET))(this, simpleMoveFinished);
		}

		::System::Void PushHiddenRenderLayerOn(::System::UInt32 groupID, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_PUSHHIDDENRENDERLAYERON_OFFSET))(this, groupID, tag);
		}

		::System::Void PopHiddenRenderLayerOn(::System::UInt32 groupID, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_POPHIDDENRENDERLAYERON_OFFSET))(this, groupID, tag);
		}

		::System::Void ClearHiddenRenderLayerOn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_CLEARHIDDENRENDERLAYERON_OFFSET))(this);
		}

		::System::Void PushTwoGroupsVisibility(::System::UInt32 groupID, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_PUSHTWOGROUPSVISIBILITY_OFFSET))(this, groupID, tag);
		}

		::System::Void PopTwoGroupsVisibility(::System::UInt32 groupID, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_POPTWOGROUPSVISIBILITY_OFFSET))(this, groupID, tag);
		}

		::System::Void ClearTwoGroupsVisibility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_CLEARTWOGROUPSVISIBILITY_OFFSET))(this);
		}

		::System::Int32 PushSceneGameObjectsSwitcher(::System::String* key, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_PUSHSCENEGAMEOBJECTSSWITCHER_OFFSET))(this, key, index);
		}

		::System::Void PopSceneGameObjectsSwitcher(::System::Int32 pushIdx, ::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_POPSCENEGAMEOBJECTSSWITCHER_OFFSET))(this, pushIdx, key);
		}

		::System::Void AddSkill(::Foundation::Unreal::FGameplayTag tag, ::MoleMole::BigSceneCommonSkillConfig skill)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::MoleMole::BigSceneCommonSkillConfig))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ADDSKILL_OFFSET))(this, tag, skill);
		}

		::System::Void RemoveSkill(::Foundation::Unreal::FGameplayTag tag)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REMOVESKILL_OFFSET))(this, tag);
		}

		::System::Void RefreshActivatedSkill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REFRESHACTIVATEDSKILL_OFFSET))(this);
		}

		::System::Void CommonSkillOnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_COMMONSKILLONAWAKE_OFFSET))(this);
		}

		::System::Void CommonSkillOnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_COMMONSKILLONDESTROY_OFFSET))(this);
		}

		::System::Void AddCommonSkillRuntimeTag(::Foundation::Unreal::FGameplayTag tag)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ADDCOMMONSKILLRUNTIMETAG_OFFSET))(this, tag);
		}

		::System::Void RemoveCommonSkillRuntimeTag(::Foundation::Unreal::FGameplayTag tag)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REMOVECOMMONSKILLRUNTIMETAG_OFFSET))(this, tag);
		}

		::Enum_3_D5C6B7155F87FB8F GetActivatedCommonSkillType()
		{
			return ((::Enum_3_D5C6B7155F87FB8F(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETACTIVATEDCOMMONSKILLTYPE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void __base_UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
