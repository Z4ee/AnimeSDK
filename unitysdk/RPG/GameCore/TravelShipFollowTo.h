#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TRAVELSHIPFOLLOWTO_METHOD_3_9B9538882FEA517D_OFFSET UNITYSDK_OFFSET(0x1D5E84A0)
#define RPG_GAMECORE_TRAVELSHIPFOLLOWTO_METHOD_3_F83F6CB03439866C_OFFSET UNITYSDK_OFFSET(0x1D5E8540)
#define RPG_GAMECORE_TRAVELSHIPFOLLOWTO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E8500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelShipFollowTo_TypeDefinitionIndex = 20735;

	class TravelShipFollowTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPFOLLOWTO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9B9538882FEA517D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TravelShipFollowTo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TravelShipFollowTo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPFOLLOWTO_METHOD_3_9B9538882FEA517D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F83F6CB03439866C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TravelShipFollowTo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TravelShipFollowTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPFOLLOWTO_METHOD_3_F83F6CB03439866C_OFFSET))(a1, a2);
		}
	};
}
