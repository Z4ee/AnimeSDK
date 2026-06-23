#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_LABELTEXTATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3296E0)
#define SIRENIX_ODININSPECTOR_LABELTEXTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3296D0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int LabelTextAttribute_TypeDefinitionIndex = 7323;

	class LabelTextAttribute : public ::System::Attribute
	{
	public:
		::System::String* Text; // 0x10
		::System::Boolean NicifyText; // 0x18

		::System::Void _ctor(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LABELTEXTATTRIBUTE__CTOR_OFFSET))(this, text);
		}

		::System::Void _ctor_1(::System::String* text, ::System::Boolean nicifyText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LABELTEXTATTRIBUTE__CTOR_1_OFFSET))(this, text, nicifyText);
		}
	};
}
