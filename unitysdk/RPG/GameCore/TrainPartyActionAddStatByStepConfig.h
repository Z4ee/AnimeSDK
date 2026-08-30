#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"
#include "unitysdk/RPG/GameCore/TrainPartyPassengerType.h"
#include "unitysdk/RPG/GameCore/TrainPartyStatType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYACTIONADDSTATBYSTEPCONFIG_METHOD_5_0FFF19094E51CF8A_OFFSET UNITYSDK_OFFSET(0x1D531700)
#define RPG_GAMECORE_TRAINPARTYACTIONADDSTATBYSTEPCONFIG_METHOD_5_BFDA07A31DB8DDC4_OFFSET UNITYSDK_OFFSET(0x1D531760)
#define RPG_GAMECORE_TRAINPARTYACTIONADDSTATBYSTEPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D531750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionAddStatByStepConfig_TypeDefinitionIndex = 17862;

	class TrainPartyActionAddStatByStepConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::RPG::GameCore::TrainPartyPassengerType PassengerType; // 0x18
		::System::UInt32 PassengerParam; // 0x1C
		::Il2CppArray<::RPG::GameCore::TrainPartyStatType>* AddTypeList; // 0x20
		::System::Int32 UpdatePerStep; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDSTATBYSTEPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_0FFF19094E51CF8A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionAddStatByStepConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionAddStatByStepConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDSTATBYSTEPCONFIG_METHOD_5_0FFF19094E51CF8A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_BFDA07A31DB8DDC4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionAddStatByStepConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionAddStatByStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDSTATBYSTEPCONFIG_METHOD_5_BFDA07A31DB8DDC4_OFFSET))(a1, a2);
		}
	};
}
