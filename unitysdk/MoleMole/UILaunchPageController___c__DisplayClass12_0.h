#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E9529ED64113E4E9;
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class UILaunchPageController; }
namespace System { class Action; }

#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x163C1A80)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_0__PLAYGAMELOGO_B__0_OFFSET UNITYSDK_OFFSET(0x163C1A90)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_0__PLAYGAMELOGO_B__1_OFFSET UNITYSDK_OFFSET(0x163C1BC0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_0__PLAYGAMELOGO_B__2_OFFSET UNITYSDK_OFFSET(0x163C1CE0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_0__PLAYGAMELOGO_B__3_OFFSET UNITYSDK_OFFSET(0x163C1B80)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_0__PLAYGAMELOGO_B__4_OFFSET UNITYSDK_OFFSET(0x163C1CC0)

namespace MoleMole
{
	inline static constexpr unsigned int UILaunchPageController___c__DisplayClass12_0_TypeDefinitionIndex = 69834;

	class UILaunchPageController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MoleMole::UILaunchPageController* __4__this; // 0x10
		::MoleMole::IVideoPlayer* vp; // 0x18
		::System::Action* __9__4; // 0x20
		::System::Action* __9__3; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayGameLogo_b__0(::MoleMole::IVideoPlayer* source)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_0__PLAYGAMELOGO_B__0_OFFSET))(this, source);
		}

		::System::Void _PlayGameLogo_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_0__PLAYGAMELOGO_B__3_OFFSET))(this);
		}

		::System::Void _PlayGameLogo_b__1(::Class_1_E9529ED64113E4E9* video)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_0__PLAYGAMELOGO_B__1_OFFSET))(this, video);
		}

		::System::Void _PlayGameLogo_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_0__PLAYGAMELOGO_B__4_OFFSET))(this);
		}

		::System::Void _PlayGameLogo_b__2(::Class_1_E9529ED64113E4E9* video)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_0__PLAYGAMELOGO_B__2_OFFSET))(this, video);
		}
	};
}
