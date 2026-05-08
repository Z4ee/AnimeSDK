#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/ShowIfAttribute.h"
#include "unitysdk/RootMotion/ShowIfMode.h"

namespace System { class Object; }
namespace System { class String; }

#define ROOTMOTION_SHOWLARGEHEADERIF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C11D290)
#define ROOTMOTION_SHOWLARGEHEADERIF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C11D200)

namespace RootMotion
{
	inline static constexpr unsigned int ShowLargeHeaderIf_TypeDefinitionIndex = 36539;

	class ShowLargeHeaderIf : public ::RootMotion::ShowIfAttribute
	{
	public:
		::System::String* name; // 0x30
		::System::String* color; // 0x38

		::System::Void _ctor(::System::String* name, ::System::String* propertyName, ::System::Object* propertyValue, ::System::Object* otherPropertyValue, ::System::Boolean indent, ::RootMotion::ShowIfMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Object*, ::System::Object*, ::System::Boolean, ::RootMotion::ShowIfMode))((::PBYTE)hIl2Cpp + ROOTMOTION_SHOWLARGEHEADERIF__CTOR_OFFSET))(this, name, propertyName, propertyValue, otherPropertyValue, indent, mode);
		}

		::System::Void _ctor_1(::System::String* name, ::System::String* color, ::System::String* propertyName, ::System::Object* propertyValue, ::System::Object* otherPropertyValue, ::System::Boolean indent, ::RootMotion::ShowIfMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Object*, ::System::Object*, ::System::Boolean, ::RootMotion::ShowIfMode))((::PBYTE)hIl2Cpp + ROOTMOTION_SHOWLARGEHEADERIF__CTOR_1_OFFSET))(this, name, color, propertyName, propertyValue, otherPropertyValue, indent, mode);
		}
	};
}
