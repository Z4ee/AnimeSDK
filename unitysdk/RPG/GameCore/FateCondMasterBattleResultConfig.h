#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATECONDMASTERBATTLERESULTCONFIG_METHOD_6_83A16BD3A7E75639_OFFSET UNITYSDK_OFFSET(0x1D08CB20)
#define RPG_GAMECORE_FATECONDMASTERBATTLERESULTCONFIG_METHOD_6_9EB863487628D17D_OFFSET UNITYSDK_OFFSET(0x1D08CB70)
#define RPG_GAMECORE_FATECONDMASTERBATTLERESULTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D08CB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateCondMasterBattleResultConfig_TypeDefinitionIndex = 19022;

	class FateCondMasterBattleResultConfig : public ::RPG::GameCore::FateConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDMASTERBATTLERESULTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_83A16BD3A7E75639(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateCondMasterBattleResultConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateCondMasterBattleResultConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDMASTERBATTLERESULTCONFIG_METHOD_6_83A16BD3A7E75639_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_9EB863487628D17D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateCondMasterBattleResultConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateCondMasterBattleResultConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDMASTERBATTLERESULTCONFIG_METHOD_6_9EB863487628D17D_OFFSET))(a1, a2);
		}
	};
}
