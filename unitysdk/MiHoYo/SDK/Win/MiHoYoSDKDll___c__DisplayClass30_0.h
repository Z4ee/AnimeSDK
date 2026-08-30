#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18B020B0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS30_0__INIT_B__0_OFFSET UNITYSDK_OFFSET(0x18B0D120)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int MiHoYoSDKDll___c__DisplayClass30_0_TypeDefinitionIndex = 9379;

	class MiHoYoSDKDll___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _Init_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS30_0__INIT_B__0_OFFSET))(this, a1);
		}
	};
}
