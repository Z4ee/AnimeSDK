#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class LoopScene; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_LOOPSCENEMOVEOBJECT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE80C80)
#define RPG_CLIENT_LOOPSCENEMOVEOBJECT_INIT_OFFSET UNITYSDK_OFFSET(0xBE81B90)
#define RPG_CLIENT_LOOPSCENEMOVEOBJECT_MOVE_OFFSET UNITYSDK_OFFSET(0xBE818C0)
#define RPG_CLIENT_LOOPSCENEMOVEOBJECT_ROLLBACK_OFFSET UNITYSDK_OFFSET(0xBE819C0)
#define RPG_CLIENT_LOOPSCENEMOVEOBJECT_SETOWNERENTITY_OFFSET UNITYSDK_OFFSET(0xBE81C40)
#define RPG_CLIENT_LOOPSCENEMOVEOBJECT_SETOWNERLOOPSCENE_OFFSET UNITYSDK_OFFSET(0xBE81C90)
#define RPG_CLIENT_LOOPSCENEMOVEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0xBE81CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopSceneMoveObject_TypeDefinitionIndex = 64425;

	class LoopSceneMoveObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 MoveDir; // 0x18
		::System::Single MoveSpeed; // 0x24
		::System::Single Delay; // 0x28
		::System::Single Field_5_3; // 0x2C
		::System::Single Field_5_4; // 0x30
		::RPG::Client::LoopScene* _OwnerLoopSceneRef; // 0x38
		::RPG::GameCore::GameEntity* Field_5_6; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENEMOVEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENEMOVEOBJECT_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Rollback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENEMOVEOBJECT_ROLLBACK_OFFSET))(this);
		}

		::System::Void Move(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENEMOVEOBJECT_MOVE_OFFSET))(this, a1, a2);
		}

		::System::Void SetOwnerEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENEMOVEOBJECT_SETOWNERENTITY_OFFSET))(this, a1);
		}

		::System::Void SetOwnerLoopScene(::RPG::Client::LoopScene* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoopScene*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENEMOVEOBJECT_SETOWNERLOOPSCENE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENEMOVEOBJECT_DISPOSE_OFFSET))(this);
		}
	};
}
