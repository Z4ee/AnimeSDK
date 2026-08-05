#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_ANIMATIONFADEABLECURVEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ED9C410)
#define SIRENIX_ODININSPECTOR_ANIMATIONFADEABLECURVEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED9C3C0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int AnimationFadeableCurveAttribute_TypeDefinitionIndex = 7878;

	class AnimationFadeableCurveAttribute : public ::System::Attribute
	{
	public:
		::System::String* TimeAxisMinValGetter; // 0x10
		::System::String* NeedSplitRegionGetter; // 0x18
		::System::String* ValueAxisMinValGetter; // 0x20
		::System::String* TimeAxisCurTimeAtGetter; // 0x28
		::System::String* ValueAxisMaxValGetter; // 0x30
		::System::String* TimeAxisMaxValGetter; // 0x38
		::UnityEngine::Color LineColor; // 0x40
		::System::Single ValueAxisMinVal; // 0x50
		::System::Boolean Is01Curve; // 0x54
		::System::Boolean ValueAxisIsInf; // 0x55
		::System::Boolean TimeAxisIsInf; // 0x56
		::System::Single TimeAxisMaxVal; // 0x58
		::System::Single ValueAxisMaxVal; // 0x5C
		::System::Single TimeAxisMinVal; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ANIMATIONFADEABLECURVEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Single r, ::System::Single g, ::System::Single b, ::System::Single a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ANIMATIONFADEABLECURVEATTRIBUTE__CTOR_1_OFFSET))(this, r, g, b, a);
		}
	};
}
