#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_REQUESTMANAGER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D6550)
#define MIHOYO_SDK_REQUESTMANAGER___C__DISPLAYCLASS13_0__LOGINBYACCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0x1C7D6560)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int RequestManager___c__DisplayClass13_0_TypeDefinitionIndex = 20172;

	class RequestManager___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::String* account; // 0x10
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback; // 0x18
		::System::String* password; // 0x20
		::System::String* url; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _LoginByAccount_b__0(::System::Int32 code, ::System::String* mmt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__DISPLAYCLASS13_0__LOGINBYACCOUNT_B__0_OFFSET))(this, code, mmt);
		}
	};
}
