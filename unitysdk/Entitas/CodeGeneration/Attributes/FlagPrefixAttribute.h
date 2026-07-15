#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define ENTITAS_CODEGENERATION_ATTRIBUTES_FLAGPREFIXATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C7E70)

namespace Entitas::CodeGeneration::Attributes
{
	inline static constexpr unsigned int FlagPrefixAttribute_TypeDefinitionIndex = 9748;

	class FlagPrefixAttribute : public ::System::Attribute
	{
	public:
		::System::String* prefix; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_CODEGENERATION_ATTRIBUTES_FLAGPREFIXATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
