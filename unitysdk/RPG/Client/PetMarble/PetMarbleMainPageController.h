#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SealPoolManager; }
namespace RPG::Client::PetMarble { class IPetMarbleData; }
namespace RPG::Client::PetMarble { class PetMarbleCameraController; }
namespace RPG::Client::PetMarble::Level { class IPetMarbleLevelMode; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER_CLEARHARDMODEREDDOT_OFFSET UNITYSDK_OFFSET(0xDAD2530)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER_CREATE_OFFSET UNITYSDK_OFFSET(0xDAD0B10)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDAD0F60)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xDAD0B80)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER_ONLEVELMODESWITCHED_OFFSET UNITYSDK_OFFSET(0xDAD24B0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER_REFRESHDISPLAYMARBLESEALS_OFFSET UNITYSDK_OFFSET(0xDAD1490)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER_RESUME_OFFSET UNITYSDK_OFFSET(0xDAD2450)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER_SHOULDSHOWHARDMODEREDDOT_OFFSET UNITYSDK_OFFSET(0xDAD2580)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER_STOP_OFFSET UNITYSDK_OFFSET(0xDAD23F0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER__ACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xDAD0EF0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDAD0B00)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER__DEACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xDAD1290)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER__GETDISPLAYPETMARBLEDATALIST_OFFSET UNITYSDK_OFFSET(0xDAD1BD0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER__GETENTITY_OFFSET UNITYSDK_OFFSET(0xDAD1F70)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER__INITTRANSFORM_OFFSET UNITYSDK_OFFSET(0xDAD0DF0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER__ONMODELLOADED_OFFSET UNITYSDK_OFFSET(0xDAD20C0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER__TRYMARKHARDMODESEEN_OFFSET UNITYSDK_OFFSET(0xDAD1300)

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarbleMainPageController_TypeDefinitionIndex = 74716;

	class PetMarbleMainPageController : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::GameEntity*>* _SealEntitys; // 0x10
		::RPG::Client::SealPoolManager* _Mgr; // 0x18
		::UnityEngine::GameObject* _PoolAsset; // 0x20
		::RPG::Client::PetMarble::PetMarbleCameraController* _CameraController; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PetMarble::PetMarbleMainPageController* Create()
		{
			return ((::RPG::Client::PetMarble::PetMarbleMainPageController*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER_CREATE_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshDisplayMarbleSeals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER_REFRESHDISPLAYMARBLESEALS_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER_STOP_OFFSET))(this);
		}

		::System::Void Resume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER_RESUME_OFFSET))(this);
		}

		::System::Void OnLevelModeSwitched(::RPG::Client::PetMarble::Level::IPetMarbleLevelMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetMarble::Level::IPetMarbleLevelMode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER_ONLEVELMODESWITCHED_OFFSET))(this, a1);
		}

		::System::Void ClearHardModeReddot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER_CLEARHARDMODEREDDOT_OFFSET))(this);
		}

		::System::Boolean ShouldShowHardModeReddot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER_SHOULDSHOWHARDMODEREDDOT_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* _GetEntity(::System::Int32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER__GETENTITY_OFFSET))(this, a1);
		}

		::System::Void _OnModelLoaded(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER__ONMODELLOADED_OFFSET))(this, a1);
		}

		::System::Void _InitTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER__INITTRANSFORM_OFFSET))(this);
		}

		::System::Void _ActiveCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER__ACTIVECAMERA_OFFSET))(this);
		}

		::System::Void _DeactiveCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER__DEACTIVECAMERA_OFFSET))(this);
		}

		::System::Void _TryMarkHardModeSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER__TRYMARKHARDMODESEEN_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::PetMarble::IPetMarbleData*>* _GetDisplayPetMarbleDataList()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::PetMarble::IPetMarbleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMAINPAGECONTROLLER__GETDISPLAYPETMARBLEDATALIST_OFFSET))(this);
		}
	};
}
