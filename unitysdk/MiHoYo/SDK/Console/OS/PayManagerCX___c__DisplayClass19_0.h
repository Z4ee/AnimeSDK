#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7CD330)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS19_0__GENERATEXSTSACCESSTOKEN_B__0_OFFSET UNITYSDK_OFFSET(0x1B7CF240)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int PayManagerCX___c__DisplayClass19_0_TypeDefinitionIndex = 9041;

	class PayManagerCX___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::String* xuid; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _GenerateXstsAccessToken_b__0(::System::Int32 a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS19_0__GENERATEXSTSACCESSTOKEN_B__0_OFFSET))(this, a1, a2, a3);
		}
	};
}
