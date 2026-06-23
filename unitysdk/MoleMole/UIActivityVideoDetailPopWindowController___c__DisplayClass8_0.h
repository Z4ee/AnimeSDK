#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E9529ED64113E4E9;
namespace MoleMole { class UIActivityVideoDetailPopWindowController; }
namespace System { class String; }

#define MOLEMOLE_UIACTIVITYVIDEODETAILPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18A4AD30)
#define MOLEMOLE_UIACTIVITYVIDEODETAILPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__PLAYVIDEOFROMSTART_B__1_OFFSET UNITYSDK_OFFSET(0x18A4AE90)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityVideoDetailPopWindowController___c__DisplayClass8_0_TypeDefinitionIndex = 69398;

	class UIActivityVideoDetailPopWindowController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MoleMole::UIActivityVideoDetailPopWindowController* __4__this; // 0x10
		::System::String* videoPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEODETAILPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayVideoFromStart_b__1(::Class_1_E9529ED64113E4E9* helper)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEODETAILPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__PLAYVIDEOFROMSTART_B__1_OFFSET))(this, helper);
		}
	};
}
