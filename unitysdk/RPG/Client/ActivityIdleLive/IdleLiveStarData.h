#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveStarData_StarInfo; }
namespace RPG::Client::ActivityIdleLive { class StoryLine; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA_GETCUREXPPROGRESS_OFFSET UNITYSDK_OFFSET(0xC5DB560)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA_GETCURRANKTITLE_OFFSET UNITYSDK_OFFSET(0xC5DB480)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA_GETLIVEROOMEXPNEEDED_OFFSET UNITYSDK_OFFSET(0xC5DB030)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA_GETSTARNUM_OFFSET UNITYSDK_OFFSET(0xC5DB1E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA_ISMAXSTAR_OFFSET UNITYSDK_OFFSET(0xC5DB140)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC5DAD20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA__GETCURRANKTITLE_B__7_0_OFFSET UNITYSDK_OFFSET(0xC5DB880)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA__GETSTARNEEDEDCHAPTER_OFFSET UNITYSDK_OFFSET(0xC5DB370)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveStarData_TypeDefinitionIndex = 75033;

	class IdleLiveStarData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveStarData_StarInfo*>* _StarInfos; // 0x10
		::RPG::Client::ActivityIdleLive::StoryLine* _StoryLineRef; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 GetLiveRoomExpNeeded(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA_GETLIVEROOMEXPNEEDED_OFFSET))(this, a1);
		}

		::System::Boolean IsMaxStar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA_ISMAXSTAR_OFFSET))(this);
		}

		::System::UInt32 _GetStarNeededChapter(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA__GETSTARNEEDEDCHAPTER_OFFSET))(this, a1);
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

		::System::Boolean _GetCurRankTitle_b__7_0(::RPG::Client::ActivityIdleLive::IdleLiveStarData_StarInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveStarData_StarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA__GETCURRANKTITLE_B__7_0_OFFSET))(this, a1);
		}
	};
}
