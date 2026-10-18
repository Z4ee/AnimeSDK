#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/RPG/GameCore/CampType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_1DBE0E1023AFDBC5;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameComponentBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayerLockTargetComponent; }
namespace RPG::GameCore { class TransformComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_ENTITYINSPECTOR_DIE_OFFSET UNITYSDK_OFFSET(0xCDF29E0)
#define RPG_CLIENT_ENTITYINSPECTOR_GET_ABILITYSHOW_OFFSET UNITYSDK_OFFSET(0xCDF4230)
#define RPG_CLIENT_ENTITYINSPECTOR_GET_ACTIONDELAY_OFFSET UNITYSDK_OFFSET(0xCDF3C40)
#define RPG_CLIENT_ENTITYINSPECTOR_GET_CAMPID_OFFSET UNITYSDK_OFFSET(0xCDF39A0)
#define RPG_CLIENT_ENTITYINSPECTOR_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xCDF3880)
#define RPG_CLIENT_ENTITYINSPECTOR_GET_COMPONENTS_OFFSET UNITYSDK_OFFSET(0xCDF4000)
#define RPG_CLIENT_ENTITYINSPECTOR_GET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0xCDF38A0)
#define RPG_CLIENT_ENTITYINSPECTOR_GET_GROUPENTITYID_OFFSET UNITYSDK_OFFSET(0xCDF3B80)
#define RPG_CLIENT_ENTITYINSPECTOR_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xCDF3B20)
#define RPG_CLIENT_ENTITYINSPECTOR_GET_ISAVATAR_OFFSET UNITYSDK_OFFSET(0xCDF38E0)
#define RPG_CLIENT_ENTITYINSPECTOR_GET_ISSTORYMODE_OFFSET UNITYSDK_OFFSET(0xCDF3BE0)
#define RPG_CLIENT_ENTITYINSPECTOR_GET_LOCKEDFACETARGET_OFFSET UNITYSDK_OFFSET(0xCDF3E60)
#define RPG_CLIENT_ENTITYINSPECTOR_GET_MODELARTPREFAB_OFFSET UNITYSDK_OFFSET(0xCDF3750)
#define RPG_CLIENT_ENTITYINSPECTOR_GET_MODELROOTPREFAB_OFFSET UNITYSDK_OFFSET(0xCDF3600)
#define RPG_CLIENT_ENTITYINSPECTOR_GET_MONSTERBASEID_OFFSET UNITYSDK_OFFSET(0xCDF38C0)
#define RPG_CLIENT_ENTITYINSPECTOR_GET_OWNERENTITYREF_OFFSET UNITYSDK_OFFSET(0xCDF35F0)
#define RPG_CLIENT_ENTITYINSPECTOR_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCDF3A60)
#define RPG_CLIENT_ENTITYINSPECTOR_GET_SERVERENTITYID_OFFSET UNITYSDK_OFFSET(0xCDF3AC0)
#define RPG_CLIENT_ENTITYINSPECTOR_GET_STATEALIVE_OFFSET UNITYSDK_OFFSET(0xCDF3A00)
#define RPG_CLIENT_ENTITYINSPECTOR_GET_TEAM_OFFSET UNITYSDK_OFFSET(0xCDF3940)
#define RPG_CLIENT_ENTITYINSPECTOR_GET_TURNSPEED_OFFSET UNITYSDK_OFFSET(0xCDF3DC0)
#define RPG_CLIENT_ENTITYINSPECTOR_GET_UNITACTIONDELAY_OFFSET UNITYSDK_OFFSET(0xCDF3D00)
#define RPG_CLIENT_ENTITYINSPECTOR_INIT_OFFSET UNITYSDK_OFFSET(0xCDF2BA0)
#define RPG_CLIENT_ENTITYINSPECTOR_METHOD_5_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xCDF3FA0)
#define RPG_CLIENT_ENTITYINSPECTOR_METHOD_5_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0xCDF3180)
#define RPG_CLIENT_ENTITYINSPECTOR_METHOD_5_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xCDF3080)
#define RPG_CLIENT_ENTITYINSPECTOR_METHOD_5_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0xCDF3510)
#define RPG_CLIENT_ENTITYINSPECTOR_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xCDF3400)
#define RPG_CLIENT_ENTITYINSPECTOR_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xCDF32D0)
#define RPG_CLIENT_ENTITYINSPECTOR_SET_ABILITYSHOW_OFFSET UNITYSDK_OFFSET(0xCDF4290)
#define RPG_CLIENT_ENTITYINSPECTOR_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xCDF3890)
#define RPG_CLIENT_ENTITYINSPECTOR_SET_COMPONENTS_OFFSET UNITYSDK_OFFSET(0xCDF41E0)
#define RPG_CLIENT_ENTITYINSPECTOR_SET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0xCDF38B0)
#define RPG_CLIENT_ENTITYINSPECTOR_SET_MONSTERBASEID_OFFSET UNITYSDK_OFFSET(0xCDF38D0)
#define RPG_CLIENT_ENTITYINSPECTOR_START_OFFSET UNITYSDK_OFFSET(0xCDF2DA0)
#define RPG_CLIENT_ENTITYINSPECTOR_UPDATE_OFFSET UNITYSDK_OFFSET(0xCDF2DF0)
#define RPG_CLIENT_ENTITYINSPECTOR_VISIBLETOGGLEHIDE_OFFSET UNITYSDK_OFFSET(0xCDF2B20)
#define RPG_CLIENT_ENTITYINSPECTOR_VISIBLETOGGLESHOW_OFFSET UNITYSDK_OFFSET(0xCDF2AA0)
#define RPG_CLIENT_ENTITYINSPECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xCDF42E0)

namespace RPG::Client
{
	inline static constexpr unsigned int EntityInspector_TypeDefinitionIndex = 68418;

	class EntityInspector : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 WorldPos; // 0x18
		::RPG::GameCore::AdventureAnimStateType AdventureStateType; // 0x24
		::UnityEngine::GameObject* TartGetGameObjectForDistance; // 0x28
		::System::Single DistanceToTartgetGameObject; // 0x30
		::RPG::GameCore::AnimStateLogicType AnimLogicState; // 0x34
		::System::String* AnimatorStateName; // 0x38
		::System::UInt32 _CharacterID_k__BackingField; // 0x40
		::System::UInt32 _EnhancedID_k__BackingField; // 0x44
		::System::UInt32 _MonsterBaseID_k__BackingField; // 0x48
		::System::Single DebugTimeScale; // 0x4C
		::System::Boolean KHIJJOIKKAH; // 0x50
		::RPG::GameCore::GameEntity* HOEGAPJBABG; // 0x58
		::RPG::GameCore::TransformComponent* CILFIKGMPDG; // 0x60
		::RPG::GameCore::CharacterDataComponent* CBBCNOIONLG; // 0x68
		::Class_2_1DBE0E1023AFDBC5* JLCIHOAMJBL; // 0x70
		::RPG::GameCore::TurnBasedAbilityComponent* HGLNAFFAIIM; // 0x78
		::RPG::GameCore::AdventureCharacterController* OFKHHNHDMFE; // 0x80
		::RPG::GameCore::PlayerLockTargetComponent* FNHDJHOBPAK; // 0x88
		::System::Collections::Generic::List_1<::RPG::GameCore::GameComponentBase*>* ONOKAJIHCBO; // 0x90
		::System::Int32 PGAAKPCFANB; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR__CTOR_OFFSET))(this);
		}

		::System::Void Die()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_DIE_OFFSET))(this);
		}

		::System::Void VisibleToggleShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_VISIBLETOGGLESHOW_OFFSET))(this);
		}

		::System::Void VisibleToggleHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_VISIBLETOGGLEHIDE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_INIT_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_UPDATE_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void Method_5_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_METHOD_5_97D83E4CB3B11935_OFFSET))(this);
		}

		::System::Void Method_5_3CF43707BF2E9BBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_METHOD_5_3CF43707BF2E9BBA_OFFSET))(this);
		}

		::System::Void Method_5_AD23FDCC7576BB32(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_METHOD_5_AD23FDCC7576BB32_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_OwnerEntityRef()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_GET_OWNERENTITYREF_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_ModelRootPrefab()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_GET_MODELROOTPREFAB_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_ModelArtPrefab()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_GET_MODELARTPREFAB_OFFSET))(this);
		}

		::System::UInt32 get_CharacterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_GET_CHARACTERID_OFFSET))(this);
		}

		::System::Void set_CharacterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_SET_CHARACTERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_EnhancedID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_GET_ENHANCEDID_OFFSET))(this);
		}

		::System::Void set_EnhancedID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_SET_ENHANCEDID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MonsterBaseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_GET_MONSTERBASEID_OFFSET))(this);
		}

		::System::Void set_MonsterBaseID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_SET_MONSTERBASEID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_GET_ISAVATAR_OFFSET))(this);
		}

		::RPG::GameCore::TeamType get_Team()
		{
			return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_GET_TEAM_OFFSET))(this);
		}

		::RPG::GameCore::CampType get_CampID()
		{
			return ((::RPG::GameCore::CampType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_GET_CAMPID_OFFSET))(this);
		}

		::RPG::GameCore::AliveState get_StateAlive()
		{
			return ((::RPG::GameCore::AliveState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_GET_STATEALIVE_OFFSET))(this);
		}

		::System::UInt32 get_RuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_GET_RUNTIMEID_OFFSET))(this);
		}

		::System::UInt32 get_ServerEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_GET_SERVERENTITYID_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_GroupEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_GET_GROUPENTITYID_OFFSET))(this);
		}

		::System::Boolean get_IsStoryMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_GET_ISSTORYMODE_OFFSET))(this);
		}

		::System::Single get_ActionDelay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_GET_ACTIONDELAY_OFFSET))(this);
		}

		::System::Single get_UnitActionDelay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_GET_UNITACTIONDELAY_OFFSET))(this);
		}

		::System::Single get_TurnSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_GET_TURNSPEED_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_LockedFaceTarget()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_GET_LOCKEDFACETARGET_OFFSET))(this);
		}

		::System::Boolean Method_5_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_METHOD_5_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameComponentBase*>* get_Components()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameComponentBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_GET_COMPONENTS_OFFSET))(this);
		}

		::System::Void set_Components(::System::Collections::Generic::List_1<::RPG::GameCore::GameComponentBase*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameComponentBase*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_SET_COMPONENTS_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameComponentBase* get_AbilityShow()
		{
			return ((::RPG::GameCore::GameComponentBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_GET_ABILITYSHOW_OFFSET))(this);
		}

		::System::Void set_AbilityShow(::RPG::GameCore::GameComponentBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameComponentBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYINSPECTOR_SET_ABILITYSHOW_OFFSET))(this, a1);
		}
	};
}
