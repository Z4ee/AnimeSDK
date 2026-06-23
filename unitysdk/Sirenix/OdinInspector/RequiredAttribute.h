#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/InfoMessageType.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_REQUIREDATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E32A140)
#define SIRENIX_ODININSPECTOR_REQUIREDATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E32A150)
#define SIRENIX_ODININSPECTOR_REQUIREDATTRIBUTE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E32A160)
#define SIRENIX_ODININSPECTOR_REQUIREDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E32A130)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int RequiredAttribute_TypeDefinitionIndex = 7347;

	class RequiredAttribute : public ::System::Attribute
	{
	public:
		::System::String* ErrorMessage; // 0x10
		::Sirenix::OdinInspector::InfoMessageType MessageType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_REQUIREDATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* errorMessage, ::Sirenix::OdinInspector::InfoMessageType messageType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Sirenix::OdinInspector::InfoMessageType))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_REQUIREDATTRIBUTE__CTOR_1_OFFSET))(this, errorMessage, messageType);
		}

		::System::Void _ctor_2(::System::String* errorMessage)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_REQUIREDATTRIBUTE__CTOR_2_OFFSET))(this, errorMessage);
		}

		::System::Void _ctor_3(::Sirenix::OdinInspector::InfoMessageType messageType)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::InfoMessageType))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_REQUIREDATTRIBUTE__CTOR_3_OFFSET))(this, messageType);
		}
	};
}
