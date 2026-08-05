#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRoleSelectPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS81_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15186080)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS81_0__ONSELECTCAMPIDLE_B__0_OFFSET UNITYSDK_OFFSET(0x15186090)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS81_0__ONSELECTCAMPIDLE_B__1_OFFSET UNITYSDK_OFFSET(0x151861B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController___c__DisplayClass81_0_TypeDefinitionIndex = 47742;

	class UIRoleSelectPageController___c__DisplayClass81_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleSelectPageController* __4__this; // 0x10
		::System::Action* __9__1; // 0x18
		::System::Int32 nodeID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS81_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnSelectCampIdle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS81_0__ONSELECTCAMPIDLE_B__0_OFFSET))(this);
		}

		::System::Void _OnSelectCampIdle_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS81_0__ONSELECTCAMPIDLE_B__1_OFFSET))(this);
		}
	};
}
