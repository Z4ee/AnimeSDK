#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SDKPlatform; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_SDKPLATFORM___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB14D8D0)
#define RPG_CLIENT_SDKPLATFORM___C__DISPLAYCLASS5_0__TRYGETITEMINFO_B__0_OFFSET UNITYSDK_OFFSET(0xB14DE00)

namespace RPG::Client
{
	inline static constexpr unsigned int SDKPlatform___c__DisplayClass5_0_TypeDefinitionIndex = 55338;

	class SDKPlatform___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* callback; // 0x10
		::RPG::Client::SDKPlatform* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKPLATFORM___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryGetItemInfo_b__0(::System::String* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKPLATFORM___C__DISPLAYCLASS5_0__TRYGETITEMINFO_B__0_OFFSET))(this, response);
		}
	};
}
