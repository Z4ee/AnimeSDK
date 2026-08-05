#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class HackControllableSubsystem; }
namespace MoleMole::Config { class ConfigControllableObjectCommonParam; }
namespace System { class Action; }

#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1737B880)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS55_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__1_OFFSET UNITYSDK_OFFSET(0x1737B970)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS55_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__2_OFFSET UNITYSDK_OFFSET(0x1737B980)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS55_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__3_OFFSET UNITYSDK_OFFSET(0x1737B9B0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS55_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__4_OFFSET UNITYSDK_OFFSET(0x1737BC30)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS55_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__5_OFFSET UNITYSDK_OFFSET(0x1737BB50)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS55_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_G__FINISHBACKTOAVATAR_0_OFFSET UNITYSDK_OFFSET(0x1737B890)

namespace MoleMole
{
	inline static constexpr unsigned int HackControllableSubsystem___c__DisplayClass55_0_TypeDefinitionIndex = 57114;

	class HackControllableSubsystem___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::System::Action* __9__5; // 0x10
		::MoleMole::HackControllableSubsystem* __4__this; // 0x18
		::System::Action* onCameraBackAvatarMoveEnd; // 0x20
		::MoleMole::Config::ConfigControllableObjectCommonParam* hackControllable; // 0x28
		::Foundation::ViewObject::ViewObjectHandle viewObject; // 0x30
		::System::Single fadeOutTime; // 0x40
		::System::Single cameraTime; // 0x44
		::System::Boolean backToAvatarFinished; // 0x48
		::System::Single fadeInTime; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
		}

		::System::Void _ExitCurrentControllableBackToAvatar_g__FinishBackToAvatar_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS55_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_G__FINISHBACKTOAVATAR_0_OFFSET))(this);
		}

		::System::Boolean _ExitCurrentControllableBackToAvatar_b__1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS55_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__1_OFFSET))(this);
		}

		::System::Void _ExitCurrentControllableBackToAvatar_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS55_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__2_OFFSET))(this);
		}

		::System::Void _ExitCurrentControllableBackToAvatar_b__3(::Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF reason)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS55_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__3_OFFSET))(this, reason);
		}

		::System::Void _ExitCurrentControllableBackToAvatar_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS55_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__5_OFFSET))(this);
		}

		::System::Void _ExitCurrentControllableBackToAvatar_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS55_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__4_OFFSET))(this);
		}
	};
}
