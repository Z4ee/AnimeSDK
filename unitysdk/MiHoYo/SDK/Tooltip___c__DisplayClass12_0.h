#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class Tooltip; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define MIHOYO_SDK_TOOLTIP___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A188400)
#define MIHOYO_SDK_TOOLTIP___C__DISPLAYCLASS12_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1A188410)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Tooltip___c__DisplayClass12_0_TypeDefinitionIndex = 18884;

	class Tooltip___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::String* content; // 0x10
		::UnityEngine::RectTransform* ownerTransform; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOOLTIP___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Tooltip* element)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Tooltip*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOOLTIP___C__DISPLAYCLASS12_0__SHOW_B__0_OFFSET))(this, element);
		}
	};
}
