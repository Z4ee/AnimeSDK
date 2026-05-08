#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/TitleAlignments.h"
#include "unitysdk/Sirenix/OdinInspector/TitleSizes.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_TITLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C021DC0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int TitleAttribute_TypeDefinitionIndex = 7238;

	class TitleAttribute : public ::System::Attribute
	{
	public:
		::System::String* Subtitle; // 0x10
		::System::String* Title; // 0x18
		::Sirenix::OdinInspector::TitleSizes TitleSize; // 0x20
		::Sirenix::OdinInspector::TitleAlignments TitleAlignment; // 0x24
		::System::Boolean HorizontalLine; // 0x28
		::System::Boolean Bold; // 0x29

		::System::Void _ctor(::System::String* title, ::System::String* subtitle, ::Sirenix::OdinInspector::TitleAlignments titleAlignment, ::Sirenix::OdinInspector::TitleSizes titleSize, ::System::Boolean horizontalLine, ::System::Boolean bold)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Sirenix::OdinInspector::TitleAlignments, ::Sirenix::OdinInspector::TitleSizes, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TITLEATTRIBUTE__CTOR_OFFSET))(this, title, subtitle, titleAlignment, titleSize, horizontalLine, bold);
		}
	};
}
