#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PERFORMANCEMETRICSUTILS_GETMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1B5CB160)
#define MIHOYO_SDK_PERFORMANCEMETRICSUTILS_GETTHREADCOUNT_OFFSET UNITYSDK_OFFSET(0x1B5CB0F0)
#define MIHOYO_SDK_PERFORMANCEMETRICSUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B5CB1E0)
#define MIHOYO_SDK_PERFORMANCEMETRICSUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5CB1D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PerformanceMetricsUtils_TypeDefinitionIndex = 19749;

	class PerformanceMetricsUtils : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_processId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PerformanceMetricsUtils_TypeDefinitionIndex)->GetStaticField(0x45C0);
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
