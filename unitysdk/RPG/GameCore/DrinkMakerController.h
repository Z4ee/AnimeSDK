#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DRINKMAKERCONTROLLER_METHOD_3_5D3BBE2FDF6F00C3_OFFSET UNITYSDK_OFFSET(0x1BB1DEE0)
#define RPG_GAMECORE_DRINKMAKERCONTROLLER_METHOD_3_B9AE0F20709A0FE0_OFFSET UNITYSDK_OFFSET(0x1BB1DEA0)
#define RPG_GAMECORE_DRINKMAKERCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB1DED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerController_TypeDefinitionIndex = 20307;

	class DrinkMakerController : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B9AE0F20709A0FE0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DrinkMakerController*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerController*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCONTROLLER_METHOD_3_B9AE0F20709A0FE0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5D3BBE2FDF6F00C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DrinkMakerController* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCONTROLLER_METHOD_3_5D3BBE2FDF6F00C3_OFFSET))(a1, a2);
		}
	};
}
