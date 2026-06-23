#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B53DAE0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BiliBiliManager___c__DisplayClass27_0_TypeDefinitionIndex = 21072;

	class BiliBiliManager___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}
	};
}
