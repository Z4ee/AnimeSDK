#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console::OS { class PayManagerCX; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x164057B0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS16_0__GETUSERCOLLECTIONSID_B__0_OFFSET UNITYSDK_OFFSET(0x164079A0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS16_0__GETUSERCOLLECTIONSID_B__1_OFFSET UNITYSDK_OFFSET(0x16407D60)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int PayManagerCX___c__DisplayClass16_0_TypeDefinitionIndex = 8770;

	class PayManagerCX___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::OS::PayManagerCX* __4__this; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18
		::System::Action* __9__1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetUserCollectionsId_b__0(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS16_0__GETUSERCOLLECTIONSID_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _GetUserCollectionsId_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS16_0__GETUSERCOLLECTIONSID_B__1_OFFSET))(this);
		}
	};
}
