#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define ENTITAS_CODEGENERATION_ATTRIBUTES_CUSTOMENTITYINDEXATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x12C50150)

namespace Entitas::CodeGeneration::Attributes
{
	inline static constexpr unsigned int CustomEntityIndexAttribute_TypeDefinitionIndex = 9896;

	class CustomEntityIndexAttribute : public ::System::Attribute
	{
	public:
		::System::Type* contextType; // 0x10

		::System::Void _ctor(::System::Type* contextType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + ENTITAS_CODEGENERATION_ATTRIBUTES_CUSTOMENTITYINDEXATTRIBUTE__CTOR_OFFSET))(this, contextType);
		}
	};
}
