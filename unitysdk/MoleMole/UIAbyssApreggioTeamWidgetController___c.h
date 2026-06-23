#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1824EF69C8E376A3;
class Class_3_48A3D3A34C52331D_46;
namespace MoleMole { class UILineupSelectContext_OnGetRoleSelectContextDel; }
namespace MoleMole { class UIRoleSelectPageContext; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x173BDC30)
#define MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x173BDC70)
#define MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__GOTOBEGINBATTLE_B__20_1_OFFSET UNITYSDK_OFFSET(0x173BDC80)
#define MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__GOTOBEGINBATTLE_B__20_3_OFFSET UNITYSDK_OFFSET(0x173BDDC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssApreggioTeamWidgetController___c_TypeDefinitionIndex = 63394;

	class UIAbyssApreggioTeamWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UILineupSelectContext_OnGetRoleSelectContextDel** StaticGet___9__20_1()
		{
			return (::MoleMole::UILineupSelectContext_OnGetRoleSelectContextDel**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssApreggioTeamWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x30910);
		}
		static ::MoleMole::UIAbyssApreggioTeamWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssApreggioTeamWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssApreggioTeamWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x30918);
		}
		static ::System::Action_1<::Class_3_48A3D3A34C52331D_46*>** StaticGet___9__20_3()
		{
			return (::System::Action_1<::Class_3_48A3D3A34C52331D_46*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssApreggioTeamWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x30920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::MoleMole::UIRoleSelectPageContext* _GotoBeginBattle_b__20_1(::System::Int32 selectIndex, ::Il2CppArray<::Class_2_1824EF69C8E376A3*>* currentSelected)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::Class_2_1824EF69C8E376A3*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__GOTOBEGINBATTLE_B__20_1_OFFSET))(this, selectIndex, currentSelected);
		}

		::System::Void _GotoBeginBattle_b__20_3(::Class_3_48A3D3A34C52331D_46* beginHollowData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_46*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__GOTOBEGINBATTLE_B__20_3_OFFSET))(this, beginHollowData);
		}
	};
}
