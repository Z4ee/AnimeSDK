#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_443A885B4E84B185.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatNPCLocation.h"
#include "unitysdk/MoleMole/UIBaseChatPlayController_IKRecord.h"
#include "unitysdk/MoleMole/UIBaseChatPlayController_PlayerTransformRecord.h"
#include "unitysdk/MoleMole/UIBaseChatPlayController_RecordFlag.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_086C0AADB113D5D4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1829288F4F4A624D;
class Class_1_2D5DADE6FF36AA79;
class Class_1_8F012562C33BCD0A;
class Class_1_BCE4AFAE9C733A0B;
class Class_1_EE305D2D4E363D9B;
class Class_2_A6A0C790093A8319;
class Class_2_CEC585D0736F3660;
class Class_3_F33F9DC5F4112336;
namespace MoleMole { class SpecialKeyValue; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::GalGame { class AttachEffectCfg; }
namespace MoleMole::GalGame { class DynamicObjectModifyActiveCfg; }
namespace MoleMole::GalGame { class LookIKCfg; }
namespace MoleMole::GalGame { class MainCityChatConditionNode; }
namespace MoleMole::GalGame { class MainCityChatTransitionDisplayItem; }
namespace MoleMole::GalGame { class TagBoolPair; }
namespace MoleMole::GalGame { class TagGroupBoolPair; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace miHoYoEmotion { class EmoSync; }

#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_FINISH_OFFSET UNITYSDK_OFFSET(0x18C04740)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETCANAUTONEXT_OFFSET UNITYSDK_OFFSET(0x18C04AC0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETCHATSYNCDATA_OFFSET UNITYSDK_OFFSET(0x18C07540)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETISRUNNINGSKIP_OFFSET UNITYSDK_OFFSET(0x18C048C0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETNPCTAGBYCHATCONFIGAVATARID_OFFSET UNITYSDK_OFFSET(0x18C06750)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETTALKEMOSYNC_OFFSET UNITYSDK_OFFSET(0x18C0A260)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETTALKENTITYBYNPCSUBID_OFFSET UNITYSDK_OFFSET(0x18C09460)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETTALKENTITY_OFFSET UNITYSDK_OFFSET(0x18C09210)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_GET_CAMERAWRAPPER_OFFSET UNITYSDK_OFFSET(0x18C04790)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x18C04730)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_GET_OPENCONTEXT_OFFSET UNITYSDK_OFFSET(0x18C04780)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_INITNPCIK_OFFSET UNITYSDK_OFFSET(0x18C04C70)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_ISINMAINCITY_OFFSET UNITYSDK_OFFSET(0x18C05410)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_MODIFYTIME_OFFSET UNITYSDK_OFFSET(0x18C07C70)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_ONNODERUN_OFFSET UNITYSDK_OFFSET(0x18C047B0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_OVERRIDENEARCLIPDIS_OFFSET UNITYSDK_OFFSET(0x18C070D0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x18C06B40)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_PLAYAVATARANIMATION_OFFSET UNITYSDK_OFFSET(0x18C068C0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_PLAYEMOSYNC_OFFSET UNITYSDK_OFFSET(0x18C0A3D0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_POSTFACIALANI_OFFSET UNITYSDK_OFFSET(0x18C0A890)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_POSTFACIALBUBBLE_OFFSET UNITYSDK_OFFSET(0x18C0ABF0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_PROCESSCHATIK_OFFSET UNITYSDK_OFFSET(0x18C05140)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_PROCESSCONDITION_OFFSET UNITYSDK_OFFSET(0x18C08D00)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_PRVCHECKSYNCINTERACTIONTOSERVER_OFFSET UNITYSDK_OFFSET(0x18C07860)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDDYNAMICOBJECTVISIBILITY_OFFSET UNITYSDK_OFFSET(0x18C072F0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDMEMBERIKOPERATION_OFFSET UNITYSDK_OFFSET(0x18C05490)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDNPCIKOPERATION_OFFSET UNITYSDK_OFFSET(0x18C050B0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDNPCVISIBILITY_OFFSET UNITYSDK_OFFSET(0x18C07270)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDPLAYERTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18C058B0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_RESTORENPCIK_OFFSET UNITYSDK_OFFSET(0x18C05710)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_RESTOREPLAYERTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18C05E30)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETANIMATORPARAM_OFFSET UNITYSDK_OFFSET(0x18C06E50)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETATTACHEFFECT_OFFSET UNITYSDK_OFFSET(0x18C06380)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETDYNAMICOBJECTVISIBLE_OFFSET UNITYSDK_OFFSET(0x18C08910)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETFACIALANIENTITYLISTIDLE_OFFSET UNITYSDK_OFFSET(0x18C0AB00)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETJUMP_OFFSET UNITYSDK_OFFSET(0x18C09150)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETNEXT_OFFSET UNITYSDK_OFFSET(0x18C08C90)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETNPC_OFFSET UNITYSDK_OFFSET(0x18C04BD0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETSPECIALS_OFFSET UNITYSDK_OFFSET(0x18C07370)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETTAGVISIBLE_OFFSET UNITYSDK_OFFSET(0x18C08130)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SET_CAMERAWRAPPER_OFFSET UNITYSDK_OFFSET(0x18C047A0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SKIPSTORYPLAY_OFFSET UNITYSDK_OFFSET(0x18C04950)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_STARTSKIPCHAT_OFFSET UNITYSDK_OFFSET(0x18C04800)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_STOPSKIPCHAT_OFFSET UNITYSDK_OFFSET(0x18C04860)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_TRYNOOPTIONSYNCINTERACTIONTOSERVER_OFFSET UNITYSDK_OFFSET(0x18C079A0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_TRYOPTIONSYNCINTERACTIONTOSERVER_OFFSET UNITYSDK_OFFSET(0x18C07590)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_UPDATESKIPSTATE_OFFSET UNITYSDK_OFFSET(0x18C04A70)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C0AE00)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseChatPlayController_TypeDefinitionIndex = 72966;

	class UIBaseChatPlayController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* SKIP_TALK_TRIGGER; // 0x0
		::System::Boolean _isFinish; // 0x318
		::Class_1_8F012562C33BCD0A* _chatNodePlayer; // 0x320
		::System::Collections::Generic::List_1<::MoleMole::UIBaseChatPlayController_IKRecord>* _ikRecordNpcTagList; // 0x328
		::System::Collections::Generic::List_1<::MoleMole::GalGame::LookIKCfg*>* _ikRecordMemberList; // 0x330
		::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::String*>* _participatorMap; // 0x338
		::MoleMole::UIBaseChatPlayController_PlayerTransformRecord _playerTransformRecord; // 0x340
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _avatarInfoDic; // 0x360
		::Class_2_CEC585D0736F3660* _chatRecordSyncData; // 0x368
		::Class_1_1829288F4F4A624D* storyPlayRecord; // 0x370
		::Class_1_BCE4AFAE9C733A0B* storyPlayHandler; // 0x378
		::System::Boolean Auto; // 0x380
		::MoleMole::UIMainCityChatPlayContext* _openContext; // 0x388
		::Class_1_EE305D2D4E363D9B* _CameraWrapper_k__BackingField; // 0x390
		::Foundation::AssetRequestHandle emoHandler; // 0x398
		::miHoYoEmotion::EmoSync* _curEmoSync; // 0x3B8
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _emoFacialAniEntityList; // 0x3C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_FINISH_OFFSET))(this);
		}

		::MoleMole::UIMainCityChatPlayContext* get_OpenContext()
		{
			return ((::MoleMole::UIMainCityChatPlayContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_GET_OPENCONTEXT_OFFSET))(this);
		}

		::Class_1_EE305D2D4E363D9B* get_CameraWrapper()
		{
			return ((::Class_1_EE305D2D4E363D9B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_GET_CAMERAWRAPPER_OFFSET))(this);
		}

		::System::Void set_CameraWrapper(::Class_1_EE305D2D4E363D9B* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EE305D2D4E363D9B*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SET_CAMERAWRAPPER_OFFSET))(this, value);
		}

		::System::Void OnNodeRun(::Class_1_2D5DADE6FF36AA79* node)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2D5DADE6FF36AA79*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_ONNODERUN_OFFSET))(this, node);
		}

		::System::Void StartSkipChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_STARTSKIPCHAT_OFFSET))(this);
		}

		::System::Void StopSkipChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_STOPSKIPCHAT_OFFSET))(this);
		}

		::System::Boolean GetIsRunningSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETISRUNNINGSKIP_OFFSET))(this);
		}

		::System::Void SkipStoryPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SKIPSTORYPLAY_OFFSET))(this);
		}

		::System::Void UpdateSkipState(::Class_1_2D5DADE6FF36AA79* node)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2D5DADE6FF36AA79*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_UPDATESKIPSTATE_OFFSET))(this, node);
		}

		::System::Boolean GetCanAutoNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETCANAUTONEXT_OFFSET))(this);
		}

		::System::Void SetNPC(::MoleMole::GalGame::MainCityChatNPCLocation location, ::System::Int32 avatarId, ::System::Boolean enter)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatNPCLocation, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETNPC_OFFSET))(this, location, avatarId, enter);
		}

		::System::Void InitNpcIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_INITNPCIK_OFFSET))(this);
		}

		::System::Void ProcessChatIK(::MoleMole::GalGame::LookIKCfg* Config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::LookIKCfg*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_PROCESSCHATIK_OFFSET))(this, Config);
		}

		::System::Void RecordNpcIKOperation(::System::Int32 npcTag, ::Enum_3_443A885B4E84B185 ikType, ::System::Boolean isPush)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_443A885B4E84B185, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDNPCIKOPERATION_OFFSET))(this, npcTag, ikType, isPush);
		}

		::System::Void RecordMemberIKOperation(::MoleMole::GalGame::LookIKCfg* ikNode)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::LookIKCfg*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDMEMBERIKOPERATION_OFFSET))(this, ikNode);
		}

		::System::Void RestoreNpcIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_RESTORENPCIK_OFFSET))(this);
		}

		::System::Void RecordPlayerTransform(::System::Boolean invalidScenePosition, ::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 rot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDPLAYERTRANSFORM_OFFSET))(this, invalidScenePosition, pos, rot);
		}

		::System::Void RestorePlayerTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_RESTOREPLAYERTRANSFORM_OFFSET))(this);
		}

		::System::Void SetAttachEffect(::MoleMole::GalGame::AttachEffectCfg* Cfg)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::AttachEffectCfg*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETATTACHEFFECT_OFFSET))(this, Cfg);
		}

		::System::Void PlayAvatarAnimation(::System::Int32 avatarID, ::System::String* mainCityObjectStateIdString)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_PLAYAVATARANIMATION_OFFSET))(this, avatarID, mainCityObjectStateIdString);
		}

		::System::Void PlayAnimation(::Class_3_F33F9DC5F4112336* component, ::System::String* mainCityObjectStateIdString)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_PLAYANIMATION_OFFSET))(this, component, mainCityObjectStateIdString);
		}

		::System::Void SetAnimatorParam(::UnityEngine::Animator* animator, ::System::String* paramName, ::System::String* paramType, ::System::String* paramValue)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETANIMATORPARAM_OFFSET))(this, animator, paramName, paramType, paramValue);
		}

		static ::System::Int32 GetNpcTagByChatConfigAvatarID(::System::Int32 avatarID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETNPCTAGBYCHATCONFIGAVATARID_OFFSET))(avatarID);
		}

		::System::Void OverrideNearClipDis(::System::Single dis)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_OVERRIDENEARCLIPDIS_OFFSET))(this, dis);
		}

		::System::Void RecordNpcVisibility(::System::Int32 tagID, ::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDNPCVISIBILITY_OFFSET))(this, tagID, visible);
		}

		::System::Void RecordDynamicObjectVisibility(::System::Int32 subID, ::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDDYNAMICOBJECTVISIBILITY_OFFSET))(this, subID, visible);
		}

		::System::Void SetSpecials(::System::Collections::Generic::List_1<::MoleMole::SpecialKeyValue*>* Specials)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::SpecialKeyValue*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETSPECIALS_OFFSET))(this, Specials);
		}

		::Class_2_CEC585D0736F3660* GetChatSyncData()
		{
			return ((::Class_2_CEC585D0736F3660*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETCHATSYNCDATA_OFFSET))(this);
		}

		::System::Void TryOptionSyncInteractionToServer(::System::Int32 optionIndex, ::MoleMole::GalGame::MainCityChatTransitionDisplayItem* displayItem, ::System::Action* afterSync)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::GalGame::MainCityChatTransitionDisplayItem*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_TRYOPTIONSYNCINTERACTIONTOSERVER_OFFSET))(this, optionIndex, displayItem, afterSync);
		}

		::System::Void TryNoOptionSyncInteractionToServer(::System::Action* afterSync)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_TRYNOOPTIONSYNCINTERACTIONTOSERVER_OFFSET))(this, afterSync);
		}

		::System::Boolean PrvCheckSyncInteractionToServer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_PRVCHECKSYNCINTERACTIONTOSERVER_OFFSET))(this);
		}

		::System::Void ModifyTime(::Struct_2_086C0AADB113D5D4 cfg)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_086C0AADB113D5D4))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_MODIFYTIME_OFFSET))(this, cfg);
		}

		::System::Boolean IsInMainCity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_ISINMAINCITY_OFFSET))(this);
		}

		::System::Void SetTagVisible(::System::Collections::Generic::List_1<::MoleMole::GalGame::TagBoolPair*>* Params, ::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupBoolPair*>* GroupParams, ::MoleMole::UIBaseChatPlayController_RecordFlag recordFlag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GalGame::TagBoolPair*>*, ::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupBoolPair*>*, ::MoleMole::UIBaseChatPlayController_RecordFlag))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETTAGVISIBLE_OFFSET))(this, Params, GroupParams, recordFlag);
		}

		::System::Void SetDynamicObjectVisible(::System::Collections::Generic::List_1<::MoleMole::GalGame::DynamicObjectModifyActiveCfg*>* DynamicObjectsSubID, ::MoleMole::UIBaseChatPlayController_RecordFlag recordFlag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GalGame::DynamicObjectModifyActiveCfg*>*, ::MoleMole::UIBaseChatPlayController_RecordFlag))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETDYNAMICOBJECTVISIBLE_OFFSET))(this, DynamicObjectsSubID, recordFlag);
		}

		::System::Void SetNext(::System::Int32 sectionIndex, ::System::Int32 subSectionIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETNEXT_OFFSET))(this, sectionIndex, subSectionIndex);
		}

		::System::Void ProcessCondition(::MoleMole::GalGame::MainCityChatConditionNode* cond)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatConditionNode*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_PROCESSCONDITION_OFFSET))(this, cond);
		}

		::System::Void SetJump(::Class_2_A6A0C790093A8319* jump)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A6A0C790093A8319*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETJUMP_OFFSET))(this, jump);
		}

		::MoleMole::Battle::Entity* GetTalkEntity(::System::Int32 speakerNpcTag, ::System::String* speakerMember, ::System::UInt32& entityID)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETTALKENTITY_OFFSET))(this, speakerNpcTag, speakerMember, entityID);
		}

		::MoleMole::Battle::Entity* GetTalkEntityByNpcSubID(::System::Int32 npcSubID, ::System::UInt32& entityID)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETTALKENTITYBYNPCSUBID_OFFSET))(this, npcSubID, entityID);
		}

		::miHoYoEmotion::EmoSync* GetTalkEmoSync(::System::Int32 speakerNpcTag, ::System::String* speakerMember, ::System::Int32 npcSubID, ::System::UInt32& entityID)
		{
			return ((::miHoYoEmotion::EmoSync*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETTALKEMOSYNC_OFFSET))(this, speakerNpcTag, speakerMember, npcSubID, entityID);
		}

		::System::Void PlayEmoSync(::miHoYoEmotion::EmoSync* emoSync, ::System::String* voiceKey, ::System::String* poseKey, ::System::String* facialKey)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::EmoSync*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_PLAYEMOSYNC_OFFSET))(this, emoSync, voiceKey, poseKey, facialKey);
		}

		::System::Void PostFacialAni(::MoleMole::Battle::Entity* entity, ::System::String* facialKey, ::System::Boolean isReset)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_POSTFACIALANI_OFFSET))(this, entity, facialKey, isReset);
		}

		::System::Void SetFacialAniEntityListIdle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETFACIALANIENTITYLISTIDLE_OFFSET))(this);
		}

		::System::Void PostFacialBubble(::MoleMole::Battle::Entity* entity, ::System::String* facialBubbleKey)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_POSTFACIALBUBBLE_OFFSET))(this, entity, facialBubbleKey);
		}
	};
}
