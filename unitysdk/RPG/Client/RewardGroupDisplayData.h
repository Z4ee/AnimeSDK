#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RewardDisplayData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_REWARDGROUPDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDE735E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RewardGroupDisplayData_TypeDefinitionIndex = 65777;

	class RewardGroupDisplayData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RewardDisplayData*>* RewardID2RewardDisplay; // 0x10
		::RPG::Client::TextID GroupDesc; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDGROUPDISPLAYDATA__CTOR_OFFSET))(this);
		}
	};
}
