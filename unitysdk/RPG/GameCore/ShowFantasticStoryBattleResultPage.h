#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWFANTASTICSTORYBATTLERESULTPAGE_METHOD_3_666918DBB2B24D85_OFFSET UNITYSDK_OFFSET(0x1D092280)
#define RPG_GAMECORE_SHOWFANTASTICSTORYBATTLERESULTPAGE_METHOD_3_762D5CD84188EB08_OFFSET UNITYSDK_OFFSET(0x1D092350)
#define RPG_GAMECORE_SHOWFANTASTICSTORYBATTLERESULTPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D092340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowFantasticStoryBattleResultPage_TypeDefinitionIndex = 23199;

	class ShowFantasticStoryBattleResultPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFANTASTICSTORYBATTLERESULTPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_666918DBB2B24D85(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowFantasticStoryBattleResultPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowFantasticStoryBattleResultPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFANTASTICSTORYBATTLERESULTPAGE_METHOD_3_666918DBB2B24D85_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_762D5CD84188EB08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowFantasticStoryBattleResultPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowFantasticStoryBattleResultPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFANTASTICSTORYBATTLERESULTPAGE_METHOD_3_762D5CD84188EB08_OFFSET))(a1, a2);
		}
	};
}
