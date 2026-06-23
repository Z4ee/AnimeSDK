#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_CALLINIT_OFFSET UNITYSDK_OFFSET(0xD94DF20)
#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_CALLONDESTROY_OFFSET UNITYSDK_OFFSET(0xD94E160)
#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xD928860)
#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_INIT_OFFSET UNITYSDK_OFFSET(0xD949900)
#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD9289D0)
#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD928A70)
#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD94E100)
#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_POSTPREUPDATE_OFFSET UNITYSDK_OFFSET(0xD94DFE0)
#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_POSTUPDATE_OFFSET UNITYSDK_OFFSET(0xD94E040)
#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_PRELATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD94E0A0)
#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0xD94DF80)
#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xD928AF0)
#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xD9493C0)
#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xD928840)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdModuleSubSystemBase_TypeDefinitionIndex = 44470;

	class NPCCrowdModuleSubSystemBase : public ::System::Object
	{
	public:
		::Nap::NapECS::EcsFilter* filter; // 0x10
		::System::Boolean _initialized; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE__CTOR_OFFSET))(this);
		}

		::System::Void CreateFilters(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_CREATEFILTERS_OFFSET))(this, world);
		}

		::System::Void CallInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_CALLINIT_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_INIT_OFFSET))(this);
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_SHOULDTICK_OFFSET))(this);
		}

		::System::Void PreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_PREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PostPreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_POSTPREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PostUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_POSTUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PreLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_PRELATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void LateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_LATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PostLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_POSTLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void CallOnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_CALLONDESTROY_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_ONDESTROY_OFFSET))(this);
		}
	};
}
