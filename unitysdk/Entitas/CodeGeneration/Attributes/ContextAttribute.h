#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define ENTITAS_CODEGENERATION_ATTRIBUTES_CONTEXTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C7DF0)

namespace Entitas::CodeGeneration::Attributes
{
	inline static constexpr unsigned int ContextAttribute_TypeDefinitionIndex = 9736;

	class ContextAttribute : public ::System::Attribute
	{
	public:
		::System::String* contextName; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_CODEGENERATION_ATTRIBUTES_CONTEXTATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
