#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTree.h"
#include "unitysdk/StateTreeCore/StateTreeInstanceData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnrealTypes/ReadOnlyRawPtr_1.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Object; }

#define NPCCROWD_ABILITY_STATETREEACTORSCHEMAJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6DB3B0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int StateTreeActorSchemaJob_TypeDefinitionIndex = 51856;

	struct alignas(8) StateTreeActorSchemaJob
	{
		::System::Single DeltaTime; // 0x10
		::Unity::Collections::NativeArray_1<::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>> Context; // 0x18
		::Unity::Collections::NativeArray_1<::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTree>> StateTree; // 0x28
		::Unity::Collections::NativeArray_1<::StateTreeCore::StateTreeInstanceData> InstanceData; // 0x38

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREEACTORSCHEMAJOB_EXECUTE_OFFSET))(this, index);
		}
	};
}
