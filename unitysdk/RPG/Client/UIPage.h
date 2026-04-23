#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_UIPAGE_GETISFINISH_OFFSET UNITYSDK_OFFSET(0xB41C390)
#define RPG_CLIENT_UIPAGE_GETUIGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xB41C3D0)
#define RPG_CLIENT_UIPAGE_GET_RETAINLIFETIME_OFFSET UNITYSDK_OFFSET(0xB41C4E0)
#define RPG_CLIENT_UIPAGE_SETFINISH_OFFSET UNITYSDK_OFFSET(0xB41C350)
#define RPG_CLIENT_UIPAGE_SET_RETAINLIFETIME_OFFSET UNITYSDK_OFFSET(0xB41C4F0)
#define RPG_CLIENT_UIPAGE_START_OFFSET UNITYSDK_OFFSET(0xB41C2E0)
#define RPG_CLIENT_UIPAGE_TICK_OFFSET UNITYSDK_OFFSET(0xB41C420)
#define RPG_CLIENT_UIPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB41C2D0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIPage_TypeDefinitionIndex = 63614;

	class UIPage : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single MaxLifeTime; // 0x18
		::System::Boolean _RetainLifeTime_k__BackingField; // 0x1C
		::UnityEngine::Object* AssetPrefab; // 0x20
		::System::Single _CurrentLife; // 0x28
		::System::Boolean _Finish; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGE__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGE_START_OFFSET))(this);
		}

		::System::Void SetFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGE_SETFINISH_OFFSET))(this);
		}

		::System::Boolean GetIsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGE_GETISFINISH_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetUIGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGE_GETUIGAMEOBJECT_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGE_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Boolean get_RetainLifeTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGE_GET_RETAINLIFETIME_OFFSET))(this);
		}

		::System::Void set_RetainLifeTime(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGE_SET_RETAINLIFETIME_OFFSET))(this, value);
		}
	};
}
