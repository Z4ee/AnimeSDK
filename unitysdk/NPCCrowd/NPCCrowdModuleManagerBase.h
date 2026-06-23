#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_CALLINIT_OFFSET UNITYSDK_OFFSET(0xD443430)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_CALLONDESTROY_OFFSET UNITYSDK_OFFSET(0xD443710)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_EARLYUPDATE_OFFSET UNITYSDK_OFFSET(0xD4434D0)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_INIT_OFFSET UNITYSDK_OFFSET(0xD416390)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD443650)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD416410)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xD443490)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD4436B0)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_POSTUPDATE_OFFSET UNITYSDK_OFFSET(0xD443590)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_PRELATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD4435F0)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0xD443530)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xD416490)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xD416530)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xD416340)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdModuleManagerBase_TypeDefinitionIndex = 53994;

	class NPCCrowdModuleManagerBase : public ::System::Object
	{
	public:
		::System::Boolean bInited; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMANAGERBASE__CTOR_OFFSET))(this);
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
