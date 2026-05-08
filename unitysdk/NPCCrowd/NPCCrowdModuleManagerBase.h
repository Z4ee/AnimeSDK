#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_CALLINIT_OFFSET UNITYSDK_OFFSET(0xCD513C0)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_CALLONDESTROY_OFFSET UNITYSDK_OFFSET(0xCD51640)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_INIT_OFFSET UNITYSDK_OFFSET(0xCD32C90)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCD51580)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCD32D10)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xCD51420)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCD515E0)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_POSTUPDATE_OFFSET UNITYSDK_OFFSET(0xCD514C0)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_PRELATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCD51520)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0xCD51460)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xCD32D90)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xCD32E30)
#define NPCCROWD_NPCCROWDMODULEMANAGERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xCD32C40)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdModuleManagerBase_TypeDefinitionIndex = 40146;

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
