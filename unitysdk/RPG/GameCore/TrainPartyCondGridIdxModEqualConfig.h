#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYCONDGRIDIDXMODEQUALCONFIG_METHOD_5_58353DD88F6D8F2E_OFFSET UNITYSDK_OFFSET(0x1C15F190)
#define RPG_GAMECORE_TRAINPARTYCONDGRIDIDXMODEQUALCONFIG_METHOD_5_D82BD59E82796E92_OFFSET UNITYSDK_OFFSET(0x1C15F140)
#define RPG_GAMECORE_TRAINPARTYCONDGRIDIDXMODEQUALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C15F180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCondGridIdxModEqualConfig_TypeDefinitionIndex = 17359;

	class TrainPartyCondGridIdxModEqualConfig : public ::RPG::GameCore::TrainPartyConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDGRIDIDXMODEQUALCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_D82BD59E82796E92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCondGridIdxModEqualConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCondGridIdxModEqualConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDGRIDIDXMODEQUALCONFIG_METHOD_5_D82BD59E82796E92_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_58353DD88F6D8F2E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCondGridIdxModEqualConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCondGridIdxModEqualConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDGRIDIDXMODEQUALCONFIG_METHOD_5_58353DD88F6D8F2E_OFFSET))(a1, a2);
		}
	};
}
