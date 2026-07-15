#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_ALLEYCONSTVALUE_INIT_OFFSET UNITYSDK_OFFSET(0x17EC9FC0)
#define RPG_CLIENT_ALLEYCONSTVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x17ECA7F0)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyConstValue_TypeDefinitionIndex = 59499;

	class AlleyConstValue : public ::System::Object
	{
	public:
		::System::String* StampItemIconPath; // 0x10
		::System::String* FundItemIconPath; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* AlleyPackTutorialOrderIDs; // 0x20
		::System::UInt32 TotalOrderNum; // 0x28
		::System::UInt32 TutorialOrderID; // 0x2C
		::System::UInt32 RenownUnlockMission; // 0x30
		::System::UInt32 RepeatUnlockMissionID; // 0x34
		::System::UInt32 AlleySpecialOrderStartEventID; // 0x38
		::System::UInt32 CurrencyConfigID; // 0x3C
		::System::UInt32 StampItemID; // 0x40
		::System::UInt32 AlleyOrderBasicProfitRatio; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYCONSTVALUE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYCONSTVALUE_INIT_OFFSET))(this);
		}
	};
}
