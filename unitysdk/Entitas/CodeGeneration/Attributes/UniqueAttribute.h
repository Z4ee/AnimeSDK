#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define ENTITAS_CODEGENERATION_ATTRIBUTES_UNIQUEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x167491A0)

namespace Entitas::CodeGeneration::Attributes
{
	inline static constexpr unsigned int UniqueAttribute_TypeDefinitionIndex = 10089;

	class UniqueAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_CODEGENERATION_ATTRIBUTES_UNIQUEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
