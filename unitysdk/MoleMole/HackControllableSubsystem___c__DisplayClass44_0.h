#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class HackControllableSubsystem; }
namespace MoleMole::Config { class ConfigControllableObjectCommonParam; }
namespace System { class Action; }

#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x161F3F00)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS44_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__0_OFFSET UNITYSDK_OFFSET(0x161F3F10)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS44_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__1_OFFSET UNITYSDK_OFFSET(0x161F4190)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS44_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__2_OFFSET UNITYSDK_OFFSET(0x161F4260)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS44_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__3_OFFSET UNITYSDK_OFFSET(0x161F40B0)

namespace MoleMole
{
	inline static constexpr unsigned int HackControllableSubsystem___c__DisplayClass44_0_TypeDefinitionIndex = 80684;

	class HackControllableSubsystem___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::Foundation::ViewObject::ViewObjectHandle viewObject; // 0x10
		::System::Action* __9__3; // 0x20
		::System::Action* onCameraBackAvatarMoveEnd; // 0x28
		::MoleMole::Config::ConfigControllableObjectCommonParam* hackControllable; // 0x30
		::MoleMole::HackControllableSubsystem* __4__this; // 0x38
		::System::Single fadeOutTime; // 0x40
		::System::Single cameraTime; // 0x44
		::System::Single fadeInTime; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Void _ExitCurrentControllableBackToAvatar_b__0(::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF reason)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS44_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__0_OFFSET))(this, reason);
		}

		::System::Void _ExitCurrentControllableBackToAvatar_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS44_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__3_OFFSET))(this);
		}

		::System::Void _ExitCurrentControllableBackToAvatar_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS44_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__1_OFFSET))(this);
		}

		::System::Void _ExitCurrentControllableBackToAvatar_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS44_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__2_OFFSET))(this);
		}
	};
}
