#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

namespace System { class String; }

#define COLORCURVEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C3FB3F0)
#define COLORCURVEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3FB3B0)

inline static constexpr unsigned int ColorCurveAttribute_TypeDefinitionIndex = 27831;

class ColorCurveAttribute : public ::UnityEngine::PropertyAttribute
{
public:
	::System::String* satVsSat; // 0x10
	::System::String* redPropertyName; // 0x18
	::System::String* lumVsSat; // 0x20
	::System::String* hueVsHue; // 0x28
	::System::String* bluePropertyName; // 0x30
	::System::String* greenPropertyName; // 0x38
	::System::String* masterPropertyName; // 0x40
	::System::String* hueVsSat; // 0x48

	::System::Void _ctor(::System::String* masterPropertyName, ::System::String* redPropertyName, ::System::String* greenPropertyName, ::System::String* bluePropertyName, ::System::String* hueVsHue, ::System::String* hueVsSat, ::System::String* satVsSat, ::System::String* lumVsSat)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + COLORCURVEATTRIBUTE__CTOR_OFFSET))(this, masterPropertyName, redPropertyName, greenPropertyName, bluePropertyName, hueVsHue, hueVsSat, satVsSat, lumVsSat);
	}

	::System::Void _ctor_1(::System::String* masterPropertyName, ::System::String* redPropertyName, ::System::String* greenPropertyName, ::System::String* bluePropertyName)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + COLORCURVEATTRIBUTE__CTOR_1_OFFSET))(this, masterPropertyName, redPropertyName, greenPropertyName, bluePropertyName);
	}
};
