#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Comic/OdinExtension/SuffixButtonType.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define MOLEMOLE_COMIC_ODINEXTENSION_SUFFIXBUTTONNAPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D0E50)

namespace MoleMole::Comic::OdinExtension
{
	inline static constexpr unsigned int SuffixButtonNapAttribute_TypeDefinitionIndex = 32150;

	class SuffixButtonNapAttribute : public ::System::Attribute
	{
	public:
		::System::String* Icon; // 0x10
		::MoleMole::Comic::OdinExtension::SuffixButtonType ButtonType; // 0x18

		::System::Void _ctor(::MoleMole::Comic::OdinExtension::SuffixButtonType type, ::System::String* icon)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Comic::OdinExtension::SuffixButtonType, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_ODINEXTENSION_SUFFIXBUTTONNAPATTRIBUTE__CTOR_OFFSET))(this, type, icon);
		}
	};
}
