#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_TRAVELSHIPPOWERSPRINT_METHOD_3_009CE9131FFEE4C7_OFFSET UNITYSDK_OFFSET(0x178B7B10)
#define RPG_GAMECORE_TRAVELSHIPPOWERSPRINT_METHOD_3_421E8F23A1484350_OFFSET UNITYSDK_OFFSET(0x178B7A90)
#define RPG_GAMECORE_TRAVELSHIPPOWERSPRINT__CTOR_OFFSET UNITYSDK_OFFSET(0x178B7AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelShipPowerSprint_TypeDefinitionIndex = 19302;

	class TravelShipPowerSprint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* AnchorID; // 0x18
		::RPG::GameCore::DynamicFloat* Duration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPPOWERSPRINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_421E8F23A1484350(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TravelShipPowerSprint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TravelShipPowerSprint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPPOWERSPRINT_METHOD_3_421E8F23A1484350_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_009CE9131FFEE4C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TravelShipPowerSprint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TravelShipPowerSprint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPPOWERSPRINT_METHOD_3_009CE9131FFEE4C7_OFFSET))(a1, a2);
		}
	};
}
