#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TEAMBLOCKMODIFIERCONSTKEYS_METHOD_2_87597CE948D7E8B1_OFFSET UNITYSDK_OFFSET(0x19DDAEF0)
#define RPG_GAMECORE_TEAMBLOCKMODIFIERCONSTKEYS__CTOR_OFFSET UNITYSDK_OFFSET(0x19DDB070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamBlockModifierConstKeys_TypeDefinitionIndex = 16236;

	class TeamBlockModifierConstKeys : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::StringHash KeyBlockValue; // 0x10
		::RPG::GameCore::StringHash KeyBlockPercent; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMBLOCKMODIFIERCONSTKEYS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_87597CE948D7E8B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamBlockModifierConstKeys*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamBlockModifierConstKeys*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMBLOCKMODIFIERCONSTKEYS_METHOD_2_87597CE948D7E8B1_OFFSET))(a1, a2);
		}
	};
}
