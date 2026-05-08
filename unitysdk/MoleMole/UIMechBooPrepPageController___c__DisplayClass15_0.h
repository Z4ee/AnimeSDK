#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_134;
class Class_2_35EE3F274435ACD1;
namespace MoleMole { class UIMechBooPrepPageController; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__DISPLAYCLASS15_0__CLICKSCRIPTACTION_B__3_OFFSET UNITYSDK_OFFSET(0x152AB510)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x152AB500)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooPrepPageController___c__DisplayClass15_0_TypeDefinitionIndex = 45473;

	class UIMechBooPrepPageController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_134* levelInfo; // 0x10
		::System::Func_2<::Class_2_35EE3F274435ACD1*, ::System::Boolean>* __9__3; // 0x18
		::MoleMole::UIMechBooPrepPageController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ClickScriptAction_b__3(::Class_2_35EE3F274435ACD1* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_35EE3F274435ACD1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__DISPLAYCLASS15_0__CLICKSCRIPTACTION_B__3_OFFSET))(this, config);
		}
	};
}
