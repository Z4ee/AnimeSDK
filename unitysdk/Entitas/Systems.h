#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class ICleanupSystem; }
namespace Entitas { class IExecuteSystem; }
namespace Entitas { class IInitializeSystem; }
namespace Entitas { class ISystem; }
namespace Entitas { class ITearDownSystem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENTITAS_SYSTEMS_ACTIVATEREACTIVESYSTEMS_OFFSET UNITYSDK_OFFSET(0x1D1CD680)
#define ENTITAS_SYSTEMS_ADD_OFFSET UNITYSDK_OFFSET(0x1D1CCD80)
#define ENTITAS_SYSTEMS_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1D1CD340)
#define ENTITAS_SYSTEMS_CLEARREACTIVESYSTEMS_OFFSET UNITYSDK_OFFSET(0x1D1CDA80)
#define ENTITAS_SYSTEMS_DEACTIVATEREACTIVESYSTEMS_OFFSET UNITYSDK_OFFSET(0x1D1CD880)
#define ENTITAS_SYSTEMS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D1CD1A0)
#define ENTITAS_SYSTEMS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1CD000)
#define ENTITAS_SYSTEMS_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1D1CD4E0)
#define ENTITAS_SYSTEMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1CCCE0)

namespace Entitas
{
	inline static constexpr unsigned int Systems_TypeDefinitionIndex = 9718;

	class Systems : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Entitas::ITearDownSystem*>* _tearDownSystems; // 0x10
		::System::Collections::Generic::List_1<::Entitas::ICleanupSystem*>* _cleanupSystems; // 0x18
		::System::Collections::Generic::List_1<::Entitas::IExecuteSystem*>* _executeSystems; // 0x20
		::System::Collections::Generic::List_1<::Entitas::IInitializeSystem*>* _initializeSystems; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_SYSTEMS__CTOR_OFFSET))(this);
		}

		::Entitas::Systems* Add(::Entitas::ISystem* a1)
		{
			return ((::Entitas::Systems*(*)(::PVOID, ::Entitas::ISystem*))((::PBYTE)hIl2Cpp + ENTITAS_SYSTEMS_ADD_OFFSET))(this, a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_SYSTEMS_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_SYSTEMS_EXECUTE_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_SYSTEMS_CLEANUP_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_SYSTEMS_TEARDOWN_OFFSET))(this);
		}

		::System::Void ActivateReactiveSystems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_SYSTEMS_ACTIVATEREACTIVESYSTEMS_OFFSET))(this);
		}

		::System::Void DeactivateReactiveSystems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_SYSTEMS_DEACTIVATEREACTIVESYSTEMS_OFFSET))(this);
		}

		::System::Void ClearReactiveSystems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_SYSTEMS_CLEARREACTIVESYSTEMS_OFFSET))(this);
		}
	};
}
