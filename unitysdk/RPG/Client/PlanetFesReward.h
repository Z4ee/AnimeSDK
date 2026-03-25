#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

class Class_1_13890FD29641C8E9;
namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESREWARD_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9FC7650)
#define RPG_CLIENT_PLANETFESREWARD_CREATE_OFFSET UNITYSDK_OFFSET(0x9FB4FB0)
#define RPG_CLIENT_PLANETFESREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x9FC7640)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesReward_TypeDefinitionIndex = 54219;

	class PlanetFesReward : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* Items; // 0x10
		::System::Numerics::BigInteger Coin; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREWARD__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesReward* Create(::Class_1_13890FD29641C8E9* rwd)
		{
			return ((::RPG::Client::PlanetFesReward*(*)(::Class_1_13890FD29641C8E9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREWARD_CREATE_OFFSET))(rwd);
		}

		static ::RPG::Client::PlanetFesReward* Create_1(::System::UInt32 rewardID)
		{
			return ((::RPG::Client::PlanetFesReward*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREWARD_CREATE_1_OFFSET))(rewardID);
		}
	};
}
