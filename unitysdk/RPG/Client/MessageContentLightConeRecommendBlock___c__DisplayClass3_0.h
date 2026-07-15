#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MessageContentLightConeRecommendBlock; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA1ECF0)
#define RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK___C__DISPLAYCLASS3_0__REQUESTLIGHTCONERECOMMENDDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1AA1EF10)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentLightConeRecommendBlock___c__DisplayClass3_0_TypeDefinitionIndex = 60468;

	class MessageContentLightConeRecommendBlock___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::MessageContentLightConeRecommendBlock* __4__this; // 0x10
		::System::Action_1<::System::UInt32>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestLightConeRecommendData_b__0(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK___C__DISPLAYCLASS3_0__REQUESTLIGHTCONERECOMMENDDATA_B__0_OFFSET))(this, a1);
		}
	};
}
