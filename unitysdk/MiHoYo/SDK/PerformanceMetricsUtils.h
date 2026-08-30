#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PERFORMANCEMETRICSUTILS_GETMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1BA77CA0)
#define MIHOYO_SDK_PERFORMANCEMETRICSUTILS_GETTHREADCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA77830)
#define MIHOYO_SDK_PERFORMANCEMETRICSUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA78130)
#define MIHOYO_SDK_PERFORMANCEMETRICSUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA78120)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PerformanceMetricsUtils_TypeDefinitionIndex = 7944;

	class PerformanceMetricsUtils : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_processId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PerformanceMetricsUtils_TypeDefinitionIndex)->GetStaticField(0xAE70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PERFORMANCEMETRICSUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PERFORMANCEMETRICSUTILS__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetThreadCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PERFORMANCEMETRICSUTILS_GETTHREADCOUNT_OFFSET))();
		}

		static ::System::Int32 GetMemorySize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PERFORMANCEMETRICSUTILS_GETMEMORYSIZE_OFFSET))();
		}
	};
}
