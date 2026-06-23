#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F8630)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS30_0__INIT_B__0_OFFSET UNITYSDK_OFFSET(0x1B9F8640)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int MiHoYoSDKDll___c__DisplayClass30_0_TypeDefinitionIndex = 21183;

	class MiHoYoSDKDll___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _Init_b__0(::System::String* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS30_0__INIT_B__0_OFFSET))(this, response);
		}
	};
}
