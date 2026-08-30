#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/BlockVisibleReason.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingBlockType.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemVisibleReason.h"
#include "unitysdk/RPG/GameCore/EntityLodTemplateName.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/StreamingLayerType.h"
#include "unitysdk/Struct_2_84DFD00216157EA7.h"
#include "unitysdk/Struct_2_A77148D52D516E55.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_305;
class Class_1_21F31E8AB037E700;
class Class_1_303D5A33D1401D59;
class Class_1_3948F09825CE1BA8;
class Class_1_53BE720C46D20BF8;
class Class_1_777F514A924455D9;
class Class_1_7A6E49020D23C900;
class Class_1_8A6989C352B0F0F0;
class Class_1_D70A30D666F20D90;
class Class_2_00007E9796694121;
class Class_2_2CF600F518D344A2;
class Class_2_5A5C70F7A3C39C00;
class Class_2_7CFCF5679171877C;
class Class_2_7D53347CD75A5D8B;
namespace RPG::Client { class MapDef; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class StageAutoGenConfig; }
namespace RPG::GameCore { class StageBaseConfig; }
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

#define RPG_CLIENT_STAGE_ACTIVEENVIRONMENT_OFFSET UNITYSDK_OFFSET(0xE0C6620)
#define RPG_CLIENT_STAGE_ADDENTITYSTREAMING_OFFSET UNITYSDK_OFFSET(0xE0C6F20)
#define RPG_CLIENT_STAGE_ADDMONOEFFECTSTREAMING_OFFSET UNITYSDK_OFFSET(0xE0C6D60)
#define RPG_CLIENT_STAGE_ADDSTREAMINGJOBALLFINISHCALLBACKONCE_OFFSET UNITYSDK_OFFSET(0xE0C3320)
#define RPG_CLIENT_STAGE_ADDSTREAMINGSOURCE_1_OFFSET UNITYSDK_OFFSET(0xE0C3B80)
#define RPG_CLIENT_STAGE_ADDSTREAMINGSOURCE_OFFSET UNITYSDK_OFFSET(0xE0C3B00)
#define RPG_CLIENT_STAGE_BEGINPERFORMANCEISLANDFREEZE_OFFSET UNITYSDK_OFFSET(0xE0C3E60)
#define RPG_CLIENT_STAGE_CANCELSTREAMINGJOBALLFINISHCALLBACKONCE_OFFSET UNITYSDK_OFFSET(0xE0C33B0)
#define RPG_CLIENT_STAGE_CLEARADDITIONCENTERS_OFFSET UNITYSDK_OFFSET(0xE0C3C80)
#define RPG_CLIENT_STAGE_CLEARSHAREDALIASTASKVISIBLESTATE_OFFSET UNITYSDK_OFFSET(0xE0C6B30)
#define RPG_CLIENT_STAGE_CLEARSIDEEFFECT_OFFSET UNITYSDK_OFFSET(0xE0C5DB0)
#define RPG_CLIENT_STAGE_COLLECTBLOCKSBYTAG_1_OFFSET UNITYSDK_OFFSET(0xE0C5BF0)
#define RPG_CLIENT_STAGE_COLLECTBLOCKSBYTAG_OFFSET UNITYSDK_OFFSET(0xE0C5A00)
#define RPG_CLIENT_STAGE_COLLECTSTREAMINGBLOCKBYNAMESET_1_OFFSET UNITYSDK_OFFSET(0xE0C5B00)
#define RPG_CLIENT_STAGE_COLLECTSTREAMINGBLOCKBYNAMESET_OFFSET UNITYSDK_OFFSET(0xE0C5A70)
#define RPG_CLIENT_STAGE_DEBUGREPORTWHYNOTBATTLEAREALOADFINISH_OFFSET UNITYSDK_OFFSET(0xE0C4DF0)
#define RPG_CLIENT_STAGE_DEBUGSETAREADELTAPOSITION_OFFSET UNITYSDK_OFFSET(0xE0C3190)
#define RPG_CLIENT_STAGE_DESTROY_OFFSET UNITYSDK_OFFSET(0xE0C5EB0)
#define RPG_CLIENT_STAGE_ENABLEDYNAMICBLOCKENVPROFILEDATA_OFFSET UNITYSDK_OFFSET(0xE0C7F40)
#define RPG_CLIENT_STAGE_ENABLESTREAMINGDEBUGSCRIPT_OFFSET UNITYSDK_OFFSET(0xE0C7E30)
#define RPG_CLIENT_STAGE_ENDOFTICK_OFFSET UNITYSDK_OFFSET(0xE0C54D0)
#define RPG_CLIENT_STAGE_ENDPERFORMANCEISLANDFREEZE_OFFSET UNITYSDK_OFFSET(0xE0C3EC0)
#define RPG_CLIENT_STAGE_FORCEACTIVEBLOCKSENTITY_OFFSET UNITYSDK_OFFSET(0xE0C5700)
#define RPG_CLIENT_STAGE_FORCEMONOEFFECTSTREAMINGUPDATE_OFFSET UNITYSDK_OFFSET(0xE0C6E80)
#define RPG_CLIENT_STAGE_FOREACHSTREAMINGBLOCKS_OFFSET UNITYSDK_OFFSET(0xE0C5B90)
#define RPG_CLIENT_STAGE_GETALIASINSTANCEANDMARKDISABLESTREAMING_OFFSET UNITYSDK_OFFSET(0xE0C2810)
#define RPG_CLIENT_STAGE_GETALIASINSTANCEANDMARK_OFFSET UNITYSDK_OFFSET(0xE0C6740)
#define RPG_CLIENT_STAGE_GETALIASITEMDATA_OFFSET UNITYSDK_OFFSET(0xE0C69A0)
#define RPG_CLIENT_STAGE_GETALIASITEMGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xE0C6C10)
#define RPG_CLIENT_STAGE_GETALIASSTREAMINGINSTANCEANDMARK_OFFSET UNITYSDK_OFFSET(0xE0C6880)
#define RPG_CLIENT_STAGE_GETBLOCKCONFIGS_OFFSET UNITYSDK_OFFSET(0xE0C5D30)
#define RPG_CLIENT_STAGE_GETBLOCKLIST_OFFSET UNITYSDK_OFFSET(0xE0C2710)
#define RPG_CLIENT_STAGE_GETBLOCKNODECONFIGS_OFFSET UNITYSDK_OFFSET(0xE0C5D70)
#define RPG_CLIENT_STAGE_GETBLOCKSWITHOUTTAG_OFFSET UNITYSDK_OFFSET(0xE0C24A0)
#define RPG_CLIENT_STAGE_GETJSONPATH_OFFSET UNITYSDK_OFFSET(0xE0C2D30)
#define RPG_CLIENT_STAGE_GETPERSISTENTINSTOBJ_OFFSET UNITYSDK_OFFSET(0xE0C6BA0)
#define RPG_CLIENT_STAGE_GETPERSISTENTTAGROOT_OFFSET UNITYSDK_OFFSET(0xE0C59A0)
#define RPG_CLIENT_STAGE_GETRANGEENTITY_OFFSET UNITYSDK_OFFSET(0xE0C3220)
#define RPG_CLIENT_STAGE_GETREGIONPATH_OFFSET UNITYSDK_OFFSET(0xE0C2D70)
#define RPG_CLIENT_STAGE_GETSHAREDALIASITEMDATALIST_OFFSET UNITYSDK_OFFSET(0xE0C6A10)
#define RPG_CLIENT_STAGE_GETTRANSFORMTOOL_OFFSET UNITYSDK_OFFSET(0xE0C7D00)
#define RPG_CLIENT_STAGE_GET_ACTIVESTAGE_OFFSET UNITYSDK_OFFSET(0xE0C8520)
#define RPG_CLIENT_STAGE_GET_ENABLENORMDISTANCELODTEMPLATE_OFFSET UNITYSDK_OFFSET(0xE0C8480)
#define RPG_CLIENT_STAGE_GET_HOYOTAGRUNTIMECONTAINER_OFFSET UNITYSDK_OFFSET(0xE0C3A30)
#define RPG_CLIENT_STAGE_GET_ISSUBSTAGE_OFFSET UNITYSDK_OFFSET(0xE0C8540)
#define RPG_CLIENT_STAGE_GET_MAPDEF_OFFSET UNITYSDK_OFFSET(0xE0C8420)
#define RPG_CLIENT_STAGE_GET_OPENWORLD_OFFSET UNITYSDK_OFFSET(0xE0C7FA0)
#define RPG_CLIENT_STAGE_GET_PARENTSTAGE_OFFSET UNITYSDK_OFFSET(0xE0C8550)
#define RPG_CLIENT_STAGE_GET_REGIONMANAGER_OFFSET UNITYSDK_OFFSET(0xE0C4830)
#define RPG_CLIENT_STAGE_GET_STAGEAUTOGENCONFIG_OFFSET UNITYSDK_OFFSET(0xE0C8460)
#define RPG_CLIENT_STAGE_GET_STAGEROOTOBJ_OFFSET UNITYSDK_OFFSET(0xE0C8440)
#define RPG_CLIENT_STAGE_INACTIVEENVIROMENT_OFFSET UNITYSDK_OFFSET(0xE0C66B0)
#define RPG_CLIENT_STAGE_INITBATTLEAREA_OFFSET UNITYSDK_OFFSET(0xE0C49C0)
#define RPG_CLIENT_STAGE_INITBLOCKNODEPREFABINS_ALL_OFFSET UNITYSDK_OFFSET(0xE0C2760)
#define RPG_CLIENT_STAGE_INITOPENWORLD_OFFSET UNITYSDK_OFFSET(0xE0C48A0)
#define RPG_CLIENT_STAGE_INITREGIONMANAGER_OFFSET UNITYSDK_OFFSET(0xE0C4770)
#define RPG_CLIENT_STAGE_INITSTAGENAVMESH_OFFSET UNITYSDK_OFFSET(0xE0C2380)
#define RPG_CLIENT_STAGE_INITSTAGEROOTOBJ_OFFSET UNITYSDK_OFFSET(0xE0C22A0)
#define RPG_CLIENT_STAGE_INVOKEUNITYGOLOGICRESETWITHTAMONO_OFFSET UNITYSDK_OFFSET(0xE0C5E50)
#define RPG_CLIENT_STAGE_ISBATTLEAREALOADFINISH_OFFSET UNITYSDK_OFFSET(0xE0C4D60)
#define RPG_CLIENT_STAGE_ISLIGHTENVLOADFINISH_OFFSET UNITYSDK_OFFSET(0xE0C4CA0)
#define RPG_CLIENT_STAGE_ISSTAGEUSELIGHTV2_OFFSET UNITYSDK_OFFSET(0xE0C3900)
#define RPG_CLIENT_STAGE_ISSTREAMINGJOBFINISHED_OFFSET UNITYSDK_OFFSET(0xE0C4BD0)
#define RPG_CLIENT_STAGE_ISSTREAMINGLOADFINISH_OFFSET UNITYSDK_OFFSET(0xE0C4B40)
#define RPG_CLIENT_STAGE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE0C5440)
#define RPG_CLIENT_STAGE_LOADAREA_OFFSET UNITYSDK_OFFSET(0xE0C3110)
#define RPG_CLIENT_STAGE_LOADBATTLEAREABLOCK_OFFSET UNITYSDK_OFFSET(0xE0C5C60)
#define RPG_CLIENT_STAGE_LOADBLOCKSASSETSALL_OFFSET UNITYSDK_OFFSET(0xE0C1F00)
#define RPG_CLIENT_STAGE_LOADBLOCKS_OFFSET UNITYSDK_OFFSET(0xE0C2010)
#define RPG_CLIENT_STAGE_LOAD_OFFSET UNITYSDK_OFFSET(0xE0C3F40)
#define RPG_CLIENT_STAGE_LOCKMAINSTREAMINGSOURCE_OFFSET UNITYSDK_OFFSET(0xE0C3CE0)
#define RPG_CLIENT_STAGE_ONENTERMAP_OFFSET UNITYSDK_OFFSET(0xE0C4EC0)
#define RPG_CLIENT_STAGE_ONMONOEFFECTPOSITIONCHANGED_OFFSET UNITYSDK_OFFSET(0xE0C7C00)
#define RPG_CLIENT_STAGE_ONSTREAMINGLOADFINISH_OFFSET UNITYSDK_OFFSET(0xE0C4E50)
#define RPG_CLIENT_STAGE_PREINITOPENWORLD_OFFSET UNITYSDK_OFFSET(0xE0C4660)
#define RPG_CLIENT_STAGE_REMOVEADDITIONCENTER_OFFSET UNITYSDK_OFFSET(0xE0C3C10)
#define RPG_CLIENT_STAGE_REMOVEBLOCK_OFFSET UNITYSDK_OFFSET(0xE0C29A0)
#define RPG_CLIENT_STAGE_REMOVEENTITYSTREAMING_OFFSET UNITYSDK_OFFSET(0xE0C6F90)
#define RPG_CLIENT_STAGE_REMOVEMONOEFFECTSTREAMING_OFFSET UNITYSDK_OFFSET(0xE0C6DD0)
#define RPG_CLIENT_STAGE_RUNTIMEADDRENDERSTUB_1_OFFSET UNITYSDK_OFFSET(0xE0C3540)
#define RPG_CLIENT_STAGE_RUNTIMEADDRENDERSTUB_OFFSET UNITYSDK_OFFSET(0xE0C3420)
#define RPG_CLIENT_STAGE_RUNTIMEADDSTREAMINGITEM_1_OFFSET UNITYSDK_OFFSET(0xE0C70C0)
#define RPG_CLIENT_STAGE_RUNTIMEADDSTREAMINGITEM_2_OFFSET UNITYSDK_OFFSET(0xE0C7750)
#define RPG_CLIENT_STAGE_RUNTIMEADDSTREAMINGITEM_OFFSET UNITYSDK_OFFSET(0xE0C6FF0)
#define RPG_CLIENT_STAGE_RUNTIMEDYNAMICLOADOPTIONALBLOCK_OFFSET UNITYSDK_OFFSET(0xE0C7E70)
#define RPG_CLIENT_STAGE_RUNTIMEDYNAMICREMOVEBLOCK_OFFSET UNITYSDK_OFFSET(0xE0C7EE0)
#define RPG_CLIENT_STAGE_RUNTIMELOADOPTIONALBLOCKSCONFIG_OFFSET UNITYSDK_OFFSET(0xE0C3040)
#define RPG_CLIENT_STAGE_RUNTIMEREMOVERENDERSTUB_OFFSET UNITYSDK_OFFSET(0xE0C34D0)
#define RPG_CLIENT_STAGE_RUNTIMEREMOVESTREAMINGITEM_OFFSET UNITYSDK_OFFSET(0xE0C7A60)
#define RPG_CLIENT_STAGE_RUNTIMESETSTREAMINGENABLE_OFFSET UNITYSDK_OFFSET(0xE0C7DC0)
#define RPG_CLIENT_STAGE_RUNTIMESETSTREAMINGITEMVISIBLE_OFFSET UNITYSDK_OFFSET(0xE0C7AF0)
#define RPG_CLIENT_STAGE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0xE0C8240)
#define RPG_CLIENT_STAGE_SETADDITIONCENTER_OFFSET UNITYSDK_OFFSET(0xE0C3A90)
#define RPG_CLIENT_STAGE_SETALLBLOCKVISIBLE_OFFSET UNITYSDK_OFFSET(0xE0C2FD0)
#define RPG_CLIENT_STAGE_SETBLOCKFOCUSWITHNAMES_OFFSET UNITYSDK_OFFSET(0xE0C32B0)
#define RPG_CLIENT_STAGE_SETBLOCKFORCEHIDEEXCEPTNAMES_OFFSET UNITYSDK_OFFSET(0xE0C5690)
#define RPG_CLIENT_STAGE_SETBLOCKFORCEHIDEEXCEPTTAGNAME_OFFSET UNITYSDK_OFFSET(0xE0C5620)
#define RPG_CLIENT_STAGE_SETBLOCKFORCEHLODWITHTAGS_OFFSET UNITYSDK_OFFSET(0xE0C55B0)
#define RPG_CLIENT_STAGE_SETBLOCKVISIBLEBYALIAS_OFFSET UNITYSDK_OFFSET(0xE0C2F50)
#define RPG_CLIENT_STAGE_SETBLOCKVISIBLEBYALLHOYOTAGS_OFFSET UNITYSDK_OFFSET(0xE0C2ED0)
#define RPG_CLIENT_STAGE_SETBLOCKVISIBLEBYHOYOTAG_OFFSET UNITYSDK_OFFSET(0xE0C2E50)
#define RPG_CLIENT_STAGE_SETBLOCKVISIBLEBYTAG_OFFSET UNITYSDK_OFFSET(0xE0C2DD0)
#define RPG_CLIENT_STAGE_SETFORCESTREAMING_OFFSET UNITYSDK_OFFSET(0xE0C7CA0)
#define RPG_CLIENT_STAGE_SETLOADFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xE0C4AC0)
#define RPG_CLIENT_STAGE_SETMAPDEF_OFFSET UNITYSDK_OFFSET(0xE0C4610)
#define RPG_CLIENT_STAGE_SETNAVMESHACTIVE_OFFSET UNITYSDK_OFFSET(0xE0C8190)
#define RPG_CLIENT_STAGE_SETPARENTSTAGE_OFFSET UNITYSDK_OFFSET(0xE0C45C0)
#define RPG_CLIENT_STAGE_SETSHAREDALIASTASKVISIBLESTATE_OFFSET UNITYSDK_OFFSET(0xE0C6AB0)
#define RPG_CLIENT_STAGE_SETSUBSTAGEACTIVESTATE_OFFSET UNITYSDK_OFFSET(0xE0C82B0)
#define RPG_CLIENT_STAGE_SETUNLOADENABLE_OFFSET UNITYSDK_OFFSET(0xE0C6D00)
#define RPG_CLIENT_STAGE_SET_ACTIVESTAGE_OFFSET UNITYSDK_OFFSET(0xE0C8530)
#define RPG_CLIENT_STAGE_SET_MAPDEF_OFFSET UNITYSDK_OFFSET(0xE0C8430)
#define RPG_CLIENT_STAGE_SET_PARENTSTAGE_OFFSET UNITYSDK_OFFSET(0xE0C8560)
#define RPG_CLIENT_STAGE_SET_STAGEAUTOGENCONFIG_OFFSET UNITYSDK_OFFSET(0xE0C8470)
#define RPG_CLIENT_STAGE_SET_STAGEROOTOBJ_OFFSET UNITYSDK_OFFSET(0xE0C8450)
#define RPG_CLIENT_STAGE_SHOWALLBLOCKS_OFFSET UNITYSDK_OFFSET(0xE0C5940)
#define RPG_CLIENT_STAGE_SHOWAREAONLY_OFFSET UNITYSDK_OFFSET(0xE0C30A0)
#define RPG_CLIENT_STAGE_SYNCPLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0xE0C80C0)
#define RPG_CLIENT_STAGE_TRYGETSTAGEEXCEPTIONDETAIL_OFFSET UNITYSDK_OFFSET(0xE0C7FB0)
#define RPG_CLIENT_STAGE_TRYREGISTERRENDERSTUBREBUILDCALLBACK_OFFSET UNITYSDK_OFFSET(0xE0C6C80)
#define RPG_CLIENT_STAGE_UNLOADALLRESOURCE_OFFSET UNITYSDK_OFFSET(0xE0C5870)
#define RPG_CLIENT_STAGE_UNLOADBATTLEAREABLOCK_OFFSET UNITYSDK_OFFSET(0xE0C5550)
#define RPG_CLIENT_STAGE_UNLOADPERSISTENTRESOURCE_OFFSET UNITYSDK_OFFSET(0xE0C58E0)
#define RPG_CLIENT_STAGE_UNLOADSTREAMINGRESOURCE_OFFSET UNITYSDK_OFFSET(0xE0C5810)
#define RPG_CLIENT_STAGE_UNLOCKMAINSTREAMINGSOURCE_OFFSET UNITYSDK_OFFSET(0xE0C3DB0)
#define RPG_CLIENT_STAGE_UNMARKALIASINSTANCE_OFFSET UNITYSDK_OFFSET(0xE0C6800)
#define RPG_CLIENT_STAGE_UNMARKALIASSTREAMINGINSTANCE_OFFSET UNITYSDK_OFFSET(0xE0C6920)
#define RPG_CLIENT_STAGE_UPDATEITEMLODTEMPLATE_OFFSET UNITYSDK_OFFSET(0xE0C7B80)
#define RPG_CLIENT_STAGE_UPDATESTREAMINGLOADFINISH_OFFSET UNITYSDK_OFFSET(0xE0C5210)
#define RPG_CLIENT_STAGE_UPDATE_OFFSET UNITYSDK_OFFSET(0xE0C4F20)
#define RPG_CLIENT_STAGE_VISIBLEPCONLYBLOCK_OFFSET UNITYSDK_OFFSET(0xE0C7D60)
#define RPG_CLIENT_STAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xE0C8570)
#define RPG_CLIENT_STAGE__UPDATEAFTEROPENWORLDUPDATE_OFFSET UNITYSDK_OFFSET(0xE0C53E0)

namespace RPG::Client
{
	inline static constexpr unsigned int Stage_TypeDefinitionIndex = 69471;

	class Stage : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_53BE720C46D20BF8*>* _blockConfigList; // 0x10
		::RPG::Client::MapDef* _MapDef_k__BackingField; // 0x18
		::System::Collections::Generic::HashSet_1<::System::Action*>* _StreamingJobAllFinishCallback; // 0x20
		::Class_2_7D53347CD75A5D8B* _StageAssetLoader; // 0x28
		::Class_1_3948F09825CE1BA8* _RegionManager; // 0x30
		::System::String* _MonsterNavmeshDataPath; // 0x38
		::System::Collections::Generic::List_1<::Class_1_53BE720C46D20BF8*>* _FullBlockConfigList; // 0x40
		::UnityEngine::AI::NavMeshData* _MonsterNavmeshData; // 0x48
		::System::Action* _LoadFinishCallback; // 0x50
		::System::String* _strJsonPath; // 0x58
		::System::String* _NavmeshDataPath; // 0x60
		::System::String* _strStageDir; // 0x68
		::Class_2_2CF600F518D344A2* _ParentStage_k__BackingField; // 0x70
		::UnityEngine::GameObject* _StageRootObj; // 0x78
		::System::String* FloorID; // 0x80
		::System::Collections::Generic::List_1<::Class_1_21F31E8AB037E700*>* _blockList; // 0x88
		::Class_1_D70A30D666F20D90* _OpenWorld; // 0x90
		::UnityEngine::AI::NavMeshData* _NavmeshData; // 0x98
		::RPG::GameCore::StageBaseConfig* StageConfig; // 0xA0
		::System::String* Name; // 0xA8
		::RPG::GameCore::StageAutoGenConfig* _StageAutoGenConfig_k__BackingField; // 0xB0
		::System::Boolean IsPreload; // 0xB8
		::System::Boolean _IsSubStageActive; // 0xB9
		::System::Boolean _ActiveStage_k__BackingField; // 0xBA

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE__CTOR_OFFSET))(this);
		}

		::System::Void LoadBlocksAssetsAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_LOADBLOCKSASSETSALL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_53BE720C46D20BF8*>* LoadBlocks()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_53BE720C46D20BF8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_LOADBLOCKS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_21F31E8AB037E700*>* GetBlocksWithoutTag(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_21F31E8AB037E700*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETBLOCKSWITHOUTTAG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_21F31E8AB037E700*>* GetBlockList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_21F31E8AB037E700*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETBLOCKLIST_OFFSET))(this);
		}

		::System::Void InitBlockNodePrefabIns_All()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_INITBLOCKNODEPREFABINS_ALL_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetAliasInstanceAndMarkDisableStreaming(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETALIASINSTANCEANDMARKDISABLESTREAMING_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveBlock(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_REMOVEBLOCK_OFFSET))(this, a1);
		}

		::System::String* GetJsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETJSONPATH_OFFSET))(this);
		}

		::System::String* GetRegionPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETREGIONPATH_OFFSET))(this);
		}

		::System::Void SetBlockVisibleByTag(::System::String* a1, ::System::Boolean a2, ::RPG::Client::OpenWorld::BlockVisibleReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETBLOCKVISIBLEBYTAG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBlockVisibleByHoyoTag(::System::String* a1, ::System::Boolean a2, ::RPG::Client::OpenWorld::BlockVisibleReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETBLOCKVISIBLEBYHOYOTAG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBlockVisibleByAllHoyoTags(::RPG::GameCore::HoyoTagContainer* a1, ::System::Boolean a2, ::RPG::Client::OpenWorld::BlockVisibleReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTagContainer*, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETBLOCKVISIBLEBYALLHOYOTAGS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBlockVisibleByAlias(::System::String* a1, ::System::Boolean a2, ::RPG::Client::OpenWorld::BlockVisibleReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETBLOCKVISIBLEBYALIAS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetAllBlockVisible(::System::Boolean a1, ::RPG::Client::OpenWorld::BlockVisibleReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETALLBLOCKVISIBLE_OFFSET))(this, a1, a2);
		}

		::System::Void RuntimeLoadOptionalBlocksConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_RUNTIMELOADOPTIONALBLOCKSCONFIG_OFFSET))(this, a1);
		}

		::System::Void ShowAreaOnly(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SHOWAREAONLY_OFFSET))(this, a1);
		}

		::System::Void LoadArea(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_LOADAREA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DebugSetAreaDeltaPosition(::System::String* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_DEBUGSETAREADELTAPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Void GetRangeEntity(::UnityEngine::Rect a1, ::RPG::GameCore::EntityType a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::RPG::GameCore::EntityType, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETRANGEENTITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBlockFocusWithNames(::System::Collections::Generic::ISet_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ISet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETBLOCKFOCUSWITHNAMES_OFFSET))(this, a1, a2);
		}

		::System::Void AddStreamingJobAllFinishCallbackOnce(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ADDSTREAMINGJOBALLFINISHCALLBACKONCE_OFFSET))(this, a1);
		}

		::System::Void CancelStreamingJobAllFinishCallbackOnce(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_CANCELSTREAMINGJOBALLFINISHCALLBACKONCE_OFFSET))(this, a1);
		}

		::RPG::Client::OpenWorld::StreamingItemData* RuntimeAddRenderStub(::System::String* a1, ::Struct_2_A77148D52D516E55 a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID, ::System::String*, ::Struct_2_A77148D52D516E55, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_RUNTIMEADDRENDERSTUB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RuntimeRemoveRenderStub(::System::String* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_RUNTIMEREMOVERENDERSTUB_OFFSET))(this, a1, a2);
		}

		::RPG::Client::OpenWorld::StreamingItemData* RuntimeAddRenderStub_1(::System::String* a1, ::System::String* a2, ::System::String* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::System::Boolean a7)
		{
			return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_RUNTIMEADDRENDERSTUB_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean IsStageUseLightV2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ISSTAGEUSELIGHTV2_OFFSET))(this);
		}

		::System::Void SetAdditionCenter(::System::String* a1, ::RPG::GameCore::AnchorInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETADDITIONCENTER_OFFSET))(this, a1, a2);
		}

		::System::Void AddStreamingSource(::System::String* a1, ::RPG::GameCore::AnchorInfo* a2, ::Class_1_7A6E49020D23C900* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::AnchorInfo*, ::Class_1_7A6E49020D23C900*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ADDSTREAMINGSOURCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddStreamingSource_1(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_7A6E49020D23C900* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::Class_1_7A6E49020D23C900*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ADDSTREAMINGSOURCE_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RemoveAdditionCenter(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_REMOVEADDITIONCENTER_OFFSET))(this, a1, a2);
		}

		::System::Void ClearAdditionCenters(::Class_1_7A6E49020D23C900* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7A6E49020D23C900*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_CLEARADDITIONCENTERS_OFFSET))(this, a1);
		}

		::System::Void LockMainStreamingSource(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_LOCKMAINSTREAMINGSOURCE_OFFSET))(this, a1);
		}

		::System::Void UnlockMainStreamingSource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_UNLOCKMAINSTREAMINGSOURCE_OFFSET))(this);
		}

		::System::Void BeginPerformanceIslandFreeze()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_BEGINPERFORMANCEISLANDFREEZE_OFFSET))(this);
		}

		::System::Void EndPerformanceIslandFreeze()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ENDPERFORMANCEISLANDFREEZE_OFFSET))(this);
		}

		::System::Void InitStageRootObj()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_INITSTAGEROOTOBJ_OFFSET))(this);
		}

		::System::Void InitStageNavMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_INITSTAGENAVMESH_OFFSET))(this);
		}

		::System::Void Load(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_LOAD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetParentStage(::Class_2_2CF600F518D344A2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_2CF600F518D344A2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETPARENTSTAGE_OFFSET))(this, a1);
		}

		::System::Void SetMapDef(::RPG::Client::MapDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETMAPDEF_OFFSET))(this, a1);
		}

		::System::Void PreInitOpenWorld(::RPG::Client::MapDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_PREINITOPENWORLD_OFFSET))(this, a1);
		}

		::System::Void InitRegionManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_INITREGIONMANAGER_OFFSET))(this);
		}

		::System::Void InitOpenWorld(::Struct_2_84DFD00216157EA7 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_84DFD00216157EA7, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_INITOPENWORLD_OFFSET))(this, a1, a2);
		}

		::System::Void InitBattleArea(::Class_1_777F514A924455D9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_777F514A924455D9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_INITBATTLEAREA_OFFSET))(this, a1);
		}

		::System::Void SetLoadFinishCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETLOADFINISHCALLBACK_OFFSET))(this, a1);
		}

		::System::Boolean IsStreamingLoadFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ISSTREAMINGLOADFINISH_OFFSET))(this);
		}

		::System::Boolean IsLightEnvLoadFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ISLIGHTENVLOADFINISH_OFFSET))(this);
		}

		::System::Boolean IsBattleAreaLoadFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ISBATTLEAREALOADFINISH_OFFSET))(this);
		}

		::System::Void DebugReportWhyNotBattleAreaLoadFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_DEBUGREPORTWHYNOTBATTLEAREALOADFINISH_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_305*>* OnStreamingLoadFinish()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_305*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ONSTREAMINGLOADFINISH_OFFSET))(this);
		}

		::System::Void OnEnterMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ONENTERMAP_OFFSET))(this);
		}

		::System::Void Update(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_UPDATE_OFFSET))(this, a1);
		}

		::System::Void UpdateStreamingLoadFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_UPDATESTREAMINGLOADFINISH_OFFSET))(this);
		}

		::System::Void _UpdateAfterOpenWorldUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE__UPDATEAFTEROPENWORLDUPDATE_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void EndOfTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ENDOFTICK_OFFSET))(this, a1);
		}

		::System::Void UnloadBattleAreaBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_UNLOADBATTLEAREABLOCK_OFFSET))(this);
		}

		::System::Void SetBlockForceHLODWithTags(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETBLOCKFORCEHLODWITHTAGS_OFFSET))(this, a1, a2);
		}

		::System::Void SetBlockForceHideExceptTagName(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETBLOCKFORCEHIDEEXCEPTTAGNAME_OFFSET))(this, a1, a2);
		}

		::System::Void SetBlockForceHideExceptNames(::System::Collections::Generic::ISet_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ISet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETBLOCKFORCEHIDEEXCEPTNAMES_OFFSET))(this, a1, a2);
		}

		::System::Void ForceActiveBlocksEntity(::System::Collections::Generic::ISet_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ISet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_FORCEACTIVEBLOCKSENTITY_OFFSET))(this, a1, a2);
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

		::UnityEngine::GameObject* GetPersistentTagRoot(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETPERSISTENTTAGROOT_OFFSET))(this, a1);
		}

		::System::Void CollectBlocksByTag(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_COLLECTBLOCKSBYTAG_OFFSET))(this, a1, a2);
		}

		::System::Void CollectStreamingBlockByNameSet(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1, ::System::Collections::Generic::ISet_1<::System::String*>* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Collections::Generic::ISet_1<::System::String*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_COLLECTSTREAMINGBLOCKBYNAMESET_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CollectStreamingBlockByNameSet_1(::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* a1, ::System::Collections::Generic::ISet_1<::System::String*>* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>*, ::System::Collections::Generic::ISet_1<::System::String*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_COLLECTSTREAMINGBLOCKBYNAMESET_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ForeachStreamingBlocks(::System::Action_1<::Class_1_303D5A33D1401D59*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_303D5A33D1401D59*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_FOREACHSTREAMINGBLOCKS_OFFSET))(this, a1);
		}

		::System::Void CollectBlocksByTag_1(::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_COLLECTBLOCKSBYTAG_1_OFFSET))(this, a1, a2);
		}

		::System::Void LoadBattleAreaBlock(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_LOADBATTLEAREABLOCK_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::Class_1_53BE720C46D20BF8*>* GetBlockConfigs()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_53BE720C46D20BF8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETBLOCKCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_53BE720C46D20BF8*>* GetBlockNodeConfigs()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_53BE720C46D20BF8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETBLOCKNODECONFIGS_OFFSET))(this);
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

		::System::Void ActiveEnvironment(::UnityEngine::GameObject* a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::Client::OpenWorld::StreamingBlockType a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::RPG::Client::OpenWorld::StreamingBlockType))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ACTIVEENVIRONMENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void InActiveEnviroment(::UnityEngine::GameObject* a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::Client::OpenWorld::StreamingBlockType a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::RPG::Client::OpenWorld::StreamingBlockType))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_INACTIVEENVIROMENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::GameObject* GetAliasInstanceAndMark(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a4, ::System::Boolean a5)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETALIASINSTANCEANDMARK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void UnMarkAliasInstance(::System::String* a1, ::System::String* a2, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_UNMARKALIASINSTANCE_OFFSET))(this, a1, a2, a3);
		}

		::Class_1_8A6989C352B0F0F0* GetAliasStreamingInstanceAndMark(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Action_2<::Class_1_8A6989C352B0F0F0*, ::RPG::Client::OpenWorld::StreamingItemData*>* a4, ::System::Boolean a5)
		{
			return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action_2<::Class_1_8A6989C352B0F0F0*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETALIASSTREAMINGINSTANCEANDMARK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void UnMarkAliasStreamingInstance(::System::String* a1, ::System::String* a2, ::System::Action_2<::Class_1_8A6989C352B0F0F0*, ::RPG::Client::OpenWorld::StreamingItemData*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_2<::Class_1_8A6989C352B0F0F0*, ::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_UNMARKALIASSTREAMINGINSTANCE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::OpenWorld::StreamingItemData* GetAliasItemData(::System::String* a1, ::System::String* a2)
		{
			return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETALIASITEMDATA_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* GetSharedAliasItemDataList(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETSHAREDALIASITEMDATALIST_OFFSET))(this, a1, a2);
		}

		::System::Void SetSharedAliasTaskVisibleState(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETSHAREDALIASTASKVISIBLESTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ClearSharedAliasTaskVisibleState(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_CLEARSHAREDALIASTASKVISIBLESTATE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* GetPersistentInstObj(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETPERSISTENTINSTOBJ_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* GetAliasItemGameObject(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETALIASITEMGAMEOBJECT_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryRegisterRenderStubRebuildCallback(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action_1<::RPG::Client::OpenWorld::StreamingItemData*>* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_1<::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_TRYREGISTERRENDERSTUBREBUILDCALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetUnloadEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETUNLOADENABLE_OFFSET))(this, a1);
		}

		::System::Boolean IsStreamingJobFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ISSTREAMINGJOBFINISHED_OFFSET))(this);
		}

		::System::Boolean AddMonoEffectStreaming(::Class_2_7CFCF5679171877C* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_7CFCF5679171877C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ADDMONOEFFECTSTREAMING_OFFSET))(this, a1);
		}

		::System::Void RemoveMonoEffectStreaming(::Class_2_7CFCF5679171877C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_7CFCF5679171877C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_REMOVEMONOEFFECTSTREAMING_OFFSET))(this, a1);
		}

		::System::Void ForceMonoEffectStreamingUpdate(::Class_2_7CFCF5679171877C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_7CFCF5679171877C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_FORCEMONOEFFECTSTREAMINGUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean AddEntityStreaming(::Class_2_00007E9796694121* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_00007E9796694121*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ADDENTITYSTREAMING_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveEntityStreaming(::Class_2_00007E9796694121* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_00007E9796694121*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_REMOVEENTITYSTREAMING_OFFSET))(this, a1);
		}

		::RPG::Client::OpenWorld::StreamingItemData* RuntimeAddStreamingItem(::UnityEngine::GameObject* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::GameObject* a5)
		{
			return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_RUNTIMEADDSTREAMINGITEM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::OpenWorld::StreamingItemData* RuntimeAddStreamingItem_1(::Struct_2_A77148D52D516E55 a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::GameObject* a3, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a4, ::System::Action_3<::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a5, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a6, ::System::String* a7, ::System::Boolean a8, ::RPG::Client::OpenWorld::StreamingItemVisibleReason a9, ::System::Boolean a10)
		{
			return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID, ::Struct_2_A77148D52D516E55, ::RPG::GameCore::GameEntity*, ::UnityEngine::GameObject*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Action_3<::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemVisibleReason, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_RUNTIMEADDSTREAMINGITEM_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::RPG::Client::OpenWorld::StreamingItemData* RuntimeAddStreamingItem_2(::System::String* a1, ::UnityEngine::Vector3 a2, ::System::Nullable_1<::UnityEngine::Vector3> a3, ::RPG::GameCore::GameEntity* a4, ::UnityEngine::GameObject* a5, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a6, ::System::Action_3<::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a7, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a8, ::System::String* a9, ::System::Boolean a10)
		{
			return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Vector3>, ::RPG::GameCore::GameEntity*, ::UnityEngine::GameObject*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Action_3<::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_RUNTIMEADDSTREAMINGITEM_2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void RuntimeRemoveStreamingItem(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_RUNTIMEREMOVESTREAMINGITEM_OFFSET))(this, a1);
		}

		::System::Void RuntimeSetStreamingItemVisible(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2, ::RPG::Client::OpenWorld::StreamingItemVisibleReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_RUNTIMESETSTREAMINGITEMVISIBLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateItemLodTemplate(::Class_2_5A5C70F7A3C39C00* a1, ::RPG::GameCore::EntityLodTemplateName a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_5A5C70F7A3C39C00*, ::RPG::GameCore::EntityLodTemplateName))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_UPDATEITEMLODTEMPLATE_OFFSET))(this, a1, a2);
		}

		::System::Void OnMonoEffectPositionChanged(::Class_2_7CFCF5679171877C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_7CFCF5679171877C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ONMONOEFFECTPOSITIONCHANGED_OFFSET))(this, a1);
		}

		::System::Void SetForceStreaming()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETFORCESTREAMING_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetTransformTool()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GETTRANSFORMTOOL_OFFSET))(this);
		}

		::System::Void VisiblePcOnlyBlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_VISIBLEPCONLYBLOCK_OFFSET))(this, a1);
		}

		::System::Void RuntimeSetStreamingEnable(::System::Boolean a1, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::StreamingLayerType>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::StreamingLayerType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_RUNTIMESETSTREAMINGENABLE_OFFSET))(this, a1, a2);
		}

		::System::Void EnableStreamingDebugScript()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ENABLESTREAMINGDEBUGSCRIPT_OFFSET))(this);
		}

		::System::Void RuntimeDynamicLoadOptionalBlock(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_RUNTIMEDYNAMICLOADOPTIONALBLOCK_OFFSET))(this, a1, a2);
		}

		::System::Void RuntimeDynamicRemoveBlock(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_RUNTIMEDYNAMICREMOVEBLOCK_OFFSET))(this, a1);
		}

		::System::Void EnableDynamicBlockEnvProfileData(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_ENABLEDYNAMICBLOCKENVPROFILEDATA_OFFSET))(this, a1);
		}

		::Class_1_D70A30D666F20D90* get_OpenWorld()
		{
			return ((::Class_1_D70A30D666F20D90*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GET_OPENWORLD_OFFSET))(this);
		}

		::System::String* TryGetStageExceptionDetail()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_TRYGETSTAGEEXCEPTIONDETAIL_OFFSET))(this);
		}

		::System::Void SyncPlayerPosition(::Struct_2_84DFD00216157EA7 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_84DFD00216157EA7))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SYNCPLAYERPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetNavmeshActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETNAVMESHACTIVE_OFFSET))(this, a1);
		}

		::System::Void SetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETACTIVE_OFFSET))(this, a1);
		}

		::System::Void SetSubStageActiveState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SETSUBSTAGEACTIVESTATE_OFFSET))(this, a1);
		}

		::RPG::GameCore::HoyoTagContainer* get_HoyoTagRuntimeContainer()
		{
			return ((::RPG::GameCore::HoyoTagContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GET_HOYOTAGRUNTIMECONTAINER_OFFSET))(this);
		}

		::RPG::Client::MapDef* get_MapDef()
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GET_MAPDEF_OFFSET))(this);
		}

		::System::Void set_MapDef(::RPG::Client::MapDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SET_MAPDEF_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_StageRootObj()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GET_STAGEROOTOBJ_OFFSET))(this);
		}

		::System::Void set_StageRootObj(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SET_STAGEROOTOBJ_OFFSET))(this, a1);
		}

		::RPG::GameCore::StageAutoGenConfig* get_StageAutoGenConfig()
		{
			return ((::RPG::GameCore::StageAutoGenConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GET_STAGEAUTOGENCONFIG_OFFSET))(this);
		}

		::System::Void set_StageAutoGenConfig(::RPG::GameCore::StageAutoGenConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageAutoGenConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SET_STAGEAUTOGENCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableNormDistanceLodTemplate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GET_ENABLENORMDISTANCELODTEMPLATE_OFFSET))(this);
		}

		::System::Boolean get_ActiveStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GET_ACTIVESTAGE_OFFSET))(this);
		}

		::System::Void set_ActiveStage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SET_ACTIVESTAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSubStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GET_ISSUBSTAGE_OFFSET))(this);
		}

		::Class_2_2CF600F518D344A2* get_ParentStage()
		{
			return ((::Class_2_2CF600F518D344A2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GET_PARENTSTAGE_OFFSET))(this);
		}

		::System::Void set_ParentStage(::Class_2_2CF600F518D344A2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_2CF600F518D344A2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_SET_PARENTSTAGE_OFFSET))(this, a1);
		}

		::Class_1_3948F09825CE1BA8* get_RegionManager()
		{
			return ((::Class_1_3948F09825CE1BA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE_GET_REGIONMANAGER_OFFSET))(this);
		}
	};
}
