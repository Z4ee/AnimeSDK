#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Recommend { class RelicRecommendBigData; }

#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS76_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9906550)
#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS76_0__REQUESTPREAVATARRELICDATAREFRESH_B__0_OFFSET UNITYSDK_OFFSET(0x9911510)
#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS76_0__REQUESTPREAVATARRELICDATAREFRESH_B__1_OFFSET UNITYSDK_OFFSET(0x9911530)
#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS76_0__REQUESTPREAVATARRELICDATAREFRESH_B__2_OFFSET UNITYSDK_OFFSET(0x9911550)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookModule___c__DisplayClass76_0_TypeDefinitionIndex = 53303;

	class HandbookModule___c__DisplayClass76_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* getRecommendDataPromise; // 0x10
		::RPG::Client::Promises::Promise* promise; // 0x18
		::RPG::Client::Promises::Promise* getRecommendBigDataPromise; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS76_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestPreAvatarRelicDataRefresh_b__0(::RPG::Client::RelicRecommendData* relicRecommendData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS76_0__REQUESTPREAVATARRELICDATAREFRESH_B__0_OFFSET))(this, relicRecommendData);
		}

		::System::Void _RequestPreAvatarRelicDataRefresh_b__1(::RPG::Client::Recommend::RelicRecommendBigData* relicRecommendBigData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Recommend::RelicRecommendBigData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS76_0__REQUESTPREAVATARRELICDATAREFRESH_B__1_OFFSET))(this, relicRecommendBigData);
		}

		::System::Void _RequestPreAvatarRelicDataRefresh_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS76_0__REQUESTPREAVATARRELICDATAREFRESH_B__2_OFFSET))(this);
		}
	};
}
