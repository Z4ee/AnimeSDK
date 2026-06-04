#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropBakedMoveConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimTrampolineConfig; }

#define RPG_GAMECORE_FIVEDIMCLEANERBOTBAKEDMOVECONFIG_METHOD_3_875F455E990589E8_OFFSET UNITYSDK_OFFSET(0x19735510)
#define RPG_GAMECORE_FIVEDIMCLEANERBOTBAKEDMOVECONFIG_METHOD_3_9737F1D1C24415CD_OFFSET UNITYSDK_OFFSET(0x197354D0)
#define RPG_GAMECORE_FIVEDIMCLEANERBOTBAKEDMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19735500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCleanerBotBakedMoveConfig_TypeDefinitionIndex = 15852;

	class FiveDimCleanerBotBakedMoveConfig : public ::RPG::GameCore::FiveDimPropBakedMoveConfig
	{
	public:
		::RPG::GameCore::FiveDimTrampolineConfig* InternalTrampolineConfig; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLEANERBOTBAKEDMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9737F1D1C24415CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCleanerBotBakedMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCleanerBotBakedMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLEANERBOTBAKEDMOVECONFIG_METHOD_3_9737F1D1C24415CD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_875F455E990589E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCleanerBotBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCleanerBotBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLEANERBOTBAKEDMOVECONFIG_METHOD_3_875F455E990589E8_OFFSET))(a1, a2);
		}
	};
}
