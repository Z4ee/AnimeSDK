#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_151B93D9C4BBDCA4;
class Class_1_4796C2DE3B2D6C2A;
class Class_1_75C90E178B164D38;
class Class_2_13E98E15113145AC;

#define RPG_CLIENT_LITTLEGAMEMANAGER_CHECKIFCONTAINERCANBELOADED_OFFSET UNITYSDK_OFFSET(0x9A38F00)
#define RPG_CLIENT_LITTLEGAMEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A390F0)
#define RPG_CLIENT_LITTLEGAMEMANAGER_GETCURRENTINSTANCE_OFFSET UNITYSDK_OFFSET(0x9A397B0)
#define RPG_CLIENT_LITTLEGAMEMANAGER_GET_ASSETLOADER_OFFSET UNITYSDK_OFFSET(0x9A398A0)
#define RPG_CLIENT_LITTLEGAMEMANAGER_HASCURRENTGAME_OFFSET UNITYSDK_OFFSET(0x9A39760)
#define RPG_CLIENT_LITTLEGAMEMANAGER_ISCONTAINERLOADED_OFFSET UNITYSDK_OFFSET(0x9A38E80)
#define RPG_CLIENT_LITTLEGAMEMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9A39510)
#define RPG_CLIENT_LITTLEGAMEMANAGER_LOADCONTAINER_OFFSET UNITYSDK_OFFSET(0x9A38D80)
#define RPG_CLIENT_LITTLEGAMEMANAGER_LOADONSTEP2_OFFSET UNITYSDK_OFFSET(0x9A39290)
#define RPG_CLIENT_LITTLEGAMEMANAGER_SET_ASSETLOADER_OFFSET UNITYSDK_OFFSET(0x9A398B0)
#define RPG_CLIENT_LITTLEGAMEMANAGER_STOPCURRENTGAME_OFFSET UNITYSDK_OFFSET(0x9A39710)
#define RPG_CLIENT_LITTLEGAMEMANAGER_STOPGAME_OFFSET UNITYSDK_OFFSET(0x9A39690)
#define RPG_CLIENT_LITTLEGAMEMANAGER_UNLOADCONTAINER_OFFSET UNITYSDK_OFFSET(0x9A38E00)
#define RPG_CLIENT_LITTLEGAMEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9A392E0)
#define RPG_CLIENT_LITTLEGAMEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9A390C0)
#define RPG_CLIENT_LITTLEGAMEMANAGER__DISPOSELEVELINSTANCES_OFFSET UNITYSDK_OFFSET(0x9A39020)
#define RPG_CLIENT_LITTLEGAMEMANAGER__DISPOSESINGLEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9A39220)
#define RPG_CLIENT_LITTLEGAMEMANAGER__INITLEVELINSTANCES_OFFSET UNITYSDK_OFFSET(0x9A38F70)
#define RPG_CLIENT_LITTLEGAMEMANAGER__LATEUPDATESINGLEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9A395E0)
#define RPG_CLIENT_LITTLEGAMEMANAGER__PENDGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9A39850)
#define RPG_CLIENT_LITTLEGAMEMANAGER__TRYSTARTPENDINGINSTANCE_OFFSET UNITYSDK_OFFSET(0x9A397F0)
#define RPG_CLIENT_LITTLEGAMEMANAGER__UPDATESINGLEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9A39340)

namespace RPG::Client
{
	inline static constexpr unsigned int LittleGameManager_TypeDefinitionIndex = 49055;

	class LittleGameManager : public ::System::Object
	{
	public:
		::Class_1_4796C2DE3B2D6C2A* _LevelInstanceManager; // 0x10
		::Class_1_151B93D9C4BBDCA4* _CurrentInstance; // 0x18
		::Class_1_151B93D9C4BBDCA4* _PendingInstance; // 0x20
		::Class_2_13E98E15113145AC* _AssetLoader_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void LoadContainer(::System::UInt32 groupID, ::System::UInt32 containerID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_LOADCONTAINER_OFFSET))(this, groupID, containerID);
		}

		::System::Void UnloadContainer(::System::UInt32 groupID, ::System::UInt32 containerID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_UNLOADCONTAINER_OFFSET))(this, groupID, containerID);
		}

		::System::Boolean IsContainerLoaded(::System::UInt32 groupID, ::System::UInt32 containerID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_ISCONTAINERLOADED_OFFSET))(this, groupID, containerID);
		}

		::System::Boolean CheckIfContainerCanBeLoaded(::System::UInt32 groupID, ::System::UInt32 containerID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_CHECKIFCONTAINERCANBELOADED_OFFSET))(this, groupID, containerID);
		}

		::System::Void _InitLevelInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__INITLEVELINSTANCES_OFFSET))(this);
		}

		::System::Void _DisposeLevelInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__DISPOSELEVELINSTANCES_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void LoadOnStep2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_LOADONSTEP2_OFFSET))(this);
		}

		::System::Void Update(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_UPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void LateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_LATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void StopGame(::Class_1_151B93D9C4BBDCA4* gameInstance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_151B93D9C4BBDCA4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_STOPGAME_OFFSET))(this, gameInstance);
		}

		::System::Void StopCurrentGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_STOPCURRENTGAME_OFFSET))(this);
		}

		::System::Boolean HasCurrentGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_HASCURRENTGAME_OFFSET))(this);
		}

		::Class_1_151B93D9C4BBDCA4* GetCurrentInstance()
		{
			return ((::Class_1_151B93D9C4BBDCA4*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_GETCURRENTINSTANCE_OFFSET))(this);
		}

		::System::Void _UpdateSingleInstance(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__UPDATESINGLEINSTANCE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _LateUpdateSingleInstance(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__LATEUPDATESINGLEINSTANCE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _DisposeSingleInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__DISPOSESINGLEINSTANCE_OFFSET))(this);
		}

		::System::Void _PendGameInstance(::Class_1_151B93D9C4BBDCA4* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_151B93D9C4BBDCA4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__PENDGAMEINSTANCE_OFFSET))(this, instance);
		}

		::System::Void _TryStartPendingInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__TRYSTARTPENDINGINSTANCE_OFFSET))(this);
		}

		::Class_2_13E98E15113145AC* get_AssetLoader()
		{
			return ((::Class_2_13E98E15113145AC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_GET_ASSETLOADER_OFFSET))(this);
		}

		::System::Void set_AssetLoader(::Class_2_13E98E15113145AC* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_13E98E15113145AC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_SET_ASSETLOADER_OFFSET))(this, value);
		}
	};
}
