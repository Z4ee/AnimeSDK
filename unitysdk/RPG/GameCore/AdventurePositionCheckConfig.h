#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityPositionCheckMode.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENTUREPOSITIONCHECKCONFIG_METHOD_2_1F1110F156ECB82E_OFFSET UNITYSDK_OFFSET(0x16F59350)
#define RPG_GAMECORE_ADVENTUREPOSITIONCHECKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16F59760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePositionCheckConfig_TypeDefinitionIndex = 14900;

	class AdventurePositionCheckConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::EntityPositionCheckMode CheckMode; // 0x10
		::System::Boolean CheckWhenInvisible; // 0x14
		::System::Single GroundCheckUp; // 0x18
		::System::Single GroundCheckDown; // 0x1C
		::System::Single GroundCheckRadius; // 0x20
		::System::Boolean AutoPosAdaption; // 0x24
		::System::Single PosAdaptionRadius; // 0x28
		::System::Boolean EnableAvoidance; // 0x2C
		::System::Single AvoidanceSpace; // 0x30
		::System::Single RecheckTimeThresh; // 0x34
		::System::Single RecheckDistThresh; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPOSITIONCHECKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1F1110F156ECB82E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventurePositionCheckConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventurePositionCheckConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPOSITIONCHECKCONFIG_METHOD_2_1F1110F156ECB82E_OFFSET))(a1, a2);
		}
	};
}
