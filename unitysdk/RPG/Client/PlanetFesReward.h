#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

class Class_1_FED52683E458A5ED;
namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESREWARD_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1C2C4310)
#define RPG_CLIENT_PLANETFESREWARD_CREATE_OFFSET UNITYSDK_OFFSET(0x1C2C3D10)
#define RPG_CLIENT_PLANETFESREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C3D00)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesReward_TypeDefinitionIndex = 66657;

	class PlanetFesReward : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* Items; // 0x10
		::System::Numerics::BigInteger Coin; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREWARD__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesReward* Create(::Class_1_FED52683E458A5ED* a1)
		{
			return ((::RPG::Client::PlanetFesReward*(*)(::Class_1_FED52683E458A5ED*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREWARD_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::PlanetFesReward* Create_1(::System::UInt32 a1)
		{
			return ((::RPG::Client::PlanetFesReward*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREWARD_CREATE_1_OFFSET))(a1);
		}
	};
}
