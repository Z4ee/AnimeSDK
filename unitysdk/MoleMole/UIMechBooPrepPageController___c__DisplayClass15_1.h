#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_48A3D3A34C52331D_1;
namespace MoleMole { class UIMechBooPrepPageController___c__DisplayClass15_0; }
namespace MoleMole { class UserLocalDataItem; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__DISPLAYCLASS15_1__CLICKSCRIPTACTION_B__1_OFFSET UNITYSDK_OFFSET(0x179ECE50)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__DISPLAYCLASS15_1__CLICKSCRIPTACTION_B__2_OFFSET UNITYSDK_OFFSET(0x179ED000)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__DISPLAYCLASS15_1__CLICKSCRIPTACTION_B__5_OFFSET UNITYSDK_OFFSET(0x179ED3A0)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__DISPLAYCLASS15_1__CTOR_OFFSET UNITYSDK_OFFSET(0x179ECE40)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooPrepPageController___c__DisplayClass15_1_TypeDefinitionIndex = 53952;

	class UIMechBooPrepPageController___c__DisplayClass15_1 : public ::System::Object
	{
	public:
		::System::Action_1<::Class_3_48A3D3A34C52331D_1*>* __9__5; // 0x10
		::MoleMole::UserLocalDataItem* localData; // 0x18
		::MoleMole::UIMechBooPrepPageController___c__DisplayClass15_0* CS___8__locals1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__DISPLAYCLASS15_1__CTOR_OFFSET))(this);
		}

		::System::Void _ClickScriptAction_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__DISPLAYCLASS15_1__CLICKSCRIPTACTION_B__1_OFFSET))(this);
		}

		::System::Void _ClickScriptAction_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__DISPLAYCLASS15_1__CLICKSCRIPTACTION_B__2_OFFSET))(this);
		}

		::System::Void _ClickScriptAction_b__5(::Class_3_48A3D3A34C52331D_1* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__DISPLAYCLASS15_1__CLICKSCRIPTACTION_B__5_OFFSET))(this, rsp);
		}
	};
}
