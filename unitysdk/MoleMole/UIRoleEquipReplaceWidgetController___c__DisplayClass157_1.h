#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS157_1__CTOR_OFFSET UNITYSDK_OFFSET(0x184616D0)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS157_1__ONSORTERMARKDELETECLICK_B__1_OFFSET UNITYSDK_OFFSET(0x18461760)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipReplaceWidgetController___c__DisplayClass157_1_TypeDefinitionIndex = 52767;

	class UIRoleEquipReplaceWidgetController___c__DisplayClass157_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* removedIDs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS157_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnSorterMarkDeleteClick_b__1(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS157_1__ONSORTERMARKDELETECLICK_B__1_OFFSET))(this, id);
		}
	};
}
