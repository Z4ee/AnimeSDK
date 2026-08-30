#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELATIONMODIFIERCONSTKEYS_METHOD_2_5FC651935E7C6E80_OFFSET UNITYSDK_OFFSET(0x1DB25C60)
#define RPG_GAMECORE_ELATIONMODIFIERCONSTKEYS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB25D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationModifierConstKeys_TypeDefinitionIndex = 16909;

	class ElationModifierConstKeys : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::StringHash KeyHashElationEchoPoint; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONMODIFIERCONSTKEYS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5FC651935E7C6E80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElationModifierConstKeys*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElationModifierConstKeys*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONMODIFIERCONSTKEYS_METHOD_2_5FC651935E7C6E80_OFFSET))(a1, a2);
		}
	};
}
