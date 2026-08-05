#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsWorld; }

#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_CALLINIT_OFFSET UNITYSDK_OFFSET(0x1066FB30)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_CALLONDESTROY_OFFSET UNITYSDK_OFFSET(0x1066FF50)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1066FAE0)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_EARLYUPDATE_OFFSET UNITYSDK_OFFSET(0x1066FC50)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_INIT_OFFSET UNITYSDK_OFFSET(0x1066FB90)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1066FE30)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1066FFB0)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x1066FBD0)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1066FE90)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_POSTSIMULATIONUPDATE_OFFSET UNITYSDK_OFFSET(0x1066FEF0)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_POSTUPDATE_OFFSET UNITYSDK_OFFSET(0x1066FD70)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_PRELATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1066FDD0)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x1066FCB0)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x1066FC10)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1066FD10)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1066FFF0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdModuleManagerBase_TypeDefinitionIndex = 68890;

	class NPCCrowdModuleManagerBase : public ::System::Object
	{
	public:
		::System::Boolean bInited; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMANAGERBASE__CTOR_OFFSET))(this);
		}

		::System::Void CreateFilters(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMANAGERBASE_CREATEFILTERS_OFFSET))(this, world);
		}

		::System::Void CallInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMANAGERBASE_CALLINIT_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMANAGERBASE_INIT_OFFSET))(this);
		}

		::System::Void OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMANAGERBASE_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMANAGERBASE_SHOULDTICK_OFFSET))(this);
		}

		::System::Void EarlyUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMANAGERBASE_EARLYUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMANAGERBASE_PREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMANAGERBASE_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PostUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMANAGERBASE_POSTUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PreLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMANAGERBASE_PRELATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void LateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMANAGERBASE_LATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PostLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMANAGERBASE_POSTLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PostSimulationUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMANAGERBASE_POSTSIMULATIONUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void CallOnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMANAGERBASE_CALLONDESTROY_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMANAGERBASE_ONDESTROY_OFFSET))(this);
		}
	};
}
