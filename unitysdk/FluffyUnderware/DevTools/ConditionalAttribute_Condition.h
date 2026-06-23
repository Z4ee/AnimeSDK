#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/ConditionalAttribute_OperatorEnum.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }

#define FLUFFYUNDERWARE_DEVTOOLS_CONDITIONALATTRIBUTE_CONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6912A0)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int ConditionalAttribute_Condition_TypeDefinitionIndex = 28318;

	class ConditionalAttribute_Condition : public ::System::Object
	{
	public:
		::System::String* FieldName; // 0x10
		::System::String* MethodName; // 0x18
		::System::Reflection::MethodInfo* MethodInfo; // 0x20
		::System::Object* CompareTo; // 0x28
		::System::Reflection::PropertyInfo* PropertyInfo; // 0x30
		::System::Reflection::FieldInfo* FieldInfo; // 0x38
		::System::Boolean CompareFalse; // 0x40
		::FluffyUnderware::DevTools::ConditionalAttribute_OperatorEnum Operator; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_CONDITIONALATTRIBUTE_CONDITION__CTOR_OFFSET))(this);
		}
	};
}
