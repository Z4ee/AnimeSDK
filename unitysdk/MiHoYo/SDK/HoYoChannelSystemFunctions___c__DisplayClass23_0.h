#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowErrorDialogResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B62A130)
#define MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS23_0__ONSHOWERRORDIALOGCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1B62A140)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelSystemFunctions___c__DisplayClass23_0_TypeDefinitionIndex = 36945;

	class HoYoChannelSystemFunctions___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogResult*>* callback; // 0x10
		::System::String* jsonResponse; // 0x18
		::System::Int32 resultCode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnShowErrorDialogCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS23_0__ONSHOWERRORDIALOGCALLBACK_B__0_OFFSET))(this);
		}
	};
}
