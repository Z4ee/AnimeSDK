#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define ENTITAS_CODEGENERATION_ATTRIBUTES_ENTITYINDEXGETMETHODATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x16531860)

namespace Entitas::CodeGeneration::Attributes
{
	inline static constexpr unsigned int EntityIndexGetMethodAttribute_TypeDefinitionIndex = 10021;

	class EntityIndexGetMethodAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_CODEGENERATION_ATTRIBUTES_ENTITYINDEXGETMETHODATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
