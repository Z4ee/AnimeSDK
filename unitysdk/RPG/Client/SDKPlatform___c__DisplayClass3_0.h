#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PayProductResult.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SDKPlatform; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_SDKPLATFORM___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF586E0)
#define RPG_CLIENT_SDKPLATFORM___C__DISPLAYCLASS3_0__PAYORDER_B__0_OFFSET UNITYSDK_OFFSET(0x1AF59690)

namespace RPG::Client
{
	inline static constexpr unsigned int SDKPlatform___c__DisplayClass3_0_TypeDefinitionIndex = 60108;

	class SDKPlatform___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::PayProductResult>* callback; // 0x10
		::RPG::Client::SDKPlatform* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKPLATFORM___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _PayOrder_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKPLATFORM___C__DISPLAYCLASS3_0__PAYORDER_B__0_OFFSET))(this, a1);
		}
	};
}
