#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_NAPGRADIENTDRAWERSETTINGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0AB4B0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int NapGradientDrawerSettingAttribute_TypeDefinitionIndex = 8266;

	class NapGradientDrawerSettingAttribute : public ::System::Attribute
	{
	public:
		::System::String* NeedSplitRegionGetter; // 0x10
		::System::String* AftText; // 0x18
		::System::String* TimeAxisMaxValGetter; // 0x20
		::System::String* BefText; // 0x28
		::System::String* TimeAxisCurTimeAtGetter; // 0x30
		::System::String* TimeAxisMinValGetter; // 0x38
		::System::String* InnerText; // 0x40
		::System::Single TimeAxisMinVal; // 0x48
		::System::Single TimeAxisMaxVal; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_NAPGRADIENTDRAWERSETTINGATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
