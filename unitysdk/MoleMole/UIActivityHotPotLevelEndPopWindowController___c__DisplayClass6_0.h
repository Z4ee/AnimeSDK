#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_764;
class Class_2_293B23618CFCC726;
class Class_3_48A3D3A34C52331D_29;
namespace MoleMole { class UIActivityHotPotLevelEndPopWindowController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19281E00)
#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__ONUIOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x19281E10)
#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__ONUIOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x19281F50)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotLevelEndPopWindowController___c__DisplayClass6_0_TypeDefinitionIndex = 52959;

	class UIActivityHotPotLevelEndPopWindowController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Action_1<::Class_3_48A3D3A34C52331D_29*>* __9__1; // 0x10
		::Class_2_208CC9941471731A_764* curLevelConfig; // 0x18
		::MoleMole::UIActivityHotPotLevelEndPopWindowController* __4__this; // 0x20
		::Class_2_293B23618CFCC726* model; // 0x28
		::System::Int32 generalLevelID; // 0x30
		::System::Int32 rankID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__ONUIOPEN_B__0_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__1(::Class_3_48A3D3A34C52331D_29* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__ONUIOPEN_B__1_OFFSET))(this, rsp);
		}
	};
}
