#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_3_025FF4981524A424_307;
namespace MoleMole { class UINewbieGuideSelectPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS60_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16737DE0)
#define MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS60_0__DOFETCHREQUEST_B__0_OFFSET UNITYSDK_OFFSET(0x16737DF0)
#define MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS60_0__DOFETCHREQUEST_B__1_OFFSET UNITYSDK_OFFSET(0x16738220)
#define MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS60_0__DOFETCHREQUEST_B__2_OFFSET UNITYSDK_OFFSET(0x16738120)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideSelectPopWindowController___c__DisplayClass60_0_TypeDefinitionIndex = 60988;

	class UINewbieGuideSelectPopWindowController___c__DisplayClass60_0 : public ::System::Object
	{
	public:
		::MoleMole::UINewbieGuideSelectPopWindowController* __4__this; // 0x10
		::System::Action* __9__2; // 0x18
		::System::Int32 itemId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS60_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoFetchRequest_b__0(::Class_3_025FF4981524A424_307* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_307*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS60_0__DOFETCHREQUEST_B__0_OFFSET))(this, rsp);
		}

		::System::Void _DoFetchRequest_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS60_0__DOFETCHREQUEST_B__2_OFFSET))(this);
		}

		::System::Void _DoFetchRequest_b__1(::Class_0_16E4307DCC419505_36* error)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS60_0__DOFETCHREQUEST_B__1_OFFSET))(this, error);
		}
	};
}
