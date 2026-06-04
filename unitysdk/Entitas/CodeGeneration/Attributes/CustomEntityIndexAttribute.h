#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define ENTITAS_CODEGENERATION_ATTRIBUTES_CUSTOMENTITYINDEXATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x146FE820)

namespace Entitas::CodeGeneration::Attributes
{
	inline static constexpr unsigned int CustomEntityIndexAttribute_TypeDefinitionIndex = 9723;

	class CustomEntityIndexAttribute : public ::System::Attribute
	{
	public:
		::System::Type* contextType; // 0x10

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + ENTITAS_CODEGENERATION_ATTRIBUTES_CUSTOMENTITYINDEXATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
