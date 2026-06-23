#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

class Class_3_F2BEFA41A3FA6E27;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SPHEREAREATRIGGERAUDIOSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x19179AE0)
#define MOLEMOLE_SPHEREAREATRIGGERAUDIOSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19179BD0)
#define MOLEMOLE_SPHEREAREATRIGGERAUDIOSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19179D80)
#define MOLEMOLE_SPHEREAREATRIGGERAUDIOSUBSYSTEM_REGISTER_OFFSET UNITYSDK_OFFSET(0x19179C60)
#define MOLEMOLE_SPHEREAREATRIGGERAUDIOSUBSYSTEM_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x19179CF0)
#define MOLEMOLE_SPHEREAREATRIGGERAUDIOSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19179F80)
#define MOLEMOLE_SPHEREAREATRIGGERAUDIOSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x19179FA0)
#define MOLEMOLE_SPHEREAREATRIGGERAUDIOSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1917A030)
#define MOLEMOLE_SPHEREAREATRIGGERAUDIOSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1917A0C0)

namespace MoleMole
{
	inline static constexpr unsigned int SphereAreaTriggerAudioSubSystem_TypeDefinitionIndex = 84642;

	class SphereAreaTriggerAudioSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::SphereAreaTriggerAudioSubSystem*>
	{
	public:
		::System::Collections::Generic::List_1<::Class_3_F2BEFA41A3FA6E27*>* _components; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPHEREAREATRIGGERAUDIOSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPHEREAREATRIGGERAUDIOSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPHEREAREATRIGGERAUDIOSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void Register(::Class_3_F2BEFA41A3FA6E27* component)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2BEFA41A3FA6E27*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPHEREAREATRIGGERAUDIOSUBSYSTEM_REGISTER_OFFSET))(this, component);
		}

		::System::Void Unregister(::Class_3_F2BEFA41A3FA6E27* component)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2BEFA41A3FA6E27*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPHEREAREATRIGGERAUDIOSUBSYSTEM_UNREGISTER_OFFSET))(this, component);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPHEREAREATRIGGERAUDIOSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPHEREAREATRIGGERAUDIOSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPHEREAREATRIGGERAUDIOSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPHEREAREATRIGGERAUDIOSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
