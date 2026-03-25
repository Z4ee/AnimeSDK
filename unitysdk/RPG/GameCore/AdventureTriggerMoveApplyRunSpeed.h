#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureTriggerMove.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENTURETRIGGERMOVEAPPLYRUNSPEED_METHOD_4_2099DCC5F78CA267_OFFSET UNITYSDK_OFFSET(0x16F5D0D0)
#define RPG_GAMECORE_ADVENTURETRIGGERMOVEAPPLYRUNSPEED_METHOD_4_342A376F07FCCBEF_OFFSET UNITYSDK_OFFSET(0x16F5D660)
#define RPG_GAMECORE_ADVENTURETRIGGERMOVEAPPLYRUNSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x16F5D050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureTriggerMoveApplyRunSpeed_TypeDefinitionIndex = 18467;

	class AdventureTriggerMoveApplyRunSpeed : public ::RPG::GameCore::AdventureTriggerMove
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERMOVEAPPLYRUNSPEED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_342A376F07FCCBEF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureTriggerMoveApplyRunSpeed*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureTriggerMoveApplyRunSpeed*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERMOVEAPPLYRUNSPEED_METHOD_4_342A376F07FCCBEF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2099DCC5F78CA267(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureTriggerMoveApplyRunSpeed* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureTriggerMoveApplyRunSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERMOVEAPPLYRUNSPEED_METHOD_4_2099DCC5F78CA267_OFFSET))(a1, a2);
		}
	};
}
