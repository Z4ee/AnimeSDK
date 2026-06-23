#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_GRADIENTDRAWERSETTINGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2ED210)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int GradientDrawerSettingAttribute_TypeDefinitionIndex = 8125;

	class GradientDrawerSettingAttribute : public ::System::Attribute
	{
	public:
		::System::String* InnerText; // 0x10
		::System::String* AftText; // 0x18
		::System::String* TimeAxisCurTimeAtGetter; // 0x20
		::System::String* TimeAxisMinValGetter; // 0x28
		::System::String* TimeAxisMaxValGetter; // 0x30
		::System::String* BefText; // 0x38
		::System::Single TimeAxisMaxVal; // 0x40
		::System::Single TimeAxisMinVal; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_GRADIENTDRAWERSETTINGATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
