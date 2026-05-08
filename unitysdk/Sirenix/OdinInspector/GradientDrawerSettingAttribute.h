#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_GRADIENTDRAWERSETTINGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0665F0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int GradientDrawerSettingAttribute_TypeDefinitionIndex = 7903;

	class GradientDrawerSettingAttribute : public ::System::Attribute
	{
	public:
		::System::String* TimeAxisMaxValGetter; // 0x10
		::System::String* AftText; // 0x18
		::System::String* TimeAxisMinValGetter; // 0x20
		::System::String* TimeAxisCurTimeAtGetter; // 0x28
		::System::String* BefText; // 0x30
		::System::String* InnerText; // 0x38
		::System::Single TimeAxisMinVal; // 0x40
		::System::Single TimeAxisMaxVal; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_GRADIENTDRAWERSETTINGATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
