#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_HOYOUI_SERIALIZABLEDICTIONARYBASE_STORAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5024A0)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int SerializableDictionaryBase_Storage_TypeDefinitionIndex = 35498;

	class SerializableDictionaryBase_Storage : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_SERIALIZABLEDICTIONARYBASE_STORAGE__CTOR_OFFSET))(this);
		}
	};
}
