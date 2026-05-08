#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3B1E761D184CCDAF;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13026120)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13026160)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__ONCLICKBACKBTN_B__126_0_OFFSET UNITYSDK_OFFSET(0x13026170)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__REFRESHRESETBTN_B__139_0_OFFSET UNITYSDK_OFFSET(0x13026230)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipReplaceWidgetController___c_TypeDefinitionIndex = 48536;

	class UIRoleEquipReplaceWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_3B1E761D184CCDAF*, ::System::Boolean>** StaticGet___9__139_0()
		{
			return (::System::Func_2<::Class_2_3B1E761D184CCDAF*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIRoleEquipReplaceWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x409E0);
		}
		static ::System::Action** StaticGet___9__126_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleEquipReplaceWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x409E8);
		}
		static ::MoleMole::UIRoleEquipReplaceWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIRoleEquipReplaceWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRoleEquipReplaceWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x409F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickBackBtn_b__126_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__ONCLICKBACKBTN_B__126_0_OFFSET))(this);
		}

		::System::Boolean _RefreshResetBtn_b__139_0(::Class_2_3B1E761D184CCDAF* equip)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_3B1E761D184CCDAF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__REFRESHRESETBTN_B__139_0_OFFSET))(this, equip);
		}
	};
}
