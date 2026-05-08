#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_SUFFIXLABELATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C021330)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int SuffixLabelAttribute_TypeDefinitionIndex = 7229;

	class SuffixLabelAttribute : public ::System::Attribute
	{
	public:
		::System::String* Label; // 0x10
		::System::Boolean Overlay; // 0x18

		::System::Void _ctor(::System::String* label, ::System::Boolean overlay)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_SUFFIXLABELATTRIBUTE__CTOR_OFFSET))(this, label, overlay);
		}
	};
}
