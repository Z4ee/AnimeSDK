#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataDesc.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataRequirement.h"
#include "unitysdk/StateTreeCore/StateTreeLinkerStatus.h"
#include "unitysdk/System/Object.h"

namespace StateTreeCore { class StateTreeSchema; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { template <typename T> class ManagedStructList_1; }

#define STATETREECORE_STATETREELINKER_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1FC2FFC0)
#define STATETREECORE_STATETREELINKER_LINKEXTERNALDATA_OFFSET UNITYSDK_OFFSET(0x1FC300D0)
#define STATETREECORE_STATETREELINKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC2FFD0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeLinker_TypeDefinitionIndex = 31586;

	class StateTreeLinker : public ::System::Object
	{
	public:
		::StateTreeCore::StateTreeSchema* _schema; // 0x10
		::UnrealTypes::ManagedStructList_1<::StateTreeCore::StateTreeExternalDataDesc>* ExternalDataDesc; // 0x18
		::StateTreeCore::StateTreeLinkerStatus _status; // 0x20

		::System::Void _ctor(::StateTreeCore::StateTreeSchema* schema)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeSchema*))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREELINKER__CTOR_OFFSET))(this, schema);
		}

		::StateTreeCore::StateTreeLinkerStatus get_Status()
		{
			return ((::StateTreeCore::StateTreeLinkerStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREELINKER_GET_STATUS_OFFSET))(this);
		}

		::System::Void LinkExternalData(::StateTreeCore::StateTreeExternalDataHandle& handle, ::UnrealTypes::ScriptStruct* scriptStruct, ::StateTreeCore::StateTreeExternalDataRequirement requirement)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeExternalDataHandle&, ::UnrealTypes::ScriptStruct*, ::StateTreeCore::StateTreeExternalDataRequirement))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREELINKER_LINKEXTERNALDATA_OFFSET))(this, handle, scriptStruct, requirement);
		}
	};
}
