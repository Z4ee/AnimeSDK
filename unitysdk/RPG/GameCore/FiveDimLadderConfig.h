#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimLadderClimbSlide.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMLADDERCONFIG_METHOD_3_48CE3C2E278825DE_OFFSET UNITYSDK_OFFSET(0x1D866690)
#define RPG_GAMECORE_FIVEDIMLADDERCONFIG_METHOD_3_E1CEDA0225CB7A9D_OFFSET UNITYSDK_OFFSET(0x1D866640)
#define RPG_GAMECORE_FIVEDIMLADDERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D866680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLadderConfig_TypeDefinitionIndex = 18328;

	class FiveDimLadderConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsLadder; // 0x10
		::RPG::GameCore::FiveDimLadderClimbSlide ClimbSide; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLADDERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E1CEDA0225CB7A9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLadderConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLadderConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLADDERCONFIG_METHOD_3_E1CEDA0225CB7A9D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_48CE3C2E278825DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLadderConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLadderConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLADDERCONFIG_METHOD_3_48CE3C2E278825DE_OFFSET))(a1, a2);
		}
	};
}
