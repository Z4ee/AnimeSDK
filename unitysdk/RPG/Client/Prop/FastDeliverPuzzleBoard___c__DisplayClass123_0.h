#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class FastDeliverPuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD___C__DISPLAYCLASS123_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAE140A0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD___C__DISPLAYCLASS123_0__ONPUZZLEFINISH_B__0_OFFSET UNITYSDK_OFFSET(0xAE15280)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD___C__DISPLAYCLASS123_0__ONPUZZLEFINISH_B__1_OFFSET UNITYSDK_OFFSET(0xAE15530)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD___C__DISPLAYCLASS123_0__ONPUZZLEFINISH_B__2_OFFSET UNITYSDK_OFFSET(0xAE15720)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int FastDeliverPuzzleBoard___c__DisplayClass123_0_TypeDefinitionIndex = 72080;

	class FastDeliverPuzzleBoard___c__DisplayClass123_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::FastDeliverPuzzleBoard* __4__this; // 0x10
		::System::Action* __9__1; // 0x18
		::System::Action* __9__2; // 0x20
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
