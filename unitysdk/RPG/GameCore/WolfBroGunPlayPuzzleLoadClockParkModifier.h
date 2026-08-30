#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WOLFBROGUNPLAYPUZZLELOADCLOCKPARKMODIFIER_METHOD_3_91705C46A68BC551_OFFSET UNITYSDK_OFFSET(0x1EFA7EF0)
#define RPG_GAMECORE_WOLFBROGUNPLAYPUZZLELOADCLOCKPARKMODIFIER_METHOD_3_EC8668DF9B5FCF14_OFFSET UNITYSDK_OFFSET(0x1EFA7E20)
#define RPG_GAMECORE_WOLFBROGUNPLAYPUZZLELOADCLOCKPARKMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA7EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroGunPlayPuzzleLoadClockParkModifier_TypeDefinitionIndex = 20135;

	class WolfBroGunPlayPuzzleLoadClockParkModifier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNPLAYPUZZLELOADCLOCKPARKMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EC8668DF9B5FCF14(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroGunPlayPuzzleLoadClockParkModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroGunPlayPuzzleLoadClockParkModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNPLAYPUZZLELOADCLOCKPARKMODIFIER_METHOD_3_EC8668DF9B5FCF14_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_91705C46A68BC551(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroGunPlayPuzzleLoadClockParkModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroGunPlayPuzzleLoadClockParkModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNPLAYPUZZLELOADCLOCKPARKMODIFIER_METHOD_3_91705C46A68BC551_OFFSET))(a1, a2);
		}
	};
}
