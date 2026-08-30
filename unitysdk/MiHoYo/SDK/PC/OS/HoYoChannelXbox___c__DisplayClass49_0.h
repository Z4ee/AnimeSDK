#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelXbox; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA32130)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS49_0__HANDLECOLLECTIONSIDERROR_B__0_OFFSET UNITYSDK_OFFSET(0x1BA34960)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS49_0__HANDLECOLLECTIONSIDERROR_B__1_OFFSET UNITYSDK_OFFSET(0x1BA34AD0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelXbox___c__DisplayClass49_0_TypeDefinitionIndex = 8594;

	class HoYoChannelXbox___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* __9__1; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18
		::MiHoYo::SDK::PC::OS::HoYoChannelXbox* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
		}

		::System::Void _HandleCollectionsIdError_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS49_0__HANDLECOLLECTIONSIDERROR_B__0_OFFSET))(this);
		}

		::System::Void _HandleCollectionsIdError_b__1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS49_0__HANDLECOLLECTIONSIDERROR_B__1_OFFSET))(this, a1);
		}
	};
}
