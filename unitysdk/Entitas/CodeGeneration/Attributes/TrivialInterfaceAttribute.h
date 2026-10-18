#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define ENTITAS_CODEGENERATION_ATTRIBUTES_TRIVIALINTERFACEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x167586A0)

namespace Entitas::CodeGeneration::Attributes
{
	inline static constexpr unsigned int TrivialInterfaceAttribute_TypeDefinitionIndex = 10088;

	class TrivialInterfaceAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_CODEGENERATION_ATTRIBUTES_TRIVIALINTERFACEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
