#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class LoadingTips; }
namespace System { class String; }

#define MIHOYO_SDK_LOADINGTIPS___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B995A80)
#define MIHOYO_SDK_LOADINGTIPS___C__DISPLAYCLASS10_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1B995BF0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int LoadingTips___c__DisplayClass10_0_TypeDefinitionIndex = 8203;

	class LoadingTips___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::String* tips; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGTIPS___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::LoadingTips* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::LoadingTips*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGTIPS___C__DISPLAYCLASS10_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
