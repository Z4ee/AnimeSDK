#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define ENTITAS_CODEGENERATION_ATTRIBUTES_POSTCONSTRUCTORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x165318A0)

namespace Entitas::CodeGeneration::Attributes
{
	inline static constexpr unsigned int PostConstructorAttribute_TypeDefinitionIndex = 10029;

	class PostConstructorAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_CODEGENERATION_ATTRIBUTES_POSTCONSTRUCTORATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
