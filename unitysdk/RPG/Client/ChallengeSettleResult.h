#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGESETTLERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x14B270)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeSettleResult_TypeDefinitionIndex = 63166;

	struct alignas(8) ChallengeSettleResult
	{
		::System::UInt32 ChallengeID; // 0x10
		::System::Boolean IsWin; // 0x14
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* RewardItemList; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLERESULT__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
