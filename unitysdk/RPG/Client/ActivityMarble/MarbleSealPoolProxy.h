#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SealPoolManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelAreaManager; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY_CREATEPROXY_OFFSET UNITYSDK_OFFSET(0x8F6AEB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F6B740)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x8F6AF20)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY_RESUME_OFFSET UNITYSDK_OFFSET(0x8F6C480)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY_SETDISPLAYMARBLESEALIDS_OFFSET UNITYSDK_OFFSET(0x8F6BBD0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY_STOP_OFFSET UNITYSDK_OFFSET(0x8F6C420)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY__ACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x8F6B5D0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x8F6AEA0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY__DEACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x8F6BA70)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY__GETENTITY_OFFSET UNITYSDK_OFFSET(0x8F6BF50)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY__ONMODELLOADED_OFFSET UNITYSDK_OFFSET(0x8F6C0C0)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleSealPoolProxy_TypeDefinitionIndex = 61425;

	class MarbleSealPoolProxy : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelAreaManager* _LevelAreaMgr; // 0x10
		::UnityEngine::GameObject* _PoolAsset; // 0x18
		::Il2CppArray<::RPG::GameCore::GameEntity*>* _SealEntitys; // 0x20
		::RPG::Client::SealPoolManager* _Mgr; // 0x28
		::System::UInt32 _GroupID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityMarble::MarbleSealPoolProxy* CreateProxy()
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealPoolProxy*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY_CREATEPROXY_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void SetDisplayMarbleSealIDs(::System::Collections::Generic::IList_1<::System::UInt32>* marbleSealIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY_SETDISPLAYMARBLESEALIDS_OFFSET))(this, marbleSealIDs);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY_STOP_OFFSET))(this);
		}

		::System::Void Resume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY_RESUME_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* _GetEntity(::System::Int32 index)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY__GETENTITY_OFFSET))(this, index);
		}

		::System::Void _OnModelLoaded(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY__ONMODELLOADED_OFFSET))(this, entity);
		}

		::System::Void _ActiveCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY__ACTIVECAMERA_OFFSET))(this);
		}

		::System::Void _DeactiveCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY__DEACTIVECAMERA_OFFSET))(this);
		}
	};
}
