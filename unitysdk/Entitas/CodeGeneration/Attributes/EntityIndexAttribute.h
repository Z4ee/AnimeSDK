#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/AbstractEntityIndexAttribute.h"

#define ENTITAS_CODEGENERATION_ATTRIBUTES_ENTITYINDEXATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x146FE850)

namespace Entitas::CodeGeneration::Attributes
{
	inline static constexpr unsigned int EntityIndexAttribute_TypeDefinitionIndex = 9727;

	class EntityIndexAttribute : public ::Entitas::CodeGeneration::Attributes::AbstractEntityIndexAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_CODEGENERATION_ATTRIBUTES_ENTITYINDEXATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
