#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneFloorCapabilitySubSystem_FloorCapabilityTriggerIdentifier_1_TypeDefinitionIndex = 66171;

	template <typename T>
	class BigSceneFloorCapabilitySubSystem_FloorCapabilityTriggerIdentifier_1 : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_TriggerId()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(BigSceneFloorCapabilitySubSystem_FloorCapabilityTriggerIdentifier_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
