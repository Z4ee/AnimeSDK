#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { struct Enum; }

#define MIHOYO_SDK_DESCRIPTION_GETFROM_OFFSET UNITYSDK_OFFSET(0x84D23E0)
#define MIHOYO_SDK_DESCRIPTION_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x84D23B0)
#define MIHOYO_SDK_DESCRIPTION_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x84D23C0)
#define MIHOYO_SDK_DESCRIPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x84D23D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Description_TypeDefinitionIndex = 37060;

	class Description : public ::System::Attribute
	{
	public:
		::System::String* _Text_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DESCRIPTION__CTOR_OFFSET))(this, text);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DESCRIPTION_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_Text(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DESCRIPTION_SET_TEXT_OFFSET))(this, value);
		}

		static ::System::String* GetFrom(::System::Enum* obj)
		{
			return ((::System::String*(*)(::System::Enum*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DESCRIPTION_GETFROM_OFFSET))(obj);
		}
	};
}
