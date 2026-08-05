#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;
class Class_1_D375C91CCE5D3999;
class Class_1_E9529ED64113E4E9;
namespace MoleMole { class UIActivityVideoWidgetController; }
namespace System { class String; }

#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x196F49C0)
#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___C__DISPLAYCLASS9_0__PLAYVIDEOFROMSTART_B__1_OFFSET UNITYSDK_OFFSET(0x196F49D0)
#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___C__DISPLAYCLASS9_0__PLAYVIDEOFROMSTART_B__2_OFFSET UNITYSDK_OFFSET(0x196F4EC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityVideoWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 50924;

	class UIActivityVideoWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::String* videoPath; // 0x10
		::Class_1_D375C91CCE5D3999* activityBaseData; // 0x18
		::MoleMole::UIActivityVideoWidgetController* __4__this; // 0x20
		::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1* __9__2; // 0x28
		::System::Boolean videoFinish; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayVideoFromStart_b__1(::Class_1_E9529ED64113E4E9* helper)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___C__DISPLAYCLASS9_0__PLAYVIDEOFROMSTART_B__1_OFFSET))(this, helper);
		}

		::System::Void _PlayVideoFromStart_b__2(::Class_0_16E4307DCC419505_36* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___C__DISPLAYCLASS9_0__PLAYVIDEOFROMSTART_B__2_OFFSET))(this, rsp);
		}
	};
}
