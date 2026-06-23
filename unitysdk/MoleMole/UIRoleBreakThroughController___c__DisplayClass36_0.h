#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_640;
class Class_3_8069852B6FA1A544_5;
namespace MoleMole { class UIRoleBreakThroughController; }

#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13808810)
#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER___C__DISPLAYCLASS36_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x13808820)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleBreakThroughController___c__DisplayClass36_0_TypeDefinitionIndex = 46108;

	class UIRoleBreakThroughController___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleBreakThroughController* __4__this; // 0x10
		::Class_2_208CC9941471731A_640* advCurLvTempalte; // 0x18
		::Class_3_8069852B6FA1A544_5* serverInfo; // 0x20
		::Class_2_208CC9941471731A_640* advNextLvTemplate; // 0x28

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
