#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E9529ED64113E4E9;
namespace MoleMole { class UINewbieGuideSelectPopWindowController; }
namespace System { class String; }

#define MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS53_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15171210)
#define MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS53_0__PLAYSINGLEVIDEO_B__1_OFFSET UNITYSDK_OFFSET(0x15171220)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideSelectPopWindowController___c__DisplayClass53_0_TypeDefinitionIndex = 60994;

	class UINewbieGuideSelectPopWindowController___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::MoleMole::UINewbieGuideSelectPopWindowController* __4__this; // 0x10
		::System::String* videoPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS53_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySingleVideo_b__1(::Class_1_E9529ED64113E4E9* helper)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS53_0__PLAYSINGLEVIDEO_B__1_OFFSET))(this, helper);
		}
	};
}
