#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EAssemblyNPC.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/BattleEventCreateType.h"
#include "unitysdk/RPG/GameCore/CampType.h"
#include "unitysdk/RPG/GameCore/EntityManagerExtension_AbilityPropertyInitInfo.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/NPCSubType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_166;
class Class_0_16E4307DCC419505_345;
class Class_1_004034A1FAAF468A;
class Class_1_151B93D9C4BBDCA4;
class Class_1_2CAAA2FDF9170110;
class Class_1_83665B095F1535B5_16;
class Class_1_B8FB38F0526A59B0;
class Class_1_C0FA7ACF6234A735;
class Class_1_DCED81BA3E7C7B2D;
class Class_2_6729AC3ED949BE6A;
class Class_2_CBDF63BA2C3715C3;
class Class_2_D905714C1E15C1C8;
class Class_3_E21F6DE9B7FA4D05;
namespace Entitas { class IContext; }
namespace RPG::AvatarSystem { class AvatarServant; }
namespace RPG::Client { class ArtNPCPedestrianAssetConfig_ArtVariantInfo; }
namespace RPG::Client { class ArtNPCPedestrianEntityConfig_EntityInfo; }
namespace RPG::Client { class AssemNPC; }
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class MapDistrictDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class MemberData; }
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class AdventureCharacterConfig; }
namespace RPG::GameCore { class AvatarDataComponent; }
namespace RPG::GameCore { class BattleEventRow; }
namespace RPG::GameCore { class BattlePerformCreateActor; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class IAvatarServantRowWrap; }
namespace RPG::GameCore { class ICharacterRowData; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class LevelNPCPossessionInfo; }
namespace RPG::GameCore { class LittleGameProxyEntityConfig; }
namespace RPG::GameCore { class NPCDataRow; }
namespace RPG::GameCore { class NPCMonsterDataRow; }
namespace RPG::GameCore { class PropConfig; }
namespace RPG::GameCore { class PropRow; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace RPG::GameCore { class StageBattleEventRow; }
namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { class StoryCharacterRow; }
namespace RPG::GameCore { class SummonUnitConfig; }
namespace RPG::GameCore { class SummonUnitDataRow; }
namespace RPG::GameCore { class TransformComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_BATTLEDATAVIEWBEGIN_OFFSET UNITYSDK_OFFSET(0xB642830)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_BATTLEDATAVIEWEXIT_OFFSET UNITYSDK_OFFSET(0xB644110)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_BATTLEDATAVIEWSELECTENTITY_OFFSET UNITYSDK_OFFSET(0xB643B40)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_BEFOREBATTLEDATAVIEWCAMERARECOVER_OFFSET UNITYSDK_OFFSET(0xB644560)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_BUILDBATTLEPERFORMACTORROWDATA_OFFSET UNITYSDK_OFFSET(0xB6464E0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATECUTSCENEENTITY_OFFSET UNITYSDK_OFFSET(0xB63BF50)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEDISTRICT_OFFSET UNITYSDK_OFFSET(0xB63B4C0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEGROUPENTITY_OFFSET UNITYSDK_OFFSET(0xB63F960)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATELITTLEGAMECONTAINERENTITY_OFFSET UNITYSDK_OFFSET(0xB640ED0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATELITTLEGAMEINSTANCEENTITY_OFFSET UNITYSDK_OFFSET(0xB640B70)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATELITTLEGAMEPROXYENTITY_OFFSET UNITYSDK_OFFSET(0xB641340)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEMANIKINMODELENTITY_OFFSET UNITYSDK_OFFSET(0xB63D0A0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEMAPNPCMONSTER_OFFSET UNITYSDK_OFFSET(0xB637DB0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEMAPNPC_OFFSET UNITYSDK_OFFSET(0xB637AF0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATENPC_OFFSET UNITYSDK_OFFSET(0xB636570)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEPREVIEWBATTLEEVENTENTITY_OFFSET UNITYSDK_OFFSET(0xB640500)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEPREVIEWSERVANTENTITY_OFFSET UNITYSDK_OFFSET(0xB640830)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEPROP_OFFSET UNITYSDK_OFFSET(0xB639EC0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEPROP_PROCESSCAPTUREPROP_OFFSET UNITYSDK_OFFSET(0xB6398C0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEPROP_SETUPGROUPINFOCMPT_OFFSET UNITYSDK_OFFSET(0xB639E20)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEPROP_SETUPTRANSFORMCMPT_OFFSET UNITYSDK_OFFSET(0xB639BE0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATESTORYNPCENTITY_OFFSET UNITYSDK_OFFSET(0xB63C220)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATESTORYPROPENTITY_OFFSET UNITYSDK_OFFSET(0xB63C4D0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATESUMMONUNIT_OFFSET UNITYSDK_OFFSET(0xB63FDF0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DCAMERAENTITY_OFFSET UNITYSDK_OFFSET(0xB63CA80)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DFARMENTITY_OFFSET UNITYSDK_OFFSET(0xB63DDB0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DFREESTYLEENTITY_OFFSET UNITYSDK_OFFSET(0xB63F630)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DMODELENTITY_OFFSET UNITYSDK_OFFSET(0xB63D5B0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DMONSTERENTITY_OFFSET UNITYSDK_OFFSET(0xB63E400)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DPAMENTITY_OFFSET UNITYSDK_OFFSET(0xB63F0C0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DPETENTITY_OFFSET UNITYSDK_OFFSET(0xB63EA30)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DSERVANTMODELENTITY_OFFSET UNITYSDK_OFFSET(0xB63CB30)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUNITYGOENTITY_OFFSET UNITYSDK_OFFSET(0xB63BA50)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTPUZZLEENTITYBINDANIMEVENTCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB63B350)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTPUZZLEENTITYBINDMINIMAPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB63B260)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTPUZZLEOBJECTBINDPROP_OFFSET UNITYSDK_OFFSET(0xB63AE60)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLONEBATTLEPERFORMACTORENTITY_OFFSET UNITYSDK_OFFSET(0xB645DB0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEASSEMBLYNPC_OFFSET UNITYSDK_OFFSET(0xB635EE0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEBATTLEEVENTENTITY_OFFSET UNITYSDK_OFFSET(0xB648420)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEBATTLEPERFORMACTORENTITY_OFFSET UNITYSDK_OFFSET(0xB646460)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEBODYPART_OFFSET UNITYSDK_OFFSET(0xB646DB0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATECHARACTER_OFFSET UNITYSDK_OFFSET(0xB644A80)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATECUSTOMDATAENTITY_OFFSET UNITYSDK_OFFSET(0xB64A870)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0xB634BD0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEGLOBALSHIELDENTITY_OFFSET UNITYSDK_OFFSET(0xB64A260)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEGRIDFIGHTBACKENDENTITY_OFFSET UNITYSDK_OFFSET(0xB64B370)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATELEVELENTITY_OFFSET UNITYSDK_OFFSET(0xB62DAC0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATELEVELGRAPHENTITYCLIENTONLY_OFFSET UNITYSDK_OFFSET(0xB648050)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATELEVELGRAPHENTITY_1_OFFSET UNITYSDK_OFFSET(0xB63BC50)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATELEVELGRAPHENTITY_OFFSET UNITYSDK_OFFSET(0xB648360)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEMISSIONENTITY_OFFSET UNITYSDK_OFFSET(0xB647D40)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEPARTNER_OFFSET UNITYSDK_OFFSET(0xB6466F0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEPEDESTRIANARTNPC_OFFSET UNITYSDK_OFFSET(0xB636280)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEPERFORMANCELEVELGRAPHENTITY_OFFSET UNITYSDK_OFFSET(0xB63BB40)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEPLAYERTEAMMEMBER_OFFSET UNITYSDK_OFFSET(0xB6332B0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATESIMPLEMODELENTITYFORONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xB635540)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATESIMPLEMODELENTITY_OFFSET UNITYSDK_OFFSET(0xB634DC0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATESNAPSHOTENTITY_OFFSET UNITYSDK_OFFSET(0xB64AAB0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATESTAGEBATTLEEVENTENTITY_OFFSET UNITYSDK_OFFSET(0xB649E10)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATETEAMENTITY_OFFSET UNITYSDK_OFFSET(0xB62CF40)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATETEAMFORMATIONENTITY_OFFSET UNITYSDK_OFFSET(0xB64B100)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATETUTORIALGRAPHENTITY_OFFSET UNITYSDK_OFFSET(0xB64B7D0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_FILLTARGETENTITIESWITHFILTER_OFFSET UNITYSDK_OFFSET(0xB6575B0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_GETPROPPATHLOD_OFFSET UNITYSDK_OFFSET(0xB639740)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_GETTARGETSERVANT_1_OFFSET UNITYSDK_OFFSET(0xB656CC0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_GETTARGETSERVANT_OFFSET UNITYSDK_OFFSET(0xB656C10)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_HASDARKTEAMMULTIROWMODE_OFFSET UNITYSDK_OFFSET(0xB6574E0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVECHARACTERALIVEONSTAGE_OFFSET UNITYSDK_OFFSET(0xB657030)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVECHARACTERALIVEORLIMBO_OFFSET UNITYSDK_OFFSET(0xB657210)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVECHARACTERALIVE_OFFSET UNITYSDK_OFFSET(0xB657120)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVECHARACTERINTEAM_OFFSET UNITYSDK_OFFSET(0xB656DD0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVECHARACTERONSTAGE_OFFSET UNITYSDK_OFFSET(0xB656F40)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVEDARKENTITYEXCLUDEPUPPET_OFFSET UNITYSDK_OFFSET(0xB6573F0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVEDARKENTITYFORCURWAVE_OFFSET UNITYSDK_OFFSET(0xB657300)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_ISEXTRAPROPERTYENABLED_OFFSET UNITYSDK_OFFSET(0xB645CF0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_ISINBATTLEDATAVIEW_OFFSET UNITYSDK_OFFSET(0xB644980)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_ISSERVANTSOF_OFFSET UNITYSDK_OFFSET(0xB656D50)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_ONBATTLEDATAVIEWBEGIN_OFFSET UNITYSDK_OFFSET(0xB643410)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_ONBATTLEDATAVIEWEXITDONE_OFFSET UNITYSDK_OFFSET(0xB644360)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_QACREATECHARACTER_OFFSET UNITYSDK_OFFSET(0xB6449E0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYCHARACTERSINTEAMBYVALIDROWINDEX_OFFSET UNITYSDK_OFFSET(0xB6565A0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYCHARACTERSINTEAM_OFFSET UNITYSDK_OFFSET(0xB6301A0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYCHARACTERSONSTAGE_OFFSET UNITYSDK_OFFSET(0xB643300)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYTARGETSERVANTS_OFFSET UNITYSDK_OFFSET(0xB6567C0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYUNSTAGEENTITIES_OFFSET UNITYSDK_OFFSET(0xB657830)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYVALIDAVATARINCLUDEZOMBIE_OFFSET UNITYSDK_OFFSET(0xB656B20)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYVALIDCHARACTERINCLUDEZOMBIE_OFFSET UNITYSDK_OFFSET(0xB656A20)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__CCTOR_OFFSET UNITYSDK_OFFSET(0xB657A10)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__COMMONSETUPADVENTURECHARACTERPROPERTY_OFFSET UNITYSDK_OFFSET(0xB6416D0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__COMMONSETUPADVENTURECHARACTER_OFFSET UNITYSDK_OFFSET(0xB634200)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__COMMONSETUPCHARACTERPROPERTY_OFFSET UNITYSDK_OFFSET(0xB64B9A0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__COMMONSETUPCHARACTER_OFFSET UNITYSDK_OFFSET(0xB645790)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__CREATEBPACTORENTITY_OFFSET UNITYSDK_OFFSET(0xB645E70)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__DECIDEADVENTURECHARACTERCONFIG_OFFSET UNITYSDK_OFFSET(0xB6342B0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__DEFINEEXTRAAVATARPROPERTIES_OFFSET UNITYSDK_OFFSET(0xB655C00)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__DEFINEEXTRAPROPERTIES_OFFSET UNITYSDK_OFFSET(0xB655FE0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__DEFINEEXTRAPROPERTY_OFFSET UNITYSDK_OFFSET(0xB656420)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__DEFINEPROPERTY_1_OFFSET UNITYSDK_OFFSET(0xB6559E0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__DEFINEPROPERTY_2_OFFSET UNITYSDK_OFFSET(0xB655A80)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__DEFINEPROPERTY_OFFSET UNITYSDK_OFFSET(0xB655940)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__FAKEAVATARCOMPONENTINITIALIZE_OFFSET UNITYSDK_OFFSET(0xB6343A0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__REFRESHSERVANTCUSTOMTEAMFORMATIONFORVIEWMODE_OFFSET UNITYSDK_OFFSET(0xB643920)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__SETUPMONSTERGROUPRELATION_OFFSET UNITYSDK_OFFSET(0xB645C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityManagerExtension_TypeDefinitionIndex = 53269;

	class EntityManagerExtension : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_PROP_LOD1_SUFFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EntityManagerExtension_TypeDefinitionIndex)->GetStaticField(0x49ED0);
		}
		static ::Class_1_C0FA7ACF6234A735** StaticGet_CameraConfigToRecover()
		{
			return (::Class_1_C0FA7ACF6234A735**)Il2CppClass::FromTypeDefinitionIndex(EntityManagerExtension_TypeDefinitionIndex)->GetStaticField(0x49ED8);
		}
		static ::System::String** StaticGet_PROP_LOD0_SUFFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EntityManagerExtension_TypeDefinitionIndex)->GetStaticField(0x49EE0);
		}
		static ::System::Boolean* StaticGet__IsInBattleDataView()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EntityManagerExtension_TypeDefinitionIndex)->GetStaticField(0xFA20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::GameEntity* CreatePlayerTeamMember(::RPG::GameCore::EntityManager* pManager, ::RPG::GameCore::TeamType eTeam, ::RPG::GameCore::EntityType eEntityType, ::RPG::Client::MemberData* memberData, ::System::Action_1<::RPG::GameCore::GameEntity*>* onEntityLoaded)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::TeamType, ::RPG::GameCore::EntityType, ::RPG::Client::MemberData*, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEPLAYERTEAMMEMBER_OFFSET))(pManager, eTeam, eEntityType, memberData, onEntityLoaded);
		}

		static ::RPG::GameCore::AdventureCharacterConfig* _DecideAdventureCharacterConfig(::Class_1_DCED81BA3E7C7B2D* memberData, ::RPG::GameCore::GameEntity* controlEntity)
		{
			return ((::RPG::GameCore::AdventureCharacterConfig*(*)(::Class_1_DCED81BA3E7C7B2D*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__DECIDEADVENTURECHARACTERCONFIG_OFFSET))(memberData, controlEntity);
		}

		static ::System::Void _FakeAvatarComponentInitialize(::RPG::GameCore::GameEntity* pEntity, ::Class_1_DCED81BA3E7C7B2D* memberData, ::RPG::GameCore::AdventureCharacterConfig* pJsonConfig, ::RPG::GameCore::EntityManager* pManager)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::Class_1_DCED81BA3E7C7B2D*, ::RPG::GameCore::AdventureCharacterConfig*, ::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__FAKEAVATARCOMPONENTINITIALIZE_OFFSET))(pEntity, memberData, pJsonConfig, pManager);
		}

		static ::RPG::GameCore::GameEntity* CreateFakeAvatar(::RPG::GameCore::EntityManager* pManager, ::RPG::GameCore::GameEntity* controlEntity, ::RPG::GameCore::TeamType eTeam, ::RPG::GameCore::EntityType eEntityType, ::Class_1_DCED81BA3E7C7B2D* memberData, ::RPG::GameCore::CampType customCampType)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamType, ::RPG::GameCore::EntityType, ::Class_1_DCED81BA3E7C7B2D*, ::RPG::GameCore::CampType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEFAKEAVATAR_OFFSET))(pManager, controlEntity, eTeam, eEntityType, memberData, customCampType);
		}

		static ::RPG::GameCore::GameEntity* CreateSimpleModelEntity(::RPG::GameCore::EntityManager* pManager, ::RPG::GameCore::GameEntity* targetEntity)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATESIMPLEMODELENTITY_OFFSET))(pManager, targetEntity);
		}

		static ::RPG::GameCore::GameEntity* CreateSimpleModelEntityForOnlinePlayRoom(::RPG::GameCore::EntityManager* pManager, ::RPG::Client::AvatarData* avatarData)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATESIMPLEMODELENTITYFORONLINEPLAYROOM_OFFSET))(pManager, avatarData);
		}

		static ::RPG::GameCore::GameEntity* CreateAssemblyNPC(::RPG::GameCore::EntityManager* pManager, ::RPG::Client::AssemNPC* npcConfig, ::RPG::GameCore::LevelNPCPossessionInfo* possession, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* additivePossessions, ::UnityEngine::Vector3 bornPos, ::System::String* uniqueName, ::RPG::Client::EAssemblyNPC npcType, ::System::UInt32 motionID, ::System::Action_1<::RPG::GameCore::GameEntity*>* OnLoadFinish)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::Client::AssemNPC*, ::RPG::GameCore::LevelNPCPossessionInfo*, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>*, ::UnityEngine::Vector3, ::System::String*, ::RPG::Client::EAssemblyNPC, ::System::UInt32, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEASSEMBLYNPC_OFFSET))(pManager, npcConfig, possession, additivePossessions, bornPos, uniqueName, npcType, motionID, OnLoadFinish);
		}

		static ::RPG::GameCore::GameEntity* CreatePedestrianArtNPC(::RPG::GameCore::EntityManager* pManager, ::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo* entityInfo, ::RPG::Client::ArtNPCPedestrianAssetConfig_ArtVariantInfo* artVariantInfo, ::UnityEngine::Vector3 bornPos, ::System::Action_1<::RPG::GameCore::GameEntity*>* onLoadFinish)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo*, ::RPG::Client::ArtNPCPedestrianAssetConfig_ArtVariantInfo*, ::UnityEngine::Vector3, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEPEDESTRIANARTNPC_OFFSET))(pManager, entityInfo, artVariantInfo, bornPos, onLoadFinish);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateNPC(::RPG::GameCore::EntityManager* pManager, ::System::String* levelGraphPath, ::System::String* strPrefabPath, ::System::String* strConfigEntityPath, ::System::String* strCharacterName, ::System::String* strJsonConfig, ::RPG::GameCore::EntityType entityType, ::System::Action_1<::RPG::GameCore::GameEntity*>* onLoadFinish, ::System::Action_1<::RPG::GameCore::GameEntity*>* onCreate, ::RPG::Client::MapNpcDef* npcDef, ::RPG::GameCore::NPCDataRow* npcRow, ::System::Boolean isSyncLoad)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::RPG::GameCore::EntityType, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::RPG::Client::MapNpcDef*, ::RPG::GameCore::NPCDataRow*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATENPC_OFFSET))(pManager, levelGraphPath, strPrefabPath, strConfigEntityPath, strCharacterName, strJsonConfig, entityType, onLoadFinish, onCreate, npcDef, npcRow, isSyncLoad);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateMapNPC(::RPG::GameCore::EntityManager* pManager, ::RPG::Client::MapNpcDef* npcDef, ::RPG::GameCore::NPCDataRow* npcRow, ::System::Action_1<::RPG::GameCore::GameEntity*>* onLoadFinish, ::System::Boolean isSyncLoad)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::Client::MapNpcDef*, ::RPG::GameCore::NPCDataRow*, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEMAPNPC_OFFSET))(pManager, npcDef, npcRow, onLoadFinish, isSyncLoad);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateMapNPCMonster(::RPG::GameCore::EntityManager* pManager, ::RPG::Client::MapNpcDef* npcDef, ::RPG::GameCore::NPCMonsterDataRow* npcMonsterRow, ::System::Action_1<::RPG::GameCore::GameEntity*>* onLoadFinish, ::System::Boolean isSyncLoad)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::Client::MapNpcDef*, ::RPG::GameCore::NPCMonsterDataRow*, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEMAPNPCMONSTER_OFFSET))(pManager, npcDef, npcMonsterRow, onLoadFinish, isSyncLoad);
		}

		static ::System::String* GetPropPathLOD(::System::String* sPath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_GETPROPPATHLOD_OFFSET))(sPath);
		}

		static ::System::Void ClientCreateProp_ProcessCaptureProp(::System::String* strConfigEntityPath, ::Class_2_CBDF63BA2C3715C3* itemData, ::RPG::GameCore::CharacterModelComponent* characterModelCmpt, ::UnityEngine::GameObject* propGO, ::System::Boolean isSyncLoad, ::System::Boolean isLightWeightCapture)
		{
			return ((::System::Void(*)(::System::String*, ::Class_2_CBDF63BA2C3715C3*, ::RPG::GameCore::CharacterModelComponent*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEPROP_PROCESSCAPTUREPROP_OFFSET))(strConfigEntityPath, itemData, characterModelCmpt, propGO, isSyncLoad, isLightWeightCapture);
		}

		static ::System::Void ClientCreateProp_SetupTransformCmpt(::RPG::GameCore::GameEntity* pEntity, ::RPG::MVector3 position, ::System::Single yaw, ::System::Single pitch, ::System::Single roll, ::RPG::MVector3 scale)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::MVector3, ::System::Single, ::System::Single, ::System::Single, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEPROP_SETUPTRANSFORMCMPT_OFFSET))(pEntity, position, yaw, pitch, roll, scale);
		}

		static ::System::Void ClientCreateProp_SetupGroupInfoCmpt(::RPG::GameCore::GameEntity* pEntity, ::RPG::Client::MapPropDef* mapPropDef)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEPROP_SETUPGROUPINFOCMPT_OFFSET))(pEntity, mapPropDef);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateProp(::RPG::GameCore::EntityManager* pManager, ::RPG::GameCore::PropRow* propRow, ::RPG::GameCore::PropConfig* propConfig, ::RPG::Client::MapPropDef* mapPropDef, ::RPG::GameCore::TeamType team, ::UnityEngine::GameObject* propGO, ::RPG::MVector3 position, ::System::Single yaw, ::System::Single pitch, ::System::Single roll, ::RPG::MVector3 scale, ::System::Action_1<::RPG::GameCore::GameEntity*>* onLoadFinish, ::System::Boolean isSyncLoad, ::Class_2_CBDF63BA2C3715C3* itemData, ::System::Boolean isLightWeightCapture)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::PropRow*, ::RPG::GameCore::PropConfig*, ::RPG::Client::MapPropDef*, ::RPG::GameCore::TeamType, ::UnityEngine::GameObject*, ::RPG::MVector3, ::System::Single, ::System::Single, ::System::Single, ::RPG::MVector3, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean, ::Class_2_CBDF63BA2C3715C3*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEPROP_OFFSET))(pManager, propRow, propConfig, mapPropDef, team, propGO, position, yaw, pitch, roll, scale, onLoadFinish, isSyncLoad, itemData, isLightWeightCapture);
		}

		static ::RPG::GameCore::GameEntity* ClientPuzzleObjectBindProp(::RPG::GameCore::EntityManager* manager, ::UnityEngine::GameObject* propGo)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTPUZZLEOBJECTBINDPROP_OFFSET))(manager, propGo);
		}

		static ::System::Void ClientPuzzleEntityBindMiniMapComponent(::RPG::GameCore::EntityManager* manager, ::RPG::GameCore::GameEntity* entity, ::System::UInt32 iconID, ::Il2CppArray<::System::Int32>* boardShowList, ::System::Single maxShowIconDistance)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::Il2CppArray<::System::Int32>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTPUZZLEENTITYBINDMINIMAPCOMPONENT_OFFSET))(manager, entity, iconID, boardShowList, maxShowIconDistance);
		}

		static ::System::Void ClientPuzzleEntityBindAnimEventComponent(::RPG::GameCore::EntityManager* manager, ::RPG::GameCore::GameEntity* entity, ::System::String* configPath, ::UnityEngine::Animator* animator)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*, ::System::String*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTPUZZLEENTITYBINDANIMEVENTCOMPONENT_OFFSET))(manager, entity, configPath, animator);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateDistrict(::RPG::GameCore::EntityManager* pManager, ::System::String* prefabPath, ::RPG::MVector3 position, ::System::Single yaw, ::System::Single pitch, ::System::Single roll, ::RPG::MVector3 scale, ::RPG::Client::MapDistrictDef* mapDistrictDef, ::System::Action_1<::RPG::GameCore::GameEntity*>* onCreateFinish)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::String*, ::RPG::MVector3, ::System::Single, ::System::Single, ::System::Single, ::RPG::MVector3, ::RPG::Client::MapDistrictDef*, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEDISTRICT_OFFSET))(pManager, prefabPath, position, yaw, pitch, roll, scale, mapDistrictDef, onCreateFinish);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateUnityGOEntity(::RPG::GameCore::EntityManager* pManager)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUNITYGOENTITY_OFFSET))(pManager);
		}

		static ::RPG::GameCore::GameEntity* CreatePerformanceLevelGraphEntity(::RPG::GameCore::EntityManager* pManager, ::RPG::GameCore::LevelGraphConfig* graphConfig, ::System::String* graphPath, ::RPG::GameCore::RuntimeGroupInfo* groupInfo)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::LevelGraphConfig*, ::System::String*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEPERFORMANCELEVELGRAPHENTITY_OFFSET))(pManager, graphConfig, graphPath, groupInfo);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateCutSceneEntity(::RPG::GameCore::EntityManager* pManager, ::System::String* strPrefabPath, ::System::String* strCharacterName, ::System::String* residentEffectKey, ::Class_1_004034A1FAAF468A* pPrefabGo)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::String*, ::System::String*, ::System::String*, ::Class_1_004034A1FAAF468A*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATECUTSCENEENTITY_OFFSET))(pManager, strPrefabPath, strCharacterName, residentEffectKey, pPrefabGo);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateStoryNPCEntity(::RPG::GameCore::EntityManager* pManager, ::RPG::GameCore::NPCSubType subType, ::System::String* levelGraphPath, ::System::String* strPrefabPath, ::System::String* configEntityPath, ::System::String* strCharacterName, ::RPG::GameCore::StoryCharacterRow* storyCharacterRow, ::System::String* strJsonConfig, ::System::String* appearancePreset, ::Il2CppArray<::System::String*>* overrideReplaceMaterialKeyList, ::System::Boolean loadAsync, ::System::Action_1<::RPG::GameCore::GameEntity*>* onLoadFinish)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::NPCSubType, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::RPG::GameCore::StoryCharacterRow*, ::System::String*, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Boolean, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATESTORYNPCENTITY_OFFSET))(pManager, subType, levelGraphPath, strPrefabPath, configEntityPath, strCharacterName, storyCharacterRow, strJsonConfig, appearancePreset, overrideReplaceMaterialKeyList, loadAsync, onLoadFinish);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateStoryPropEntity(::RPG::GameCore::EntityManager* pManager, ::System::String* strPrefabPath, ::System::String* configEntityPath, ::System::String* strCharacterName, ::System::String* jsonPath, ::System::Int32 artPrefabIndex, ::System::Boolean loadAsync, ::System::Action_1<::RPG::GameCore::GameEntity*>* onLoadFinish)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Boolean, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATESTORYPROPENTITY_OFFSET))(pManager, strPrefabPath, configEntityPath, strCharacterName, jsonPath, artPrefabIndex, loadAsync, onLoadFinish);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateUI3DCameraEntity(::RPG::GameCore::EntityManager* entityManager, ::UnityEngine::Camera* camera)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DCAMERAENTITY_OFFSET))(entityManager, camera);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateUI3DServantModelEntity(::RPG::GameCore::EntityManager* entityManager, ::RPG::AvatarSystem::AvatarServant* servantData, ::UnityEngine::Transform* root)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::AvatarSystem::AvatarServant*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DSERVANTMODELENTITY_OFFSET))(entityManager, servantData, root);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateManikinModelEntity(::RPG::GameCore::EntityManager* entityManager, ::System::String* manikinJsonPath, ::System::String* prefabPath, ::UnityEngine::Transform* root)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::String*, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEMANIKINMODELENTITY_OFFSET))(entityManager, manikinJsonPath, prefabPath, root);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateUI3DModelEntity(::RPG::GameCore::EntityManager* entityManager, ::RPG::Client::IAvatarInfoProvider* avatar, ::System::UInt32 skinID, ::UnityEngine::Transform* root)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::Client::IAvatarInfoProvider*, ::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DMODELENTITY_OFFSET))(entityManager, avatar, skinID, root);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateUI3DFarmEntity(::RPG::GameCore::EntityManager* entityManager, ::System::String* configEntityPath, ::System::String* configPath, ::UnityEngine::Transform* root, ::System::Int32 layerIndex, ::System::String* appearAnimName)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::String*, ::System::String*, ::UnityEngine::Transform*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DFARMENTITY_OFFSET))(entityManager, configEntityPath, configPath, root, layerIndex, appearAnimName);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateUI3DMonsterEntity(::RPG::GameCore::EntityManager* entityManager, ::System::String* prefabPath, ::System::String* manikinConfigPath, ::UnityEngine::Transform* root)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::String*, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DMONSTERENTITY_OFFSET))(entityManager, prefabPath, manikinConfigPath, root);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateUI3DPetEntity(::RPG::GameCore::EntityManager* entityManager, ::System::UInt32 petID, ::UnityEngine::Transform* root)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DPETENTITY_OFFSET))(entityManager, petID, root);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateUI3DPamEntity(::RPG::GameCore::EntityManager* entityManager, ::UnityEngine::Transform* root, ::System::UInt32 npcID, ::System::String* uniqueName, ::System::String* levelGraphPath)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::UnityEngine::Transform*, ::System::UInt32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DPAMENTITY_OFFSET))(entityManager, root, npcID, uniqueName, levelGraphPath);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateUI3DFreeStyleEntity(::RPG::GameCore::EntityManager* entityManager, ::UnityEngine::GameObject* npcGo, ::System::UInt32 npcID, ::System::String* uniqueNamme)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::UnityEngine::GameObject*, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DFREESTYLEENTITY_OFFSET))(entityManager, npcGo, npcID, uniqueNamme);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateGroupEntity(::RPG::GameCore::EntityManager* pEntityManager, ::RPG::GameCore::RuntimeGroupInfo* pGroupInfo)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEGROUPENTITY_OFFSET))(pEntityManager, pGroupInfo);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateSummonUnit(::RPG::GameCore::EntityManager* pManager, ::RPG::GameCore::GameEntity* summoner, ::RPG::GameCore::GameEntity* attachTarget, ::RPG::GameCore::SummonUnitDataRow* summonUnitRow, ::RPG::GameCore::SummonUnitConfig* summonUnitConfig, ::Class_2_D905714C1E15C1C8* summonUnitDef, ::RPG::MVector3 position, ::System::Single yaw, ::System::Single pitch, ::System::Single roll, ::RPG::MVector3 scale, ::System::Action_1<::RPG::GameCore::GameEntity*>* onLoadFinish, ::System::Boolean isSyncLoad, ::Class_1_2CAAA2FDF9170110* dynamicValues)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SummonUnitDataRow*, ::RPG::GameCore::SummonUnitConfig*, ::Class_2_D905714C1E15C1C8*, ::RPG::MVector3, ::System::Single, ::System::Single, ::System::Single, ::RPG::MVector3, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean, ::Class_1_2CAAA2FDF9170110*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATESUMMONUNIT_OFFSET))(pManager, summoner, attachTarget, summonUnitRow, summonUnitConfig, summonUnitDef, position, yaw, pitch, roll, scale, onLoadFinish, isSyncLoad, dynamicValues);
		}

		static ::RPG::GameCore::GameEntity* ClientCreatePreviewBattleEventEntity(::RPG::GameCore::EntityManager* pManager, ::RPG::GameCore::BattleEventRow* pConfig, ::RPG::GameCore::TeamType eTeam, ::RPG::GameCore::GameEntity* pCaster, ::RPG::GameCore::GameEntity* pSourceCaster, ::Class_0_16E4307DCC419505_345* summonAbilityInst)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::BattleEventRow*, ::RPG::GameCore::TeamType, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_0_16E4307DCC419505_345*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEPREVIEWBATTLEEVENTENTITY_OFFSET))(pManager, pConfig, eTeam, pCaster, pSourceCaster, summonAbilityInst);
		}

		static ::RPG::GameCore::GameEntity* ClientCreatePreviewServantEntity(::RPG::GameCore::EntityManager* pManager, ::RPG::GameCore::IAvatarServantRowWrap* pConfig, ::RPG::GameCore::TeamType eTeam, ::RPG::GameCore::GameEntity* pCaster, ::RPG::GameCore::GameEntity* pSourceCaster)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::IAvatarServantRowWrap*, ::RPG::GameCore::TeamType, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEPREVIEWSERVANTENTITY_OFFSET))(pManager, pConfig, eTeam, pCaster, pSourceCaster);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateLittleGameInstanceEntity(::RPG::GameCore::EntityManager* pEntityManager, ::Class_1_151B93D9C4BBDCA4* littleGameInstance)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::Class_1_151B93D9C4BBDCA4*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATELITTLEGAMEINSTANCEENTITY_OFFSET))(pEntityManager, littleGameInstance);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateLittleGameContainerEntity(::RPG::GameCore::EntityManager* pEntityManager, ::System::UInt32 groupID, ::RPG::GameCore::LevelLittleGameInfo* levelLittleGameInfo, ::UnityEngine::Vector3 position, ::UnityEngine::Vector3 rotation)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATELITTLEGAMECONTAINERENTITY_OFFSET))(pEntityManager, groupID, levelLittleGameInfo, position, rotation);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateLittleGameProxyEntity(::RPG::GameCore::EntityManager* pEntityManager, ::Class_1_151B93D9C4BBDCA4* littleGameInstance, ::System::UInt32 entityID, ::RPG::GameCore::LittleGameProxyEntityConfig* entityConfig, ::Class_0_16E4307DCC419505_166* littleGameEntity, ::Entitas::IContext* littleGameContext, ::System::Action_1<::RPG::GameCore::GameEntity*>* onLoadFinish, ::System::Boolean asyncLoad)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::Class_1_151B93D9C4BBDCA4*, ::System::UInt32, ::RPG::GameCore::LittleGameProxyEntityConfig*, ::Class_0_16E4307DCC419505_166*, ::Entitas::IContext*, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATELITTLEGAMEPROXYENTITY_OFFSET))(pEntityManager, littleGameInstance, entityID, entityConfig, littleGameEntity, littleGameContext, onLoadFinish, asyncLoad);
		}

		static ::System::Void _CommonSetupAdventureCharacter(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__COMMONSETUPADVENTURECHARACTER_OFFSET))(pEntity);
		}

		static ::System::Void _CommonSetupAdventureCharacterProperty(::RPG::GameCore::GameEntity* pEntity, ::RPG::GameCore::AdventureAbilityComponent* pAdvAbility)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__COMMONSETUPADVENTURECHARACTERPROPERTY_OFFSET))(pEntity, pAdvAbility);
		}

		static ::System::Boolean BattleDataViewBegin(::RPG::GameCore::EntityManager* pManager)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_BATTLEDATAVIEWBEGIN_OFFSET))(pManager);
		}

		static ::System::Void OnBattleDataViewBegin(::RPG::GameCore::EntityManager* pManager)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_ONBATTLEDATAVIEWBEGIN_OFFSET))(pManager);
		}

		static ::System::Void BattleDataViewSelectEntity(::RPG::GameCore::EntityManager* pManager, ::RPG::GameCore::GameEntity* pEntity, ::System::Boolean showUncreatedServant)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_BATTLEDATAVIEWSELECTENTITY_OFFSET))(pManager, pEntity, showUncreatedServant);
		}

		static ::System::Void BattleDataViewExit(::RPG::GameCore::EntityManager* pManager)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_BATTLEDATAVIEWEXIT_OFFSET))(pManager);
		}

		static ::System::Void OnBattleDataViewExitDone(::RPG::GameCore::EntityManager* pManager)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_ONBATTLEDATAVIEWEXITDONE_OFFSET))(pManager);
		}

		static ::System::Void _RefreshServantCustomTeamFormationForViewMode(::RPG::GameCore::EntityManager* pManager)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__REFRESHSERVANTCUSTOMTEAMFORMATIONFORVIEWMODE_OFFSET))(pManager);
		}

		static ::System::Void BeforeBattleDataViewCameraRecover(::RPG::GameCore::EntityManager* pManager)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_BEFOREBATTLEDATAVIEWCAMERARECOVER_OFFSET))(pManager);
		}

		static ::System::Boolean IsInBattleDataView(::RPG::GameCore::EntityManager* pManager)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_ISINBATTLEDATAVIEW_OFFSET))(pManager);
		}

		static ::RPG::GameCore::GameEntity* QACreateCharacter(::RPG::GameCore::EntityManager* pManager, ::RPG::GameCore::TeamType eTeam, ::RPG::GameCore::EntityType eEntityType, ::System::UInt32 nCharacterID, ::System::String* strConfigPath, ::System::String* sModelPath)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::TeamType, ::RPG::GameCore::EntityType, ::System::UInt32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_QACREATECHARACTER_OFFSET))(pManager, eTeam, eEntityType, nCharacterID, strConfigPath, sModelPath);
		}

		static ::RPG::GameCore::GameEntity* CreateCharacter(::RPG::GameCore::EntityManager* pManager, ::RPG::GameCore::TeamType eTeam, ::RPG::GameCore::EntityType eEntityType, ::System::UInt32 nCharacterID, ::System::String* strConfigPath, ::Class_1_B8FB38F0526A59B0* pCreateParams, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::FixPoint>* pInitDynamicValues)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::TeamType, ::RPG::GameCore::EntityType, ::System::UInt32, ::System::String*, ::Class_1_B8FB38F0526A59B0*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATECHARACTER_OFFSET))(pManager, eTeam, eEntityType, nCharacterID, strConfigPath, pCreateParams, pInitDynamicValues);
		}

		static ::System::Boolean IsExtraPropertyEnabled(::RPG::GameCore::EntityManager* pManager)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_ISEXTRAPROPERTYENABLED_OFFSET))(pManager);
		}

		static ::RPG::GameCore::GameEntity* CloneBattlePerformActorEntity(::RPG::GameCore::EntityManager* pManager, ::RPG::GameCore::GameEntity* refEntity)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLONEBATTLEPERFORMACTORENTITY_OFFSET))(pManager, refEntity);
		}

		static ::RPG::GameCore::GameEntity* CreateBattlePerformActorEntity(::RPG::GameCore::EntityManager* pManager, ::RPG::GameCore::BattlePerformCreateActor* createInfo)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::BattlePerformCreateActor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEBATTLEPERFORMACTORENTITY_OFFSET))(pManager, createInfo);
		}

		static ::RPG::GameCore::ICharacterRowData* BuildBattlePerformActorRowData(::RPG::GameCore::BattlePerformCreateActor* createInfo)
		{
			return ((::RPG::GameCore::ICharacterRowData*(*)(::RPG::GameCore::BattlePerformCreateActor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_BUILDBATTLEPERFORMACTORROWDATA_OFFSET))(createInfo);
		}

		static ::RPG::GameCore::GameEntity* _CreateBPActorEntity(::RPG::GameCore::EntityManager* pManager, ::RPG::GameCore::ICharacterRowData* pRowData, ::RPG::GameCore::TransformComponent* refTransform)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::ICharacterRowData*, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__CREATEBPACTORENTITY_OFFSET))(pManager, pRowData, refTransform);
		}

		static ::RPG::GameCore::GameEntity* CreatePartner(::RPG::GameCore::EntityManager* pManager, ::RPG::GameCore::GameEntity* owner, ::System::String* strModelPath, ::System::String* strConfigPath)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEPARTNER_OFFSET))(pManager, owner, strModelPath, strConfigPath);
		}

		static ::RPG::GameCore::GameEntity* CreateBodyPart(::RPG::GameCore::EntityManager* pManager, ::RPG::GameCore::GameEntity* owner, ::System::UInt32 nCharacterID, ::System::UInt32 enhancedID, ::System::String* strConfigPath, ::System::String* strPartName, ::System::Int32 teamLocationOffset, ::System::Boolean useOffsetInGroup, ::System::Int32 identifyType, ::System::Boolean linkedStance, ::System::Boolean linkedHitByPart, ::System::Boolean independentVisualLayer)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::String*, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEBODYPART_OFFSET))(pManager, owner, nCharacterID, enhancedID, strConfigPath, strPartName, teamLocationOffset, useOffsetInGroup, identifyType, linkedStance, linkedHitByPart, independentVisualLayer);
		}

		static ::RPG::GameCore::GameEntity* CreateMissionEntity(::RPG::GameCore::EntityManager* pManager, ::System::UInt32 ID, ::System::String* levelGraphPath)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEMISSIONENTITY_OFFSET))(pManager, ID, levelGraphPath);
		}

		static ::RPG::GameCore::GameEntity* CreateLevelGraphEntityClientOnly(::RPG::GameCore::EntityManager* pManager, ::System::String* levelGraphPath, ::RPG::GameCore::EntityType entityType)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::String*, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATELEVELGRAPHENTITYCLIENTONLY_OFFSET))(pManager, levelGraphPath, entityType);
		}

		static ::RPG::GameCore::GameEntity* CreateLevelGraphEntity(::RPG::GameCore::EntityManager* pManager, ::System::String* levelGraphPath, ::RPG::GameCore::EntityType entityType, ::UnityEngine::GameObject* goInst, ::Class_1_83665B095F1535B5_16* flags)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::String*, ::RPG::GameCore::EntityType, ::UnityEngine::GameObject*, ::Class_1_83665B095F1535B5_16*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATELEVELGRAPHENTITY_OFFSET))(pManager, levelGraphPath, entityType, goInst, flags);
		}

		static ::RPG::GameCore::GameEntity* CreateLevelGraphEntity_1(::RPG::GameCore::EntityManager* pManager, ::RPG::GameCore::LevelGraphConfig* graphConfig, ::System::String* graphPath, ::RPG::GameCore::EntityType entityType, ::UnityEngine::GameObject* goInst, ::Class_1_83665B095F1535B5_16* flags)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::LevelGraphConfig*, ::System::String*, ::RPG::GameCore::EntityType, ::UnityEngine::GameObject*, ::Class_1_83665B095F1535B5_16*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATELEVELGRAPHENTITY_1_OFFSET))(pManager, graphConfig, graphPath, entityType, goInst, flags);
		}

		static ::RPG::GameCore::GameEntity* CreateBattleEventEntity(::RPG::GameCore::EntityManager* pManager, ::RPG::GameCore::BattleEventRow* pConfig, ::RPG::GameCore::TeamType eTeam, ::RPG::GameCore::GameEntity* pCaster, ::RPG::GameCore::GameEntity* pSourceCaster, ::RPG::GameCore::GameEntity* pInheritPropertyTarget, ::RPG::GameCore::StageRow* pCurWaveStageConfig, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::FixPoint>* pInitDynamicValues, ::System::Boolean isDynamicPreload, ::RPG::GameCore::BattleEventCreateType eCreateType, ::System::Boolean allowDuplicate, ::System::Action_1<::RPG::GameCore::GameEntity*>* onBeforeCreateCallback, ::System::Object* extraParam, ::Class_0_16E4307DCC419505_345* summonAbilityInst)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::BattleEventRow*, ::RPG::GameCore::TeamType, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::StageRow*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::FixPoint>*, ::System::Boolean, ::RPG::GameCore::BattleEventCreateType, ::System::Boolean, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::System::Object*, ::Class_0_16E4307DCC419505_345*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEBATTLEEVENTENTITY_OFFSET))(pManager, pConfig, eTeam, pCaster, pSourceCaster, pInheritPropertyTarget, pCurWaveStageConfig, pInitDynamicValues, isDynamicPreload, eCreateType, allowDuplicate, onBeforeCreateCallback, extraParam, summonAbilityInst);
		}

		static ::RPG::GameCore::GameEntity* CreateStageBattleEventEntity(::RPG::GameCore::EntityManager* pManager, ::RPG::GameCore::StageBattleEventRow* evtCfg)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::StageBattleEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATESTAGEBATTLEEVENTENTITY_OFFSET))(pManager, evtCfg);
		}

		static ::RPG::GameCore::GameEntity* CreateGlobalShieldEntity(::RPG::GameCore::EntityManager* pManager, ::RPG::GameCore::FixPoint fInitHP, ::System::Int32 nID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* pProtectedTargetList, ::Class_3_E21F6DE9B7FA4D05* pOnRemoved)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::FixPoint, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::Class_3_E21F6DE9B7FA4D05*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEGLOBALSHIELDENTITY_OFFSET))(pManager, fInitHP, nID, pProtectedTargetList, pOnRemoved);
		}

		static ::RPG::GameCore::GameEntity* CreateLevelEntity(::RPG::GameCore::EntityManager* pManager)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATELEVELENTITY_OFFSET))(pManager);
		}

		static ::RPG::GameCore::GameEntity* CreateCustomDataEntity(::RPG::GameCore::EntityManager* pManager)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATECUSTOMDATAENTITY_OFFSET))(pManager);
		}

		static ::RPG::GameCore::GameEntity* CreateTeamEntity(::RPG::GameCore::EntityManager* pManager, ::RPG::GameCore::TeamType teamType)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATETEAMENTITY_OFFSET))(pManager, teamType);
		}

		static ::RPG::GameCore::GameEntity* CreateSnapshotEntity(::RPG::GameCore::EntityManager* pManager, ::RPG::GameCore::GameEntity* pOwnerEntity)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATESNAPSHOTENTITY_OFFSET))(pManager, pOwnerEntity);
		}

		static ::RPG::GameCore::GameEntity* CreateTeamFormationEntity(::RPG::GameCore::EntityManager* pManager, ::RPG::GameCore::GameEntity* formationOwner)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATETEAMFORMATIONENTITY_OFFSET))(pManager, formationOwner);
		}

		static ::RPG::GameCore::GameEntity* CreateGridFightBackendEntity(::RPG::GameCore::EntityManager* pManager, ::System::UInt32 nCharacterID, ::System::String* strConfigPath, ::Class_1_B8FB38F0526A59B0* pCreateParams)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::UInt32, ::System::String*, ::Class_1_B8FB38F0526A59B0*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEGRIDFIGHTBACKENDENTITY_OFFSET))(pManager, nCharacterID, strConfigPath, pCreateParams);
		}

		static ::RPG::GameCore::GameEntity* CreateTutorialGraphEntity(::RPG::GameCore::EntityManager* pManager, ::System::String* levelGraphPath, ::System::UInt32 tutorialId)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATETUTORIALGRAPHENTITY_OFFSET))(pManager, levelGraphPath, tutorialId);
		}

		static ::System::Void _SetupMonsterGroupRelation(::Class_2_6729AC3ED949BE6A* pMonsterCreateParams, ::RPG::GameCore::GameEntity* pMember)
		{
			return ((::System::Void(*)(::Class_2_6729AC3ED949BE6A*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__SETUPMONSTERGROUPRELATION_OFFSET))(pMonsterCreateParams, pMember);
		}

		static ::System::Void _CommonSetupCharacter(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__COMMONSETUPCHARACTER_OFFSET))(pEntity);
		}

		static ::System::Void _CommonSetupCharacterProperty(::RPG::GameCore::GameEntity* pEntity, ::RPG::GameCore::TurnBasedAbilityComponent* pTBAbility, ::RPG::GameCore::CharacterDataComponent* pCharacterData)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::CharacterDataComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__COMMONSETUPCHARACTERPROPERTY_OFFSET))(pEntity, pTBAbility, pCharacterData);
		}

		static ::System::Void _DefineExtraAvatarProperties(::RPG::GameCore::EntityManagerExtension_AbilityPropertyInitInfo& info, ::RPG::GameCore::AvatarDataComponent* avatarDataComponent)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManagerExtension_AbilityPropertyInitInfo&, ::RPG::GameCore::AvatarDataComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__DEFINEEXTRAAVATARPROPERTIES_OFFSET))(info, avatarDataComponent);
		}

		static ::System::Void _DefineExtraProperties(::RPG::GameCore::EntityManagerExtension_AbilityPropertyInitInfo& info)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManagerExtension_AbilityPropertyInitInfo&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__DEFINEEXTRAPROPERTIES_OFFSET))(info);
		}

		static ::System::Void _DefineProperty(::RPG::GameCore::EntityManagerExtension_AbilityPropertyInitInfo& info, ::RPG::GameCore::AbilityProperty property, ::RPG::GameCore::FixPoint fInitValue)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManagerExtension_AbilityPropertyInitInfo&, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__DEFINEPROPERTY_OFFSET))(info, property, fInitValue);
		}

		static ::System::Void _DefineProperty_1(::RPG::GameCore::EntityManagerExtension_AbilityPropertyInitInfo& info, ::RPG::GameCore::AbilityProperty property, ::RPG::GameCore::FixPoint fInitValue, ::RPG::GameCore::FixPoint fMin)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManagerExtension_AbilityPropertyInitInfo&, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__DEFINEPROPERTY_1_OFFSET))(info, property, fInitValue, fMin);
		}

		static ::System::Void _DefineExtraProperty(::RPG::GameCore::EntityManagerExtension_AbilityPropertyInitInfo& info, ::RPG::GameCore::AbilityProperty property, ::RPG::GameCore::FixPoint fInitValue)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManagerExtension_AbilityPropertyInitInfo&, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__DEFINEEXTRAPROPERTY_OFFSET))(info, property, fInitValue);
		}

		static ::System::Void _DefineProperty_2(::RPG::GameCore::EntityManagerExtension_AbilityPropertyInitInfo& info, ::RPG::GameCore::AbilityProperty property, ::RPG::GameCore::FixPoint fInitValue, ::RPG::GameCore::FixPoint fMin, ::RPG::GameCore::FixPoint fMax, ::System::Boolean ignoreInheritNone)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManagerExtension_AbilityPropertyInitInfo&, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__DEFINEPROPERTY_2_OFFSET))(info, property, fInitValue, fMin, fMax, ignoreInheritNone);
		}

		static ::RPG::GameCore::GameEntityList* QueryCharactersInTeamByValidRowIndex(::RPG::GameCore::EntityManager* mgr, ::System::Int32 rowIndex, ::RPG::GameCore::TeamTypeMask teamTypeMask, ::RPG::GameCore::AliveStateMask aliveStateMask, ::RPG::GameCore::EntityTypeMask entityTypeMask)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::RPG::GameCore::EntityManager*, ::System::Int32, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::AliveStateMask, ::RPG::GameCore::EntityTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYCHARACTERSINTEAMBYVALIDROWINDEX_OFFSET))(mgr, rowIndex, teamTypeMask, aliveStateMask, entityTypeMask);
		}

		static ::RPG::GameCore::GameEntityList* QueryCharactersInTeam(::RPG::GameCore::EntityManager* mgr, ::RPG::GameCore::TeamTypeMask teamTypeMask, ::RPG::GameCore::AliveStateMask aliveStateMask, ::RPG::GameCore::EntityTypeMask entityTypeMask)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::AliveStateMask, ::RPG::GameCore::EntityTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYCHARACTERSINTEAM_OFFSET))(mgr, teamTypeMask, aliveStateMask, entityTypeMask);
		}

		static ::RPG::GameCore::GameEntityList* QueryCharactersOnStage(::RPG::GameCore::EntityManager* mgr, ::RPG::GameCore::TeamTypeMask teamTypeMask, ::RPG::GameCore::AliveStateMask aliveStateMask)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYCHARACTERSONSTAGE_OFFSET))(mgr, teamTypeMask, aliveStateMask);
		}

		static ::RPG::GameCore::GameEntityList* QueryTargetServants(::RPG::GameCore::EntityManager* mgr, ::RPG::GameCore::GameEntity* target, ::RPG::GameCore::AliveStateMask aliveStateMask)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYTARGETSERVANTS_OFFSET))(mgr, target, aliveStateMask);
		}

		static ::RPG::GameCore::GameEntityList* QueryValidCharacterIncludeZombie(::RPG::GameCore::EntityManager* mgr, ::RPG::GameCore::TeamTypeMask teamTypeMask, ::RPG::GameCore::EntityTypeMask entityTypeMaks)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYVALIDCHARACTERINCLUDEZOMBIE_OFFSET))(mgr, teamTypeMask, entityTypeMaks);
		}

		static ::RPG::GameCore::GameEntityList* QueryValidAvatarIncludeZombie(::RPG::GameCore::EntityManager* mgr)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYVALIDAVATARINCLUDEZOMBIE_OFFSET))(mgr);
		}

		static ::RPG::GameCore::GameEntity* GetTargetServant(::RPG::GameCore::EntityManager* mgr, ::RPG::GameCore::GameEntity* target, ::RPG::GameCore::AliveStateMask aliveStateMask)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_GETTARGETSERVANT_OFFSET))(mgr, target, aliveStateMask);
		}

		static ::RPG::GameCore::GameEntity* GetTargetServant_1(::RPG::GameCore::GameEntity* target, ::RPG::GameCore::AliveStateMask aliveStateMask)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_GETTARGETSERVANT_1_OFFSET))(target, aliveStateMask);
		}

		static ::System::Boolean IsServantsOf(::RPG::GameCore::GameEntity* servant, ::RPG::GameCore::GameEntity* summoner)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_ISSERVANTSOF_OFFSET))(servant, summoner);
		}

		static ::System::Boolean HaveCharacterInTeam(::RPG::GameCore::EntityManager* mgr, ::RPG::GameCore::TeamTypeMask teamTypeMask, ::RPG::GameCore::AliveStateMask aliveStateMask)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVECHARACTERINTEAM_OFFSET))(mgr, teamTypeMask, aliveStateMask);
		}

		static ::System::Boolean HaveCharacterOnStage(::RPG::GameCore::EntityManager* mgr, ::RPG::GameCore::TeamTypeMask teamTypeMask, ::RPG::GameCore::AliveStateMask aliveStateMask)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVECHARACTERONSTAGE_OFFSET))(mgr, teamTypeMask, aliveStateMask);
		}

		static ::System::Boolean HaveCharacterAliveOnStage(::RPG::GameCore::EntityManager* mgr, ::RPG::GameCore::TeamTypeMask teamTypeMask)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::TeamTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVECHARACTERALIVEONSTAGE_OFFSET))(mgr, teamTypeMask);
		}

		static ::System::Boolean HaveCharacterAlive(::RPG::GameCore::EntityManager* mgr, ::RPG::GameCore::TeamTypeMask teamTypeMask)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::TeamTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVECHARACTERALIVE_OFFSET))(mgr, teamTypeMask);
		}

		static ::System::Boolean HaveCharacterAliveOrLimbo(::RPG::GameCore::EntityManager* mgr, ::RPG::GameCore::TeamTypeMask teamTypeMask)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::TeamTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVECHARACTERALIVEORLIMBO_OFFSET))(mgr, teamTypeMask);
		}

		static ::System::Boolean HaveDarkEntityForCurWave(::RPG::GameCore::EntityManager* mgr)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVEDARKENTITYFORCURWAVE_OFFSET))(mgr);
		}

		static ::System::Boolean HaveDarkEntityExcludePuppet(::RPG::GameCore::EntityManager* mgr)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVEDARKENTITYEXCLUDEPUPPET_OFFSET))(mgr);
		}

		static ::System::Boolean HasDarkTeamMultiRowMode(::RPG::GameCore::EntityManager* mgr)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_HASDARKTEAMMULTIROWMODE_OFFSET))(mgr);
		}

		static ::System::Void FillTargetEntitiesWithFilter(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* sourceList, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* targetList, ::RPG::GameCore::EntityTypeMask entityTypeMask, ::RPG::GameCore::AliveStateMask aliveStateMask)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_FILLTARGETENTITIESWITHFILTER_OFFSET))(sourceList, targetList, entityTypeMask, aliveStateMask);
		}

		static ::RPG::GameCore::GameEntityList* QueryUnstageEntities(::RPG::GameCore::EntityManager* mgr, ::System::String* reasonKey, ::RPG::GameCore::TeamTypeMask teamTypeMask)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::RPG::GameCore::EntityManager*, ::System::String*, ::RPG::GameCore::TeamTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYUNSTAGEENTITIES_OFFSET))(mgr, reasonKey, teamTypeMask);
		}
	};
}
