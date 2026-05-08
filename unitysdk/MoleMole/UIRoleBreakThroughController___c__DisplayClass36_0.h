#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_249;
class Class_3_AE02BC8285203464_9;
namespace MoleMole { class UIRoleBreakThroughController; }

#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x147F3160)
#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER___C__DISPLAYCLASS36_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x147F3170)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleBreakThroughController___c__DisplayClass36_0_TypeDefinitionIndex = 56097;

	class UIRoleBreakThroughController___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::Class_3_AE02BC8285203464_9* serverInfo; // 0x10
		::Class_2_208CC9941471731A_249* advCurLvTempalte; // 0x18
		::MoleMole::UIRoleBreakThroughController* __4__this; // 0x20
		::Class_2_208CC9941471731A_249* advNextLvTemplate; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER___C__DISPLAYCLASS36_0__REFRESHVIEW_B__0_OFFSET))(this);
		}
	};
}
