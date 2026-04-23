#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define ENTITAS_CODEGENERATION_ATTRIBUTES_DONTGENERATEINTERFACEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x12C50170)

namespace Entitas::CodeGeneration::Attributes
{
	inline static constexpr unsigned int DontGenerateInterfaceAttribute_TypeDefinitionIndex = 9898;

	class DontGenerateInterfaceAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_CODEGENERATION_ATTRIBUTES_DONTGENERATEINTERFACEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
