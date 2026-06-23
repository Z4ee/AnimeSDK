#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3B1E761D184CCDAF;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BA60B0)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11BA60F0)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__ONCLICKBACKBTN_B__127_0_OFFSET UNITYSDK_OFFSET(0x11BA6100)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__REFRESHRESETBTN_B__140_0_OFFSET UNITYSDK_OFFSET(0x11BA61C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipReplaceWidgetController___c_TypeDefinitionIndex = 68206;

	class UIRoleEquipReplaceWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_3B1E761D184CCDAF*, ::System::Boolean>** StaticGet___9__140_0()
		{
			return (::System::Func_2<::Class_2_3B1E761D184CCDAF*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIRoleEquipReplaceWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x43480);
		}
		static ::MoleMole::UIRoleEquipReplaceWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIRoleEquipReplaceWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRoleEquipReplaceWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x43488);
		}
		static ::System::Action** StaticGet___9__127_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleEquipReplaceWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x43490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickBackBtn_b__127_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__ONCLICKBACKBTN_B__127_0_OFFSET))(this);
		}

		::System::Boolean _RefreshResetBtn_b__140_0(::Class_2_3B1E761D184CCDAF* equip)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_3B1E761D184CCDAF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__REFRESHRESETBTN_B__140_0_OFFSET))(this, equip);
		}
	};
}
