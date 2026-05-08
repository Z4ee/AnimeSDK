#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_12BDE7300F0E061C;

#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS159_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16134AA0)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS159_0__ENSUREEQUIPEDITEMINLIST_B__0_OFFSET UNITYSDK_OFFSET(0x16134AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipReplaceWidgetController___c__DisplayClass159_0_TypeDefinitionIndex = 48539;

	class UIRoleEquipReplaceWidgetController___c__DisplayClass159_0 : public ::System::Object
	{
	public:
		::Class_1_0D6706375CDAAE8C* equipedData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS159_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _EnsureEquipedItemInList_b__0(::Class_2_12BDE7300F0E061C* view)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_12BDE7300F0E061C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS159_0__ENSUREEQUIPEDITEMINLIST_B__0_OFFSET))(this, view);
		}
	};
}
