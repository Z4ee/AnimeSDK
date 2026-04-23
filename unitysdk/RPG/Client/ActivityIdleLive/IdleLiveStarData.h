#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveStarData_StarInfo; }
namespace RPG::Client::ActivityIdleLive { class StoryLine; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA_GETCUREXPPROGRESS_OFFSET UNITYSDK_OFFSET(0x9B753A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA_GETCURRANKTITLE_OFFSET UNITYSDK_OFFSET(0x9B752D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA_GETLIVEROOMEXPNEEDED_OFFSET UNITYSDK_OFFSET(0x9B75030)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA_GETSTARNUM_OFFSET UNITYSDK_OFFSET(0x9B5B4E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA_ISMAXSTAR_OFFSET UNITYSDK_OFFSET(0x9B75130)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B60870)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA__GETCURRANKTITLE_B__7_0_OFFSET UNITYSDK_OFFSET(0x9B754C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA__GETSTARNEEDEDCHAPTER_OFFSET UNITYSDK_OFFSET(0x9B751D0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveStarData_TypeDefinitionIndex = 69391;

	class IdleLiveStarData : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::StoryLine* _StoryLineRef; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveStarData_StarInfo*>* _StarInfos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 GetLiveRoomExpNeeded(::System::UInt32 star)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA_GETLIVEROOMEXPNEEDED_OFFSET))(this, star);
		}

		::System::Boolean IsMaxStar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA_ISMAXSTAR_OFFSET))(this);
		}

		::System::UInt32 _GetStarNeededChapter(::System::UInt32 star)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA__GETSTARNEEDEDCHAPTER_OFFSET))(this, star);
		}

		::RPG::Client::TextID GetCurRankTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA_GETCURRANKTITLE_OFFSET))(this);
		}

		::System::Single GetCurExpProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA_GETCUREXPPROGRESS_OFFSET))(this);
		}

		::System::UInt32 GetStarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA_GETSTARNUM_OFFSET))(this);
		}

		::System::Boolean _GetCurRankTitle_b__7_0(::RPG::Client::ActivityIdleLive::IdleLiveStarData_StarInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveStarData_StarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA__GETCURRANKTITLE_B__7_0_OFFSET))(this, x);
		}
	};
}
