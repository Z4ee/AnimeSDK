#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_WATERMARK_WATERMARKCODEDEFINE__CTOR_OFFSET UNITYSDK_OFFSET(0x176899F0)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int WatermarkCodeDefine_TypeDefinitionIndex = 7622;

	class WatermarkCodeDefine : public ::System::Object
	{
	public:
		// static const ::System::Int32 SUCCESS = 0x0; // 0x0
		// static const ::System::Int32 FAILED = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 DISABLED = 0xFFFFFFFE; // 0x0
		// static const ::System::Int32 PLAT_NOT_SUPPORT = 0xFFFFFFFD; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKCODEDEFINE__CTOR_OFFSET))(this);
		}
	};
}
