#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingGameView.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierTeamType.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleInitPosition.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_181A7F9409C60DBC;
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGFIELDVIEW_GETENDPOSITION_OFFSET UNITYSDK_OFFSET(0xA67F7B0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGFIELDVIEW_GETENDROTATION_OFFSET UNITYSDK_OFFSET(0xA67FC00)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGFIELDVIEW_GETQUARD_OFFSET UNITYSDK_OFFSET(0xA67F5E0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGFIELDVIEW_GETSTARTPOSITION_OFFSET UNITYSDK_OFFSET(0xA67F680)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGFIELDVIEW_GETSTARTROTATION_OFFSET UNITYSDK_OFFSET(0xA67FB90)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGFIELDVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xA680090)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingFieldView_TypeDefinitionIndex = 71468;

	class ChenLingFieldView : public ::RPG::Client::LittleGame::ChenLing::ChenLingGameView
	{
	public:
		::Il2CppArray<::UnityEngine::Transform*>* NonBattleNodes; // 0x48
		::Il2CppArray<::UnityEngine::Transform*>* BattleNodes; // 0x50
		::UnityEngine::MeshFilter* _FrontQuard; // 0x58
		::UnityEngine::MeshFilter* _MiddleQuard; // 0x60
		::UnityEngine::MeshFilter* _BackQuard; // 0x68
		::UnityEngine::MeshFilter* _FrontQuardEnemy; // 0x70
		::UnityEngine::MeshFilter* _MiddleQuardEnemy; // 0x78
		::UnityEngine::MeshFilter* _BackQuardEnemy; // 0x80
		::UnityEngine::Vector3 _AllyOffset; // 0x88
		::UnityEngine::Vector3 _EnemyOffset; // 0x94
		::System::Single _AdvanceInFormationSpeed; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGFIELDVIEW__CTOR_OFFSET))(this);
		}

		::UnityEngine::MeshFilter* GetQuard(::RPG::GameCore::ChenLingBattleInitPosition a1, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a2)
		{
			return ((::UnityEngine::MeshFilter*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleInitPosition, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGFIELDVIEW_GETQUARD_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 GetStartPosition(::Class_2_181A7F9409C60DBC* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGFIELDVIEW_GETSTARTPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion GetStartRotation(::Class_2_181A7F9409C60DBC* a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGFIELDVIEW_GETSTARTROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetEndPosition(::Class_2_181A7F9409C60DBC* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGFIELDVIEW_GETENDPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion GetEndRotation(::Class_2_181A7F9409C60DBC* a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGFIELDVIEW_GETENDROTATION_OFFSET))(this, a1);
		}
	};
}
