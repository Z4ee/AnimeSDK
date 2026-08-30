#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYACTIONMODIFYCARDSTEPCONFIG_METHOD_5_42E67B6948178B01_OFFSET UNITYSDK_OFFSET(0x1D5DA170)
#define RPG_GAMECORE_TRAINPARTYACTIONMODIFYCARDSTEPCONFIG_METHOD_5_6287D053752FC6DD_OFFSET UNITYSDK_OFFSET(0x1D5DA240)
#define RPG_GAMECORE_TRAINPARTYACTIONMODIFYCARDSTEPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DA160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionModifyCardStepConfig_TypeDefinitionIndex = 17866;

	class TrainPartyActionModifyCardStepConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONMODIFYCARDSTEPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_6287D053752FC6DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionModifyCardStepConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionModifyCardStepConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONMODIFYCARDSTEPCONFIG_METHOD_5_6287D053752FC6DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_42E67B6948178B01(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionModifyCardStepConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionModifyCardStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONMODIFYCARDSTEPCONFIG_METHOD_5_42E67B6948178B01_OFFSET))(a1, a2);
		}
	};
}
