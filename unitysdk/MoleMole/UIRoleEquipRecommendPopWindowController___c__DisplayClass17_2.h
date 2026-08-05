#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1382163A006DA4F3;

#define MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_2__CTOR_OFFSET UNITYSDK_OFFSET(0x13001790)
#define MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_2__REFRESHRANDPROPERTYFILTERITEMS_B__3_OFFSET UNITYSDK_OFFSET(0x13001EE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipRecommendPopWindowController___c__DisplayClass17_2_TypeDefinitionIndex = 82485;

	class UIRoleEquipRecommendPopWindowController___c__DisplayClass17_2 : public ::System::Object
	{
	public:
		::System::Int32 PropertyId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_2__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshRandPropertyFilterItems_b__3(::Class_1_1382163A006DA4F3* selectProperty)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_1382163A006DA4F3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_2__REFRESHRANDPROPERTYFILTERITEMS_B__3_OFFSET))(this, selectProperty);
		}
	};
}
