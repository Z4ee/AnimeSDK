#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RewardGroupDisplayData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_REWARDGROUPDISPLAYDATACOLLECTION_CREATEFROMITEMGIFTPACK_OFFSET UNITYSDK_OFFSET(0x17988320)
#define RPG_CLIENT_REWARDGROUPDISPLAYDATACOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17988DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int RewardGroupDisplayDataCollection_TypeDefinitionIndex = 65778;

	class RewardGroupDisplayDataCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RewardGroupDisplayData*>* RewardGroups; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDGROUPDISPLAYDATACOLLECTION__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RewardGroupDisplayDataCollection* CreateFromItemGiftPack(::System::UInt32 a1)
		{
			return ((::RPG::Client::RewardGroupDisplayDataCollection*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDGROUPDISPLAYDATACOLLECTION_CREATEFROMITEMGIFTPACK_OFFSET))(a1);
		}
	};
}
