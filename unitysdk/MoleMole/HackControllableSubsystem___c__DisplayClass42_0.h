#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class HackControllableSubsystem; }
namespace System { class Action; }

#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x144DA710)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS42_0__ENTERCURRENTCONTROLLABLE_B__0_OFFSET UNITYSDK_OFFSET(0x144DA720)

namespace MoleMole
{
	inline static constexpr unsigned int HackControllableSubsystem___c__DisplayClass42_0_TypeDefinitionIndex = 57108;

	class HackControllableSubsystem___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::Foundation::ViewObject::ViewObjectHandle viewObject; // 0x10
		::MoleMole::HackControllableSubsystem* __4__this; // 0x20
		::MoleMole::EntityHandle entity; // 0x28
		::System::Action* onCameraMoveEnd; // 0x38
		::System::Boolean isCameraControllableEnter; // 0x40
		::System::UInt32 cameraHackTransitionToken; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Void _EnterCurrentControllable_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS42_0__ENTERCURRENTCONTROLLABLE_B__0_OFFSET))(this);
		}
	};
}
