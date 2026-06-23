#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProtoScript/ModTimeType.h"
#include "unitysdk/ProtoScript/TimePeriodType.h"
#include "unitysdk/Struct_2_086C0AADB113D5D4.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::GalGame { class DynamicObjectModifyActiveCfg; }
namespace MoleMole::GalGame { class LookIKCfg; }
namespace MoleMole::GalGame { class TagAniPair; }
namespace MoleMole::GalGame { class TagBoolPair; }
namespace MoleMole::GalGame { class TagGroupAniPair; }
namespace MoleMole::GalGame { class TagGroupBoolPair; }
namespace MoleMole::GalGame { class TimelinePair; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_CHATPLUSINITCFG_CREATTIMECFG_OFFSET UNITYSDK_OFFSET(0x158238A0)
#define MOLEMOLE_GALGAME_CHATPLUSINITCFG__CTOR_OFFSET UNITYSDK_OFFSET(0x15823920)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ChatPlusInitCfg_TypeDefinitionIndex = 73663;

	class ChatPlusInitCfg : public ::System::Object
	{
	public:
		::System::Boolean IsShowBlackMask; // 0x10
		::System::String* BlackMaskTextKey; // 0x18
		::System::Boolean IsBegin; // 0x20
		::System::Boolean IsEnd; // 0x21
		::System::Boolean IsTransition; // 0x22
		::System::Int32 TransitionID; // 0x24
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TagBoolPair*>* VisibleParams; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TagAniPair*>* TagAniParams; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::GalGame::LookIKCfg*>* LookIKList; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupBoolPair*>* GroupParams; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupAniPair*>* GroupAniParams; // 0x48
		::System::Collections::Generic::List_1<::MoleMole::GalGame::DynamicObjectModifyActiveCfg*>* DynamicObjectsSubID; // 0x50
		::System::Boolean IsHideLocalAvatar; // 0x58
		::System::Boolean IsDestroyTimeLine; // 0x59
		::System::Boolean DestoryAllTimeline; // 0x5A
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TimelinePair*>* DestoryTimelineParams; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TimelinePair*>* TimelineParams; // 0x68
		::System::Boolean ModifyTime; // 0x70
		::ProtoScript::ModTimeType ModType; // 0x74
		::System::Int32 Minute; // 0x78
		::System::Int32 TimePeriodNum; // 0x7C
		::System::Int32 DayOfWeek; // 0x80
		::ProtoScript::TimePeriodType TimePeriod; // 0x84
		::System::Boolean IgnoreMidnightLimit; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATPLUSINITCFG__CTOR_OFFSET))(this);
		}

		::Struct_2_086C0AADB113D5D4 CreatTimeCfg()
		{
			return ((::Struct_2_086C0AADB113D5D4(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATPLUSINITCFG_CREATTIMECFG_OFFSET))(this);
		}
	};
}
