#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoPassScene; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_ABTESTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x181D6320)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AbTestConfig_TypeDefinitionIndex = 7844;

	class AbTestConfig : public ::System::Object
	{
	public:
		::System::String* app_id; // 0x10
		::System::String* app_key; // 0x18
		::MiHoYo::SDK::HoYoPassScene* hoyopass_scene; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* enable_envs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ABTESTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
