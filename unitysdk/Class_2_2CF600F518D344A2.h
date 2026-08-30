#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/BlockVisibleReason.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingBlockType.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemVisibleReason.h"
#include "unitysdk/RPG/Client/Stage.h"
#include "unitysdk/RPG/GameCore/EntityLodTemplateName.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/StreamingLayerType.h"
#include "unitysdk/Struct_2_84DFD00216157EA7.h"
#include "unitysdk/Struct_2_A77148D52D516E55.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_777F514A924455D9;
class Class_1_7A6E49020D23C900;
class Class_1_8A6989C352B0F0F0;
class Class_1_D70A30D666F20D90;
class Class_2_00007E9796694121;
class Class_2_5A5C70F7A3C39C00;
class Class_2_7CFCF5679171877C;
namespace RPG::Client { class MapDef; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class StageConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class ISet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_2CF600F518D344A2_ACTIVEENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x18D03EE0)
#define CLASS_2_2CF600F518D344A2_ADDENTITYSTREAMING_OFFSET UNITYSDK_OFFSET(0x18D04FF0)
#define CLASS_2_2CF600F518D344A2_ADDMONOEFFECTSTREAMING_OFFSET UNITYSDK_OFFSET(0x18D04DC0)
#define CLASS_2_2CF600F518D344A2_ADDSTREAMINGSOURCE_1_OFFSET UNITYSDK_OFFSET(0x18D07A40)
#define CLASS_2_2CF600F518D344A2_ADDSTREAMINGSOURCE_OFFSET UNITYSDK_OFFSET(0x18D07820)
#define CLASS_2_2CF600F518D344A2_CLEARADDITIONCENTERS_OFFSET UNITYSDK_OFFSET(0x18D07D60)
#define CLASS_2_2CF600F518D344A2_CLEARSHAREDALIASTASKVISIBLESTATE_OFFSET UNITYSDK_OFFSET(0x18D04780)
#define CLASS_2_2CF600F518D344A2_CLEARSIDEEFFECT_OFFSET UNITYSDK_OFFSET(0x18D03A80)
#define CLASS_2_2CF600F518D344A2_COLLECTBLOCKSBYTAG_1_OFFSET UNITYSDK_OFFSET(0x18D03900)
#define CLASS_2_2CF600F518D344A2_COLLECTBLOCKSBYTAG_OFFSET UNITYSDK_OFFSET(0x18D03630)
#define CLASS_2_2CF600F518D344A2_COLLECTSTREAMINGBLOCKBYNAMESET_OFFSET UNITYSDK_OFFSET(0x18D03700)
#define CLASS_2_2CF600F518D344A2_DEBUGREPORTWHYNOTBATTLEAREALOADFINISH_OFFSET UNITYSDK_OFFSET(0x18D027F0)
#define CLASS_2_2CF600F518D344A2_DEBUGSETAREADELTAPOSITION_OFFSET UNITYSDK_OFFSET(0x18D06F90)
#define CLASS_2_2CF600F518D344A2_DESTROY_OFFSET UNITYSDK_OFFSET(0x18D03D10)
#define CLASS_2_2CF600F518D344A2_ENABLEDYNAMICBLOCKENVPROFILEDATA_OFFSET UNITYSDK_OFFSET(0x18D06560)
#define CLASS_2_2CF600F518D344A2_ENABLESTREAMINGDEBUGSCRIPT_OFFSET UNITYSDK_OFFSET(0x18D06070)
#define CLASS_2_2CF600F518D344A2_ENDOFTICK_OFFSET UNITYSDK_OFFSET(0x18D02430)
#define CLASS_2_2CF600F518D344A2_FORCEACTIVEBLOCKSENTITY_OFFSET UNITYSDK_OFFSET(0x18D02C10)
#define CLASS_2_2CF600F518D344A2_FORCEMONOEFFECTSTREAMINGUPDATE_OFFSET UNITYSDK_OFFSET(0x18D04F30)
#define CLASS_2_2CF600F518D344A2_FOREACHSTREAMINGBLOCKS_OFFSET UNITYSDK_OFFSET(0x18D03820)
#define CLASS_2_2CF600F518D344A2_GETALIASINSTANCEANDMARK_OFFSET UNITYSDK_OFFSET(0x18D040E0)
#define CLASS_2_2CF600F518D344A2_GETALIASITEMDATA_OFFSET UNITYSDK_OFFSET(0x18D044A0)
#define CLASS_2_2CF600F518D344A2_GETALIASITEMGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x18D04960)
#define CLASS_2_2CF600F518D344A2_GETALIASSTREAMINGINSTANCEANDMARK_OFFSET UNITYSDK_OFFSET(0x18D042D0)
#define CLASS_2_2CF600F518D344A2_GETPERSISTENTINSTOBJ_OFFSET UNITYSDK_OFFSET(0x18D04870)
#define CLASS_2_2CF600F518D344A2_GETPERSISTENTTAGROOT_OFFSET UNITYSDK_OFFSET(0x18D03540)
#define CLASS_2_2CF600F518D344A2_GETRANGEENTITY_OFFSET UNITYSDK_OFFSET(0x18D070D0)
#define CLASS_2_2CF600F518D344A2_GETSHAREDALIASITEMDATALIST_OFFSET UNITYSDK_OFFSET(0x18D04570)
#define CLASS_2_2CF600F518D344A2_GETTRANSFORMTOOL_OFFSET UNITYSDK_OFFSET(0x18D05BD0)
#define CLASS_2_2CF600F518D344A2_GET_OPENWORLD_OFFSET UNITYSDK_OFFSET(0x18D064E0)
#define CLASS_2_2CF600F518D344A2_INACTIVEENVIROMENT_OFFSET UNITYSDK_OFFSET(0x18D03FD0)
#define CLASS_2_2CF600F518D344A2_INITBATTLEAREA_OFFSET UNITYSDK_OFFSET(0x18D01D90)
#define CLASS_2_2CF600F518D344A2_INITOPENWORLD_OFFSET UNITYSDK_OFFSET(0x18D01870)
#define CLASS_2_2CF600F518D344A2_INITREGIONMANAGER_OFFSET UNITYSDK_OFFSET(0x18D01BB0)
#define CLASS_2_2CF600F518D344A2_INVOKEUNITYGOLOGICRESETWITHTAMONO_OFFSET UNITYSDK_OFFSET(0x18D03B10)
#define CLASS_2_2CF600F518D344A2_ISBATTLEAREALOADFINISH_OFFSET UNITYSDK_OFFSET(0x18D02740)
#define CLASS_2_2CF600F518D344A2_ISSTREAMINGLOADFINISH_OFFSET UNITYSDK_OFFSET(0x18D02660)
#define CLASS_2_2CF600F518D344A2_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18D02390)
#define CLASS_2_2CF600F518D344A2_LOADAREA_OFFSET UNITYSDK_OFFSET(0x18D06E90)
#define CLASS_2_2CF600F518D344A2_LOADBATTLEAREABLOCK_OFFSET UNITYSDK_OFFSET(0x18D039D0)
#define CLASS_2_2CF600F518D344A2_LOAD_OFFSET UNITYSDK_OFFSET(0x18D01070)
#define CLASS_2_2CF600F518D344A2_LOCKMAINSTREAMINGSOURCE_OFFSET UNITYSDK_OFFSET(0x18D07E20)
#define CLASS_2_2CF600F518D344A2_METHOD_2_111E3F406ABDDAA7_OFFSET UNITYSDK_OFFSET(0x18D01640)
#define CLASS_2_2CF600F518D344A2_METHOD_2_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0x18D062A0)
#define CLASS_2_2CF600F518D344A2_METHOD_2_7854AA0B7A17DA18_OFFSET UNITYSDK_OFFSET(0x185BD430)
#define CLASS_2_2CF600F518D344A2_METHOD_2_C7CCAF1C279004F7_1_OFFSET UNITYSDK_OFFSET(0x18D05D90)
#define CLASS_2_2CF600F518D344A2_METHOD_2_C7CCAF1C279004F7_OFFSET UNITYSDK_OFFSET(0x18D04BD0)
#define CLASS_2_2CF600F518D344A2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18D060B0)
#define CLASS_2_2CF600F518D344A2_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x185BD850)
#define CLASS_2_2CF600F518D344A2_METHOD_2_F1BE9F8DD9A4BA42_OFFSET UNITYSDK_OFFSET(0x185BD800)
#define CLASS_2_2CF600F518D344A2_METHOD_2_FE72BF2F281C4FA8_1_OFFSET UNITYSDK_OFFSET(0x18D03000)
#define CLASS_2_2CF600F518D344A2_METHOD_2_FE72BF2F281C4FA8_2_OFFSET UNITYSDK_OFFSET(0x18D032A0)
#define CLASS_2_2CF600F518D344A2_METHOD_2_FE72BF2F281C4FA8_OFFSET UNITYSDK_OFFSET(0x18D02D90)
#define CLASS_2_2CF600F518D344A2_ONENTERMAP_OFFSET UNITYSDK_OFFSET(0x18D01E20)
#define CLASS_2_2CF600F518D344A2_ONMONOEFFECTPOSITIONCHANGED_OFFSET UNITYSDK_OFFSET(0x18D05940)
#define CLASS_2_2CF600F518D344A2_PREINITOPENWORLD_OFFSET UNITYSDK_OFFSET(0x18D01690)
#define CLASS_2_2CF600F518D344A2_REMOVEADDITIONCENTER_OFFSET UNITYSDK_OFFSET(0x18D07C90)
#define CLASS_2_2CF600F518D344A2_REMOVEBLOCK_OFFSET UNITYSDK_OFFSET(0x18D07F60)
#define CLASS_2_2CF600F518D344A2_REMOVEENTITYSTREAMING_OFFSET UNITYSDK_OFFSET(0x18D050C0)
#define CLASS_2_2CF600F518D344A2_REMOVEMONOEFFECTSTREAMING_OFFSET UNITYSDK_OFFSET(0x18D04EA0)
#define CLASS_2_2CF600F518D344A2_RUNTIMEADDRENDERSTUB_1_OFFSET UNITYSDK_OFFSET(0x18D07550)
#define CLASS_2_2CF600F518D344A2_RUNTIMEADDRENDERSTUB_OFFSET UNITYSDK_OFFSET(0x18D072D0)
#define CLASS_2_2CF600F518D344A2_RUNTIMEADDSTREAMINGITEM_1_OFFSET UNITYSDK_OFFSET(0x18D05340)
#define CLASS_2_2CF600F518D344A2_RUNTIMEADDSTREAMINGITEM_2_OFFSET UNITYSDK_OFFSET(0x18D054F0)
#define CLASS_2_2CF600F518D344A2_RUNTIMEADDSTREAMINGITEM_OFFSET UNITYSDK_OFFSET(0x18D05180)
#define CLASS_2_2CF600F518D344A2_RUNTIMEDYNAMICLOADOPTIONALBLOCK_OFFSET UNITYSDK_OFFSET(0x18D060F0)
#define CLASS_2_2CF600F518D344A2_RUNTIMEDYNAMICREMOVEBLOCK_OFFSET UNITYSDK_OFFSET(0x18D061C0)
#define CLASS_2_2CF600F518D344A2_RUNTIMELOADOPTIONALBLOCKSCONFIG_OFFSET UNITYSDK_OFFSET(0x18D06CF0)
#define CLASS_2_2CF600F518D344A2_RUNTIMEREMOVERENDERSTUB_OFFSET UNITYSDK_OFFSET(0x18D07460)
#define CLASS_2_2CF600F518D344A2_RUNTIMEREMOVESTREAMINGITEM_OFFSET UNITYSDK_OFFSET(0x18D056C0)
#define CLASS_2_2CF600F518D344A2_RUNTIMESETSTREAMINGENABLE_OFFSET UNITYSDK_OFFSET(0x18D05F80)
#define CLASS_2_2CF600F518D344A2_RUNTIMESETSTREAMINGITEMVISIBLE_OFFSET UNITYSDK_OFFSET(0x18D05750)
#define CLASS_2_2CF600F518D344A2_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x18D067E0)
#define CLASS_2_2CF600F518D344A2_SETADDITIONCENTER_OFFSET UNITYSDK_OFFSET(0x18D07730)
#define CLASS_2_2CF600F518D344A2_SETALLBLOCKVISIBLE_OFFSET UNITYSDK_OFFSET(0x18D06C20)
#define CLASS_2_2CF600F518D344A2_SETBLOCKFOCUSWITHNAMES_OFFSET UNITYSDK_OFFSET(0x18D07200)
#define CLASS_2_2CF600F518D344A2_SETBLOCKFORCEHIDEEXCEPTNAMES_OFFSET UNITYSDK_OFFSET(0x18D02B40)
#define CLASS_2_2CF600F518D344A2_SETBLOCKFORCEHIDEEXCEPTTAGNAME_OFFSET UNITYSDK_OFFSET(0x18D02A40)
#define CLASS_2_2CF600F518D344A2_SETBLOCKFORCEHLODWITHTAGS_OFFSET UNITYSDK_OFFSET(0x18D02970)
#define CLASS_2_2CF600F518D344A2_SETBLOCKVISIBLEBYALIAS_OFFSET UNITYSDK_OFFSET(0x18D06B40)
#define CLASS_2_2CF600F518D344A2_SETBLOCKVISIBLEBYALLHOYOTAGS_OFFSET UNITYSDK_OFFSET(0x18D06A60)
#define CLASS_2_2CF600F518D344A2_SETBLOCKVISIBLEBYHOYOTAG_OFFSET UNITYSDK_OFFSET(0x18D06980)
#define CLASS_2_2CF600F518D344A2_SETBLOCKVISIBLEBYTAG_OFFSET UNITYSDK_OFFSET(0x18D068A0)
#define CLASS_2_2CF600F518D344A2_SETFORCESTREAMING_OFFSET UNITYSDK_OFFSET(0x18D05A00)
#define CLASS_2_2CF600F518D344A2_SETMAPDEF_OFFSET UNITYSDK_OFFSET(0x18D01430)
#define CLASS_2_2CF600F518D344A2_SETSHAREDALIASTASKVISIBLESTATE_OFFSET UNITYSDK_OFFSET(0x18D04680)
#define CLASS_2_2CF600F518D344A2_SETUNLOADENABLE_OFFSET UNITYSDK_OFFSET(0x18D04B20)
#define CLASS_2_2CF600F518D344A2_SHOWALLBLOCKS_OFFSET UNITYSDK_OFFSET(0x18D03460)
#define CLASS_2_2CF600F518D344A2_SHOWAREAONLY_OFFSET UNITYSDK_OFFSET(0x18D06DD0)
#define CLASS_2_2CF600F518D344A2_SYNCPLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0x18D06620)
#define CLASS_2_2CF600F518D344A2_TRYREGISTERRENDERSTUBREBUILDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18D04A50)
#define CLASS_2_2CF600F518D344A2_UNLOADALLRESOURCE_OFFSET UNITYSDK_OFFSET(0x18D02F50)
#define CLASS_2_2CF600F518D344A2_UNLOADBATTLEAREABLOCK_OFFSET UNITYSDK_OFFSET(0x18D028C0)
#define CLASS_2_2CF600F518D344A2_UNLOADPERSISTENTRESOURCE_OFFSET UNITYSDK_OFFSET(0x18D031C0)
#define CLASS_2_2CF600F518D344A2_UNLOADSTREAMINGRESOURCE_OFFSET UNITYSDK_OFFSET(0x18D02CE0)
#define CLASS_2_2CF600F518D344A2_UNLOCKMAINSTREAMINGSOURCE_OFFSET UNITYSDK_OFFSET(0x18D07ED0)
#define CLASS_2_2CF600F518D344A2_UNMARKALIASINSTANCE_OFFSET UNITYSDK_OFFSET(0x18D04200)
#define CLASS_2_2CF600F518D344A2_UNMARKALIASSTREAMINGINSTANCE_OFFSET UNITYSDK_OFFSET(0x18D043D0)
#define CLASS_2_2CF600F518D344A2_UPDATEITEMLODTEMPLATE_OFFSET UNITYSDK_OFFSET(0x18D05860)
#define CLASS_2_2CF600F518D344A2_UPDATESTREAMINGLOADFINISH_OFFSET UNITYSDK_OFFSET(0x18D02200)
#define CLASS_2_2CF600F518D344A2_UPDATE_OFFSET UNITYSDK_OFFSET(0x18D02020)
#define CLASS_2_2CF600F518D344A2_VISIBLEPCONLYBLOCK_OFFSET UNITYSDK_OFFSET(0x18D05CB0)
#define CLASS_2_2CF600F518D344A2__CTOR_OFFSET UNITYSDK_OFFSET(0x185BD8C0)
#define CLASS_2_2CF600F518D344A2__UPDATEAFTEROPENWORLDUPDATE_OFFSET UNITYSDK_OFFSET(0x185BD860)

inline static constexpr unsigned int Class_2_2CF600F518D344A2_TypeDefinitionIndex = 69462;

class Class_2_2CF600F518D344A2 : public ::RPG::Client::Stage
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::Stage*>* CFOLJKEEKGL; // 0xC0
	::RPG::GameCore::StageConfig* PPAODDKLMMC; // 0xC8
	::RPG::Client::Stage* HPODNCAICPG; // 0xD0
	::System::Boolean ABEFLHEBPFE; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2__CTOR_OFFSET))(this);
	}

	::System::Void Load(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_LOAD_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void SetMapDef(::RPG::Client::MapDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_SETMAPDEF_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_111E3F406ABDDAA7(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_METHOD_2_111E3F406ABDDAA7_OFFSET))(this, a1);
	}

	::System::Void PreInitOpenWorld(::RPG::Client::MapDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_PREINITOPENWORLD_OFFSET))(this, a1);
	}

	::System::Void InitOpenWorld(::Struct_2_84DFD00216157EA7 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_84DFD00216157EA7, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_INITOPENWORLD_OFFSET))(this, a1, a2);
	}

	::System::Void InitRegionManager()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_INITREGIONMANAGER_OFFSET))(this);
	}

	::System::Void InitBattleArea(::Class_1_777F514A924455D9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_777F514A924455D9*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_INITBATTLEAREA_OFFSET))(this, a1);
	}

	::System::Void OnEnterMap()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_ONENTERMAP_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_UPDATE_OFFSET))(this, a1);
	}

	::System::Void UpdateStreamingLoadFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_UPDATESTREAMINGLOADFINISH_OFFSET))(this);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void EndOfTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_ENDOFTICK_OFFSET))(this, a1);
	}

	::System::Boolean IsStreamingLoadFinish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_ISSTREAMINGLOADFINISH_OFFSET))(this);
	}

	::System::Boolean IsBattleAreaLoadFinish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_ISBATTLEAREALOADFINISH_OFFSET))(this);
	}

	::System::Void DebugReportWhyNotBattleAreaLoadFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_DEBUGREPORTWHYNOTBATTLEAREALOADFINISH_OFFSET))(this);
	}

	::System::Void UnloadBattleAreaBlock()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_UNLOADBATTLEAREABLOCK_OFFSET))(this);
	}

	::System::Void SetBlockForceHLODWithTags(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_SETBLOCKFORCEHLODWITHTAGS_OFFSET))(this, a1, a2);
	}

	::System::Void SetBlockForceHideExceptTagName(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_SETBLOCKFORCEHIDEEXCEPTTAGNAME_OFFSET))(this, a1, a2);
	}

	::System::Void SetBlockForceHideExceptNames(::System::Collections::Generic::ISet_1<::System::String*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ISet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_SETBLOCKFORCEHIDEEXCEPTNAMES_OFFSET))(this, a1, a2);
	}

	::System::Void ForceActiveBlocksEntity(::System::Collections::Generic::ISet_1<::System::String*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ISet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_FORCEACTIVEBLOCKSENTITY_OFFSET))(this, a1, a2);
	}

	::System::Void UnloadStreamingResource()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_UNLOADSTREAMINGRESOURCE_OFFSET))(this);
	}

	::System::Void Method_2_FE72BF2F281C4FA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_METHOD_2_FE72BF2F281C4FA8_OFFSET))(this);
	}

	::System::Void UnloadAllResource()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_UNLOADALLRESOURCE_OFFSET))(this);
	}

	::System::Void Method_2_FE72BF2F281C4FA8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_METHOD_2_FE72BF2F281C4FA8_1_OFFSET))(this);
	}

	::System::Void UnloadPersistentResource()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_UNLOADPERSISTENTRESOURCE_OFFSET))(this);
	}

	::System::Void Method_2_FE72BF2F281C4FA8_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_METHOD_2_FE72BF2F281C4FA8_2_OFFSET))(this);
	}

	::System::Void ShowAllBlocks()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_SHOWALLBLOCKS_OFFSET))(this);
	}

	::UnityEngine::GameObject* GetPersistentTagRoot(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_GETPERSISTENTTAGROOT_OFFSET))(this, a1);
	}

	::System::Void CollectBlocksByTag(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_COLLECTBLOCKSBYTAG_OFFSET))(this, a1, a2);
	}

	::System::Void CollectStreamingBlockByNameSet(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1, ::System::Collections::Generic::ISet_1<::System::String*>* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Collections::Generic::ISet_1<::System::String*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_COLLECTSTREAMINGBLOCKBYNAMESET_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void ForeachStreamingBlocks(::System::Action_1<::Class_1_303D5A33D1401D59*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_303D5A33D1401D59*>*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_FOREACHSTREAMINGBLOCKS_OFFSET))(this, a1);
	}

	::System::Void CollectBlocksByTag_1(::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_COLLECTBLOCKSBYTAG_1_OFFSET))(this, a1, a2);
	}

	::System::Void LoadBattleAreaBlock(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_LOADBATTLEAREABLOCK_OFFSET))(this, a1, a2);
	}

	::System::Void ClearSideEffect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_CLEARSIDEEFFECT_OFFSET))(this);
	}

	::System::Void InvokeUnityGoLogicResetWithTAMono()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_INVOKEUNITYGOLOGICRESETWITHTAMONO_OFFSET))(this);
	}

	::System::Void Destroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_DESTROY_OFFSET))(this);
	}

	::System::Void ActiveEnvironment(::UnityEngine::GameObject* a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::Client::OpenWorld::StreamingBlockType a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::RPG::Client::OpenWorld::StreamingBlockType))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_ACTIVEENVIRONMENT_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void InActiveEnviroment(::UnityEngine::GameObject* a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::Client::OpenWorld::StreamingBlockType a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::RPG::Client::OpenWorld::StreamingBlockType))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_INACTIVEENVIROMENT_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::GameObject* GetAliasInstanceAndMark(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a4, ::System::Boolean a5)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_GETALIASINSTANCEANDMARK_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void UnMarkAliasInstance(::System::String* a1, ::System::String* a2, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_UNMARKALIASINSTANCE_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_8A6989C352B0F0F0* GetAliasStreamingInstanceAndMark(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Action_2<::Class_1_8A6989C352B0F0F0*, ::RPG::Client::OpenWorld::StreamingItemData*>* a4, ::System::Boolean a5)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action_2<::Class_1_8A6989C352B0F0F0*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_GETALIASSTREAMINGINSTANCEANDMARK_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void UnMarkAliasStreamingInstance(::System::String* a1, ::System::String* a2, ::System::Action_2<::Class_1_8A6989C352B0F0F0*, ::RPG::Client::OpenWorld::StreamingItemData*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_2<::Class_1_8A6989C352B0F0F0*, ::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_UNMARKALIASSTREAMINGINSTANCE_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::OpenWorld::StreamingItemData* GetAliasItemData(::System::String* a1, ::System::String* a2)
	{
		return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_GETALIASITEMDATA_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* GetSharedAliasItemDataList(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_GETSHAREDALIASITEMDATALIST_OFFSET))(this, a1, a2);
	}

	::System::Void SetSharedAliasTaskVisibleState(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_SETSHAREDALIASTASKVISIBLESTATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void ClearSharedAliasTaskVisibleState(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_CLEARSHAREDALIASTASKVISIBLESTATE_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* GetPersistentInstObj(::System::String* a1, ::System::String* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_GETPERSISTENTINSTOBJ_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* GetAliasItemGameObject(::System::String* a1, ::System::String* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_GETALIASITEMGAMEOBJECT_OFFSET))(this, a1, a2);
	}

	::System::Boolean TryRegisterRenderStubRebuildCallback(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action_1<::RPG::Client::OpenWorld::StreamingItemData*>* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_1<::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_TRYREGISTERRENDERSTUBREBUILDCALLBACK_OFFSET))(this, a1, a2, a3);
	}

	::System::Void SetUnloadEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_SETUNLOADENABLE_OFFSET))(this, a1);
	}

	::System::Void Method_2_C7CCAF1C279004F7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_METHOD_2_C7CCAF1C279004F7_OFFSET))(this, a1);
	}

	::System::Boolean AddMonoEffectStreaming(::Class_2_7CFCF5679171877C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_7CFCF5679171877C*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_ADDMONOEFFECTSTREAMING_OFFSET))(this, a1);
	}

	::System::Void RemoveMonoEffectStreaming(::Class_2_7CFCF5679171877C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7CFCF5679171877C*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_REMOVEMONOEFFECTSTREAMING_OFFSET))(this, a1);
	}

	::System::Void ForceMonoEffectStreamingUpdate(::Class_2_7CFCF5679171877C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7CFCF5679171877C*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_FORCEMONOEFFECTSTREAMINGUPDATE_OFFSET))(this, a1);
	}

	::System::Boolean AddEntityStreaming(::Class_2_00007E9796694121* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_00007E9796694121*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_ADDENTITYSTREAMING_OFFSET))(this, a1, a2);
	}

	::System::Void RemoveEntityStreaming(::Class_2_00007E9796694121* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_00007E9796694121*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_REMOVEENTITYSTREAMING_OFFSET))(this, a1);
	}

	::RPG::Client::OpenWorld::StreamingItemData* RuntimeAddStreamingItem(::UnityEngine::GameObject* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::GameObject* a5)
	{
		return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_RUNTIMEADDSTREAMINGITEM_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::Client::OpenWorld::StreamingItemData* RuntimeAddStreamingItem_1(::Struct_2_A77148D52D516E55 a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::GameObject* a3, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a4, ::System::Action_3<::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a5, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a6, ::System::String* a7, ::System::Boolean a8, ::RPG::Client::OpenWorld::StreamingItemVisibleReason a9, ::System::Boolean a10)
	{
		return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID, ::Struct_2_A77148D52D516E55, ::RPG::GameCore::GameEntity*, ::UnityEngine::GameObject*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Action_3<::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemVisibleReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_RUNTIMEADDSTREAMINGITEM_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::RPG::Client::OpenWorld::StreamingItemData* RuntimeAddStreamingItem_2(::System::String* a1, ::UnityEngine::Vector3 a2, ::System::Nullable_1<::UnityEngine::Vector3> a3, ::RPG::GameCore::GameEntity* a4, ::UnityEngine::GameObject* a5, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a6, ::System::Action_3<::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a7, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a8, ::System::String* a9, ::System::Boolean a10)
	{
		return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Vector3>, ::RPG::GameCore::GameEntity*, ::UnityEngine::GameObject*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Action_3<::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_RUNTIMEADDSTREAMINGITEM_2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void RuntimeRemoveStreamingItem(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_RUNTIMEREMOVESTREAMINGITEM_OFFSET))(this, a1);
	}

	::System::Void RuntimeSetStreamingItemVisible(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2, ::RPG::Client::OpenWorld::StreamingItemVisibleReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemVisibleReason))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_RUNTIMESETSTREAMINGITEMVISIBLE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void UpdateItemLodTemplate(::Class_2_5A5C70F7A3C39C00* a1, ::RPG::GameCore::EntityLodTemplateName a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5A5C70F7A3C39C00*, ::RPG::GameCore::EntityLodTemplateName))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_UPDATEITEMLODTEMPLATE_OFFSET))(this, a1, a2);
	}

	::System::Void OnMonoEffectPositionChanged(::Class_2_7CFCF5679171877C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7CFCF5679171877C*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_ONMONOEFFECTPOSITIONCHANGED_OFFSET))(this, a1);
	}

	::System::Void SetForceStreaming()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_SETFORCESTREAMING_OFFSET))(this);
	}

	::UnityEngine::GameObject* GetTransformTool()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_GETTRANSFORMTOOL_OFFSET))(this);
	}

	::System::Void VisiblePcOnlyBlock(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_VISIBLEPCONLYBLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_2_C7CCAF1C279004F7_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_METHOD_2_C7CCAF1C279004F7_1_OFFSET))(this, a1);
	}

	::System::Void RuntimeSetStreamingEnable(::System::Boolean a1, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::StreamingLayerType>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::StreamingLayerType>*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_RUNTIMESETSTREAMINGENABLE_OFFSET))(this, a1, a2);
	}

	::System::Void EnableStreamingDebugScript()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_ENABLESTREAMINGDEBUGSCRIPT_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void RuntimeDynamicLoadOptionalBlock(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_RUNTIMEDYNAMICLOADOPTIONALBLOCK_OFFSET))(this, a1, a2);
	}

	::System::Void RuntimeDynamicRemoveBlock(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_RUNTIMEDYNAMICREMOVEBLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_2_3BC8B8F2BB08C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_METHOD_2_3BC8B8F2BB08C1C2_OFFSET))(this);
	}

	::System::Void EnableDynamicBlockEnvProfileData(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_ENABLEDYNAMICBLOCKENVPROFILEDATA_OFFSET))(this, a1);
	}

	::Class_1_D70A30D666F20D90* get_OpenWorld()
	{
		return ((::Class_1_D70A30D666F20D90*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_GET_OPENWORLD_OFFSET))(this);
	}

	::System::Void SyncPlayerPosition(::Struct_2_84DFD00216157EA7 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_84DFD00216157EA7))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_SYNCPLAYERPOSITION_OFFSET))(this, a1);
	}

	::System::Void SetActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_SETACTIVE_OFFSET))(this, a1);
	}

	::System::Void SetBlockVisibleByTag(::System::String* a1, ::System::Boolean a2, ::RPG::Client::OpenWorld::BlockVisibleReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_SETBLOCKVISIBLEBYTAG_OFFSET))(this, a1, a2, a3);
	}

	::System::Void SetBlockVisibleByHoyoTag(::System::String* a1, ::System::Boolean a2, ::RPG::Client::OpenWorld::BlockVisibleReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_SETBLOCKVISIBLEBYHOYOTAG_OFFSET))(this, a1, a2, a3);
	}

	::System::Void SetBlockVisibleByAllHoyoTags(::RPG::GameCore::HoyoTagContainer* a1, ::System::Boolean a2, ::RPG::Client::OpenWorld::BlockVisibleReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTagContainer*, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_SETBLOCKVISIBLEBYALLHOYOTAGS_OFFSET))(this, a1, a2, a3);
	}

	::System::Void SetBlockVisibleByAlias(::System::String* a1, ::System::Boolean a2, ::RPG::Client::OpenWorld::BlockVisibleReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_SETBLOCKVISIBLEBYALIAS_OFFSET))(this, a1, a2, a3);
	}

	::System::Void SetAllBlockVisible(::System::Boolean a1, ::RPG::Client::OpenWorld::BlockVisibleReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_SETALLBLOCKVISIBLE_OFFSET))(this, a1, a2);
	}

	::System::Void RuntimeLoadOptionalBlocksConfig(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_RUNTIMELOADOPTIONALBLOCKSCONFIG_OFFSET))(this, a1);
	}

	::System::Void ShowAreaOnly(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_SHOWAREAONLY_OFFSET))(this, a1);
	}

	::System::Void LoadArea(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_LOADAREA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void DebugSetAreaDeltaPosition(::System::String* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_DEBUGSETAREADELTAPOSITION_OFFSET))(this, a1, a2);
	}

	::System::Void GetRangeEntity(::UnityEngine::Rect a1, ::RPG::GameCore::EntityType a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::RPG::GameCore::EntityType, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*&))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_GETRANGEENTITY_OFFSET))(this, a1, a2, a3);
	}

	::System::Void SetBlockFocusWithNames(::System::Collections::Generic::ISet_1<::System::String*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ISet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_SETBLOCKFOCUSWITHNAMES_OFFSET))(this, a1, a2);
	}

	::RPG::Client::OpenWorld::StreamingItemData* RuntimeAddRenderStub(::System::String* a1, ::Struct_2_A77148D52D516E55 a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID, ::System::String*, ::Struct_2_A77148D52D516E55, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_RUNTIMEADDRENDERSTUB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void RuntimeRemoveRenderStub(::System::String* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_RUNTIMEREMOVERENDERSTUB_OFFSET))(this, a1, a2);
	}

	::RPG::Client::OpenWorld::StreamingItemData* RuntimeAddRenderStub_1(::System::String* a1, ::System::String* a2, ::System::String* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::System::Boolean a7)
	{
		return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_RUNTIMEADDRENDERSTUB_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void SetAdditionCenter(::System::String* a1, ::RPG::GameCore::AnchorInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_SETADDITIONCENTER_OFFSET))(this, a1, a2);
	}

	::System::Void AddStreamingSource(::System::String* a1, ::RPG::GameCore::AnchorInfo* a2, ::Class_1_7A6E49020D23C900* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::AnchorInfo*, ::Class_1_7A6E49020D23C900*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_ADDSTREAMINGSOURCE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void AddStreamingSource_1(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_7A6E49020D23C900* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::Class_1_7A6E49020D23C900*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_ADDSTREAMINGSOURCE_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void RemoveAdditionCenter(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_REMOVEADDITIONCENTER_OFFSET))(this, a1, a2);
	}

	::System::Void ClearAdditionCenters(::Class_1_7A6E49020D23C900* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7A6E49020D23C900*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_CLEARADDITIONCENTERS_OFFSET))(this, a1);
	}

	::System::Void LockMainStreamingSource(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_LOCKMAINSTREAMINGSOURCE_OFFSET))(this, a1);
	}

	::System::Void UnlockMainStreamingSource()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_UNLOCKMAINSTREAMINGSOURCE_OFFSET))(this);
	}

	::System::Void RemoveBlock(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_REMOVEBLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7854AA0B7A17DA18(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_METHOD_2_7854AA0B7A17DA18_OFFSET))(this, a1);
	}

	::RPG::Client::Stage* Method_2_F1BE9F8DD9A4BA42()
	{
		return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_METHOD_2_F1BE9F8DD9A4BA42_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void _UpdateAfterOpenWorldUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2CF600F518D344A2__UPDATEAFTEROPENWORLDUPDATE_OFFSET))(this, a1);
	}
};
