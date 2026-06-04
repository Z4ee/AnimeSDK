#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18479590)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS27_0__REQUESTMAILCODE_B__0_OFFSET UNITYSDK_OFFSET(0x184835F0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindManager___c__DisplayClass27_0_TypeDefinitionIndex = 9045;

	class BindManager___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::String* url; // 0x10
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x18
		::System::String* mail; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestMailCode_b__0(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS27_0__REQUESTMAILCODE_B__0_OFFSET))(this, a1, a2);
		}
	};
}
