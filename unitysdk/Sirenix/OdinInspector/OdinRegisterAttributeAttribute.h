#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }

#define SIRENIX_ODININSPECTOR_ODINREGISTERATTRIBUTEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C020780)
#define SIRENIX_ODININSPECTOR_ODINREGISTERATTRIBUTEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C020760)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int OdinRegisterAttributeAttribute_TypeDefinitionIndex = 7265;

	class OdinRegisterAttributeAttribute : public ::System::Attribute
	{
	public:
		::System::String* DocumentationUrl; // 0x10
		::System::String* Categories; // 0x18
		::System::Type* AttributeType; // 0x20
		::System::String* Description; // 0x28
		::System::Boolean IsEnterprise; // 0x30

		::System::Void _ctor(::System::Type* attributeType, ::System::String* category, ::System::String* description, ::System::Boolean isEnterprise)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ODINREGISTERATTRIBUTEATTRIBUTE__CTOR_OFFSET))(this, attributeType, category, description, isEnterprise);
		}

		::System::Void _ctor_1(::System::Type* attributeType, ::System::String* category, ::System::String* description, ::System::Boolean isEnterprise, ::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ODINREGISTERATTRIBUTEATTRIBUTE__CTOR_1_OFFSET))(this, attributeType, category, description, isEnterprise, url);
		}
	};
}
