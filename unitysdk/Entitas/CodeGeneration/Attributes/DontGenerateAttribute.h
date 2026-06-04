#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define ENTITAS_CODEGENERATION_ATTRIBUTES_DONTGENERATEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x146FE830)

namespace Entitas::CodeGeneration::Attributes
{
	inline static constexpr unsigned int DontGenerateAttribute_TypeDefinitionIndex = 9724;

	class DontGenerateAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean generateIndex; // 0x10

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENTITAS_CODEGENERATION_ATTRIBUTES_DONTGENERATEATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
