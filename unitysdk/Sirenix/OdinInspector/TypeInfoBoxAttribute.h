#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_TYPEINFOBOXATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C022630)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int TypeInfoBoxAttribute_TypeDefinitionIndex = 7246;

	class TypeInfoBoxAttribute : public ::System::Attribute
	{
	public:
		::System::String* Message; // 0x10

		::System::Void _ctor(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TYPEINFOBOXATTRIBUTE__CTOR_OFFSET))(this, message);
		}
	};
}
