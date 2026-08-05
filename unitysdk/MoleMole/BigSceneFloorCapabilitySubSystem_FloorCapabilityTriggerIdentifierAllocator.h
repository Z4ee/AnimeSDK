#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM_FLOORCAPABILITYTRIGGERIDENTIFIERALLOCATOR_ALLOCATEID_OFFSET UNITYSDK_OFFSET(0x12EE1A50)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneFloorCapabilitySubSystem_FloorCapabilityTriggerIdentifierAllocator_TypeDefinitionIndex = 63703;

	class BigSceneFloorCapabilitySubSystem_FloorCapabilityTriggerIdentifierAllocator : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__currentId()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(BigSceneFloorCapabilitySubSystem_FloorCapabilityTriggerIdentifierAllocator_TypeDefinitionIndex)->GetStaticField(0x120C0);
		}

		static ::System::UInt32 AllocateId()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM_FLOORCAPABILITYTRIGGERIDENTIFIERALLOCATOR_ALLOCATEID_OFFSET))();
		}
	};
}
