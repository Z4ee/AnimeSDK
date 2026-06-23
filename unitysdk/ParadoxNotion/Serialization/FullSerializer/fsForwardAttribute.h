#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSFORWARDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D80D870)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsForwardAttribute_TypeDefinitionIndex = 30465;

	class fsForwardAttribute : public ::System::Attribute
	{
	public:
		::System::String* MemberName; // 0x10

		::System::Void _ctor(::System::String* memberName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSFORWARDATTRIBUTE__CTOR_OFFSET))(this, memberName);
		}
	};
}
