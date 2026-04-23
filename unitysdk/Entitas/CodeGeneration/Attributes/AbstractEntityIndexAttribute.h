#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/EntityIndexType.h"
#include "unitysdk/System/Attribute.h"

#define ENTITAS_CODEGENERATION_ATTRIBUTES_ABSTRACTENTITYINDEXATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x12C50100)

namespace Entitas::CodeGeneration::Attributes
{
	inline static constexpr unsigned int AbstractEntityIndexAttribute_TypeDefinitionIndex = 9899;

	class AbstractEntityIndexAttribute : public ::System::Attribute
	{
	public:
		::Entitas::CodeGeneration::Attributes::EntityIndexType entityIndexType; // 0x10

		::System::Void _ctor(::Entitas::CodeGeneration::Attributes::EntityIndexType entityIndexType)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::CodeGeneration::Attributes::EntityIndexType))((::PBYTE)hIl2Cpp + ENTITAS_CODEGENERATION_ATTRIBUTES_ABSTRACTENTITYINDEXATTRIBUTE__CTOR_OFFSET))(this, entityIndexType);
		}
	};
}
