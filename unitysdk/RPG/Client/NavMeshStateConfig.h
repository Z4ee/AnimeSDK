#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMeshStateConfig_NavMeshDisableSource.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_0CB627C4F1CDDD99;
namespace RPG::Client { class NavMeshStateParamsSet; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::AI { class NavMeshLink; }
namespace UnityEngine::AI { class NavMeshObstacle; }
namespace UnityEngine::AI { class NavMeshSurface; }

#define RPG_CLIENT_NAVMESHSTATECONFIG_AWAKE_OFFSET UNITYSDK_OFFSET(0x9E30090)
#define RPG_CLIENT_NAVMESHSTATECONFIG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E2FCE0)
#define RPG_CLIENT_NAVMESHSTATECONFIG_ENABLENAVMESHCONFIG_OFFSET UNITYSDK_OFFSET(0x9E30C30)
#define RPG_CLIENT_NAVMESHSTATECONFIG_METHOD_5_1F47CAD86E555F5A_OFFSET UNITYSDK_OFFSET(0x9E2FD30)
#define RPG_CLIENT_NAVMESHSTATECONFIG_METHOD_5_868C75966CA63116_OFFSET UNITYSDK_OFFSET(0x9E309D0)
#define RPG_CLIENT_NAVMESHSTATECONFIG_REMOVENAVMESHCONFIG_OFFSET UNITYSDK_OFFSET(0x9E30BE0)
#define RPG_CLIENT_NAVMESHSTATECONFIG_SETNAVMESHCONFIG_OFFSET UNITYSDK_OFFSET(0x9E30160)
#define RPG_CLIENT_NAVMESHSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9E30D20)

namespace RPG::Client
{
	inline static constexpr unsigned int NavMeshStateConfig_TypeDefinitionIndex = 56061;

	class NavMeshStateConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* DefaultConfig; // 0x18
		::Il2CppArray<::RPG::Client::NavMeshStateParamsSet*>* StateConfigs; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshObstacle*>* Field_5_2; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_5_3; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshLink*>* Field_5_4; // 0x38
		::Il2CppArray<::UnityEngine::AI::NavMeshSurface*>* Field_5_5; // 0x40
		::Class_1_0CB627C4F1CDDD99* Field_5_6; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMESHSTATECONFIG__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMESHSTATECONFIG_DISPOSE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMESHSTATECONFIG_AWAKE_OFFSET))(this);
		}

		::System::Void SetNavMeshConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMESHSTATECONFIG_SETNAVMESHCONFIG_OFFSET))(this, a1);
		}

		::System::Void RemoveNavMeshConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMESHSTATECONFIG_REMOVENAVMESHCONFIG_OFFSET))(this);
		}

		::System::Void EnableNavMeshConfig(::System::Boolean a1, ::RPG::Client::NavMeshStateConfig_NavMeshDisableSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::NavMeshStateConfig_NavMeshDisableSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMESHSTATECONFIG_ENABLENAVMESHCONFIG_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_868C75966CA63116(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMESHSTATECONFIG_METHOD_5_868C75966CA63116_OFFSET))(this, a1);
		}

		::System::Void Method_5_1F47CAD86E555F5A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMESHSTATECONFIG_METHOD_5_1F47CAD86E555F5A_OFFSET))(this);
		}
	};
}
