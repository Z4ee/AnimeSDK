#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/RPG/GameCore/EntityLoadState.h"
#include "unitysdk/RPG/GameCore/EntityTeamRelationTypeMask.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_358;
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class GameComponentBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HoyoTag; }
namespace RPG::GameCore { class TurnBasedModifierConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ADDTAGS_OFFSET UNITYSDK_OFFSET(0xCE0A6E0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ADDTAG_1_OFFSET UNITYSDK_OFFSET(0xCE0A560)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ADDTAG_OFFSET UNITYSDK_OFFSET(0xCE0A4D0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_APPEAR_OFFSET UNITYSDK_OFFSET(0xCE08350)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_BINDSOURCE_OFFSET UNITYSDK_OFFSET(0xCE069D0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_CLEARVERTICALHITINFO_OFFSET UNITYSDK_OFFSET(0xCE074D0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_CUSTOMCOMPARETO_OFFSET UNITYSDK_OFFSET(0xCE0A090)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_EQUALRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE09240)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETACTUALENTITYTYPE_OFFSET UNITYSDK_OFFSET(0xCE094B0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETBATTLEAVATARCAMERAOFFSETHEIGHT_OFFSET UNITYSDK_OFFSET(0xCE07AA0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETBATTLEMONSTERCAMERAOFFSETHEIGHT_OFFSET UNITYSDK_OFFSET(0xCE07BF0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETBODYSIZE_OFFSET UNITYSDK_OFFSET(0xCE07D50)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETCHARACTERANIMATORGO_OFFSET UNITYSDK_OFFSET(0xCE06C10)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETCHARACTERSOMATO_OFFSET UNITYSDK_OFFSET(0xCE09F70)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETCOLLIDERBOUNDS_OFFSET UNITYSDK_OFFSET(0xCE07E60)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETCOLLIDERHEIGHT_OFFSET UNITYSDK_OFFSET(0xCE07FA0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETCOLLIDERWIDTH_OFFSET UNITYSDK_OFFSET(0xCE08130)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETENEMYTEAMTYPE_OFFSET UNITYSDK_OFFSET(0xCE09370)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETENEMYTEAM_OFFSET UNITYSDK_OFFSET(0xCE06930)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETENTITYVIEWSORTPRIORITY_OFFSET UNITYSDK_OFFSET(0xCE0A340)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETENTITYWILLUNSTAGE_OFFSET UNITYSDK_OFFSET(0xCE0A3B0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETMAPRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE089A0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETMOCKANIMATOR_OFFSET UNITYSDK_OFFSET(0xCE06830)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETMODELART_OFFSET UNITYSDK_OFFSET(0xCE06E20)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETMODELLOADSTATE_OFFSET UNITYSDK_OFFSET(0xCE062C0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETNPCBODYSIZE_OFFSET UNITYSDK_OFFSET(0xCE07DF0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETROTATION_OFFSET UNITYSDK_OFFSET(0xCE09D10)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETTARGETTEAMRELATION_OFFSET UNITYSDK_OFFSET(0xCE0A430)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETTEAMENTITY_OFFSET UNITYSDK_OFFSET(0xCE08A20)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETWORLDPOS_OFFSET UNITYSDK_OFFSET(0xCE09C10)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASACTIONTURN_1_OFFSET UNITYSDK_OFFSET(0xCE09120)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASACTIONTURN_OFFSET UNITYSDK_OFFSET(0xCE090D0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASALLEXACT_OFFSET UNITYSDK_OFFSET(0xCE0AB20)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASALL_OFFSET UNITYSDK_OFFSET(0xCE0AAB0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASANY_OFFSET UNITYSDK_OFFSET(0xCE0AA40)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASBEGUNDYINGPROCESS_1_OFFSET UNITYSDK_OFFSET(0xCE09020)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASBEGUNDYINGPROCESS_OFFSET UNITYSDK_OFFSET(0xCE08FD0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASMODELART_OFFSET UNITYSDK_OFFSET(0xCE06CF0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASTAGEXACT_OFFSET UNITYSDK_OFFSET(0xCE0A9D0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASTAG_OFFSET UNITYSDK_OFFSET(0xCE0A960)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISALIVELIMBOORENTERDYING_OFFSET UNITYSDK_OFFSET(0xCE08C50)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISALIVEORLIMBO_1_OFFSET UNITYSDK_OFFSET(0xCE08BA0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISALIVEORLIMBO_OFFSET UNITYSDK_OFFSET(0xCE08B50)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISALLOWADDMODIFIER_OFFSET UNITYSDK_OFFSET(0xCE08DD0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISAPPEAR_OFFSET UNITYSDK_OFFSET(0xCE082C0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISARTMODEL_OFFSET UNITYSDK_OFFSET(0xCE06F30)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISENEMYOF_OFFSET UNITYSDK_OFFSET(0xCE09E90)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISENTITYNEEDCHECKFORWAVEEND_OFFSET UNITYSDK_OFFSET(0xCE098C0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISININFINITEWAVE_OFFSET UNITYSDK_OFFSET(0xCE09B50)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISINTEAMFORMATION_OFFSET UNITYSDK_OFFSET(0xCE09640)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISINVALID_OFFSET UNITYSDK_OFFSET(0xCE091D0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISLIMBOORDEAD_1_OFFSET UNITYSDK_OFFSET(0xCE08F20)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISLIMBOORDEAD_OFFSET UNITYSDK_OFFSET(0xCE08ED0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMATCHEDBYALIVESTATEMASK_OFFSET UNITYSDK_OFFSET(0xCE05DD0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMATCHEDBYENTITYTYPEMASK_OFFSET UNITYSDK_OFFSET(0xCE05F10)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMATCHED_OFFSET UNITYSDK_OFFSET(0xCE05EC0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMATCH_1_OFFSET UNITYSDK_OFFSET(0xCE06BB0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMATCH_OFFSET UNITYSDK_OFFSET(0xCE06B60)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xCE06730)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMODELARTLOADING_OFFSET UNITYSDK_OFFSET(0xCE06530)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMODELLOADING_OFFSET UNITYSDK_OFFSET(0xCE063B0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xCE06630)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISOFFTEAMFORMATION_OFFSET UNITYSDK_OFFSET(0xCE09810)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISPARTENTITY_OFFSET UNITYSDK_OFFSET(0xCE092A0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISPUPPETCHARACTER_OFFSET UNITYSDK_OFFSET(0xCE096F0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISRELATEDTOPLAYER_OFFSET UNITYSDK_OFFSET(0xCE09AC0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISSERVANT_OFFSET UNITYSDK_OFFSET(0xCE09530)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISSTATICNPC_OFFSET UNITYSDK_OFFSET(0xCE07670)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISTARGETINHOSTILECAMP_OFFSET UNITYSDK_OFFSET(0xCE093D0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISTEAMCHARACTER_OFFSET UNITYSDK_OFFSET(0xCE095B0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISVALIDCHARACTERINCLUDEZOMBIE_OFFSET UNITYSDK_OFFSET(0xCE099F0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_MAPRESPATH_1_OFFSET UNITYSDK_OFFSET(0xCE08640)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_MAPRESPATH_2_OFFSET UNITYSDK_OFFSET(0xCE08870)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_MAPRESPATH_OFFSET UNITYSDK_OFFSET(0xCE085B0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_REGISTERAPPEAREDCALLBACK_OFFSET UNITYSDK_OFFSET(0xCE08480)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_REMOVETAG_OFFSET UNITYSDK_OFFSET(0xCE0A8F0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_SETLOCATION_OFFSET UNITYSDK_OFFSET(0xCE06FC0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xCE070F0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_SETROTATION_OFFSET UNITYSDK_OFFSET(0xCE07300)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_SETUNITYGOTRANSFORM_OFFSET UNITYSDK_OFFSET(0xCE07590)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_TOGROUND_OFFSET UNITYSDK_OFFSET(0xCE076F0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_TOMASK_1_OFFSET UNITYSDK_OFFSET(0xCE06980)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_TOMASK_OFFSET UNITYSDK_OFFSET(0xCE05E70)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_TRYMODELINITFORNEWCOMPONENT_OFFSET UNITYSDK_OFFSET(0xCE05FC0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_UNREGISTERAPPEAREDCALLBACK_OFFSET UNITYSDK_OFFSET(0xCE08500)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0xCE0AB90)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS__COMPAREENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE0A160)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS__COMPAREENTITYVIEWSORTPRIORITY_OFFSET UNITYSDK_OFFSET(0xCE0A1E0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS__CUSTOMCOMPARETO_G___GETCOMPAREVALUE_81_0_OFFSET UNITYSDK_OFFSET(0xCE0A140)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS__ISENTERLISTENREDBREAK_OFFSET UNITYSDK_OFFSET(0xCE09790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntityExtensions_TypeDefinitionIndex = 54003;

	class GameEntityExtensions : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet_IsTeamCharacterDelg()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(GameEntityExtensions_TypeDefinitionIndex)->GetStaticField(0x1BB0);
		}
		static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet_IsExcludePuppetCharacterDelg()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(GameEntityExtensions_TypeDefinitionIndex)->GetStaticField(0x1BB8);
		}
		static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet_IsInTeamFormationDelg()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(GameEntityExtensions_TypeDefinitionIndex)->GetStaticField(0x1BC0);
		}
		static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet_IsEntityNeedCheckForWaveEndDelg()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(GameEntityExtensions_TypeDefinitionIndex)->GetStaticField(0x1BC8);
		}
		static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet_IsInTeamFormationWithoutPuppetDelg()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(GameEntityExtensions_TypeDefinitionIndex)->GetStaticField(0x1BD0);
		}
		static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet_IsEnterListenRedBreakDel()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(GameEntityExtensions_TypeDefinitionIndex)->GetStaticField(0x1BD8);
		}
		static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet_IsValidCharacterIncludeZombieDelg()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(GameEntityExtensions_TypeDefinitionIndex)->GetStaticField(0x1BE0);
		}
		static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet_IsOffTeamFormationDelg()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(GameEntityExtensions_TypeDefinitionIndex)->GetStaticField(0x1BE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsMatchedByAliveStateMask(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveStateMask a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMATCHEDBYALIVESTATEMASK_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::EntityTypeMask ToMask(::RPG::GameCore::EntityType a1)
		{
			return ((::RPG::GameCore::EntityTypeMask(*)(::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_TOMASK_OFFSET))(a1);
		}

		static ::System::Boolean IsMatched(::RPG::GameCore::EntityType a1, ::RPG::GameCore::EntityTypeMask a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EntityType, ::RPG::GameCore::EntityTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMATCHED_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsMatchedByEntityTypeMask(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::EntityTypeMask a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::EntityTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMATCHEDBYENTITYTYPEMASK_OFFSET))(a1, a2);
		}

		static ::System::Void TryModelInitForNewComponent(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameComponentBase* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameComponentBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_TRYMODELINITFORNEWCOMPONENT_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::EntityLoadState GetModelLoadState(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::EntityLoadState(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETMODELLOADSTATE_OFFSET))(a1);
		}

		static ::System::Boolean IsModelLoading(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMODELLOADING_OFFSET))(a1);
		}

		static ::System::Boolean IsModelArtLoading(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMODELARTLOADING_OFFSET))(a1);
		}

		static ::System::Boolean IsModelRootLoaded(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMODELROOTLOADED_OFFSET))(a1);
		}

		static ::System::Boolean IsModelArtLoaded(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMODELARTLOADED_OFFSET))(a1);
		}

		static ::RPG::Client::MockAnimator* GetMockAnimator(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::MockAnimator*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETMOCKANIMATOR_OFFSET))(a1);
		}

		static ::RPG::GameCore::TeamType GetEnemyTeam(::RPG::GameCore::TeamType a1)
		{
			return ((::RPG::GameCore::TeamType(*)(::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETENEMYTEAM_OFFSET))(a1);
		}

		static ::RPG::GameCore::TeamTypeMask ToMask_1(::RPG::GameCore::TeamType a1)
		{
			return ((::RPG::GameCore::TeamTypeMask(*)(::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_TOMASK_1_OFFSET))(a1);
		}

		static ::RPG::GameCore::TeamTypeMask BindSource(::RPG::GameCore::TeamTypeMask a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::TeamTypeMask(*)(::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_BINDSOURCE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsMatch(::RPG::GameCore::TeamType a1, ::RPG::GameCore::TeamTypeMask a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TeamType, ::RPG::GameCore::TeamTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMATCH_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsMatch_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TeamTypeMask a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMATCH_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::GameObject* GetCharacterAnimatorGO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETCHARACTERANIMATORGO_OFFSET))(a1);
		}

		static ::System::Boolean HasModelArt(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASMODELART_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* GetModelArt(::RPG::GameCore::GameEntity* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETMODELART_OFFSET))(a1);
		}

		static ::System::Boolean IsArtModel(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISARTMODEL_OFFSET))(a1);
		}

		static ::System::Void SetLocation(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_SETLOCATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ClearVerticalHitInfo(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_CLEARVERTICALHITINFO_OFFSET))(a1);
		}

		static ::System::Void SetUnityGOTransform(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_SETUNITYGOTRANSFORM_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetPosition(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_SETPOSITION_OFFSET))(a1, a2);
		}

		static ::System::Void SetRotation(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_SETROTATION_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsStaticNPC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISSTATICNPC_OFFSET))(a1);
		}

		static ::System::Void ToGround(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_TOGROUND_OFFSET))(a1);
		}

		static ::System::Single GetBattleAvatarCameraOffsetHeight(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETBATTLEAVATARCAMERAOFFSETHEIGHT_OFFSET))(a1);
		}

		static ::System::Single GetBattleMonsterCameraOffsetHeight(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETBATTLEMONSTERCAMERAOFFSETHEIGHT_OFFSET))(a1);
		}

		static ::RPG::GameCore::BodySize GetBodySize(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::BodySize(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETBODYSIZE_OFFSET))(a1);
		}

		static ::RPG::GameCore::NPCBodySize GetNPCBodySize(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::NPCBodySize(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETNPCBODYSIZE_OFFSET))(a1);
		}

		static ::UnityEngine::Bounds GetColliderBounds(::RPG::GameCore::GameEntity* a1, ::System::Boolean& a2)
		{
			return ((::UnityEngine::Bounds(*)(::RPG::GameCore::GameEntity*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETCOLLIDERBOUNDS_OFFSET))(a1, a2);
		}

		static ::System::Single GetColliderHeight(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETCOLLIDERHEIGHT_OFFSET))(a1);
		}

		static ::System::Single GetColliderWidth(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETCOLLIDERWIDTH_OFFSET))(a1);
		}

		static ::System::Boolean IsAppear(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISAPPEAR_OFFSET))(a1);
		}

		static ::System::Void Appear(::RPG::GameCore::GameEntity* a1, ::RPG::Client::MapNpcDef* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_APPEAR_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterAppearedCallback(::RPG::GameCore::GameEntity* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_REGISTERAPPEAREDCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void UnregisterAppearedCallback(::RPG::GameCore::GameEntity* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_UNREGISTERAPPEAREDCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::String* MapResPath(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_MAPRESPATH_OFFSET))(a1, a2);
		}

		static ::System::Boolean MapResPath_1(::RPG::GameCore::GameEntity* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_MAPRESPATH_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean MapResPath_2(::Class_0_16E4307DCC419505_358* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_358*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_MAPRESPATH_2_OFFSET))(a1, a2);
		}

		static ::System::UInt64 GetMapRuntimeId(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::UInt64(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETMAPRUNTIMEID_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntity* GetTeamEntity(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETTEAMENTITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsAliveOrLimbo(::RPG::GameCore::AliveState a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISALIVEORLIMBO_OFFSET))(a1);
		}

		static ::System::Boolean IsAliveOrLimbo_1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISALIVEORLIMBO_1_OFFSET))(a1);
		}

		static ::System::Boolean IsAliveLimboOrEnterDying(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISALIVELIMBOORENTERDYING_OFFSET))(a1);
		}

		static ::System::Boolean IsAllowAddModifier(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TurnBasedModifierConfig* a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISALLOWADDMODIFIER_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsLimboOrDead(::RPG::GameCore::AliveState a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISLIMBOORDEAD_OFFSET))(a1);
		}

		static ::System::Boolean IsLimboOrDead_1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISLIMBOORDEAD_1_OFFSET))(a1);
		}

		static ::System::Boolean HasBegunDyingProcess(::RPG::GameCore::AliveState a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASBEGUNDYINGPROCESS_OFFSET))(a1);
		}

		static ::System::Boolean HasBegunDyingProcess_1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASBEGUNDYINGPROCESS_1_OFFSET))(a1);
		}

		static ::System::Boolean HasActionTurn(::RPG::GameCore::AliveState a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASACTIONTURN_OFFSET))(a1);
		}

		static ::System::Boolean HasActionTurn_1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASACTIONTURN_1_OFFSET))(a1);
		}

		static ::System::Boolean IsInvalid(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISINVALID_OFFSET))(a1);
		}

		static ::System::Boolean EqualRuntimeID(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_EQUALRUNTIMEID_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsPartEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISPARTENTITY_OFFSET))(a1);
		}

		static ::RPG::GameCore::TeamType GetEnemyTeamType(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::TeamType(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETENEMYTEAMTYPE_OFFSET))(a1);
		}

		static ::System::Boolean IsTargetInHostileCamp(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISTARGETINHOSTILECAMP_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::EntityType GetActualEntityType(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::EntityType(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETACTUALENTITYTYPE_OFFSET))(a1);
		}

		static ::System::Boolean IsServant(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISSERVANT_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsTeamCharacter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISTEAMCHARACTER_OFFSET))(a1);
		}

		static ::System::Boolean IsInTeamFormation(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISINTEAMFORMATION_OFFSET))(a1);
		}

		static ::System::Boolean IsPuppetCharacter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISPUPPETCHARACTER_OFFSET))(a1);
		}

		static ::System::Boolean _IsEnterListenRedBreak(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS__ISENTERLISTENREDBREAK_OFFSET))(a1);
		}

		static ::System::Boolean IsOffTeamFormation(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISOFFTEAMFORMATION_OFFSET))(a1);
		}

		static ::System::Boolean IsEntityNeedCheckForWaveEnd(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISENTITYNEEDCHECKFORWAVEEND_OFFSET))(a1);
		}

		static ::System::Boolean IsValidCharacterIncludeZombie(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISVALIDCHARACTERINCLUDEZOMBIE_OFFSET))(a1);
		}

		static ::System::Boolean IsRelatedToPlayer(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISRELATEDTOPLAYER_OFFSET))(a1);
		}

		static ::System::Boolean IsInInfiniteWave(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISININFINITEWAVE_OFFSET))(a1);
		}

		static ::RPG::MVector3 GetWorldPos(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::MVector3(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETWORLDPOS_OFFSET))(a1);
		}

		static ::UnityEngine::Quaternion GetRotation(::RPG::GameCore::GameEntity* a1)
		{
			return ((::UnityEngine::Quaternion(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETROTATION_OFFSET))(a1);
		}

		static ::System::Boolean IsEnemyOf(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISENEMYOF_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::CharacterSomatoType GetCharacterSomato(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::CharacterSomatoType(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETCHARACTERSOMATO_OFFSET))(a1);
		}

		static ::System::Int32 CustomCompareTo(::RPG::GameCore::CharacterSomatoType a1, ::RPG::GameCore::CharacterSomatoType a2)
		{
			return ((::System::Int32(*)(::RPG::GameCore::CharacterSomatoType, ::RPG::GameCore::CharacterSomatoType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_CUSTOMCOMPARETO_OFFSET))(a1, a2);
		}

		static ::System::Int32 _CompareEntityRuntimeID(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS__COMPAREENTITYRUNTIMEID_OFFSET))(a1, a2);
		}

		static ::System::Int32 _CompareEntityViewSortPriority(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS__COMPAREENTITYVIEWSORTPRIORITY_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetEntityViewSortPriority(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETENTITYVIEWSORTPRIORITY_OFFSET))(a1);
		}

		static ::System::Boolean GetEntityWillUnstage(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETENTITYWILLUNSTAGE_OFFSET))(a1);
		}

		static ::RPG::GameCore::EntityTeamRelationTypeMask GetTargetTeamRelation(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::EntityTeamRelationTypeMask(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETTARGETTEAMRELATION_OFFSET))(a1, a2);
		}

		static ::System::Void AddTag(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::HoyoTag* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ADDTAG_OFFSET))(a1, a2);
		}

		static ::System::Void AddTag_1(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ADDTAG_1_OFFSET))(a1, a2);
		}

		static ::System::Void AddTags(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ADDTAGS_OFFSET))(a1, a2);
		}

		static ::System::Void RemoveTag(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::HoyoTag* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_REMOVETAG_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasTag(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASTAG_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasTagExact(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASTAGEXACT_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasAny(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASANY_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasAll(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASALL_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasAllExact(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASALLEXACT_OFFSET))(a1, a2);
		}

		static ::System::Int32 _CustomCompareTo_g___GetCompareValue_81_0(::RPG::GameCore::CharacterSomatoType a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::CharacterSomatoType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS__CUSTOMCOMPARETO_G___GETCOMPAREVALUE_81_0_OFFSET))(a1);
		}
	};
}
