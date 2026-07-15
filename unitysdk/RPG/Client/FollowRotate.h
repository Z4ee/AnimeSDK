#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class TransformVersionTracker;
namespace RPG::Client { class FollowRotateGameObject; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FOLLOWROTATE_AWAKEINEDITOR_OFFSET UNITYSDK_OFFSET(0x16D17EF0)
#define RPG_CLIENT_FOLLOWROTATE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16D17F30)
#define RPG_CLIENT_FOLLOWROTATE_SETOWNER_OFFSET UNITYSDK_OFFSET(0x16D17C10)
#define RPG_CLIENT_FOLLOWROTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x16D182E0)
#define RPG_CLIENT_FOLLOWROTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x16D17BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int FollowRotate_TypeDefinitionIndex = 65383;

	class FollowRotate : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FollowRotateGameObject*>* followRotateGameObjects; // 0x18
		::UnityEngine::Vector3 Field_5_1; // 0x20
		::UnityEngine::Quaternion Field_5_2; // 0x2C
		::TransformVersionTracker* Field_5_3; // 0x40
		::RPG::GameCore::GameEntity* Field_5_4; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWROTATE__CTOR_OFFSET))(this);
		}

		::System::Void SetOwner(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWROTATE_SETOWNER_OFFSET))(this, a1);
		}

		::System::Void AwakeInEditor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWROTATE_AWAKEINEDITOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWROTATE_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWROTATE_UPDATE_OFFSET))(this);
		}
	};
}
