#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace RPG::Client::Recommend { class RecommendModule; }

#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19861D80)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE___C__DISPLAYCLASS27_0__REQUESTRELICRECOMMENDDATA_B__0_OFFSET UNITYSDK_OFFSET(0x198644D0)

namespace RPG::Client::Recommend
{
	inline static constexpr unsigned int RecommendModule___c__DisplayClass27_0_TypeDefinitionIndex = 71063;

	class RecommendModule___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::RPG::Client::RelicRecommendData*>* newPromise; // 0x10
		::RPG::Client::Recommend::RecommendModule* __4__this; // 0x18
		::System::UInt32 avatarRealID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestRelicRecommendData_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE___C__DISPLAYCLASS27_0__REQUESTRELICRECOMMENDDATA_B__0_OFFSET))(this);
		}
	};
}
