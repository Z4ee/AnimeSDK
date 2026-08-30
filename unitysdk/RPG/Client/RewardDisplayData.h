#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_REWARDDISPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xDE729E0)
#define RPG_CLIENT_REWARDDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDE72A70)

namespace RPG::Client
{
	inline static constexpr unsigned int RewardDisplayData_TypeDefinitionIndex = 65776;

	class RewardDisplayData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* Rewards; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* ExtraRewards; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RewardDisplayData* Create()
		{
			return ((::RPG::Client::RewardDisplayData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDDISPLAYDATA_CREATE_OFFSET))();
		}
	};
}
