#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeLinker.h"
#include "unitysdk/StateTreeCore/StateTreeNodeBase.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define STATETREECORE_VIRTUALFUNCTIONEXTENSIONS_STATETREENODEBASE_COMPILE_OFFSET UNITYSDK_OFFSET(0x1BF49E60)
#define STATETREECORE_VIRTUALFUNCTIONEXTENSIONS_STATETREENODEBASE_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1BF49F10)
#define STATETREECORE_VIRTUALFUNCTIONEXTENSIONS_STATETREENODEBASE_LINK_OFFSET UNITYSDK_OFFSET(0x1BF49EC0)

namespace StateTreeCore
{
	inline static constexpr unsigned int VirtualFunctionExtensions_StateTreeNodeBase_TypeDefinitionIndex = 28337;

	class VirtualFunctionExtensions_StateTreeNodeBase : public ::System::Object
	{
	public:
		static ::UnrealTypes::DataValidationResult Compile(::StateTreeCore::StateTreeNodeBase& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::StateTreeCore::StateTreeNodeBase&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREECORE_VIRTUALFUNCTIONEXTENSIONS_STATETREENODEBASE_COMPILE_OFFSET))(self, instanceDataView);
		}

		static ::System::Boolean Link(::StateTreeCore::StateTreeNodeBase& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::StateTreeCore::StateTreeNodeBase&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + STATETREECORE_VIRTUALFUNCTIONEXTENSIONS_STATETREENODEBASE_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeCore::StateTreeNodeBase& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeCore::StateTreeNodeBase&))((::PBYTE)hIl2Cpp + STATETREECORE_VIRTUALFUNCTIONEXTENSIONS_STATETREENODEBASE_GETINSTANCEDATATYPE_OFFSET))(self);
		}
	};
}
