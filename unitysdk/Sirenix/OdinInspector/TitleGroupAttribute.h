#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/PropertyGroupAttribute.h"
#include "unitysdk/Sirenix/OdinInspector/TitleAlignments.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_TITLEGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0x1E32B210)
#define SIRENIX_ODININSPECTOR_TITLEGROUPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E32B150)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int TitleGroupAttribute_TypeDefinitionIndex = 7370;

	class TitleGroupAttribute : public ::Sirenix::OdinInspector::PropertyGroupAttribute
	{
	public:
		::System::String* Subtitle; // 0x30
		::System::Boolean Indent; // 0x38
		::System::Boolean HorizontalLine; // 0x39
		::System::Boolean BoldTitle; // 0x3A
		::Sirenix::OdinInspector::TitleAlignments Alignment; // 0x3C

		::System::Void _ctor(::System::String* title, ::System::String* subtitle, ::Sirenix::OdinInspector::TitleAlignments alignment, ::System::Boolean horizontalLine, ::System::Boolean boldTitle, ::System::Boolean indent, ::System::Single order)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Sirenix::OdinInspector::TitleAlignments, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TITLEGROUPATTRIBUTE__CTOR_OFFSET))(this, title, subtitle, alignment, horizontalLine, boldTitle, indent, order);
		}

		::System::Void CombineValuesWith(::Sirenix::OdinInspector::PropertyGroupAttribute* other)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TITLEGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET))(this, other);
		}
	};
}
