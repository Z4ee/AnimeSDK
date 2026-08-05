#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/H5logGeneralReport_LogLevel.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class H5logGeneralReport; }
namespace System { class String; }

#define MIHOYO_SDK_H5LOGGENERALREPORT___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFFE970)
#define MIHOYO_SDK_H5LOGGENERALREPORT___C__DISPLAYCLASS4_0__LOGREPORTASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1DFFE980)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int H5logGeneralReport___c__DisplayClass4_0_TypeDefinitionIndex = 37523;

	class H5logGeneralReport___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::String* moduleType; // 0x10
		::MiHoYo::SDK::H5logGeneralReport* __4__this; // 0x18
		::System::String* eventName; // 0x20
		::System::String* message; // 0x28
		::MiHoYo::SDK::H5logGeneralReport_LogLevel logLevel; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_H5LOGGENERALREPORT___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _LogReportAsync_b__0(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_H5LOGGENERALREPORT___C__DISPLAYCLASS4_0__LOGREPORTASYNC_B__0_OFFSET))(this, _);
		}
	};
}
