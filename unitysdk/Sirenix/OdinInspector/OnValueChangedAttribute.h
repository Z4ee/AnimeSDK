#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_ONVALUECHANGEDATTRIBUTE_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x1E329B70)
#define SIRENIX_ODININSPECTOR_ONVALUECHANGEDATTRIBUTE_SET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x1E329B80)
#define SIRENIX_ODININSPECTOR_ONVALUECHANGEDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E329B90)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int OnValueChangedAttribute_TypeDefinitionIndex = 7337;

	class OnValueChangedAttribute : public ::System::Attribute
	{
	public:
		::System::String* Action; // 0x10
		::System::Boolean IncludeChildren; // 0x18
		::System::Boolean InvokeOnUndoRedo; // 0x19
		::System::Boolean InvokeOnInitialize; // 0x1A

		::System::Void _ctor(::System::String* action, ::System::Boolean includeChildren)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ONVALUECHANGEDATTRIBUTE__CTOR_OFFSET))(this, action, includeChildren);
		}

		::System::String* get_MethodName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ONVALUECHANGEDATTRIBUTE_GET_METHODNAME_OFFSET))(this);
		}

		::System::Void set_MethodName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ONVALUECHANGEDATTRIBUTE_SET_METHODNAME_OFFSET))(this, value);
		}
	};
}
