#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_HOYOUI_SERIALIZABLEDICTIONARYBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xA179650)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int SerializableDictionaryBase_TypeDefinitionIndex = 44090;

	class SerializableDictionaryBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_SERIALIZABLEDICTIONARYBASE__CTOR_OFFSET))(this);
		}
	};
}
