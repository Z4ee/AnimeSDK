#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REPLACETRIALPLAYER_METHOD_3_4E5E455100389076_OFFSET UNITYSDK_OFFSET(0x1D3A1950)
#define RPG_GAMECORE_REPLACETRIALPLAYER_METHOD_3_589A86E848583AD2_OFFSET UNITYSDK_OFFSET(0x1D3A19A0)
#define RPG_GAMECORE_REPLACETRIALPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A1990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReplaceTrialPlayer_TypeDefinitionIndex = 21358;

	class ReplaceTrialPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPLACETRIALPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4E5E455100389076(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReplaceTrialPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReplaceTrialPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPLACETRIALPLAYER_METHOD_3_4E5E455100389076_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_589A86E848583AD2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReplaceTrialPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReplaceTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPLACETRIALPLAYER_METHOD_3_589A86E848583AD2_OFFSET))(a1, a2);
		}
	};
}
