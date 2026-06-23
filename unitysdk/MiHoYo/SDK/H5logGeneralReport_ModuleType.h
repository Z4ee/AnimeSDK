#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_H5LOGGENERALREPORT_MODULETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE7CBC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int H5logGeneralReport_ModuleType_TypeDefinitionIndex = 36860;

	class H5logGeneralReport_ModuleType : public ::System::Object
	{
	public:
		// static const ::System::String* VOX; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_H5LOGGENERALREPORT_MODULETYPE__CTOR_OFFSET))(this);
		}
	};
}
