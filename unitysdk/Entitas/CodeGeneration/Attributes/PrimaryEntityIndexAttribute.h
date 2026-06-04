#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/AbstractEntityIndexAttribute.h"

#define ENTITAS_CODEGENERATION_ATTRIBUTES_PRIMARYENTITYINDEXATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x146FE8B0)

namespace Entitas::CodeGeneration::Attributes
{
	inline static constexpr unsigned int PrimaryEntityIndexAttribute_TypeDefinitionIndex = 9730;

	class PrimaryEntityIndexAttribute : public ::Entitas::CodeGeneration::Attributes::AbstractEntityIndexAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_CODEGENERATION_ATTRIBUTES_PRIMARYENTITYINDEXATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
