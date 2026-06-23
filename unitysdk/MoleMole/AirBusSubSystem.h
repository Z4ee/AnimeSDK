#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

class Class_0_16E4307DCC419505_222;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_AIRBUSSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x144BACD0)
#define MOLEMOLE_AIRBUSSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x144BADD0)
#define MOLEMOLE_AIRBUSSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x144BAF90)
#define MOLEMOLE_AIRBUSSUBSYSTEM_REGISTERMANAGER_OFFSET UNITYSDK_OFFSET(0x144BAE70)
#define MOLEMOLE_AIRBUSSUBSYSTEM_UNREGISTERMANAGER_OFFSET UNITYSDK_OFFSET(0x144BAF00)
#define MOLEMOLE_AIRBUSSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x144BB3C0)
#define MOLEMOLE_AIRBUSSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x144BB3E0)
#define MOLEMOLE_AIRBUSSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x144BB470)
#define MOLEMOLE_AIRBUSSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x144BB500)

namespace MoleMole
{
	inline static constexpr unsigned int AirBusSubSystem_TypeDefinitionIndex = 41212;

	class AirBusSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::AirBusSubSystem*>
	{
	public:
		// static const ::System::Single _fixRate; // 0x0
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_222*>* _managers; // 0x10
		::System::Single _fixTimer; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AIRBUSSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AIRBUSSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AIRBUSSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void RegisterManager(::Class_0_16E4307DCC419505_222* manager)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_222*))((::PBYTE)hIl2Cpp + MOLEMOLE_AIRBUSSUBSYSTEM_REGISTERMANAGER_OFFSET))(this, manager);
		}

		::System::Void UnregisterManager(::Class_0_16E4307DCC419505_222* manager)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_222*))((::PBYTE)hIl2Cpp + MOLEMOLE_AIRBUSSUBSYSTEM_UNREGISTERMANAGER_OFFSET))(this, manager);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AIRBUSSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AIRBUSSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AIRBUSSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AIRBUSSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
