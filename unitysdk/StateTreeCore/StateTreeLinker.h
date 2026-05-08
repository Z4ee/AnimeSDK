#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataDesc.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataRequirement.h"
#include "unitysdk/StateTreeCore/StateTreeLinkerStatus.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/NativeStructList_1.h"

namespace UnrealTypes { class Struct; }

#define STATETREECORE_STATETREELINKER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E14D0)
#define STATETREECORE_STATETREELINKER_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define STATETREECORE_STATETREELINKER_LINKEXTERNALDATA_OFFSET UNITYSDK_OFFSET(0x9E14F0)
#define STATETREECORE_STATETREELINKER__CTOR_OFFSET UNITYSDK_OFFSET(0x9E14B0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeLinker_TypeDefinitionIndex = 28331;

	struct alignas(8) StateTreeLinker
	{
		::StateTreeCore::StateTreeLinkerStatus _status; // 0x10
		::UnrealTypes::NativeStructList_1<::StateTreeCore::StateTreeExternalDataDesc> ExternalDataDesc; // 0x18

		::System::Void _ctor(::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREELINKER__CTOR_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeLinkerStatus get_Status()
		{
			return ((::StateTreeCore::StateTreeLinkerStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREELINKER_GET_STATUS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREELINKER_DISPOSE_OFFSET))(this);
		}

		/*
		::System::Void LinkExternalData(::StateTreeCore::StateTreeExternalDataHandle& handle, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> scriptStruct, ::StateTreeCore::StateTreeExternalDataRequirement requirement)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeExternalDataHandle&, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>, ::StateTreeCore::StateTreeExternalDataRequirement))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREELINKER_LINKEXTERNALDATA_OFFSET))(this, handle, scriptStruct, requirement);
		}
		*/
	};
}
