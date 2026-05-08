#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class GooglePlayAbTestConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_GOOGLEPLAYABTESTCONFIGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3FC910)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int GooglePlayAbTestConfigs_TypeDefinitionIndex = 18768;

	class GooglePlayAbTestConfigs : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MiHoYo::SDK::GooglePlayAbTestConfig*>* abtest; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GOOGLEPLAYABTESTCONFIGS__CTOR_OFFSET))(this);
		}
	};
}
