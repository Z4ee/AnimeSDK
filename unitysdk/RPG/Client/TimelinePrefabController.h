#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_9E5975D2F490638C;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_TIMELINEPREFABCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xA5DD4D0)
#define RPG_CLIENT_TIMELINEPREFABCONTROLLER_GET_BEHAVIOUR_OFFSET UNITYSDK_OFFSET(0xA5DD470)
#define RPG_CLIENT_TIMELINEPREFABCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA5DD6C0)
#define RPG_CLIENT_TIMELINEPREFABCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA5DD670)
#define RPG_CLIENT_TIMELINEPREFABCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA5DD5C0)
#define RPG_CLIENT_TIMELINEPREFABCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA5DD750)
#define RPG_CLIENT_TIMELINEPREFABCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA5DD7A0)

namespace RPG::Client
{
	inline static constexpr unsigned int TimelinePrefabController_TypeDefinitionIndex = 49227;

	class TimelinePrefabController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_9E5975D2F490638C* Field_5_0; // 0x18
		::Cinemachine::CinemachineVirtualCamera* VirtualCamera; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Actors; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINEPREFABCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_1_9E5975D2F490638C* get_Behaviour()
		{
			return ((::Class_1_9E5975D2F490638C*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINEPREFABCONTROLLER_GET_BEHAVIOUR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINEPREFABCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINEPREFABCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINEPREFABCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINEPREFABCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINEPREFABCONTROLLER_UPDATE_OFFSET))(this);
		}
	};
}
