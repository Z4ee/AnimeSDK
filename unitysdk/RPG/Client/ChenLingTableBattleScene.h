#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingTableScene.h"
#include "unitysdk/RPG/Client/ChenLingTableSceneType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_181A7F9409C60DBC;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHENLINGTABLEBATTLESCENE_GETALLYFLAGTRANSFORM_OFFSET UNITYSDK_OFFSET(0x935DC80)
#define RPG_CLIENT_CHENLINGTABLEBATTLESCENE_GETCAMERA_OFFSET UNITYSDK_OFFSET(0x935E070)
#define RPG_CLIENT_CHENLINGTABLEBATTLESCENE_GETENDPOSITION_OFFSET UNITYSDK_OFFSET(0x935D790)
#define RPG_CLIENT_CHENLINGTABLEBATTLESCENE_GETENDROTATION_OFFSET UNITYSDK_OFFSET(0x935DB50)
#define RPG_CLIENT_CHENLINGTABLEBATTLESCENE_GETENEMYFLAGTRANSFORM_OFFSET UNITYSDK_OFFSET(0x935DCD0)
#define RPG_CLIENT_CHENLINGTABLEBATTLESCENE_GETOFFSET_OFFSET UNITYSDK_OFFSET(0x935DA10)
#define RPG_CLIENT_CHENLINGTABLEBATTLESCENE_GETSTARTPOSITION_OFFSET UNITYSDK_OFFSET(0x935D6A0)
#define RPG_CLIENT_CHENLINGTABLEBATTLESCENE_GETSTARTROTATION_OFFSET UNITYSDK_OFFSET(0x935DAE0)
#define RPG_CLIENT_CHENLINGTABLEBATTLESCENE_GET_ADVANCEINFOMATIONSPEED_OFFSET UNITYSDK_OFFSET(0x935E0B0)
#define RPG_CLIENT_CHENLINGTABLEBATTLESCENE_GET_SCENETYPE_OFFSET UNITYSDK_OFFSET(0x935E060)
#define RPG_CLIENT_CHENLINGTABLEBATTLESCENE_METHOD_6_7D4161B721B5E4CB_OFFSET UNITYSDK_OFFSET(0x935DD80)
#define RPG_CLIENT_CHENLINGTABLEBATTLESCENE_METHOD_6_E419BD896E68A583_OFFSET UNITYSDK_OFFSET(0x935E0C0)
#define RPG_CLIENT_CHENLINGTABLEBATTLESCENE_ONENTER_OFFSET UNITYSDK_OFFSET(0x935D1E0)
#define RPG_CLIENT_CHENLINGTABLEBATTLESCENE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x935D3E0)
#define RPG_CLIENT_CHENLINGTABLEBATTLESCENE_ONUISCREENSIZECHANGE_OFFSET UNITYSDK_OFFSET(0x935D660)
#define RPG_CLIENT_CHENLINGTABLEBATTLESCENE_RESET_OFFSET UNITYSDK_OFFSET(0x935D530)
#define RPG_CLIENT_CHENLINGTABLEBATTLESCENE_SETALLYCAMPFLAG_OFFSET UNITYSDK_OFFSET(0x935DD20)
#define RPG_CLIENT_CHENLINGTABLEBATTLESCENE_SETENEMYCAMPFLAG_OFFSET UNITYSDK_OFFSET(0x935E000)
#define RPG_CLIENT_CHENLINGTABLEBATTLESCENE__CTOR_OFFSET UNITYSDK_OFFSET(0x935E400)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingTableBattleScene_TypeDefinitionIndex = 59375;

	class ChenLingTableBattleScene : public ::RPG::Client::ChenLingTableScene
	{
	public:
		::Il2CppArray<::UnityEngine::Transform*>* _AllyGrids; // 0x50
		::Il2CppArray<::UnityEngine::Transform*>* _EnemyGrids; // 0x58
		::UnityEngine::Vector3 _AllyOffset; // 0x60
		::UnityEngine::Vector3 _EnemyOffset; // 0x6C
		::System::Single _AdvanceInFormationSpeed; // 0x78
		::UnityEngine::Transform* _AlleyFlagTransform; // 0x80
		::UnityEngine::Transform* _EnemyFlagTransform; // 0x88
		::UnityEngine::Collider* _BoardCollider; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEBATTLESCENE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEBATTLESCENE_ONENTER_OFFSET))(this);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEBATTLESCENE_ONEXIT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEBATTLESCENE_RESET_OFFSET))(this);
		}

		::System::Void OnUIScreenSizeChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEBATTLESCENE_ONUISCREENSIZECHANGE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetStartPosition(::Class_2_181A7F9409C60DBC* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEBATTLESCENE_GETSTARTPOSITION_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Quaternion GetStartRotation(::Class_2_181A7F9409C60DBC* a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEBATTLESCENE_GETSTARTROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetEndPosition(::Class_2_181A7F9409C60DBC* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEBATTLESCENE_GETENDPOSITION_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 GetOffset(::Class_2_181A7F9409C60DBC* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEBATTLESCENE_GETOFFSET_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion GetEndRotation(::Class_2_181A7F9409C60DBC* a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEBATTLESCENE_GETENDROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* GetAllyFlagTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEBATTLESCENE_GETALLYFLAGTRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Transform* GetEnemyFlagTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEBATTLESCENE_GETENEMYFLAGTRANSFORM_OFFSET))(this);
		}

		::System::Void SetAllyCampFlag(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEBATTLESCENE_SETALLYCAMPFLAG_OFFSET))(this, a1);
		}

		::System::Void SetEnemyCampFlag(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEBATTLESCENE_SETENEMYCAMPFLAG_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingTableSceneType get_SceneType()
		{
			return ((::RPG::Client::ChenLingTableSceneType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEBATTLESCENE_GET_SCENETYPE_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCamera* GetCamera()
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEBATTLESCENE_GETCAMERA_OFFSET))(this);
		}

		::System::Single get_AdvanceInFomationSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEBATTLESCENE_GET_ADVANCEINFOMATIONSPEED_OFFSET))(this);
		}

		::System::Void Method_6_7D4161B721B5E4CB(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEBATTLESCENE_METHOD_6_7D4161B721B5E4CB_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_E419BD896E68A583(::UnityEngine::GameObject* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEBATTLESCENE_METHOD_6_E419BD896E68A583_OFFSET))(this, a1, a2);
		}
	};
}
