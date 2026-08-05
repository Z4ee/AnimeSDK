#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"
#include "unitysdk/UnrealTypes/FReadOnlyStructView.h"
#include "unitysdk/UnrealTypes/FStructView.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class Struct; }

#define STATETREECORE_VIRTUALPROXY_STATETREENODEBASE_COMPILE_OFFSET UNITYSDK_OFFSET(0x1FBE24F0)
#define STATETREECORE_VIRTUALPROXY_STATETREENODEBASE_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1FBE25B0)
#define STATETREECORE_VIRTUALPROXY_STATETREENODEBASE_LINK_OFFSET UNITYSDK_OFFSET(0x1FBE2550)
#define STATETREECORE_VIRTUALPROXY_STATETREENODEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBE2650)

namespace StateTreeCore
{
	inline static constexpr unsigned int VirtualProxy_StateTreeNodeBase_TypeDefinitionIndex = 31595;

	class VirtualProxy_StateTreeNodeBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_VIRTUALPROXY_STATETREENODEBASE__CTOR_OFFSET))(this);
		}

		::UnrealTypes::DataValidationResult Compile(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREECORE_VIRTUALPROXY_STATETREENODEBASE_COMPILE_OFFSET))(this, self, instanceDataView);
		}

		::System::Boolean Link(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + STATETREECORE_VIRTUALPROXY_STATETREENODEBASE_LINK_OFFSET))(this, self, linker);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::UnrealTypes::FReadOnlyStructView& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&))((::PBYTE)hIl2Cpp + STATETREECORE_VIRTUALPROXY_STATETREENODEBASE_GETINSTANCEDATATYPE_OFFSET))(this, self);
		}
	};
}
