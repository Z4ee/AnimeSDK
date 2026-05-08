#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/Extension/SuffixButtonType.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_EXTENSION_SUFFIXBUTTONNAPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18040330)

namespace Sirenix::OdinInspector::Extension
{
	inline static constexpr unsigned int SuffixButtonNapAttribute_TypeDefinitionIndex = 7984;

	class SuffixButtonNapAttribute : public ::System::Attribute
	{
	public:
		::System::String* Icon; // 0x10
		::Sirenix::OdinInspector::Extension::SuffixButtonType ButtonType; // 0x18

		::System::Void _ctor(::Sirenix::OdinInspector::Extension::SuffixButtonType type, ::System::String* icon)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::Extension::SuffixButtonType, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_EXTENSION_SUFFIXBUTTONNAPATTRIBUTE__CTOR_OFFSET))(this, type, icon);
		}
	};
}
