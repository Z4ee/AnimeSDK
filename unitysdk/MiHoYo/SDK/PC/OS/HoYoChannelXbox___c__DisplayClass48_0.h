#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelEntitlementsResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelXbox; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS48_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C96C0C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS48_0__ENSURECOLLECTIONSID_B__0_OFFSET UNITYSDK_OFFSET(0x1C96C0D0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelXbox___c__DisplayClass48_0_TypeDefinitionIndex = 20399;

	class HoYoChannelXbox___c__DisplayClass48_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::MiHoYo::SDK::PC::OS::HoYoChannelXbox* __4__this; // 0x18
		::System::String* token; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS48_0__CTOR_OFFSET))(this);
		}

		::System::Void _EnsureCollectionsId_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS48_0__ENSURECOLLECTIONSID_B__0_OFFSET))(this, result);
		}
	};
}
