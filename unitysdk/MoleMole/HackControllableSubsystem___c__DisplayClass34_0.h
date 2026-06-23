#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class HackControllableSubsystem; }
namespace System { class Action; }

#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13EEAE70)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS34_0__ENTERCURRENTCONTROLLABLE_B__0_OFFSET UNITYSDK_OFFSET(0x13EECF00)

namespace MoleMole
{
	inline static constexpr unsigned int HackControllableSubsystem___c__DisplayClass34_0_TypeDefinitionIndex = 80690;

	class HackControllableSubsystem___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::MoleMole::HackControllableSubsystem* __4__this; // 0x10
		::System::Action* onCameraMoveEnd; // 0x18
		::Foundation::ViewObject::ViewObjectHandle viewObject; // 0x20
		::System::Boolean isCameraControllableEnter; // 0x30
		::System::UInt32 cameraHackTransitionToken; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _EnterCurrentControllable_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS34_0__ENTERCURRENTCONTROLLABLE_B__0_OFFSET))(this);
		}
	};
}
