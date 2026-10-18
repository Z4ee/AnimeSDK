#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYACTIONMODIFYSPECIFYGRIDCONFIG_METHOD_5_82BD00D94BFDE24A_OFFSET UNITYSDK_OFFSET(0x1DC2D470)
#define RPG_GAMECORE_TRAINPARTYACTIONMODIFYSPECIFYGRIDCONFIG_METHOD_5_889E8A09A1DAA2A6_OFFSET UNITYSDK_OFFSET(0x1DC2D360)
#define RPG_GAMECORE_TRAINPARTYACTIONMODIFYSPECIFYGRIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2D350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionModifySpecifyGridConfig_TypeDefinitionIndex = 18083;

	class TrainPartyActionModifySpecifyGridConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONMODIFYSPECIFYGRIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_82BD00D94BFDE24A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionModifySpecifyGridConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionModifySpecifyGridConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONMODIFYSPECIFYGRIDCONFIG_METHOD_5_82BD00D94BFDE24A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_889E8A09A1DAA2A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionModifySpecifyGridConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionModifySpecifyGridConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONMODIFYSPECIFYGRIDCONFIG_METHOD_5_889E8A09A1DAA2A6_OFFSET))(a1, a2);
		}
	};
}
