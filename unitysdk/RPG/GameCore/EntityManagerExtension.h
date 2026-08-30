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
#include "unitysdk/Struct_2_7ADC47CBF4CDE3DB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_192;
class Class_0_16E4307DCC419505_417;
class Class_1_004034A1FAAF468A;
class Class_1_1C30CE192ABE4C54;
class Class_1_83665B095F1535B5_18;
class Class_1_B8FB38F0526A59B0;
class Class_1_C0FA7ACF6234A735;
class Class_1_DCED81BA3E7C7B2D;
class Class_1_E0103A0EA6CD0F4C;
class Class_2_23F9D0182A641C7D;
class Class_2_7CF36DB1DCE43BAF;
class Class_2_D905714C1E15C1C8;
class Class_3_07C3C4D2990C49EE;
namespace Entitas { class IContext; }
namespace RPG::AvatarSystem { class AvatarServant; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ArtNPCPedestrianAssetConfig_ArtVariantInfo; }
namespace RPG::Client { class ArtNPCPedestrianEntityConfig_EntityInfo; }
namespace RPG::Client { class AssemNPC; }
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
namespace RPG::GameCore { class LevelNPCStillConfigData; }
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

#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_BATTLEDATAVIEWBEGIN_OFFSET UNITYSDK_OFFSET(0x1153DB10)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_BATTLEDATAVIEWEXIT_OFFSET UNITYSDK_OFFSET(0x11540580)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_BATTLEDATAVIEWSELECTENTITY_OFFSET UNITYSDK_OFFSET(0x1153FF40)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_BEFOREBATTLEDATAVIEWCAMERARECOVER_OFFSET UNITYSDK_OFFSET(0x1153F7A0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_BUILDBATTLEPERFORMACTORROWDATA_OFFSET UNITYSDK_OFFSET(0x11542C60)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATECUTSCENEENTITY_OFFSET UNITYSDK_OFFSET(0x11536C80)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEDISTRICT_OFFSET UNITYSDK_OFFSET(0x11536090)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEGROUPENTITY_OFFSET UNITYSDK_OFFSET(0x1153A890)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATELITTLEGAMECONTAINERENTITY_OFFSET UNITYSDK_OFFSET(0x1153C1F0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATELITTLEGAMEINSTANCEENTITY_OFFSET UNITYSDK_OFFSET(0x1153BD50)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATELITTLEGAMEPROXYENTITY_OFFSET UNITYSDK_OFFSET(0x1153C670)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEMANIKINMODELENTITY_OFFSET UNITYSDK_OFFSET(0x11537E40)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEMAPNPCMONSTER_OFFSET UNITYSDK_OFFSET(0x11532D20)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEMAPNPC_OFFSET UNITYSDK_OFFSET(0x11532410)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATENPC_OFFSET UNITYSDK_OFFSET(0x11531170)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEPREVIEWBATTLEEVENTENTITY_OFFSET UNITYSDK_OFFSET(0x1153B5E0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEPREVIEWSERVANTENTITY_OFFSET UNITYSDK_OFFSET(0x1153B920)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEPROP_OFFSET UNITYSDK_OFFSET(0x11534970)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEPROP_PROCESSCAPTUREPROP_OFFSET UNITYSDK_OFFSET(0x11534370)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEPROP_SETUPGROUPINFOCMPT_OFFSET UNITYSDK_OFFSET(0x115348D0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEPROP_SETUPTRANSFORMCMPT_OFFSET UNITYSDK_OFFSET(0x11534690)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATESTILLNPC_OFFSET UNITYSDK_OFFSET(0x115325F0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATESTORYNPCENTITY_OFFSET UNITYSDK_OFFSET(0x11536F60)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATESTORYPROPENTITY_OFFSET UNITYSDK_OFFSET(0x11537240)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATESUMMONUNIT_OFFSET UNITYSDK_OFFSET(0x1153AED0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DCAMERAENTITY_OFFSET UNITYSDK_OFFSET(0x11537810)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DFARMENTITY_OFFSET UNITYSDK_OFFSET(0x11538C50)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DFREESTYLEENTITY_OFFSET UNITYSDK_OFFSET(0x1153A550)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DMODELENTITY_OFFSET UNITYSDK_OFFSET(0x11538380)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DMONSTERENTITY_OFFSET UNITYSDK_OFFSET(0x115392E0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DPAMENTITY_OFFSET UNITYSDK_OFFSET(0x11539FB0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DPETENTITY_OFFSET UNITYSDK_OFFSET(0x11539910)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DSERVANTMODELENTITY_OFFSET UNITYSDK_OFFSET(0x115378C0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUNITYGOENTITY_OFFSET UNITYSDK_OFFSET(0x115366E0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTPUZZLEENTITYBINDANIMEVENTCOMPONENT_OFFSET UNITYSDK_OFFSET(0x11535F20)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTPUZZLEENTITYBINDMINIMAPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x11535E30)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTPUZZLEOBJECTBINDPROP_OFFSET UNITYSDK_OFFSET(0x11535A20)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLONEBATTLEPERFORMACTORENTITY_OFFSET UNITYSDK_OFFSET(0x115423F0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEASSEMBLYNPC_OFFSET UNITYSDK_OFFSET(0x11530A70)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEBATTLEEVENTENTITY_OFFSET UNITYSDK_OFFSET(0x11544D60)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEBATTLEPERFORMACTORENTITY_OFFSET UNITYSDK_OFFSET(0x11542BE0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEBODYPART_OFFSET UNITYSDK_OFFSET(0x11543600)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATECHARACTER_OFFSET UNITYSDK_OFFSET(0x115408D0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATECUSTOMDATAENTITY_OFFSET UNITYSDK_OFFSET(0x11547130)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x1152F7A0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEGLOBALSHIELDENTITY_OFFSET UNITYSDK_OFFSET(0x11546BA0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEGRIDFIGHTBACKENDENTITY_OFFSET UNITYSDK_OFFSET(0x11547E60)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATELEVELENTITY_OFFSET UNITYSDK_OFFSET(0x11527E70)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATELEVELGRAPHENTITYCLIENTONLY_OFFSET UNITYSDK_OFFSET(0x11544990)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATELEVELGRAPHENTITY_1_OFFSET UNITYSDK_OFFSET(0x11536980)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATELEVELGRAPHENTITY_OFFSET UNITYSDK_OFFSET(0x11544CA0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEMISSIONENTITY_OFFSET UNITYSDK_OFFSET(0x11544680)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEPARTNER_OFFSET UNITYSDK_OFFSET(0x11542E70)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEPEDESTRIANARTNPC_OFFSET UNITYSDK_OFFSET(0x11530E40)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEPERFORMANCELEVELGRAPHENTITY_OFFSET UNITYSDK_OFFSET(0x115367E0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEPLAYERTEAMMEMBER_OFFSET UNITYSDK_OFFSET(0x1152DA50)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATESIMPLEMODELENTITYFORONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0x11530110)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATESIMPLEMODELENTITY_OFFSET UNITYSDK_OFFSET(0x1152F990)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATESNAPSHOTENTITY_OFFSET UNITYSDK_OFFSET(0x11547370)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATESTAGEBATTLEEVENTENTITY_OFFSET UNITYSDK_OFFSET(0x11546750)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATETEAMENTITY_OFFSET UNITYSDK_OFFSET(0x11527290)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATETEAMFORMATIONENTITY_OFFSET UNITYSDK_OFFSET(0x11547C20)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATETUTORIALGRAPHENTITY_OFFSET UNITYSDK_OFFSET(0x11548330)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_FILLTARGETENTITIESWITHFILTER_OFFSET UNITYSDK_OFFSET(0x11553880)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_GETPROPPATHLOD_OFFSET UNITYSDK_OFFSET(0x115341F0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_GETTARGETSERVANT_1_OFFSET UNITYSDK_OFFSET(0x11552FA0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_GETTARGETSERVANT_OFFSET UNITYSDK_OFFSET(0x11552EE0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_HASDARKTEAMMULTIROWMODE_OFFSET UNITYSDK_OFFSET(0x115537C0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVECHARACTERALIVEONSTAGE_OFFSET UNITYSDK_OFFSET(0x11553310)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVECHARACTERALIVEORLIMBO_OFFSET UNITYSDK_OFFSET(0x115534F0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVECHARACTERALIVE_OFFSET UNITYSDK_OFFSET(0x11553400)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVECHARACTERINTEAM_OFFSET UNITYSDK_OFFSET(0x115530B0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVECHARACTERONSTAGE_OFFSET UNITYSDK_OFFSET(0x11553220)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVEDARKENTITYEXCLUDEPUPPET_OFFSET UNITYSDK_OFFSET(0x115536D0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVEDARKENTITYFORCURWAVE_OFFSET UNITYSDK_OFFSET(0x115535E0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_ISEXTRAPROPERTYENABLED_OFFSET UNITYSDK_OFFSET(0x11542330)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_ISINBATTLEDATAVIEW_OFFSET UNITYSDK_OFFSET(0x115407D0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_ISSERVANTSOF_OFFSET UNITYSDK_OFFSET(0x11553030)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_ONBATTLEDATAVIEWBEGIN_OFFSET UNITYSDK_OFFSET(0x1153E990)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_ONBATTLEDATAVIEWEND_OFFSET UNITYSDK_OFFSET(0x1153F1E0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_ONBATTLEDATAVIEWEXITDONE_OFFSET UNITYSDK_OFFSET(0x1153FCD0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_QACREATECHARACTER_OFFSET UNITYSDK_OFFSET(0x11540830)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYCHARACTERSINTEAMBYVALIDROWINDEX_OFFSET UNITYSDK_OFFSET(0x11552840)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYCHARACTERSINTEAM_OFFSET UNITYSDK_OFFSET(0x1152A5C0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYCHARACTERSONSTAGE_OFFSET UNITYSDK_OFFSET(0x1153E880)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYTARGETSERVANTS_OFFSET UNITYSDK_OFFSET(0x11552A60)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYUNSTAGEENTITIES_OFFSET UNITYSDK_OFFSET(0x11553C00)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYVALIDAVATARINCLUDEZOMBIE_OFFSET UNITYSDK_OFFSET(0x11552DF0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYVALIDCHARACTERINCLUDEZOMBIE_OFFSET UNITYSDK_OFFSET(0x11552CF0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__CCTOR_OFFSET UNITYSDK_OFFSET(0x11553E10)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__COMMONSETUPADVENTURECHARACTERPROPERTY_OFFSET UNITYSDK_OFFSET(0x1153CA70)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__COMMONSETUPADVENTURECHARACTER_OFFSET UNITYSDK_OFFSET(0x1152EDF0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__COMMONSETUPCHARACTERPROPERTY_OFFSET UNITYSDK_OFFSET(0x11548530)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__COMMONSETUPCHARACTER_OFFSET UNITYSDK_OFFSET(0x115417F0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__CREATEBPACTORENTITY_OFFSET UNITYSDK_OFFSET(0x11542520)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__DECIDEADVENTURECHARACTERCONFIG_OFFSET UNITYSDK_OFFSET(0x1152EEA0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__DEFINEEXTRAAVATARPROPERTIES_OFFSET UNITYSDK_OFFSET(0x11551BA0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__DEFINEEXTRAPROPERTIES_OFFSET UNITYSDK_OFFSET(0x11552060)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__DEFINEEXTRAPROPERTY_OFFSET UNITYSDK_OFFSET(0x11552610)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__DEFINEPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x11551980)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__DEFINEPROPERTY_2_OFFSET UNITYSDK_OFFSET(0x11551A20)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__DEFINEPROPERTY_OFFSET UNITYSDK_OFFSET(0x115518E0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__FAKEAVATARCOMPONENTINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1152EF90)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__REFRESHSERVANTCUSTOMTEAMFORMATIONFORVIEWMODE_OFFSET UNITYSDK_OFFSET(0x1153EED0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION__SETUPMONSTERGROUPRELATION_OFFSET UNITYSDK_OFFSET(0x11541E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityManagerExtension_TypeDefinitionIndex = 57924;

	class EntityManagerExtension : public ::System::Object
	{
	public:
		static ::Class_1_C0FA7ACF6234A735** StaticGet_CameraConfigToRecover()
		{
			return (::Class_1_C0FA7ACF6234A735**)Il2CppClass::FromTypeDefinitionIndex(EntityManagerExtension_TypeDefinitionIndex)->GetStaticField(0x67180);
		}
		static ::System::String** StaticGet_PROP_LOD1_SUFFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EntityManagerExtension_TypeDefinitionIndex)->GetStaticField(0x67188);
		}
		static ::System::String** StaticGet_PROP_LOD0_SUFFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EntityManagerExtension_TypeDefinitionIndex)->GetStaticField(0x67190);
		}
		static ::System::Boolean* StaticGet__IsInBattleDataView()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EntityManagerExtension_TypeDefinitionIndex)->GetStaticField(0x15530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::GameEntity* CreatePlayerTeamMember(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::TeamType a2, ::RPG::GameCore::EntityType a3, ::RPG::Client::MemberData* a4, ::System::Action_1<::RPG::GameCore::GameEntity*>* a5)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::TeamType, ::RPG::GameCore::EntityType, ::RPG::Client::MemberData*, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEPLAYERTEAMMEMBER_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::GameCore::AdventureCharacterConfig* _DecideAdventureCharacterConfig(::Class_1_DCED81BA3E7C7B2D* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::AdventureCharacterConfig*(*)(::Class_1_DCED81BA3E7C7B2D*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__DECIDEADVENTURECHARACTERCONFIG_OFFSET))(a1, a2);
		}

		static ::System::Void _FakeAvatarComponentInitialize(::RPG::GameCore::GameEntity* a1, ::Class_1_DCED81BA3E7C7B2D* a2, ::RPG::GameCore::AdventureCharacterConfig* a3, ::RPG::GameCore::EntityManager* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::Class_1_DCED81BA3E7C7B2D*, ::RPG::GameCore::AdventureCharacterConfig*, ::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__FAKEAVATARCOMPONENTINITIALIZE_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::GameEntity* CreateFakeAvatar(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TeamType a3, ::RPG::GameCore::EntityType a4, ::Class_1_DCED81BA3E7C7B2D* a5, ::RPG::GameCore::CampType a6)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamType, ::RPG::GameCore::EntityType, ::Class_1_DCED81BA3E7C7B2D*, ::RPG::GameCore::CampType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEFAKEAVATAR_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::RPG::GameCore::GameEntity* CreateSimpleModelEntity(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATESIMPLEMODELENTITY_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::GameEntity* CreateSimpleModelEntityForOnlinePlayRoom(::RPG::GameCore::EntityManager* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATESIMPLEMODELENTITYFORONLINEPLAYROOM_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::GameEntity* CreateAssemblyNPC(::RPG::GameCore::EntityManager* a1, ::RPG::Client::AssemNPC* a2, ::RPG::GameCore::LevelNPCPossessionInfo* a3, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* a4, ::UnityEngine::Vector3 a5, ::System::String* a6, ::RPG::Client::EAssemblyNPC a7, ::System::UInt32 a8, ::System::Action_1<::RPG::GameCore::GameEntity*>* a9)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::Client::AssemNPC*, ::RPG::GameCore::LevelNPCPossessionInfo*, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>*, ::UnityEngine::Vector3, ::System::String*, ::RPG::Client::EAssemblyNPC, ::System::UInt32, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEASSEMBLYNPC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::RPG::GameCore::GameEntity* CreatePedestrianArtNPC(::RPG::GameCore::EntityManager* a1, ::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo* a2, ::RPG::Client::ArtNPCPedestrianAssetConfig_ArtVariantInfo* a3, ::UnityEngine::Vector3 a4, ::System::Action_1<::RPG::GameCore::GameEntity*>* a5)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo*, ::RPG::Client::ArtNPCPedestrianAssetConfig_ArtVariantInfo*, ::UnityEngine::Vector3, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEPEDESTRIANARTNPC_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateNPC(::RPG::GameCore::EntityManager* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::RPG::GameCore::EntityType a7, ::System::Action_1<::RPG::GameCore::GameEntity*>* a8, ::System::Action_1<::RPG::GameCore::GameEntity*>* a9, ::RPG::Client::MapNpcDef* a10, ::RPG::GameCore::NPCDataRow* a11, ::System::Boolean a12)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::RPG::GameCore::EntityType, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::RPG::Client::MapNpcDef*, ::RPG::GameCore::NPCDataRow*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATENPC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateMapNPC(::RPG::GameCore::EntityManager* a1, ::RPG::Client::MapNpcDef* a2, ::RPG::GameCore::NPCDataRow* a3, ::System::Action_1<::RPG::GameCore::GameEntity*>* a4, ::System::Boolean a5)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::Client::MapNpcDef*, ::RPG::GameCore::NPCDataRow*, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEMAPNPC_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateStillNPC(::RPG::GameCore::EntityManager* a1, ::RPG::Client::MapNpcDef* a2, ::RPG::GameCore::NPCDataRow* a3, ::RPG::GameCore::LevelNPCStillConfigData* a4, ::System::Action_1<::RPG::GameCore::GameEntity*>* a5, ::System::Boolean a6)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::Client::MapNpcDef*, ::RPG::GameCore::NPCDataRow*, ::RPG::GameCore::LevelNPCStillConfigData*, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATESTILLNPC_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateMapNPCMonster(::RPG::GameCore::EntityManager* a1, ::RPG::Client::MapNpcDef* a2, ::RPG::GameCore::NPCMonsterDataRow* a3, ::System::Action_1<::RPG::GameCore::GameEntity*>* a4, ::System::Boolean a5)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::Client::MapNpcDef*, ::RPG::GameCore::NPCMonsterDataRow*, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEMAPNPCMONSTER_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::String* GetPropPathLOD(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_GETPROPPATHLOD_OFFSET))(a1);
		}

		static ::System::Void ClientCreateProp_ProcessCaptureProp(::System::String* a1, ::Class_2_7CF36DB1DCE43BAF* a2, ::RPG::GameCore::CharacterModelComponent* a3, ::UnityEngine::GameObject* a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::System::String*, ::Class_2_7CF36DB1DCE43BAF*, ::RPG::GameCore::CharacterModelComponent*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEPROP_PROCESSCAPTUREPROP_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void ClientCreateProp_SetupTransformCmpt(::RPG::GameCore::GameEntity* a1, ::RPG::MVector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::RPG::MVector3 a6)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::MVector3, ::System::Single, ::System::Single, ::System::Single, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEPROP_SETUPTRANSFORMCMPT_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void ClientCreateProp_SetupGroupInfoCmpt(::RPG::GameCore::GameEntity* a1, ::RPG::Client::MapPropDef* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEPROP_SETUPGROUPINFOCMPT_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateProp(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::PropRow* a2, ::RPG::GameCore::PropConfig* a3, ::RPG::Client::MapPropDef* a4, ::RPG::GameCore::TeamType a5, ::UnityEngine::GameObject* a6, ::RPG::MVector3 a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::RPG::MVector3 a11, ::System::Action_1<::RPG::GameCore::GameEntity*>* a12, ::System::Boolean a13, ::Class_2_7CF36DB1DCE43BAF* a14, ::System::Boolean a15)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::PropRow*, ::RPG::GameCore::PropConfig*, ::RPG::Client::MapPropDef*, ::RPG::GameCore::TeamType, ::UnityEngine::GameObject*, ::RPG::MVector3, ::System::Single, ::System::Single, ::System::Single, ::RPG::MVector3, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean, ::Class_2_7CF36DB1DCE43BAF*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEPROP_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
		}

		static ::RPG::GameCore::GameEntity* ClientPuzzleObjectBindProp(::RPG::GameCore::EntityManager* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTPUZZLEOBJECTBINDPROP_OFFSET))(a1, a2);
		}

		static ::System::Void ClientPuzzleEntityBindMiniMapComponent(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::GameEntity* a2, ::System::UInt32 a3, ::Il2CppArray<::System::Int32>* a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::Il2CppArray<::System::Int32>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTPUZZLEENTITYBINDMINIMAPCOMPONENT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ClientPuzzleEntityBindAnimEventComponent(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3, ::UnityEngine::Animator* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*, ::System::String*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTPUZZLEENTITYBINDANIMEVENTCOMPONENT_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateDistrict(::RPG::GameCore::EntityManager* a1, ::System::String* a2, ::RPG::MVector3 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::RPG::MVector3 a7, ::RPG::Client::MapDistrictDef* a8, ::System::Action_1<::RPG::GameCore::GameEntity*>* a9)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::String*, ::RPG::MVector3, ::System::Single, ::System::Single, ::System::Single, ::RPG::MVector3, ::RPG::Client::MapDistrictDef*, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEDISTRICT_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateUnityGOEntity(::RPG::GameCore::EntityManager* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUNITYGOENTITY_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntity* CreatePerformanceLevelGraphEntity(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::LevelGraphConfig* a2, ::System::String* a3, ::RPG::GameCore::RuntimeGroupInfo* a4)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::LevelGraphConfig*, ::System::String*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEPERFORMANCELEVELGRAPHENTITY_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateCutSceneEntity(::RPG::GameCore::EntityManager* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::Class_1_004034A1FAAF468A* a5)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::String*, ::System::String*, ::System::String*, ::Class_1_004034A1FAAF468A*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATECUTSCENEENTITY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateStoryNPCEntity(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::NPCSubType a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::RPG::GameCore::StoryCharacterRow* a7, ::System::String* a8, ::System::String* a9, ::Il2CppArray<::System::String*>* a10, ::System::Boolean a11, ::System::Action_1<::RPG::GameCore::GameEntity*>* a12)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::NPCSubType, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::RPG::GameCore::StoryCharacterRow*, ::System::String*, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Boolean, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATESTORYNPCENTITY_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateStoryPropEntity(::RPG::GameCore::EntityManager* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Action_1<::RPG::GameCore::GameEntity*>* a8)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Boolean, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATESTORYPROPENTITY_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateUI3DCameraEntity(::RPG::GameCore::EntityManager* a1, ::UnityEngine::Camera* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DCAMERAENTITY_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateUI3DServantModelEntity(::RPG::GameCore::EntityManager* a1, ::RPG::AvatarSystem::AvatarServant* a2, ::UnityEngine::Transform* a3)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::AvatarSystem::AvatarServant*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DSERVANTMODELENTITY_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateManikinModelEntity(::RPG::GameCore::EntityManager* a1, ::System::String* a2, ::System::String* a3, ::UnityEngine::Transform* a4)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::String*, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEMANIKINMODELENTITY_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateUI3DModelEntity(::RPG::GameCore::EntityManager* a1, ::RPG::AvatarSystem::IAvatar* a2, ::System::UInt32 a3, ::UnityEngine::Transform* a4)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::AvatarSystem::IAvatar*, ::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DMODELENTITY_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateUI3DFarmEntity(::RPG::GameCore::EntityManager* a1, ::System::String* a2, ::System::String* a3, ::UnityEngine::Transform* a4, ::System::Int32 a5, ::System::String* a6)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::String*, ::System::String*, ::UnityEngine::Transform*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DFARMENTITY_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateUI3DMonsterEntity(::RPG::GameCore::EntityManager* a1, ::System::String* a2, ::System::String* a3, ::UnityEngine::Transform* a4)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::String*, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DMONSTERENTITY_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateUI3DPetEntity(::RPG::GameCore::EntityManager* a1, ::System::UInt32 a2, ::UnityEngine::Transform* a3)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DPETENTITY_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateUI3DPamEntity(::RPG::GameCore::EntityManager* a1, ::UnityEngine::Transform* a2, ::System::UInt32 a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::UnityEngine::Transform*, ::System::UInt32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DPAMENTITY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateUI3DFreeStyleEntity(::RPG::GameCore::EntityManager* a1, ::UnityEngine::GameObject* a2, ::System::UInt32 a3, ::System::String* a4)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::UnityEngine::GameObject*, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEUI3DFREESTYLEENTITY_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateGroupEntity(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEGROUPENTITY_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateSummonUnit(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::SummonUnitDataRow* a4, ::RPG::GameCore::SummonUnitConfig* a5, ::Class_2_D905714C1E15C1C8* a6, ::RPG::MVector3 a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::RPG::MVector3 a11, ::System::Action_1<::RPG::GameCore::GameEntity*>* a12, ::System::Boolean a13, ::Class_1_1C30CE192ABE4C54* a14)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SummonUnitDataRow*, ::RPG::GameCore::SummonUnitConfig*, ::Class_2_D905714C1E15C1C8*, ::RPG::MVector3, ::System::Single, ::System::Single, ::System::Single, ::RPG::MVector3, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean, ::Class_1_1C30CE192ABE4C54*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATESUMMONUNIT_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
		}

		static ::RPG::GameCore::GameEntity* ClientCreatePreviewBattleEventEntity(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::BattleEventRow* a2, ::RPG::GameCore::TeamType a3, ::RPG::GameCore::GameEntity* a4, ::RPG::GameCore::GameEntity* a5, ::Class_0_16E4307DCC419505_417* a6)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::BattleEventRow*, ::RPG::GameCore::TeamType, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_0_16E4307DCC419505_417*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEPREVIEWBATTLEEVENTENTITY_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::RPG::GameCore::GameEntity* ClientCreatePreviewServantEntity(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::IAvatarServantRowWrap* a2, ::RPG::GameCore::TeamType a3, ::RPG::GameCore::GameEntity* a4, ::RPG::GameCore::GameEntity* a5)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::IAvatarServantRowWrap*, ::RPG::GameCore::TeamType, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATEPREVIEWSERVANTENTITY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateLittleGameInstanceEntity(::RPG::GameCore::EntityManager* a1, ::Class_1_E0103A0EA6CD0F4C* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::Class_1_E0103A0EA6CD0F4C*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATELITTLEGAMEINSTANCEENTITY_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateLittleGameContainerEntity(::RPG::GameCore::EntityManager* a1, ::System::UInt32 a2, ::RPG::GameCore::LevelLittleGameInfo* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATELITTLEGAMECONTAINERENTITY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::GameCore::GameEntity* ClientCreateLittleGameProxyEntity(::RPG::GameCore::EntityManager* a1, ::Class_1_E0103A0EA6CD0F4C* a2, ::System::UInt32 a3, ::RPG::GameCore::LittleGameProxyEntityConfig* a4, ::Class_0_16E4307DCC419505_192* a5, ::Entitas::IContext* a6, ::System::Action_1<::RPG::GameCore::GameEntity*>* a7, ::System::Boolean a8)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::Class_1_E0103A0EA6CD0F4C*, ::System::UInt32, ::RPG::GameCore::LittleGameProxyEntityConfig*, ::Class_0_16E4307DCC419505_192*, ::Entitas::IContext*, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLIENTCREATELITTLEGAMEPROXYENTITY_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void _CommonSetupAdventureCharacter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__COMMONSETUPADVENTURECHARACTER_OFFSET))(a1);
		}

		static ::System::Void _CommonSetupAdventureCharacterProperty(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureAbilityComponent* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__COMMONSETUPADVENTURECHARACTERPROPERTY_OFFSET))(a1, a2);
		}

		static ::System::Boolean BattleDataViewBegin(::RPG::GameCore::EntityManager* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_BATTLEDATAVIEWBEGIN_OFFSET))(a1);
		}

		static ::System::Void OnBattleDataViewBegin(::RPG::GameCore::EntityManager* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_ONBATTLEDATAVIEWBEGIN_OFFSET))(a1);
		}

		static ::System::Void OnBattleDataViewEnd(::RPG::GameCore::EntityManager* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_ONBATTLEDATAVIEWEND_OFFSET))(a1);
		}

		static ::System::Void BattleDataViewSelectEntity(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_BATTLEDATAVIEWSELECTENTITY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BattleDataViewExit(::RPG::GameCore::EntityManager* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_BATTLEDATAVIEWEXIT_OFFSET))(a1);
		}

		static ::System::Void OnBattleDataViewExitDone(::RPG::GameCore::EntityManager* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_ONBATTLEDATAVIEWEXITDONE_OFFSET))(a1);
		}

		static ::System::Void _RefreshServantCustomTeamFormationForViewMode(::RPG::GameCore::EntityManager* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__REFRESHSERVANTCUSTOMTEAMFORMATIONFORVIEWMODE_OFFSET))(a1);
		}

		static ::System::Void BeforeBattleDataViewCameraRecover(::RPG::GameCore::EntityManager* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_BEFOREBATTLEDATAVIEWCAMERARECOVER_OFFSET))(a1);
		}

		static ::System::Boolean IsInBattleDataView(::RPG::GameCore::EntityManager* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_ISINBATTLEDATAVIEW_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntity* QACreateCharacter(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::TeamType a2, ::RPG::GameCore::EntityType a3, ::System::UInt32 a4, ::System::String* a5, ::System::String* a6)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::TeamType, ::RPG::GameCore::EntityType, ::System::UInt32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_QACREATECHARACTER_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::RPG::GameCore::GameEntity* CreateCharacter(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::TeamType a2, ::RPG::GameCore::EntityType a3, ::System::UInt32 a4, ::Struct_2_7ADC47CBF4CDE3DB a5, ::Class_1_B8FB38F0526A59B0* a6, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::FixPoint>* a7)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::TeamType, ::RPG::GameCore::EntityType, ::System::UInt32, ::Struct_2_7ADC47CBF4CDE3DB, ::Class_1_B8FB38F0526A59B0*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATECHARACTER_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean IsExtraPropertyEnabled(::RPG::GameCore::EntityManager* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_ISEXTRAPROPERTYENABLED_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntity* CloneBattlePerformActorEntity(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CLONEBATTLEPERFORMACTORENTITY_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::GameEntity* CreateBattlePerformActorEntity(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::BattlePerformCreateActor* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::BattlePerformCreateActor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEBATTLEPERFORMACTORENTITY_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::ICharacterRowData* BuildBattlePerformActorRowData(::RPG::GameCore::BattlePerformCreateActor* a1)
		{
			return ((::RPG::GameCore::ICharacterRowData*(*)(::RPG::GameCore::BattlePerformCreateActor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_BUILDBATTLEPERFORMACTORROWDATA_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntity* _CreateBPActorEntity(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::ICharacterRowData* a2, ::RPG::GameCore::TransformComponent* a3)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::ICharacterRowData*, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__CREATEBPACTORENTITY_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::GameEntity* CreatePartner(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEPARTNER_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::GameEntity* CreateBodyPart(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::GameEntity* a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::String* a5, ::System::String* a6, ::System::Int32 a7, ::System::Boolean a8, ::System::Int32 a9, ::System::Boolean a10, ::System::Boolean a11, ::System::Boolean a12)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::String*, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEBODYPART_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		static ::RPG::GameCore::GameEntity* CreateMissionEntity(::RPG::GameCore::EntityManager* a1, ::System::UInt32 a2, ::System::String* a3)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEMISSIONENTITY_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::GameEntity* CreateLevelGraphEntityClientOnly(::RPG::GameCore::EntityManager* a1, ::System::String* a2, ::RPG::GameCore::EntityType a3)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::String*, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATELEVELGRAPHENTITYCLIENTONLY_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::GameEntity* CreateLevelGraphEntity(::RPG::GameCore::EntityManager* a1, ::System::String* a2, ::RPG::GameCore::EntityType a3, ::UnityEngine::GameObject* a4, ::Class_1_83665B095F1535B5_18* a5)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::String*, ::RPG::GameCore::EntityType, ::UnityEngine::GameObject*, ::Class_1_83665B095F1535B5_18*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATELEVELGRAPHENTITY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::GameCore::GameEntity* CreateLevelGraphEntity_1(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::LevelGraphConfig* a2, ::System::String* a3, ::RPG::GameCore::EntityType a4, ::UnityEngine::GameObject* a5, ::Class_1_83665B095F1535B5_18* a6)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::LevelGraphConfig*, ::System::String*, ::RPG::GameCore::EntityType, ::UnityEngine::GameObject*, ::Class_1_83665B095F1535B5_18*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATELEVELGRAPHENTITY_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::RPG::GameCore::GameEntity* CreateBattleEventEntity(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::BattleEventRow* a2, ::RPG::GameCore::TeamType a3, ::RPG::GameCore::GameEntity* a4, ::RPG::GameCore::GameEntity* a5, ::RPG::GameCore::GameEntity* a6, ::RPG::GameCore::StageRow* a7, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::FixPoint>* a8, ::System::Boolean a9, ::RPG::GameCore::BattleEventCreateType a10, ::System::Boolean a11, ::System::Action_1<::RPG::GameCore::GameEntity*>* a12, ::System::Object* a13, ::Class_0_16E4307DCC419505_417* a14)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::BattleEventRow*, ::RPG::GameCore::TeamType, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::StageRow*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::FixPoint>*, ::System::Boolean, ::RPG::GameCore::BattleEventCreateType, ::System::Boolean, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::System::Object*, ::Class_0_16E4307DCC419505_417*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEBATTLEEVENTENTITY_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
		}

		static ::RPG::GameCore::GameEntity* CreateStageBattleEventEntity(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::StageBattleEventRow* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::StageBattleEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATESTAGEBATTLEEVENTENTITY_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::GameEntity* CreateGlobalShieldEntity(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::FixPoint a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4, ::Class_3_07C3C4D2990C49EE* a5)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::FixPoint, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEGLOBALSHIELDENTITY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::GameCore::GameEntity* CreateLevelEntity(::RPG::GameCore::EntityManager* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATELEVELENTITY_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntity* CreateCustomDataEntity(::RPG::GameCore::EntityManager* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATECUSTOMDATAENTITY_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntity* CreateTeamEntity(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::TeamType a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATETEAMENTITY_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::GameEntity* CreateSnapshotEntity(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATESNAPSHOTENTITY_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::GameEntity* CreateTeamFormationEntity(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATETEAMFORMATIONENTITY_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::GameEntity* CreateGridFightBackendEntity(::RPG::GameCore::EntityManager* a1, ::System::UInt32 a2, ::System::String* a3, ::Class_1_B8FB38F0526A59B0* a4)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::UInt32, ::System::String*, ::Class_1_B8FB38F0526A59B0*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATEGRIDFIGHTBACKENDENTITY_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::GameEntity* CreateTutorialGraphEntity(::RPG::GameCore::EntityManager* a1, ::System::String* a2, ::System::UInt32 a3)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_CREATETUTORIALGRAPHENTITY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _SetupMonsterGroupRelation(::Class_2_23F9D0182A641C7D* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::Class_2_23F9D0182A641C7D*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__SETUPMONSTERGROUPRELATION_OFFSET))(a1, a2);
		}

		static ::System::Void _CommonSetupCharacter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__COMMONSETUPCHARACTER_OFFSET))(a1);
		}

		static ::System::Void _CommonSetupCharacterProperty(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::CharacterDataComponent* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::CharacterDataComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__COMMONSETUPCHARACTERPROPERTY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _DefineExtraAvatarProperties(::RPG::GameCore::EntityManagerExtension_AbilityPropertyInitInfo& a1, ::RPG::GameCore::AvatarDataComponent* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManagerExtension_AbilityPropertyInitInfo&, ::RPG::GameCore::AvatarDataComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__DEFINEEXTRAAVATARPROPERTIES_OFFSET))(a1, a2);
		}

		static ::System::Void _DefineExtraProperties(::RPG::GameCore::EntityManagerExtension_AbilityPropertyInitInfo& a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManagerExtension_AbilityPropertyInitInfo&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__DEFINEEXTRAPROPERTIES_OFFSET))(a1);
		}

		static ::System::Void _DefineProperty(::RPG::GameCore::EntityManagerExtension_AbilityPropertyInitInfo& a1, ::RPG::GameCore::AbilityProperty a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManagerExtension_AbilityPropertyInitInfo&, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__DEFINEPROPERTY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _DefineProperty_1(::RPG::GameCore::EntityManagerExtension_AbilityPropertyInitInfo& a1, ::RPG::GameCore::AbilityProperty a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManagerExtension_AbilityPropertyInitInfo&, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__DEFINEPROPERTY_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void _DefineExtraProperty(::RPG::GameCore::EntityManagerExtension_AbilityPropertyInitInfo& a1, ::RPG::GameCore::AbilityProperty a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManagerExtension_AbilityPropertyInitInfo&, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__DEFINEEXTRAPROPERTY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _DefineProperty_2(::RPG::GameCore::EntityManagerExtension_AbilityPropertyInitInfo& a1, ::RPG::GameCore::AbilityProperty a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManagerExtension_AbilityPropertyInitInfo&, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION__DEFINEPROPERTY_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::RPG::GameCore::GameEntityList* QueryCharactersInTeamByValidRowIndex(::RPG::GameCore::EntityManager* a1, ::System::Int32 a2, ::RPG::GameCore::TeamTypeMask a3, ::RPG::GameCore::AliveStateMask a4, ::RPG::GameCore::EntityTypeMask a5)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::RPG::GameCore::EntityManager*, ::System::Int32, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::AliveStateMask, ::RPG::GameCore::EntityTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYCHARACTERSINTEAMBYVALIDROWINDEX_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::GameCore::GameEntityList* QueryCharactersInTeam(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::TeamTypeMask a2, ::RPG::GameCore::AliveStateMask a3, ::RPG::GameCore::EntityTypeMask a4)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::AliveStateMask, ::RPG::GameCore::EntityTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYCHARACTERSINTEAM_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::GameEntityList* QueryCharactersOnStage(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::TeamTypeMask a2, ::RPG::GameCore::AliveStateMask a3)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYCHARACTERSONSTAGE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::GameEntityList* QueryTargetServants(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AliveStateMask a3)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYTARGETSERVANTS_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::GameEntityList* QueryValidCharacterIncludeZombie(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::TeamTypeMask a2, ::RPG::GameCore::EntityTypeMask a3)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYVALIDCHARACTERINCLUDEZOMBIE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::GameEntityList* QueryValidAvatarIncludeZombie(::RPG::GameCore::EntityManager* a1)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYVALIDAVATARINCLUDEZOMBIE_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntity* GetTargetServant(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AliveStateMask a3)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_GETTARGETSERVANT_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::GameEntity* GetTargetServant_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveStateMask a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_GETTARGETSERVANT_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsServantsOf(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_ISSERVANTSOF_OFFSET))(a1, a2);
		}

		static ::System::Boolean HaveCharacterInTeam(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::TeamTypeMask a2, ::RPG::GameCore::AliveStateMask a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVECHARACTERINTEAM_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HaveCharacterOnStage(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::TeamTypeMask a2, ::RPG::GameCore::AliveStateMask a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVECHARACTERONSTAGE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HaveCharacterAliveOnStage(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::TeamTypeMask a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::TeamTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVECHARACTERALIVEONSTAGE_OFFSET))(a1, a2);
		}

		static ::System::Boolean HaveCharacterAlive(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::TeamTypeMask a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::TeamTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVECHARACTERALIVE_OFFSET))(a1, a2);
		}

		static ::System::Boolean HaveCharacterAliveOrLimbo(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::TeamTypeMask a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::TeamTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVECHARACTERALIVEORLIMBO_OFFSET))(a1, a2);
		}

		static ::System::Boolean HaveDarkEntityForCurWave(::RPG::GameCore::EntityManager* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVEDARKENTITYFORCURWAVE_OFFSET))(a1);
		}

		static ::System::Boolean HaveDarkEntityExcludePuppet(::RPG::GameCore::EntityManager* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_HAVEDARKENTITYEXCLUDEPUPPET_OFFSET))(a1);
		}

		static ::System::Boolean HasDarkTeamMultiRowMode(::RPG::GameCore::EntityManager* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_HASDARKTEAMMULTIROWMODE_OFFSET))(a1);
		}

		static ::System::Void FillTargetEntitiesWithFilter(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::GameCore::EntityTypeMask a3, ::RPG::GameCore::AliveStateMask a4)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_FILLTARGETENTITIESWITHFILTER_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::GameEntityList* QueryUnstageEntities(::RPG::GameCore::EntityManager* a1, ::System::String* a2, ::RPG::GameCore::TeamTypeMask a3)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::RPG::GameCore::EntityManager*, ::System::String*, ::RPG::GameCore::TeamTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_QUERYUNSTAGEENTITIES_OFFSET))(a1, a2, a3);
		}
	};
}
