#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/InfoMessageType.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_VALIDATEINPUTATTRIBUTE_GET_CONTINIOUSVALIDATIONCHECK_OFFSET UNITYSDK_OFFSET(0x1E32B950)
#define SIRENIX_ODININSPECTOR_VALIDATEINPUTATTRIBUTE_SET_CONTINIOUSVALIDATIONCHECK_OFFSET UNITYSDK_OFFSET(0x1E32B960)
#define SIRENIX_ODININSPECTOR_VALIDATEINPUTATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E32B990)
#define SIRENIX_ODININSPECTOR_VALIDATEINPUTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E32B970)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ValidateInputAttribute_TypeDefinitionIndex = 7378;

	class ValidateInputAttribute : public ::System::Attribute
	{
	public:
		::System::String* Condition; // 0x10
		::System::String* DefaultMessage; // 0x18
		::System::String* MemberName; // 0x20
		::System::Boolean ContinuousValidationCheck; // 0x28
		::System::Boolean IncludeChildren; // 0x29
		::Sirenix::OdinInspector::InfoMessageType MessageType; // 0x2C

		::System::Void _ctor(::System::String* condition, ::System::String* defaultMessage, ::Sirenix::OdinInspector::InfoMessageType messageType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Sirenix::OdinInspector::InfoMessageType))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_VALIDATEINPUTATTRIBUTE__CTOR_OFFSET))(this, condition, defaultMessage, messageType);
		}

		::System::Void _ctor_1(::System::String* condition, ::System::String* message, ::Sirenix::OdinInspector::InfoMessageType messageType, ::System::Boolean rejectedInvalidInput)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Sirenix::OdinInspector::InfoMessageType, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_VALIDATEINPUTATTRIBUTE__CTOR_1_OFFSET))(this, condition, message, messageType, rejectedInvalidInput);
		}

		::System::Boolean get_ContiniousValidationCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_VALIDATEINPUTATTRIBUTE_GET_CONTINIOUSVALIDATIONCHECK_OFFSET))(this);
		}

		::System::Void set_ContiniousValidationCheck(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_VALIDATEINPUTATTRIBUTE_SET_CONTINIOUSVALIDATIONCHECK_OFFSET))(this, value);
		}
	};
}
