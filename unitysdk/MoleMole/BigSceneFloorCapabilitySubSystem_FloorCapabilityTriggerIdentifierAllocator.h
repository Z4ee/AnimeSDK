#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM_FLOORCAPABILITYTRIGGERIDENTIFIERALLOCATOR_ALLOCATEID_OFFSET UNITYSDK_OFFSET(0xF95C7F0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneFloorCapabilitySubSystem_FloorCapabilityTriggerIdentifierAllocator_TypeDefinitionIndex = 66169;

	class BigSceneFloorCapabilitySubSystem_FloorCapabilityTriggerIdentifierAllocator : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__currentId()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(BigSceneFloorCapabilitySubSystem_FloorCapabilityTriggerIdentifierAllocator_TypeDefinitionIndex)->GetStaticField(0x10F90);
		}

		static ::System::UInt32 AllocateId()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM_FLOORCAPABILITYTRIGGERIDENTIFIERALLOCATOR_ALLOCATEID_OFFSET))();
		}
	};
}
