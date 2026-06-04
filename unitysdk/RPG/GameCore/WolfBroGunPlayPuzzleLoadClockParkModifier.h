#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WOLFBROGUNPLAYPUZZLELOADCLOCKPARKMODIFIER_METHOD_3_91705C46A68BC551_OFFSET UNITYSDK_OFFSET(0x19E680B0)
#define RPG_GAMECORE_WOLFBROGUNPLAYPUZZLELOADCLOCKPARKMODIFIER_METHOD_3_C0F4784CBA6BC61D_OFFSET UNITYSDK_OFFSET(0x19E67FA0)
#define RPG_GAMECORE_WOLFBROGUNPLAYPUZZLELOADCLOCKPARKMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E68080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroGunPlayPuzzleLoadClockParkModifier_TypeDefinitionIndex = 19233;

	class WolfBroGunPlayPuzzleLoadClockParkModifier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNPLAYPUZZLELOADCLOCKPARKMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C0F4784CBA6BC61D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroGunPlayPuzzleLoadClockParkModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroGunPlayPuzzleLoadClockParkModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNPLAYPUZZLELOADCLOCKPARKMODIFIER_METHOD_3_C0F4784CBA6BC61D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_91705C46A68BC551(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroGunPlayPuzzleLoadClockParkModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroGunPlayPuzzleLoadClockParkModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNPLAYPUZZLELOADCLOCKPARKMODIFIER_METHOD_3_91705C46A68BC551_OFFSET))(a1, a2);
		}
	};
}
