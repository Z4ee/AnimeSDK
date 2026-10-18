#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMPLAYSUMMONBOTANIMACTION_METHOD_4_28FE5F59B7CDA135_OFFSET UNITYSDK_OFFSET(0x1D6D1000)
#define RPG_GAMECORE_FIVEDIMPLAYSUMMONBOTANIMACTION_METHOD_4_E092E74BD09012B0_OFFSET UNITYSDK_OFFSET(0x1D6D1080)
#define RPG_GAMECORE_FIVEDIMPLAYSUMMONBOTANIMACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D1070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPlaySummonBotAnimAction_TypeDefinitionIndex = 18728;

	class FiveDimPlaySummonBotAnimAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYSUMMONBOTANIMACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_28FE5F59B7CDA135(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlaySummonBotAnimAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlaySummonBotAnimAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYSUMMONBOTANIMACTION_METHOD_4_28FE5F59B7CDA135_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E092E74BD09012B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlaySummonBotAnimAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlaySummonBotAnimAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYSUMMONBOTANIMACTION_METHOD_4_E092E74BD09012B0_OFFSET))(a1, a2);
		}
	};
}
