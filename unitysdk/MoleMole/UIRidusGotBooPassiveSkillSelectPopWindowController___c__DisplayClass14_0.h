#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_714;

#define MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x151848C0)
#define MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__ISSELECTED_B__0_OFFSET UNITYSDK_OFFSET(0x151848D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPassiveSkillSelectPopWindowController___c__DisplayClass14_0_TypeDefinitionIndex = 43303;

	class UIRidusGotBooPassiveSkillSelectPopWindowController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsSelected_b__0(::Class_2_208CC9941471731A_714* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_714*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__ISSELECTED_B__0_OFFSET))(this, x);
		}
	};
}
