#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRoleEquipReplaceWidgetController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS157_0__CTOR_OFFSET UNITYSDK_OFFSET(0x184615D0)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS157_0__ONSORTERMARKDELETECLICK_B__0_OFFSET UNITYSDK_OFFSET(0x184615E0)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS157_0__ONSORTERMARKDELETECLICK_B__2_OFFSET UNITYSDK_OFFSET(0x184616E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipReplaceWidgetController___c__DisplayClass157_0_TypeDefinitionIndex = 52778;

	class UIRoleEquipReplaceWidgetController___c__DisplayClass157_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::MoleMole::UIRoleEquipReplaceWidgetController* __4__this; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* equipIDs; // 0x20
		::System::Int32 OptType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS157_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnSorterMarkDeleteClick_b__0(::System::Collections::Generic::HashSet_1<::System::UInt32>* removedIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS157_0__ONSORTERMARKDELETECLICK_B__0_OFFSET))(this, removedIDs);
		}

		::System::Void _OnSorterMarkDeleteClick_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS157_0__ONSORTERMARKDELETECLICK_B__2_OFFSET))(this);
		}
	};
}
