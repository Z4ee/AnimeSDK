#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_REPORTENUMDEFINE__CTOR_OFFSET UNITYSDK_OFFSET(0xB28F620)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ReportEnumDefine_TypeDefinitionIndex = 46943;

	class ReportEnumDefine : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTENUMDEFINE__CTOR_OFFSET))(this);
		}
	};
}
