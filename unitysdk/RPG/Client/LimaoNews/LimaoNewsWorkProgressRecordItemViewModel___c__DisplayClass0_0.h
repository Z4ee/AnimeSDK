#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LimaoNews { class LimaoNewsEntityTrackService; }
namespace RPG::Client::LimaoNews { class LimaoNewsWindowService; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkProgressRecordItemViewModel; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL___C__DISPLAYCLASS0_0__CREATE_B__0_OFFSET UNITYSDK_OFFSET(0x1C4BC6D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4BC520)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsWorkProgressRecordItemViewModel___c__DisplayClass0_0_TypeDefinitionIndex = 79125;

	class LimaoNewsWorkProgressRecordItemViewModel___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsWindowService* windowService; // 0x10
		::RPG::Client::LimaoNews::LimaoNewsEntityTrackService* entityTrackService; // 0x18
		::RPG::Client::LimaoNews::LimaoNewsWorkProgressRecordItemViewModel* viewModel; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _Create_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL___C__DISPLAYCLASS0_0__CREATE_B__0_OFFSET))(this);
		}
	};
}
