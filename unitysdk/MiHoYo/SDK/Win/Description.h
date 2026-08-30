#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { struct Enum; }

#define MIHOYO_SDK_WIN_DESCRIPTION_GETFROM_OFFSET UNITYSDK_OFFSET(0x15D31140)
#define MIHOYO_SDK_WIN_DESCRIPTION_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x15D31110)
#define MIHOYO_SDK_WIN_DESCRIPTION_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x15D31120)
#define MIHOYO_SDK_WIN_DESCRIPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x15D31130)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int Description_TypeDefinitionIndex = 9349;

	class Description : public ::System::Attribute
	{
	public:
		::System::String* _Text_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DESCRIPTION__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DESCRIPTION_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_Text(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DESCRIPTION_SET_TEXT_OFFSET))(this, a1);
		}

		static ::System::String* GetFrom(::System::Enum* a1)
		{
			return ((::System::String*(*)(::System::Enum*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DESCRIPTION_GETFROM_OFFSET))(a1);
		}
	};
}
