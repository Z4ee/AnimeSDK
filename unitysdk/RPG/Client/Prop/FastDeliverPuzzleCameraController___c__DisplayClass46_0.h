#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC55C930)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER___C__DISPLAYCLASS46_0___ANIMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0xC55CA30)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int FastDeliverPuzzleCameraController___c__DisplayClass46_0_TypeDefinitionIndex = 73104;

	class FastDeliverPuzzleCameraController___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::System::Action* cb; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
		}

		::System::Void __AnimUpdate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER___C__DISPLAYCLASS46_0___ANIMUPDATE_B__0_OFFSET))(this);
		}
	};
}
