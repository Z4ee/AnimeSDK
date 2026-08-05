#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS48_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C91FF60)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS48_0__RISKCHECK_B__0_OFFSET UNITYSDK_OFFSET(0x1C91FF70)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS48_0__RISKCHECK_B__1_OFFSET UNITYSDK_OFFSET(0x1C920040)

namespace MiHoYo::SDK::Windows::OS::Channel
{
	inline static constexpr unsigned int BindManager___c__DisplayClass48_0_TypeDefinitionIndex = 20475;

	class BindManager___c__DisplayClass48_0 : public ::System::Object
	{
	public:
		::System::String* sessionId; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS48_0__CTOR_OFFSET))(this);
		}

		::System::Void _RiskCheck_b__0(::System::String* aigisData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS48_0__RISKCHECK_B__0_OFFSET))(this, aigisData);
		}

		::System::Void _RiskCheck_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS48_0__RISKCHECK_B__1_OFFSET))(this);
		}
	};
}
