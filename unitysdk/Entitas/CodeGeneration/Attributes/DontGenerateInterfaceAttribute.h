#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define ENTITAS_CODEGENERATION_ATTRIBUTES_DONTGENERATEINTERFACEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEC8220)

namespace Entitas::CodeGeneration::Attributes
{
	inline static constexpr unsigned int DontGenerateInterfaceAttribute_TypeDefinitionIndex = 10018;

	class DontGenerateInterfaceAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_CODEGENERATION_ATTRIBUTES_DONTGENERATEINTERFACEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
