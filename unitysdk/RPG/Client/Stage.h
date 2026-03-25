#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/BlockVisibleReason.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingBlockType.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemVisibleReason.h"
#include "unitysdk/RPG/GameCore/EntityLodTemplateName.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/StreamingLayerType.h"
#include "unitysdk/Struct_2_84DFD00216157EA7.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_260;
class Class_1_303D5A33D1401D59;
class Class_1_56FF45D7B2C55655;
class Class_1_777F514A924455D9;
class Class_1_7A6E49020D23C900;
class Class_1_FEDDFFE3165D2B06;
class Class_2_13E98E15113145AC;
class Class_2_5A5C70F7A3C39C00;
class Class_2_751108DFDC405F93;
class Class_2_7CFCF5679171877C;
namespace RPG::Client { class MapDef; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class BlockConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class StageAutoGenConfig; }
namespace RPG::GameCore { class StageConfig; }
namespace RPG::GameCore { class StagePrefabInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class ISet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::AI { class NavMeshData; }

#define RPG_CLIENT_STAGE_ACTIVEENVIRONMENT_OFFSET UNITYSDK_OFFSET(0xA4B9320)
#define RPG_CLIENT_STAGE_ADDENTITYSTREAMING_OFFSET UNITYSDK_OFFSET(0xA4B9960)
#define RPG_CLIENT_STAGE_ADDMONOEFFECTSTREAMING_OFFSET UNITYSDK_OFFSET(0xA4B97B0)
#define RPG_CLIENT_STAGE_ADDSTREAMINGJOBALLFINISHCALLBACKONCE_OFFSET UNITYSDK_OFFSET(0xA4B6860)
#define RPG_CLIENT_STAGE_ADDSTREAMINGSOURCE_1_OFFSET UNITYSDK_OFFSET(0xA4B7040)
#define RPG_CLIENT_STAGE_ADDSTREAMINGSOURCE_OFFSET UNITYSDK_OFFSET(0xA4B6FC0)
#define RPG_CLIENT_STAGE_CANCELSTREAMINGJOBALLFINISHCALLBACKONCE_OFFSET UNITYSDK_OFFSET(0xA4B68F0)
#define RPG_CLIENT_STAGE_CLEARADDITIONCENTERS_OFFSET UNITYSDK_OFFSET(0xA4B7140)
#define RPG_CLIENT_STAGE_CLEARSIDEEFFECT_OFFSET UNITYSDK_OFFSET(0xA4B8CA0)
#define RPG_CLIENT_STAGE_COLLECTBLOCKSBYTAG_1_OFFSET UNITYSDK_OFFSET(0xA4B62C0)
#define RPG_CLIENT_STAGE_COLLECTBLOCKSBYTAG_OFFSET UNITYSDK_OFFSET(0xA4B89F0)
#define RPG_CLIENT_STAGE_COLLECTSTREAMINGBLOCKBYNAMESET_OFFSET UNITYSDK_OFFSET(0xA4B8A60)
#define RPG_CLIENT_STAGE_DEBUGREPORTWHYNOTBATTLEAREALOADFINISH_OFFSET UNITYSDK_OFFSET(0xA4B8090)
#define RPG_CLIENT_STAGE_DEBUGSETAREADELTAPOSITION_OFFSET UNITYSDK_OFFSET(0xA4B66F0)
#define RPG_CLIENT_STAGE_DESTROY_OFFSET UNITYSDK_OFFSET(0xA4B8D80)
#define RPG_CLIENT_STAGE_ENABLEDYNAMICBLOCKENVPROFILEDATA_OFFSET UNITYSDK_OFFSET(0xA4BA670)
#define RPG_CLIENT_STAGE_ENABLESTREAMINGDEBUGSCRIPT_OFFSET UNITYSDK_OFFSET(0xA4BA560)
#define RPG_CLIENT_STAGE_ENDOFTICK_OFFSET UNITYSDK_OFFSET(0xA4B8510)
#define RPG_CLIENT_STAGE_FORCEACTIVEBLOCKSENTITY_OFFSET UNITYSDK_OFFSET(0xA4B8720)
#define RPG_CLIENT_STAGE_FORCEMONOEFFECTSTREAMINGUPDATE_OFFSET UNITYSDK_OFFSET(0xA4B98C0)
#define RPG_CLIENT_STAGE_FOREACHSTREAMINGBLOCKS_OFFSET UNITYSDK_OFFSET(0xA4B8AF0)
#define RPG_CLIENT_STAGE_GETALIASINSTANCEANDMARKDISABLESTREAMING_OFFSET UNITYSDK_OFFSET(0xA4B5C40)
#define RPG_CLIENT_STAGE_GETALIASINSTANCEANDMARK_OFFSET UNITYSDK_OFFSET(0xA4B9440)
#define RPG_CLIENT_STAGE_GETALIASITEMDATA_OFFSET UNITYSDK_OFFSET(0xA4B9580)
#define RPG_CLIENT_STAGE_GETALIASITEMGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA4B9660)
#define RPG_CLIENT_STAGE_GETBLOCKCONFIGS_OFFSET UNITYSDK_OFFSET(0xA4B8C20)
#define RPG_CLIENT_STAGE_GETBLOCKLIST_OFFSET UNITYSDK_OFFSET(0xA4B5B70)
#define RPG_CLIENT_STAGE_GETBLOCKNODECONFIGS_OFFSET UNITYSDK_OFFSET(0xA4B8C60)
#define RPG_CLIENT_STAGE_GETBLOCKSWITHOUTTAG_OFFSET UNITYSDK_OFFSET(0xA4B5930)
#define RPG_CLIENT_STAGE_GETJSONPATH_OFFSET UNITYSDK_OFFSET(0xA4B6330)
#define RPG_CLIENT_STAGE_GETPERSISTENTINSTOBJ_OFFSET UNITYSDK_OFFSET(0xA4B95F0)
#define RPG_CLIENT_STAGE_GETPERSISTENTTAGROOT_OFFSET UNITYSDK_OFFSET(0xA4B8990)
#define RPG_CLIENT_STAGE_GETRANGEENTITY_OFFSET UNITYSDK_OFFSET(0xA4B6770)
#define RPG_CLIENT_STAGE_GETREGIONPATH_OFFSET UNITYSDK_OFFSET(0xA4B6370)
#define RPG_CLIENT_STAGE_GETTRANSFORMTOOL_OFFSET UNITYSDK_OFFSET(0xA4BA430)
#define RPG_CLIENT_STAGE_GET_ACTIVESTAGE_OFFSET UNITYSDK_OFFSET(0xA4BAAD0)
#define RPG_CLIENT_STAGE_GET_HOYOTAGRUNTIMECONTAINER_OFFSET UNITYSDK_OFFSET(0xA4B6EF0)
#define RPG_CLIENT_STAGE_GET_MAPDEF_OFFSET UNITYSDK_OFFSET(0xA4BAA90)
#define RPG_CLIENT_STAGE_GET_OPENWORLD_OFFSET UNITYSDK_OFFSET(0xA4BA6D0)
#define RPG_CLIENT_STAGE_GET_STAGEAUTOGENCONFIG_OFFSET UNITYSDK_OFFSET(0xA4BAAB0)
#define RPG_CLIENT_STAGE_INACTIVEENVIROMENT_OFFSET UNITYSDK_OFFSET(0xA4B93B0)
#define RPG_CLIENT_STAGE_INITBATTLEAREA_OFFSET UNITYSDK_OFFSET(0xA4B7D10)
#define RPG_CLIENT_STAGE_INITBLOCKNODEPREFABINS_ALL_OFFSET UNITYSDK_OFFSET(0xA4B5BB0)
#define RPG_CLIENT_STAGE_INITOPENWORLD_OFFSET UNITYSDK_OFFSET(0xA4B7C00)
#define RPG_CLIENT_STAGE_INITSTAGEROOTOBJ_OFFSET UNITYSDK_OFFSET(0xA4B57D0)
#define RPG_CLIENT_STAGE_INVOKEUNITYGOLOGICRESETWITHTAMONO_OFFSET UNITYSDK_OFFSET(0xA4B8D30)
#define RPG_CLIENT_STAGE_ISBATTLEAREALOADFINISH_OFFSET UNITYSDK_OFFSET(0xA4B8000)
#define RPG_CLIENT_STAGE_ISSTAGEUSELIGHTV2_OFFSET UNITYSDK_OFFSET(0xA4B6DD0)
#define RPG_CLIENT_STAGE_ISSTREAMINGJOBFINISHED_OFFSET UNITYSDK_OFFSET(0xA4B7E90)
#define RPG_CLIENT_STAGE_ISSTREAMINGLOADFINISH_OFFSET UNITYSDK_OFFSET(0xA4B7E10)
#define RPG_CLIENT_STAGE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA4B8490)
#define RPG_CLIENT_STAGE_LOADAREA_OFFSET UNITYSDK_OFFSET(0xA4B6680)
#define RPG_CLIENT_STAGE_LOADBATTLEAREABLOCK_OFFSET UNITYSDK_OFFSET(0xA4B8B50)
#define RPG_CLIENT_STAGE_LOADBLOCKSASSETSALL_OFFSET UNITYSDK_OFFSET(0xA4B55B0)
#define RPG_CLIENT_STAGE_LOADBLOCKS_OFFSET UNITYSDK_OFFSET(0xA4B5640)
#define RPG_CLIENT_STAGE_LOAD_OFFSET UNITYSDK_OFFSET(0xA4B7320)
#define RPG_CLIENT_STAGE_LOCKMAINSTREAMINGSOURCE_OFFSET UNITYSDK_OFFSET(0xA4B71A0)
#define RPG_CLIENT_STAGE_ONENTERMAP_OFFSET UNITYSDK_OFFSET(0xA4B8150)
#define RPG_CLIENT_STAGE_ONMONOEFFECTPOSITIONCHANGED_OFFSET UNITYSDK_OFFSET(0xA4BA380)
#define RPG_CLIENT_STAGE_ONSTREAMINGLOADFINISH_OFFSET UNITYSDK_OFFSET(0xA4B80E0)
#define RPG_CLIENT_STAGE_PREINITOPENWORLD_OFFSET UNITYSDK_OFFSET(0xA4B7AF0)
#define RPG_CLIENT_STAGE_REMOVEADDITIONCENTER_OFFSET UNITYSDK_OFFSET(0xA4B70D0)
#define RPG_CLIENT_STAGE_REMOVEBLOCK_OFFSET UNITYSDK_OFFSET(0xA4B5D90)
#define RPG_CLIENT_STAGE_REMOVEENTITYSTREAMING_OFFSET UNITYSDK_OFFSET(0xA4B99D0)
#define RPG_CLIENT_STAGE_REMOVEMONOEFFECTSTREAMING_OFFSET UNITYSDK_OFFSET(0xA4B9810)
#define RPG_CLIENT_STAGE_RUNTIMEADDRENDERSTUB_1_OFFSET UNITYSDK_OFFSET(0xA4B6A60)
#define RPG_CLIENT_STAGE_RUNTIMEADDRENDERSTUB_OFFSET UNITYSDK_OFFSET(0xA4B6960)
#define RPG_CLIENT_STAGE_RUNTIMEADDSTREAMINGITEM_1_OFFSET UNITYSDK_OFFSET(0xA4B9B00)
#define RPG_CLIENT_STAGE_RUNTIMEADDSTREAMINGITEM_2_OFFSET UNITYSDK_OFFSET(0xA4B9FE0)
#define RPG_CLIENT_STAGE_RUNTIMEADDSTREAMINGITEM_OFFSET UNITYSDK_OFFSET(0xA4B9A30)
#define RPG_CLIENT_STAGE_RUNTIMEDYNAMICLOADOPTIONALBLOCK_OFFSET UNITYSDK_OFFSET(0xA4BA5A0)
#define RPG_CLIENT_STAGE_RUNTIMEDYNAMICREMOVEBLOCK_OFFSET UNITYSDK_OFFSET(0xA4BA610)
#define RPG_CLIENT_STAGE_RUNTIMELOADOPTIONALBLOCKSCONFIG_OFFSET UNITYSDK_OFFSET(0xA4B65B0)
#define RPG_CLIENT_STAGE_RUNTIMEREMOVERENDERSTUB_OFFSET UNITYSDK_OFFSET(0xA4B69F0)
#define RPG_CLIENT_STAGE_RUNTIMEREMOVESTREAMINGITEM_OFFSET UNITYSDK_OFFSET(0xA4BA1E0)
#define RPG_CLIENT_STAGE_RUNTIMESETSTREAMINGENABLE_OFFSET UNITYSDK_OFFSET(0xA4BA4F0)
#define RPG_CLIENT_STAGE_RUNTIMESETSTREAMINGITEMVISIBLE_OFFSET UNITYSDK_OFFSET(0xA4BA270)
#define RPG_CLIENT_STAGE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0xA4BAA20)
#define RPG_CLIENT_STAGE_SETADDITIONCENTER_OFFSET UNITYSDK_OFFSET(0xA4B6F50)
#define RPG_CLIENT_STAGE_SETALLBLOCKVISIBLE_OFFSET UNITYSDK_OFFSET(0xA4B6540)
#define RPG_CLIENT_STAGE_SETBLOCKFOCUSWITHNAMES_OFFSET UNITYSDK_OFFSET(0xA4B67F0)
#define RPG_CLIENT_STAGE_SETBLOCKFORCEHIDEEXCEPTNAMES_OFFSET UNITYSDK_OFFSET(0xA4B86B0)
#define RPG_CLIENT_STAGE_SETBLOCKFORCEHIDEEXCEPTTAGNAME_OFFSET UNITYSDK_OFFSET(0xA4B8640)
#define RPG_CLIENT_STAGE_SETBLOCKFORCEHLODWITHTAGS_OFFSET UNITYSDK_OFFSET(0xA4B85D0)
#define RPG_CLIENT_STAGE_SETBLOCKVISIBLEBYALIAS_OFFSET UNITYSDK_OFFSET(0xA4B64C0)
#define RPG_CLIENT_STAGE_SETBLOCKVISIBLEBYHOYOTAG_OFFSET UNITYSDK_OFFSET(0xA4B6440)
#define RPG_CLIENT_STAGE_SETBLOCKVISIBLEBYTAG_OFFSET UNITYSDK_OFFSET(0xA4B63C0)
#define RPG_CLIENT_STAGE_SETFORCESTREAMING_OFFSET UNITYSDK_OFFSET(0xA4BA3E0)
#define RPG_CLIENT_STAGE_SETLOADFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xA4B7D90)
#define RPG_CLIENT_STAGE_SETMAPDEF_OFFSET UNITYSDK_OFFSET(0xA4B7AA0)
#define RPG_CLIENT_STAGE_SETNAVMESHACTIVE_OFFSET UNITYSDK_OFFSET(0xA4BA930)
#define RPG_CLIENT_STAGE_SETUNLOADENABLE_OFFSET UNITYSDK_OFFSET(0xA4B9750)
#define RPG_CLIENT_STAGE_SET_ACTIVESTAGE_OFFSET UNITYSDK_OFFSET(0xA4BAAE0)
#define RPG_CLIENT_STAGE_SET_MAPDEF_OFFSET UNITYSDK_OFFSET(0xA4BAAA0)
#define RPG_CLIENT_STAGE_SET_STAGEAUTOGENCONFIG_OFFSET UNITYSDK_OFFSET(0xA4BAAC0)
#define RPG_CLIENT_STAGE_SHOWALLBLOCKS_OFFSET UNITYSDK_OFFSET(0xA4B8940)
#define RPG_CLIENT_STAGE_SHOWAREAONLY_OFFSET UNITYSDK_OFFSET(0xA4B6610)
#define RPG_CLIENT_STAGE_SYNCPLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0xA4BA860)
#define RPG_CLIENT_STAGE_TRYGETSTAGEEXCEPTIONDETAIL_OFFSET UNITYSDK_OFFSET(0xA4BA6E0)
#define RPG_CLIENT_STAGE_TRYREGISTERRENDERSTUBREBUILDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA4B96D0)
#define RPG_CLIENT_STAGE_UNLOADALLRESOURCE_OFFSET UNITYSDK_OFFSET(0xA4B8880)
#define RPG_CLIENT_STAGE_UNLOADBATTLEAREABLOCK_OFFSET UNITYSDK_OFFSET(0xA4B8580)
#define RPG_CLIENT_STAGE_UNLOADPERSISTENTRESOURCE_OFFSET UNITYSDK_OFFSET(0xA4B88F0)
#define RPG_CLIENT_STAGE_UNLOADSTREAMINGRESOURCE_OFFSET UNITYSDK_OFFSET(0xA4B8830)
#define RPG_CLIENT_STAGE_UNLOCKMAINSTREAMINGSOURCE_OFFSET UNITYSDK_OFFSET(0xA4B7270)
#define RPG_CLIENT_STAGE_UNMARKALIASINSTANCE_OFFSET UNITYSDK_OFFSET(0xA4B9500)
#define RPG_CLIENT_STAGE_UPDATEITEMLODTEMPLATE_OFFSET UNITYSDK_OFFSET(0xA4BA300)
#define RPG_CLIENT_STAGE_UPDATE_OFFSET UNITYSDK_OFFSET(0xA4B81A0)
#define RPG_CLIENT_STAGE_VISIBLEPCONLYBLOCK_OFFSET UNITYSDK_OFFSET(0xA4BA490)
#define RPG_CLIENT_STAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA4BAAF0)

namespace RPG::Client
{
	inline static constexpr unsigned int Stage_TypeDefinitionIndex = 56806;

	class Stage : public ::System::Object
	{
	public:
		::System::String* FloorID; // 0x10
		::System::String* _strStageDir; // 0x18
		::RPG::GameCore::StageConfig* StageConfig; // 0x20
		::Class_1_56FF45D7B2C55655* _OpenWorld; // 0x28
		::System::Action* _LoadFinishCallback; // 0x30
		::Class_2_13E98E15113145AC* _StageAssetLoader; // 0x38
		::System::Collections::Generic::List_1<::RPG::GameCore::BlockConfig*>* _FullBlockConfigList; // 0x40
		::System::Collections::Generic::List_1<::RPG::GameCore::BlockConfig*>* _blockConfigList; // 0x48
		::RPG::GameCore::StageAutoGenConfig* _StageAutoGenConfig_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::Class_1_FEDDFFE3165D2B06*>* _blockList; // 0x58
		::UnityEngine::GameObject* StageRootObj; // 0x60
		::System::String* _strJsonPath; // 0x68
		::System::String* _MonsterNavmeshDataPath; // 0x70
		::System::String* _NavmeshDataPath; // 0x78
		::System::Collections::Generic::HashSet_1<::System::Action*>* _StreamingJobAllFinishCallback; // 0x80
		::UnityEngine::AI::NavMeshData* _MonsterNavmeshData; // 0x88
		::RPG::Client::MapDef* _MapDef_k__BackingField; // 0x90
		::System::String* Name; // 0x98
		::UnityEngine::AI::NavMeshData* _NavmeshData; // 0xA0
		::System::Boolean IsPreload; // 0xA8
		::System::Boolean _ActiveStage_k__BackingField; // 0xA9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE__CTOR_OFFSET))(this);
		}

		::System::Void LoadBlocksAssetsAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_LOADBLOCKSASSETSALL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BlockConfig*>* LoadBlocks()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BlockConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_LOADBLOCKS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_FEDDFFE3165D2B06*>* GetBlocksWithoutTag(::System::String* strTagName)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_FEDDFFE3165D2B06*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETBLOCKSWITHOUTTAG_OFFSET))(this, strTagName);
		}

		::System::Collections::Generic::List_1<::Class_1_FEDDFFE3165D2B06*>* GetBlockList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_FEDDFFE3165D2B06*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETBLOCKLIST_OFFSET))(this);
		}

		::System::Void InitBlockNodePrefabIns_All()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_INITBLOCKNODEPREFABINS_ALL_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetAliasInstanceAndMarkDisableStreaming(::System::String* sBlockAlias, ::System::String* sPrefabAlias)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETALIASINSTANCEANDMARKDISABLESTREAMING_OFFSET))(this, sBlockAlias, sPrefabAlias);
		}

		::System::Void RemoveBlock(::System::Collections::Generic::List_1<::System::String*>* tags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_REMOVEBLOCK_OFFSET))(this, tags);
		}

		::System::String* GetJsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETJSONPATH_OFFSET))(this);
		}

		::System::String* GetRegionPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETREGIONPATH_OFFSET))(this);
		}

		::System::Void SetBlockVisibleByTag(::System::String* tag, ::System::Boolean visible, ::RPG::Client::OpenWorld::BlockVisibleReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETBLOCKVISIBLEBYTAG_OFFSET))(this, tag, visible, reason);
		}

		::System::Void SetBlockVisibleByHoyoTag(::System::String* tag, ::System::Boolean visible, ::RPG::Client::OpenWorld::BlockVisibleReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETBLOCKVISIBLEBYHOYOTAG_OFFSET))(this, tag, visible, reason);
		}

		::System::Void SetBlockVisibleByAlias(::System::String* alias, ::System::Boolean visible, ::RPG::Client::OpenWorld::BlockVisibleReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETBLOCKVISIBLEBYALIAS_OFFSET))(this, alias, visible, reason);
		}

		::System::Void SetAllBlockVisible(::System::Boolean visible, ::RPG::Client::OpenWorld::BlockVisibleReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETALLBLOCKVISIBLE_OFFSET))(this, visible, reason);
		}

		::System::Void RuntimeLoadOptionalBlocksConfig(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_RUNTIMELOADOPTIONALBLOCKSCONFIG_OFFSET))(this, path);
		}

		::System::Void ShowAreaOnly(::System::String* area)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SHOWAREAONLY_OFFSET))(this, area);
		}

		::System::Void LoadArea(::System::String* area, ::System::Boolean isLoad, ::System::Boolean isOnly)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_LOADAREA_OFFSET))(this, area, isLoad, isOnly);
		}

		::System::Void DebugSetAreaDeltaPosition(::System::String* area, ::UnityEngine::Vector3 deltaPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_DEBUGSETAREADELTAPOSITION_OFFSET))(this, area, deltaPos);
		}

		::System::Void GetRangeEntity(::UnityEngine::Rect queryRect, ::RPG::GameCore::EntityType entityType, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::RPG::GameCore::EntityType, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETRANGEENTITY_OFFSET))(this, queryRect, entityType, ret);
		}

		::System::Void SetBlockFocusWithNames(::System::Collections::Generic::ISet_1<::System::String*>* names, ::System::Boolean isFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ISet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETBLOCKFOCUSWITHNAMES_OFFSET))(this, names, isFocus);
		}

		::System::Void AddStreamingJobAllFinishCallbackOnce(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ADDSTREAMINGJOBALLFINISHCALLBACKONCE_OFFSET))(this, callback);
		}

		::System::Void CancelStreamingJobAllFinishCallbackOnce(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_CANCELSTREAMINGJOBALLFINISHCALLBACKONCE_OFFSET))(this, callback);
		}

		::RPG::Client::OpenWorld::StreamingItemData* RuntimeAddRenderStub(::System::String* blockAlias, ::RPG::GameCore::StagePrefabInfo* info, ::System::String* polymerPath, ::System::Boolean isSyncLoad)
		{
			return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID, ::System::String*, ::RPG::GameCore::StagePrefabInfo*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_RUNTIMEADDRENDERSTUB_OFFSET))(this, blockAlias, info, polymerPath, isSyncLoad);
		}

		::System::Void RuntimeRemoveRenderStub(::System::String* blockAlias, ::RPG::Client::OpenWorld::StreamingItemData* renderStub)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_RUNTIMEREMOVERENDERSTUB_OFFSET))(this, blockAlias, renderStub);
		}

		::RPG::Client::OpenWorld::StreamingItemData* RuntimeAddRenderStub_1(::System::String* blockAlias, ::System::String* polymerPath, ::System::String* instName, ::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 euler, ::UnityEngine::Vector3 scale, ::System::Boolean isSyncLoad)
		{
			return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_RUNTIMEADDRENDERSTUB_1_OFFSET))(this, blockAlias, polymerPath, instName, pos, euler, scale, isSyncLoad);
		}

		::System::Boolean IsStageUseLightV2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ISSTAGEUSELIGHTV2_OFFSET))(this);
		}

		::System::Void SetAdditionCenter(::System::String* centerName, ::RPG::GameCore::AnchorInfo* centerAnchor)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETADDITIONCENTER_OFFSET))(this, centerName, centerAnchor);
		}

		::System::Void AddStreamingSource(::System::String* sourceName, ::RPG::GameCore::AnchorInfo* anchorInfo, ::Class_1_7A6E49020D23C900* sourceType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::AnchorInfo*, ::Class_1_7A6E49020D23C900*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ADDSTREAMINGSOURCE_OFFSET))(this, sourceName, anchorInfo, sourceType);
		}

		::System::Void AddStreamingSource_1(::System::String* sourceName, ::RPG::GameCore::GameEntity* entity, ::Class_1_7A6E49020D23C900* sourceType, ::System::Boolean forceRefreshWorld)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::Class_1_7A6E49020D23C900*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ADDSTREAMINGSOURCE_1_OFFSET))(this, sourceName, entity, sourceType, forceRefreshWorld);
		}

		::System::Void RemoveAdditionCenter(::System::String* centerName, ::System::Boolean forceRefreshWorld)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_REMOVEADDITIONCENTER_OFFSET))(this, centerName, forceRefreshWorld);
		}

		::System::Void ClearAdditionCenters(::Class_1_7A6E49020D23C900* clearSourceType)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7A6E49020D23C900*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_CLEARADDITIONCENTERS_OFFSET))(this, clearSourceType);
		}

		::System::Void LockMainStreamingSource(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_LOCKMAINSTREAMINGSOURCE_OFFSET))(this, position);
		}

		::System::Void UnlockMainStreamingSource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_UNLOCKMAINSTREAMINGSOURCE_OFFSET))(this);
		}

		::System::Void InitStageRootObj()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_INITSTAGEROOTOBJ_OFFSET))(this);
		}

		::System::Void Load(::System::String* floorID, ::System::String* jsonPath, ::System::String* stageDir, ::System::String* navmeshPath, ::System::String* strNavmeshLargeMonsterDataPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_LOAD_OFFSET))(this, floorID, jsonPath, stageDir, navmeshPath, strNavmeshLargeMonsterDataPath);
		}

		::System::Void SetMapDef(::RPG::Client::MapDef* mapDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETMAPDEF_OFFSET))(this, mapDef);
		}

		::System::Void PreInitOpenWorld(::RPG::Client::MapDef* mapDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_PREINITOPENWORLD_OFFSET))(this, mapDef);
		}

		::System::Void InitOpenWorld(::Struct_2_84DFD00216157EA7 pCreateParam, ::System::Boolean onlyBattle)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_84DFD00216157EA7, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_INITOPENWORLD_OFFSET))(this, pCreateParam, onlyBattle);
		}

		::System::Void InitBattleArea(::Class_1_777F514A924455D9* battleAreaDef)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_777F514A924455D9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_INITBATTLEAREA_OFFSET))(this, battleAreaDef);
		}

		::System::Void SetLoadFinishCallback(::System::Action* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETLOADFINISHCALLBACK_OFFSET))(this, cb);
		}

		::System::Boolean IsStreamingLoadFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ISSTREAMINGLOADFINISH_OFFSET))(this);
		}

		::System::Boolean IsBattleAreaLoadFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ISBATTLEAREALOADFINISH_OFFSET))(this);
		}

		::System::Void DebugReportWhyNotBattleAreaLoadFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_DEBUGREPORTWHYNOTBATTLEAREALOADFINISH_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_260*>* OnStreamingLoadFinish()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_260*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ONSTREAMINGLOADFINISH_OFFSET))(this);
		}

		::System::Void OnEnterMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ONENTERMAP_OFFSET))(this);
		}

		::System::Void Update(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_UPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void LateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_LATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void EndOfTick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ENDOFTICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void UnloadBattleAreaBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_UNLOADBATTLEAREABLOCK_OFFSET))(this);
		}

		::System::Void SetBlockForceHLODWithTags(::System::Collections::Generic::List_1<::System::String*>* tags, ::System::Boolean isForceHLOD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETBLOCKFORCEHLODWITHTAGS_OFFSET))(this, tags, isForceHLOD);
		}

		::System::Void SetBlockForceHideExceptTagName(::System::String* tagName, ::System::Boolean isForceHide)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETBLOCKFORCEHIDEEXCEPTTAGNAME_OFFSET))(this, tagName, isForceHide);
		}

		::System::Void SetBlockForceHideExceptNames(::System::Collections::Generic::ISet_1<::System::String*>* names, ::System::Boolean isForceHide)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ISet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETBLOCKFORCEHIDEEXCEPTNAMES_OFFSET))(this, names, isForceHide);
		}

		::System::Void ForceActiveBlocksEntity(::System::Collections::Generic::ISet_1<::System::String*>* names, ::System::Boolean isForceActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ISet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_FORCEACTIVEBLOCKSENTITY_OFFSET))(this, names, isForceActive);
		}

		::System::Void UnloadStreamingResource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_UNLOADSTREAMINGRESOURCE_OFFSET))(this);
		}

		::System::Void UnloadAllResource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_UNLOADALLRESOURCE_OFFSET))(this);
		}

		::System::Void UnloadPersistentResource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_UNLOADPERSISTENTRESOURCE_OFFSET))(this);
		}

		::System::Void ShowAllBlocks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SHOWALLBLOCKS_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetPersistentTagRoot(::System::String* tag_name)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETPERSISTENTTAGROOT_OFFSET))(this, tag_name);
		}

		::System::Void CollectBlocksByTag(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* collections, ::System::String* tag_name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_COLLECTBLOCKSBYTAG_OFFSET))(this, collections, tag_name);
		}

		::System::Void CollectStreamingBlockByNameSet(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* collections, ::System::Collections::Generic::ISet_1<::System::String*>* blockNameSet, ::System::Boolean reverse, ::System::Boolean includeBattleArea)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Collections::Generic::ISet_1<::System::String*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_COLLECTSTREAMINGBLOCKBYNAMESET_OFFSET))(this, collections, blockNameSet, reverse, includeBattleArea);
		}

		::System::Void ForeachStreamingBlocks(::System::Action_1<::Class_1_303D5A33D1401D59*>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_303D5A33D1401D59*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_FOREACHSTREAMINGBLOCKS_OFFSET))(this, action);
		}

		::System::Void CollectBlocksByTag_1(::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* collections, ::System::String* tag_name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_COLLECTBLOCKSBYTAG_1_OFFSET))(this, collections, tag_name);
		}

		::System::Void LoadBattleAreaBlock(::System::String* sBattleTag, ::System::Action* fAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_LOADBATTLEAREABLOCK_OFFSET))(this, sBattleTag, fAction);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BlockConfig*>* GetBlockConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BlockConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETBLOCKCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BlockConfig*>* GetBlockNodeConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BlockConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETBLOCKNODECONFIGS_OFFSET))(this);
		}

		::System::Void ClearSideEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_CLEARSIDEEFFECT_OFFSET))(this);
		}

		::System::Void InvokeUnityGoLogicResetWithTAMono()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_INVOKEUNITYGOLOGICRESETWITHTAMONO_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_DESTROY_OFFSET))(this);
		}

		::System::Void ActiveEnvironment(::UnityEngine::GameObject* env_Go, ::System::Int32 blockIndex, ::System::Int32 envIndex, ::RPG::Client::OpenWorld::StreamingBlockType blockType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::RPG::Client::OpenWorld::StreamingBlockType))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ACTIVEENVIRONMENT_OFFSET))(this, env_Go, blockIndex, envIndex, blockType);
		}

		::System::Void InActiveEnviroment(::UnityEngine::GameObject* env_Go, ::System::Int32 blockIndex, ::System::Int32 envIndex, ::RPG::Client::OpenWorld::StreamingBlockType blockType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::RPG::Client::OpenWorld::StreamingBlockType))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_INACTIVEENVIROMENT_OFFSET))(this, env_Go, blockIndex, envIndex, blockType);
		}

		::UnityEngine::GameObject* GetAliasInstanceAndMark(::System::String* sBlockAlias, ::System::String* sPrefabAlias, ::System::Boolean bForceSyncLoad, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* loaded_callback, ::System::Boolean needLockInstance)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETALIASINSTANCEANDMARK_OFFSET))(this, sBlockAlias, sPrefabAlias, bForceSyncLoad, loaded_callback, needLockInstance);
		}

		::System::Void UnMarkAliasInstance(::System::String* sBlockAlias, ::System::String* sPrefabAlias, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* loaded_callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_UNMARKALIASINSTANCE_OFFSET))(this, sBlockAlias, sPrefabAlias, loaded_callback);
		}

		::RPG::Client::OpenWorld::StreamingItemData* GetAliasItemData(::System::String* sBlockAlias, ::System::String* sPrefabAlias)
		{
			return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETALIASITEMDATA_OFFSET))(this, sBlockAlias, sPrefabAlias);
		}

		::UnityEngine::GameObject* GetPersistentInstObj(::System::String* blockName, ::System::String* objName)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETPERSISTENTINSTOBJ_OFFSET))(this, blockName, objName);
		}

		::UnityEngine::GameObject* GetAliasItemGameObject(::System::String* sBlockAlias, ::System::String* sPrefabAlias)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETALIASITEMGAMEOBJECT_OFFSET))(this, sBlockAlias, sPrefabAlias);
		}

		::System::Boolean TryRegisterRenderStubRebuildCallback(::RPG::Client::OpenWorld::StreamingItemData* handler, ::System::Action_1<::RPG::Client::OpenWorld::StreamingItemData*>* cb, ::System::Boolean register_)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_1<::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_TRYREGISTERRENDERSTUBREBUILDCALLBACK_OFFSET))(this, handler, cb, register_);
		}

		::System::Void SetUnloadEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETUNLOADENABLE_OFFSET))(this, enable);
		}

		::System::Boolean IsStreamingJobFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ISSTREAMINGJOBFINISHED_OFFSET))(this);
		}

		::System::Boolean AddMonoEffectStreaming(::Class_2_7CFCF5679171877C* pCmpt)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_7CFCF5679171877C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ADDMONOEFFECTSTREAMING_OFFSET))(this, pCmpt);
		}

		::System::Void RemoveMonoEffectStreaming(::Class_2_7CFCF5679171877C* pCmpt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_7CFCF5679171877C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_REMOVEMONOEFFECTSTREAMING_OFFSET))(this, pCmpt);
		}

		::System::Void ForceMonoEffectStreamingUpdate(::Class_2_7CFCF5679171877C* pCmpt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_7CFCF5679171877C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_FORCEMONOEFFECTSTREAMINGUPDATE_OFFSET))(this, pCmpt);
		}

		::System::Boolean AddEntityStreaming(::Class_2_751108DFDC405F93* pCmpt, ::System::Boolean isMoveable)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_751108DFDC405F93*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ADDENTITYSTREAMING_OFFSET))(this, pCmpt, isMoveable);
		}

		::System::Void RemoveEntityStreaming(::Class_2_751108DFDC405F93* pCmpt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_751108DFDC405F93*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_REMOVEENTITYSTREAMING_OFFSET))(this, pCmpt);
		}

		::RPG::Client::OpenWorld::StreamingItemData* RuntimeAddStreamingItem(::UnityEngine::GameObject* obj, ::RPG::GameCore::GameEntity* entity, ::UnityEngine::Vector3 localPosition, ::UnityEngine::Vector3 localEulerAngles, ::UnityEngine::GameObject* customParent)
		{
			return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_RUNTIMEADDSTREAMINGITEM_OFFSET))(this, obj, entity, localPosition, localEulerAngles, customParent);
		}

		::RPG::Client::OpenWorld::StreamingItemData* RuntimeAddStreamingItem_1(::RPG::GameCore::StagePrefabInfo* prefabInfo, ::RPG::GameCore::GameEntity* entity, ::UnityEngine::GameObject* customParent, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* loadedCallback, ::System::Action_3<::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* lodSwitchCallback, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* unloadedCallback, ::System::String* debugName, ::System::Boolean invisibleWhenInit, ::RPG::Client::OpenWorld::StreamingItemVisibleReason invisibleReason, ::System::Boolean isSyncLoad)
		{
			return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID, ::RPG::GameCore::StagePrefabInfo*, ::RPG::GameCore::GameEntity*, ::UnityEngine::GameObject*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Action_3<::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemVisibleReason, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_RUNTIMEADDSTREAMINGITEM_1_OFFSET))(this, prefabInfo, entity, customParent, loadedCallback, lodSwitchCallback, unloadedCallback, debugName, invisibleWhenInit, invisibleReason, isSyncLoad);
		}

		::RPG::Client::OpenWorld::StreamingItemData* RuntimeAddStreamingItem_2(::System::String* assetPath, ::UnityEngine::Vector3 localPosition, ::System::Nullable_1<::UnityEngine::Vector3> localEulerAngles, ::RPG::GameCore::GameEntity* entity, ::UnityEngine::GameObject* customParent, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* loadedCallback, ::System::Action_3<::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* lodSwitchCallback, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* unloadedCallback, ::System::String* debugName, ::System::Boolean isSyncLoad)
		{
			return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Vector3>, ::RPG::GameCore::GameEntity*, ::UnityEngine::GameObject*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Action_3<::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_RUNTIMEADDSTREAMINGITEM_2_OFFSET))(this, assetPath, localPosition, localEulerAngles, entity, customParent, loadedCallback, lodSwitchCallback, unloadedCallback, debugName, isSyncLoad);
		}

		::System::Void RuntimeRemoveStreamingItem(::RPG::Client::OpenWorld::StreamingItemData* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_RUNTIMEREMOVESTREAMINGITEM_OFFSET))(this, item);
		}

		::System::Void RuntimeSetStreamingItemVisible(::RPG::Client::OpenWorld::StreamingItemData* item, ::System::Boolean visible, ::RPG::Client::OpenWorld::StreamingItemVisibleReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_RUNTIMESETSTREAMINGITEMVISIBLE_OFFSET))(this, item, visible, reason);
		}

		::System::Void UpdateItemLodTemplate(::Class_2_5A5C70F7A3C39C00* item, ::RPG::GameCore::EntityLodTemplateName templateName)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_5A5C70F7A3C39C00*, ::RPG::GameCore::EntityLodTemplateName))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_UPDATEITEMLODTEMPLATE_OFFSET))(this, item, templateName);
		}

		::System::Void OnMonoEffectPositionChanged(::Class_2_7CFCF5679171877C* cmpt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_7CFCF5679171877C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ONMONOEFFECTPOSITIONCHANGED_OFFSET))(this, cmpt);
		}

		::System::Void SetForceStreaming()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETFORCESTREAMING_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetTransformTool()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETTRANSFORMTOOL_OFFSET))(this);
		}

		::System::Void VisiblePcOnlyBlock(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_VISIBLEPCONLYBLOCK_OFFSET))(this, visible);
		}

		::System::Void RuntimeSetStreamingEnable(::System::Boolean enable, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::StreamingLayerType>* withoutSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::StreamingLayerType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_RUNTIMESETSTREAMINGENABLE_OFFSET))(this, enable, withoutSet);
		}

		::System::Void EnableStreamingDebugScript()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ENABLESTREAMINGDEBUGSCRIPT_OFFSET))(this);
		}

		::System::Void RuntimeDynamicLoadOptionalBlock(::System::String* key, ::System::Boolean isRemoveExist)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_RUNTIMEDYNAMICLOADOPTIONALBLOCK_OFFSET))(this, key, isRemoveExist);
		}

		::System::Void RuntimeDynamicRemoveBlock(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_RUNTIMEDYNAMICREMOVEBLOCK_OFFSET))(this, key);
		}

		::System::Void EnableDynamicBlockEnvProfileData(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ENABLEDYNAMICBLOCKENVPROFILEDATA_OFFSET))(this, key);
		}

		::Class_1_56FF45D7B2C55655* get_OpenWorld()
		{
			return ((::Class_1_56FF45D7B2C55655*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GET_OPENWORLD_OFFSET))(this);
		}

		::System::String* TryGetStageExceptionDetail()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_TRYGETSTAGEEXCEPTIONDETAIL_OFFSET))(this);
		}

		::System::Void SyncPlayerPosition(::Struct_2_84DFD00216157EA7 pGetBackParam)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_84DFD00216157EA7))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SYNCPLAYERPOSITION_OFFSET))(this, pGetBackParam);
		}

		::System::Void SetNavmeshActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETNAVMESHACTIVE_OFFSET))(this, active);
		}

		::System::Void SetActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETACTIVE_OFFSET))(this, isActive);
		}

		::RPG::GameCore::HoyoTagContainer* get_HoyoTagRuntimeContainer()
		{
			return ((::RPG::GameCore::HoyoTagContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GET_HOYOTAGRUNTIMECONTAINER_OFFSET))(this);
		}

		::RPG::Client::MapDef* get_MapDef()
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GET_MAPDEF_OFFSET))(this);
		}

		::System::Void set_MapDef(::RPG::Client::MapDef* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SET_MAPDEF_OFFSET))(this, value);
		}

		::RPG::GameCore::StageAutoGenConfig* get_StageAutoGenConfig()
		{
			return ((::RPG::GameCore::StageAutoGenConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GET_STAGEAUTOGENCONFIG_OFFSET))(this);
		}

		::System::Void set_StageAutoGenConfig(::RPG::GameCore::StageAutoGenConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageAutoGenConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SET_STAGEAUTOGENCONFIG_OFFSET))(this, value);
		}

		::System::Boolean get_ActiveStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GET_ACTIVESTAGE_OFFSET))(this);
		}

		::System::Void set_ActiveStage(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SET_ACTIVESTAGE_OFFSET))(this, value);
		}
	};
}
