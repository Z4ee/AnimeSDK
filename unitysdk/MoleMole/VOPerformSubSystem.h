#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/Enum_3_7609C87F8335DE37_4.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectMisc_ProjectileDrop.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/MoleMole/VOPerformSubSystem_CurtainSetInfo.h"
#include "unitysdk/MoleMole/VOPerformSubSystem_NpcNameShowInfo.h"
#include "unitysdk/MoleMole/VOPerformSubSystem_NpcNameShowTags.h"
#include "unitysdk/MoleMole/VOPerformSubSystem_VoTipInfo.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6;
class Class_1_B7E341C5F1A6F199;
namespace MoleMole { class VOPerformSubSystem_DropPerformRequest; }
namespace MoleMole { class VOPerformSubSystem_GraphSaveDataBase; }
namespace MoleMole { class VOPerformSubSystem_WarningGuidePointCameraViewChecker; }
namespace MoleMole { template <typename T> class VOPerformSubSystem_RefAction_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_VOPERFORMSUBSYSTEM_ADDBLACKCURTAIN_OFFSET UNITYSDK_OFFSET(0x13534A20)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_ADDPENDINGTIP_OFFSET UNITYSDK_OFFSET(0x13534E50)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_ADDTAGGRAPHNODEDATA_OFFSET UNITYSDK_OFFSET(0x135330C0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_ADDWARNINGGUIDEPOINT_OFFSET UNITYSDK_OFFSET(0x13531A60)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_CLEARALLDROPPERFORMS_OFFSET UNITYSDK_OFFSET(0x13532C90)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_CLEARALLWARNINGGUIDEPOINTS_OFFSET UNITYSDK_OFFSET(0x13532310)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_DELALLBLACKCURTAIN_OFFSET UNITYSDK_OFFSET(0x13534DA0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_DELBLACKCURTAIN_1_OFFSET UNITYSDK_OFFSET(0x13534CB0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_DELBLACKCURTAIN_OFFSET UNITYSDK_OFFSET(0x13534AF0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_DOFORCEREFRESHALLGUIDEPOSTARGET_OFFSET UNITYSDK_OFFSET(0x13539750)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_GET_ISTELEPORTING_OFFSET UNITYSDK_OFFSET(0x13539690)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_HANDLEWARNINGGUIDEPOINT_OFFSET UNITYSDK_OFFSET(0x135318D0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_HIDE_GUIDEPOSTARGET_OFFSET UNITYSDK_OFFSET(0x13538DE0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_ISCONTAINSNODEDATABYKEY_OFFSET UNITYSDK_OFFSET(0x13532D00)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_ISGUIDEPOSTARGETEXIST_OFFSET UNITYSDK_OFFSET(0x13539080)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_NPC_CLEARALLNAMEPANEL_OFFSET UNITYSDK_OFFSET(0x13536DE0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_NPC_GETVOCONFIGNAMESHOWTYPE_OFFSET UNITYSDK_OFFSET(0x13536930)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_NPC_HIDEBUBBLEBYVOCONFIGID_OFFSET UNITYSDK_OFFSET(0x13537410)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_NPC_HIDEICONBYVOCONFIGID_OFFSET UNITYSDK_OFFSET(0x13536AA0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_NPC_HIDENAMEBYENTITYID_OFFSET UNITYSDK_OFFSET(0x135379F0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_NPC_SHOWBUBBLEBYVOCONFIGID_OFFSET UNITYSDK_OFFSET(0x135371B0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_NPC_SHOWICONBYVOCONFIGID_1_OFFSET UNITYSDK_OFFSET(0x135367C0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_NPC_SHOWICONBYVOCONFIGID_OFFSET UNITYSDK_OFFSET(0x135365B0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_NPC_SHOWNAMEBYENTITYID_OFFSET UNITYSDK_OFFSET(0x135374F0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_NPC_SHOWNAMEBYVOCONFIGID_OFFSET UNITYSDK_OFFSET(0x13536200)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x135334C0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13533520)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_ONENTITYDESTROYED_WARNINGGUIDEPOINT_OFFSET UNITYSDK_OFFSET(0x13531400)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x13531390)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_ONTELEPORTFINISH_OFFSET UNITYSDK_OFFSET(0x13539700)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_ONTELEPORTSTARTED_OFFSET UNITYSDK_OFFSET(0x135396B0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13533600)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_QUERYTIPINFO_OFFSET UNITYSDK_OFFSET(0x13534FA0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_REGISTERWARNINGGUIDEPOINTLISTENER_OFFSET UNITYSDK_OFFSET(0x135314C0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_REMOVEALLBLACKCURTAINBYTRANSITION_OFFSET UNITYSDK_OFFSET(0x135341F0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_REMOVETAGGRAPHNODEDATA_OFFSET UNITYSDK_OFFSET(0x135333E0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_REMOVEWARNINGGUIDEPOINT_OFFSET UNITYSDK_OFFSET(0x13531F00)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_SETWARNINGGUIDEPOINTSTAGE_OFFSET UNITYSDK_OFFSET(0x13532140)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_SET_ISTELEPORTING_OFFSET UNITYSDK_OFFSET(0x135396A0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_SHOW_GUIDEPOSTARGETBYPOS_OFFSET UNITYSDK_OFFSET(0x135387F0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_SHOW_GUIDEPOSTARGET_OFFSET UNITYSDK_OFFSET(0x13538C70)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_SUBMITDROPPERFORM_OFFSET UNITYSDK_OFFSET(0x13532580)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_TRYGETGUIDEPOSTARGETROUTEINFO_OFFSET UNITYSDK_OFFSET(0x13539290)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_TRYGETTAGGRAPHNODEDATA_OFFSET UNITYSDK_OFFSET(0x135332D0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_TRYGETUNWALKGUIDEPOSTARGETROUTEINFO_OFFSET UNITYSDK_OFFSET(0x13539460)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_TRYREMOVEALLTIPINFO_OFFSET UNITYSDK_OFFSET(0x13535810)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_TRYREMOVETIPINFO_OFFSET UNITYSDK_OFFSET(0x13535390)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_TRYSPLIT_GUIDEPOS_OFFSET UNITYSDK_OFFSET(0x135386F0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_UNLOADSAVEDATASBYGROUPID_OFFSET UNITYSDK_OFFSET(0x13532DB0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_UNREGISTERWARNINGGUIDEPOINTLISTENER_OFFSET UNITYSDK_OFFSET(0x13531740)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_UPDATETIPINFO_OFFSET UNITYSDK_OFFSET(0x13535B80)
#define MOLEMOLE_VOPERFORMSUBSYSTEM__ATTACHRUNNINGDATA_OFFSET UNITYSDK_OFFSET(0x13537D40)
#define MOLEMOLE_VOPERFORMSUBSYSTEM__CLOSEBLACKCURTAIN_OFFSET UNITYSDK_OFFSET(0x135344F0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x13539980)
#define MOLEMOLE_VOPERFORMSUBSYSTEM__LOGERROR_OFFSET UNITYSDK_OFFSET(0x13538D90)
#define MOLEMOLE_VOPERFORMSUBSYSTEM__LOG_OFFSET UNITYSDK_OFFSET(0x13539930)
#define MOLEMOLE_VOPERFORMSUBSYSTEM__NPC_ADDDELAYQUEUE_1_OFFSET UNITYSDK_OFFSET(0x13537C50)
#define MOLEMOLE_VOPERFORMSUBSYSTEM__NPC_ADDDELAYQUEUE_OFFSET UNITYSDK_OFFSET(0x135364B0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM__OPENBLACKCURTAIN_OFFSET UNITYSDK_OFFSET(0x13534270)
#define MOLEMOLE_VOPERFORMSUBSYSTEM__OPERATENPCENTITYICONBYENTITYID_1_OFFSET UNITYSDK_OFFSET(0x13536B40)
#define MOLEMOLE_VOPERFORMSUBSYSTEM__OPERATENPCENTITYICONBYENTITYID_OFFSET UNITYSDK_OFFSET(0x13536700)
#define MOLEMOLE_VOPERFORMSUBSYSTEM__OPERATENPCENTITYNAMEBYCONFIG_OFFSET UNITYSDK_OFFSET(0x13536400)
#define MOLEMOLE_VOPERFORMSUBSYSTEM__OPERATENPCENTITYNAMEBYENTITY_OFFSET UNITYSDK_OFFSET(0x13537760)
#define MOLEMOLE_VOPERFORMSUBSYSTEM__OPERATE_GUIDEPOSTARGET_OFFSET UNITYSDK_OFFSET(0x13537F30)
#define MOLEMOLE_VOPERFORMSUBSYSTEM__REFRESHBLACKCURTAIN_OFFSET UNITYSDK_OFFSET(0x13534770)
#define MOLEMOLE_VOPERFORMSUBSYSTEM__SETBACK_OFFSET UNITYSDK_OFFSET(0x13535A80)
#define MOLEMOLE_VOPERFORMSUBSYSTEM__SHOW_GUIDEPOSTARGET_IMPL_OFFSET UNITYSDK_OFFSET(0x13538980)
#define MOLEMOLE_VOPERFORMSUBSYSTEM__TICKDELAYNPCNAMES_OFFSET UNITYSDK_OFFSET(0x13533A70)
#define MOLEMOLE_VOPERFORMSUBSYSTEM__TICKDROPPERFORM_OFFSET UNITYSDK_OFFSET(0x13532700)
#define MOLEMOLE_VOPERFORMSUBSYSTEM__TICKPENDINGTIP_OFFSET UNITYSDK_OFFSET(0x13533690)
#define MOLEMOLE_VOPERFORMSUBSYSTEM__TICKSPLITGUIDETARGETPOS_OFFSET UNITYSDK_OFFSET(0x13534080)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1353A020)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1353A0B0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x1353A140)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1353A1D0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___OPENBLACKCURTAIN_B__30_0_OFFSET UNITYSDK_OFFSET(0x13539D50)

namespace MoleMole
{
	inline static constexpr unsigned int VOPerformSubSystem_TypeDefinitionIndex = 60217;

	class VOPerformSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::VOPerformSubSystem*>
	{
	public:
		// static const ::System::String* WarningGuidePointStyleZenkov; // 0x0
		::System::Collections::Generic::List_1<::MoleMole::VOPerformSubSystem_VoTipInfo>* pendingTipList; // 0x10
		::MoleMole::VOPerformSubSystem_CurtainSetInfo _waitPendingCurtainSet; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::VOPerformSubSystem_GraphSaveDataBase*>* _saveDatas; // 0x30
		::System::Collections::Generic::List_1<::Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6*>* _splitGuideInfoList; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::VOPerformSubSystem_WarningGuidePointCameraViewChecker*>* _warningGuidePointEntities; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::VOPerformSubSystem_VoTipInfo>* handledTipList; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::VOPerformSubSystem_NpcNameShowInfo>* _npcCurrentNameShowType; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6*>* _targetGuideInfoMap; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::VOPerformSubSystem_NpcNameShowInfo>* _delayNpcNameCmdList; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::VOPerformSubSystem_DropPerformRequest*>* _activeDropPerforms; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::VOPerformSubSystem_CurtainSetInfo>* waitBlackCurtainList; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* _targetFocusIconMapResults; // 0x78
		::System::Int32 _tickIndex; // 0x80
		::System::Boolean _IsTeleporting_k__BackingField; // 0x84
		::System::Boolean _warningGuidePointListening; // 0x85
		::System::Int32 _lazyGuideTick; // 0x88
		::System::Int32 currentTipID; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void RegisterWarningGuidePointListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_REGISTERWARNINGGUIDEPOINTLISTENER_OFFSET))(this);
		}

		::System::Void UnRegisterWarningGuidePointListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_UNREGISTERWARNINGGUIDEPOINTLISTENER_OFFSET))(this);
		}

		::System::Void HandleWarningGuidePoint(::System::String* tag, ::System::Boolean isOpen, ::MoleMole::Battle::Entity* target, ::System::Boolean disableCameraAutoHide, ::Enum_3_7609C87F8335DE37_4 stage)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::MoleMole::Battle::Entity*, ::System::Boolean, ::Enum_3_7609C87F8335DE37_4))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_HANDLEWARNINGGUIDEPOINT_OFFSET))(this, tag, isOpen, target, disableCameraAutoHide, stage);
		}

		::System::Void AddWarningGuidePoint(::System::UInt32 entityId, ::System::String* style, ::System::Boolean disableCameraAutoHide, ::Enum_3_7609C87F8335DE37_4 stage)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Boolean, ::Enum_3_7609C87F8335DE37_4))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_ADDWARNINGGUIDEPOINT_OFFSET))(this, entityId, style, disableCameraAutoHide, stage);
		}

		::System::Void SetWarningGuidePointStage(::System::UInt32 entityId, ::Enum_3_7609C87F8335DE37_4 stage)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_7609C87F8335DE37_4))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_SETWARNINGGUIDEPOINTSTAGE_OFFSET))(this, entityId, stage);
		}

		::System::Void RemoveWarningGuidePoint(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_REMOVEWARNINGGUIDEPOINT_OFFSET))(this, entityId);
		}

		::System::Void ClearAllWarningGuidePoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_CLEARALLWARNINGGUIDEPOINTS_OFFSET))(this);
		}

		::System::Void OnEntityDestroyed_WarningGuidePoint(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_ONENTITYDESTROYED_WARNINGGUIDEPOINT_OFFSET))(this, entityId);
		}

		::System::Void SubmitDropPerform(::Foundation::ViewObject::GroupMemberIdentifier identifier, ::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 target, ::MoleMole::Config::ConfigViewObjectMisc_ProjectileDrop config)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::GroupMemberIdentifier, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Config::ConfigViewObjectMisc_ProjectileDrop))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_SUBMITDROPPERFORM_OFFSET))(this, identifier, origin, target, config);
		}

		::System::Void _TickDropPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM__TICKDROPPERFORM_OFFSET))(this);
		}

		::System::Void ClearAllDropPerforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_CLEARALLDROPPERFORMS_OFFSET))(this);
		}

		::System::Boolean IsContainsNodeDataByKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_ISCONTAINSNODEDATABYKEY_OFFSET))(this, key);
		}

		::System::Void UnloadSaveDatasByGroupId(::System::UInt32 groupId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_UNLOADSAVEDATASBYGROUPID_OFFSET))(this, groupId);
		}

		::System::Boolean AddTagGraphNodeData(::MoleMole::VOPerformSubSystem_GraphSaveDataBase* gameObject)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::VOPerformSubSystem_GraphSaveDataBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_ADDTAGGRAPHNODEDATA_OFFSET))(this, gameObject);
		}

		::System::Boolean TryGetTagGraphNodeData(::System::String* tagUniqueId, ::MoleMole::VOPerformSubSystem_GraphSaveDataBase*& gameObject)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::VOPerformSubSystem_GraphSaveDataBase*&))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_TRYGETTAGGRAPHNODEDATA_OFFSET))(this, tagUniqueId, gameObject);
		}

		::System::Void RemoveTagGraphNodeData(::System::String* tagUniqueId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_REMOVETAGGRAPHNODEDATA_OFFSET))(this, tagUniqueId);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void RemoveAllBlackCurtainByTransition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_REMOVEALLBLACKCURTAINBYTRANSITION_OFFSET))(this);
		}

		::System::Void _OpenBlackCurtain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM__OPENBLACKCURTAIN_OFFSET))(this);
		}

		::System::Void _CloseBlackCurtain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM__CLOSEBLACKCURTAIN_OFFSET))(this);
		}

		::System::Void _RefreshBlackCurtain(::System::Boolean isAdd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM__REFRESHBLACKCURTAIN_OFFSET))(this, isAdd);
		}

		::System::Int32 AddBlackCurtain(::System::String* curtainName, ::System::Int32 priority, ::System::Single duration)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_ADDBLACKCURTAIN_OFFSET))(this, curtainName, priority, duration);
		}

		::System::Void DelBlackCurtain(::System::String* curtainName, ::System::Int32 priority, ::System::Single upDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_DELBLACKCURTAIN_OFFSET))(this, curtainName, priority, upDuration);
		}

		::System::Void DelBlackCurtain_1(::System::Int32 curtainID, ::System::Single upDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_DELBLACKCURTAIN_1_OFFSET))(this, curtainID, upDuration);
		}

		::System::Void DelAllBlackCurtain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_DELALLBLACKCURTAIN_OFFSET))(this);
		}

		::System::Void AddPendingTip(::System::Int32 tipID, ::System::String* tipParam, ::System::String* tipTag, ::System::Collections::Generic::List_1<::System::String*>* tipParamList, ::System::Boolean showWhenMiddleTip)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_ADDPENDINGTIP_OFFSET))(this, tipID, tipParam, tipTag, tipParamList, showWhenMiddleTip);
		}

		::System::Boolean QueryTipInfo(::System::String* tipTag, ::MoleMole::VOPerformSubSystem_VoTipInfo& curTag)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::VOPerformSubSystem_VoTipInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_QUERYTIPINFO_OFFSET))(this, tipTag, curTag);
		}

		::System::Boolean TryRemoveTipInfo(::System::String* tipTag)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_TRYREMOVETIPINFO_OFFSET))(this, tipTag);
		}

		::System::Void TryRemoveAllTipInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_TRYREMOVEALLTIPINFO_OFFSET))(this);
		}

		::System::Void _SetBack(::System::Collections::Generic::List_1<::MoleMole::VOPerformSubSystem_VoTipInfo>* list, ::System::Int32 index, ::MoleMole::VOPerformSubSystem_VoTipInfo newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::VOPerformSubSystem_VoTipInfo>*, ::System::Int32, ::MoleMole::VOPerformSubSystem_VoTipInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM__SETBACK_OFFSET))(this, list, index, newValue);
		}

		::System::Boolean UpdateTipInfo(::System::String* tipTag, ::System::Int32 newTipID, ::System::String* newTipParam, ::System::Action* onSuccessFinish, ::System::Collections::Generic::List_1<::System::String*>* newTipParamList)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*, ::System::Action*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_UPDATETIPINFO_OFFSET))(this, tipTag, newTipID, newTipParam, onSuccessFinish, newTipParamList);
		}

		::System::Void _TickPendingTip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM__TICKPENDINGTIP_OFFSET))(this);
		}

		::System::Void Npc_ShowNameByVOConfigID(::System::String* configID, ::System::Boolean bindInteract)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_NPC_SHOWNAMEBYVOCONFIGID_OFFSET))(this, configID, bindInteract);
		}

		::System::Boolean Npc_ShowIconByVOConfigID(::System::String* configID, ::System::String* iconKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_NPC_SHOWICONBYVOCONFIGID_OFFSET))(this, configID, iconKey);
		}

		::System::Boolean Npc_ShowIconByVOConfigID_1(::System::String* configID, ::Foundation::AssetPath iconFullPath)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_NPC_SHOWICONBYVOCONFIGID_1_OFFSET))(this, configID, iconFullPath);
		}

		::System::Boolean Npc_GetVOConfigNameShowType(::System::String* configID, ::MoleMole::VOPerformSubSystem_NpcNameShowInfo& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::VOPerformSubSystem_NpcNameShowInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_NPC_GETVOCONFIGNAMESHOWTYPE_OFFSET))(this, configID, info);
		}

		::System::Void Npc_HideIconByVOConfigID(::System::String* configID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_NPC_HIDEICONBYVOCONFIGID_OFFSET))(this, configID);
		}

		::System::Void Npc_ClearAllNamePanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_NPC_CLEARALLNAMEPANEL_OFFSET))(this);
		}

		::System::Void Npc_ShowBubbleByVOConfigID(::System::Collections::Generic::List_1<::System::String*>* actorTags, ::System::Collections::Generic::List_1<::System::String*>* actorConfigIDs, ::System::Int32 performID, ::System::Single NPCHUDChatBubbleInterruptDistance, ::System::Single NPCHUDChatBubbleDestroyDistance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_NPC_SHOWBUBBLEBYVOCONFIGID_OFFSET))(this, actorTags, actorConfigIDs, performID, NPCHUDChatBubbleInterruptDistance, NPCHUDChatBubbleDestroyDistance);
		}

		::System::Void Npc_HideBubbleByVOConfigID(::System::String* mainActorConfigID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_NPC_HIDEBUBBLEBYVOCONFIGID_OFFSET))(this, mainActorConfigID);
		}

		::System::Void Npc_ShowNameByEntityID(::System::Int32 entityID, ::System::Boolean bindInteract)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_NPC_SHOWNAMEBYENTITYID_OFFSET))(this, entityID, bindInteract);
		}

		::System::Void Npc_HideNameByEntityID(::System::Int32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_NPC_HIDENAMEBYENTITYID_OFFSET))(this, entityID);
		}

		::System::Void _Npc_AddDelayQueue(::System::String* configID, ::MoleMole::VOPerformSubSystem_NpcNameShowTags tags, ::System::Boolean bindInteract, ::System::String* iconKey, ::Foundation::AssetPath iconFullPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::VOPerformSubSystem_NpcNameShowTags, ::System::Boolean, ::System::String*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM__NPC_ADDDELAYQUEUE_OFFSET))(this, configID, tags, bindInteract, iconKey, iconFullPath);
		}

		::System::Void _Npc_AddDelayQueue_1(::MoleMole::VOPerformSubSystem_NpcNameShowInfo cmd)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::VOPerformSubSystem_NpcNameShowInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM__NPC_ADDDELAYQUEUE_1_OFFSET))(this, cmd);
		}

		::System::Boolean _OperateNpcEntityIconByEntityID(::System::String* configID, ::System::String* key, ::Foundation::AssetPath fullPath, ::System::Boolean isShow)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::Foundation::AssetPath, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM__OPERATENPCENTITYICONBYENTITYID_OFFSET))(this, configID, key, fullPath, isShow);
		}

		::System::Boolean _OperateNpcEntityIconByEntityID_1(::System::UInt32 entityID, ::System::String* key, ::Foundation::AssetPath fullPath, ::System::Boolean isShow)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::Foundation::AssetPath, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM__OPERATENPCENTITYICONBYENTITYID_1_OFFSET))(this, entityID, key, fullPath, isShow);
		}

		::System::Boolean _OperateNpcEntityNameByConfig(::System::String* configID, ::System::Boolean isShow, ::System::Boolean bindInteract, ::Foundation::ViewObject::ViewObjectHandle& viewObjectHandle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM__OPERATENPCENTITYNAMEBYCONFIG_OFFSET))(this, configID, isShow, bindInteract, viewObjectHandle);
		}

		::System::Boolean _OperateNpcEntityNameByEntity(::MoleMole::EntityHandle targetEntity, ::System::Boolean isShow, ::System::Boolean bindInteract)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM__OPERATENPCENTITYNAMEBYENTITY_OFFSET))(this, targetEntity, isShow, bindInteract);
		}

		::System::Void _AttachRunningData(::System::UInt32 entityID, ::MoleMole::VOPerformSubSystem_RefAction_1<::MoleMole::VOPerformSubSystem_NpcNameShowInfo>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::VOPerformSubSystem_RefAction_1<::MoleMole::VOPerformSubSystem_NpcNameShowInfo>*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM__ATTACHRUNNINGDATA_OFFSET))(this, entityID, callback);
		}

		::System::Void _TickDelayNpcNames()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM__TICKDELAYNPCNAMES_OFFSET))(this);
		}

		::System::Void _TickSplitGuideTargetPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM__TICKSPLITGUIDETARGETPOS_OFFSET))(this);
		}

		::System::Boolean Show_GuidePosTargetByPos(::System::String* posID, ::UnityEngine::Vector3 pos, ::System::Single heightOffset, ::System::Boolean autoHide, ::System::Single hideRadius, ::System::String* splitStrategy, ::System::Object* guideUserData)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Single, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_SHOW_GUIDEPOSTARGETBYPOS_OFFSET))(this, posID, pos, heightOffset, autoHide, hideRadius, splitStrategy, guideUserData);
		}

		::System::Boolean Show_GuidePosTarget(::System::String* focusConfigID, ::System::Single heightOffset, ::System::Boolean autoHide, ::System::Single hideRadius, ::System::String* splitStrategy, ::System::Object* guideUserData)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Boolean, ::System::Single, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_SHOW_GUIDEPOSTARGET_OFFSET))(this, focusConfigID, heightOffset, autoHide, hideRadius, splitStrategy, guideUserData);
		}

		::System::Boolean _Show_GuidePosTarget_Impl(::MoleMole::VOPerformSubSystem_NpcNameShowInfo cmd)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::VOPerformSubSystem_NpcNameShowInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM__SHOW_GUIDEPOSTARGET_IMPL_OFFSET))(this, cmd);
		}

		::System::Boolean _Operate_GuidePosTarget(::MoleMole::VOPerformSubSystem_NpcNameShowInfo cmdParam)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::VOPerformSubSystem_NpcNameShowInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM__OPERATE_GUIDEPOSTARGET_OFFSET))(this, cmdParam);
		}

		::System::Void Hide_GuidePosTarget(::System::String* focusConfigID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_HIDE_GUIDEPOSTARGET_OFFSET))(this, focusConfigID);
		}

		::System::Boolean IsGuidePosTargetExist(::System::String* focusConfigID, ::System::Boolean isCheckWaitQueue)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_ISGUIDEPOSTARGETEXIST_OFFSET))(this, focusConfigID, isCheckWaitQueue);
		}

		::System::Boolean TryGetGuidePosTargetRouteInfo(::System::String* focusConfigID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& guidePointList, ::System::Int32& curGuidePointIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_TRYGETGUIDEPOSTARGETROUTEINFO_OFFSET))(this, focusConfigID, guidePointList, curGuidePointIndex);
		}

		::System::Boolean TryGetUnWalkGuidePosTargetRouteInfo(::System::String* focusConfigID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& guidePointList)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_TRYGETUNWALKGUIDEPOSTARGETROUTEINFO_OFFSET))(this, focusConfigID, guidePointList);
		}

		::System::Void TrySplit_GuidePos(::Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6* runtimeData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_TRYSPLIT_GUIDEPOS_OFFSET))(this, runtimeData);
		}

		::System::Boolean get_IsTeleporting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_GET_ISTELEPORTING_OFFSET))(this);
		}

		::System::Void set_IsTeleporting(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_SET_ISTELEPORTING_OFFSET))(this, value);
		}

		::System::Void OnTeleportStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_ONTELEPORTSTARTED_OFFSET))(this);
		}

		::System::Void OnTeleportFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_ONTELEPORTFINISH_OFFSET))(this);
		}

		::System::Void DoForceRefreshAllGuidePosTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_DOFORCEREFRESHALLGUIDEPOSTARGET_OFFSET))(this);
		}

		::System::Void _Log(::System::String* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM__LOG_OFFSET))(this, content);
		}

		::System::Void _LogError(::System::String* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM__LOGERROR_OFFSET))(this, content);
		}

		::System::Void __OpenBlackCurtain_b__30_0(::Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF reason)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___OPENBLACKCURTAIN_B__30_0_OFFSET))(this, reason);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
