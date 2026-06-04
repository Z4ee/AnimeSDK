#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REPLACETRIALPLAYER_METHOD_3_061C173784733352_OFFSET UNITYSDK_OFFSET(0x19ACBC30)
#define RPG_GAMECORE_REPLACETRIALPLAYER_METHOD_3_589A86E848583AD2_OFFSET UNITYSDK_OFFSET(0x19ACBCC0)
#define RPG_GAMECORE_REPLACETRIALPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x19ACBC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReplaceTrialPlayer_TypeDefinitionIndex = 20387;

	class ReplaceTrialPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPLACETRIALPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_061C173784733352(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReplaceTrialPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReplaceTrialPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPLACETRIALPLAYER_METHOD_3_061C173784733352_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_589A86E848583AD2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReplaceTrialPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReplaceTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPLACETRIALPLAYER_METHOD_3_589A86E848583AD2_OFFSET))(a1, a2);
		}
	};
}
