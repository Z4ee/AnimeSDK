#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class FastDeliverPuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD___C__DISPLAYCLASS123_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9212A0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD___C__DISPLAYCLASS123_0__ONPUZZLEFINISH_B__0_OFFSET UNITYSDK_OFFSET(0x1A922260)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD___C__DISPLAYCLASS123_0__ONPUZZLEFINISH_B__1_OFFSET UNITYSDK_OFFSET(0x1A922580)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD___C__DISPLAYCLASS123_0__ONPUZZLEFINISH_B__2_OFFSET UNITYSDK_OFFSET(0x1A922790)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int FastDeliverPuzzleBoard___c__DisplayClass123_0_TypeDefinitionIndex = 78112;

	class FastDeliverPuzzleBoard___c__DisplayClass123_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::System::Action* __9__2; // 0x18
		::RPG::Client::Prop::FastDeliverPuzzleBoard* __4__this; // 0x20
		::System::Boolean immediate; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD___C__DISPLAYCLASS123_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnPuzzleFinish_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD___C__DISPLAYCLASS123_0__ONPUZZLEFINISH_B__0_OFFSET))(this);
		}

		::System::Void _OnPuzzleFinish_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD___C__DISPLAYCLASS123_0__ONPUZZLEFINISH_B__1_OFFSET))(this);
		}

		::System::Void _OnPuzzleFinish_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD___C__DISPLAYCLASS123_0__ONPUZZLEFINISH_B__2_OFFSET))(this);
		}
	};
}
