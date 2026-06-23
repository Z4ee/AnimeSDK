#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

namespace System { class String; }

#define COLORWHEELGROUPATTRIBUTE_CONVERTTOFORMATTEDSTRING_OFFSET UNITYSDK_OFFSET(0x1BBFEE90)
#define COLORWHEELGROUPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBFF200)

inline static constexpr unsigned int ColorWheelGroupAttribute_TypeDefinitionIndex = 26484;

class ColorWheelGroupAttribute : public ::UnityEngine::PropertyAttribute
{
public:
	::System::String* leftLabel; // 0x10
	::System::String* rightFieldName; // 0x18
	::System::String* leftFieldName; // 0x20
	::System::String* middleLabel; // 0x28
	::System::String* rightLabel; // 0x30
	::System::String* middleFieldName; // 0x38
	::System::Boolean isShadowMiddletonHighlight; // 0x40

	::System::Void _ctor(::System::String* leftFieldName, ::System::String* middleFieldName, ::System::String* rightFieldName, ::System::Boolean isShadowMiddletonHighlight)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + COLORWHEELGROUPATTRIBUTE__CTOR_OFFSET))(this, leftFieldName, middleFieldName, rightFieldName, isShadowMiddletonHighlight);
	}

	static ::System::String* ConvertToFormattedString(::System::String* input)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + COLORWHEELGROUPATTRIBUTE_CONVERTTOFORMATTEDSTRING_OFFSET))(input);
	}
};
