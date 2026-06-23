#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_223;
namespace MoleMole { class UIMusicPlayerPageController; }

#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___C__DISPLAYCLASS58_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1530A7B0)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___C__DISPLAYCLASS58_0__PLAYSONG_B__0_OFFSET UNITYSDK_OFFSET(0x1530A7C0)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___C__DISPLAYCLASS58_0__PLAYSONG_B__1_OFFSET UNITYSDK_OFFSET(0x1530A7F0)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___C__DISPLAYCLASS58_0__PLAYSONG_B__2_OFFSET UNITYSDK_OFFSET(0x1530A830)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicPlayerPageController___c__DisplayClass58_0_TypeDefinitionIndex = 47387;

	class UIMusicPlayerPageController___c__DisplayClass58_0 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_223* template_; // 0x10
		::MoleMole::UIMusicPlayerPageController* __4__this; // 0x18
		::System::Int32 lastIndex; // 0x20
		::System::Int32 songId; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___C__DISPLAYCLASS58_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySong_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___C__DISPLAYCLASS58_0__PLAYSONG_B__0_OFFSET))(this);
		}

		::System::Void _PlaySong_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___C__DISPLAYCLASS58_0__PLAYSONG_B__1_OFFSET))(this);
		}

		::System::Void _PlaySong_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___C__DISPLAYCLASS58_0__PLAYSONG_B__2_OFFSET))(this);
		}
	};
}
