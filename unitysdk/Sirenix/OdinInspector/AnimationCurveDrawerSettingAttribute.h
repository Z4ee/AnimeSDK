#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_ANIMATIONCURVEDRAWERSETTINGATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F69A7A0)
#define SIRENIX_ODININSPECTOR_ANIMATIONCURVEDRAWERSETTINGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F69A750)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int AnimationCurveDrawerSettingAttribute_TypeDefinitionIndex = 8437;

	class AnimationCurveDrawerSettingAttribute : public ::System::Attribute
	{
	public:
		::System::String* TimeAxisMinValGetter; // 0x10
		::System::String* TimeAxisMaxValGetter; // 0x18
		::System::String* ValueAxisMaxValGetter; // 0x20
		::System::String* ValueAxisMinValGetter; // 0x28
		::System::Single TimeAxisMinVal; // 0x30
		::System::Single ValueAxisMinVal; // 0x34
		::UnityEngine::Color LineColor; // 0x38
		::System::Boolean ValueAxisIsInf; // 0x48
		::System::Boolean TimeAxisIsInf; // 0x49
		::System::Single TimeAxisMaxVal; // 0x4C
		::System::Single ValueAxisMaxVal; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ANIMATIONCURVEDRAWERSETTINGATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Single r, ::System::Single g, ::System::Single b, ::System::Single a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ANIMATIONCURVEDRAWERSETTINGATTRIBUTE__CTOR_1_OFFSET))(this, r, g, b, a);
		}
	};
}
