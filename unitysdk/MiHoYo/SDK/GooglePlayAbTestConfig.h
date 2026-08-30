#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_GOOGLEPLAYABTESTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE74A70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int GooglePlayAbTestConfig_TypeDefinitionIndex = 7857;

	class GooglePlayAbTestConfig : public ::System::Object
	{
	public:
		::System::String* app_id; // 0x10
		::System::String* app_key; // 0x18
		::System::String* scene_id; // 0x20
		::System::String* experiment_id; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* enable_envs; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GOOGLEPLAYABTESTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
