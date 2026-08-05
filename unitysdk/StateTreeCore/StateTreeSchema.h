#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataDesc.h"
#include "unitysdk/UnrealTypes/Object.h"
#include "unitysdk/UnrealTypes/ReadOnlyNativeListView_1.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }

#define STATETREECORE_STATETREESCHEMA_GETCONTEXTDATADESCS_OFFSET UNITYSDK_OFFSET(0x1FB538B0)
#define STATETREECORE_STATETREESCHEMA_ISCLASSALLOWED_OFFSET UNITYSDK_OFFSET(0x1FB53890)
#define STATETREECORE_STATETREESCHEMA_ISEXTERNALITEMALLOWED_OFFSET UNITYSDK_OFFSET(0x1FB538A0)
#define STATETREECORE_STATETREESCHEMA_ISSTRUCTALLOWED_OFFSET UNITYSDK_OFFSET(0x1FB53880)
#define STATETREECORE_STATETREESCHEMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB538C0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeSchema_TypeDefinitionIndex = 31671;

	class StateTreeSchema : public ::UnrealTypes::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESCHEMA__CTOR_OFFSET))(this);
		}

		::System::Boolean IsStructAllowed(::UnrealTypes::ScriptStruct* scriptStruct)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::ScriptStruct*))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESCHEMA_ISSTRUCTALLOWED_OFFSET))(this, scriptStruct);
		}

		::System::Boolean IsClassAllowed(::UnrealTypes::Class* class_)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::Class*))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESCHEMA_ISCLASSALLOWED_OFFSET))(this, class_);
		}

		::System::Boolean IsExternalItemAllowed(::UnrealTypes::Struct* struct_)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::Struct*))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESCHEMA_ISEXTERNALITEMALLOWED_OFFSET))(this, struct_);
		}

		::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeExternalDataDesc> GetContextDataDescs()
		{
			return ((::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeExternalDataDesc>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESCHEMA_GETCONTEXTDATADESCS_OFFSET))(this);
		}
	};
}
