#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A360FA0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS28_0__INIT_B__0_OFFSET UNITYSDK_OFFSET(0x1A360FB0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int MiHoYoSDKDll___c__DisplayClass28_0_TypeDefinitionIndex = 20012;

	class MiHoYoSDKDll___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _Init_b__0(::System::String* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS28_0__INIT_B__0_OFFSET))(this, response);
		}
	};
}
