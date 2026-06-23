#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E081FCEC8F87505A;
namespace MoleMole { class UILineupSelectContext_BeginBattleDel; }
namespace System { class Action; }

#define MOLEMOLE_UITRAININGCOURSEPAGEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C7FDA0)
#define MOLEMOLE_UITRAININGCOURSEPAGEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12C7FDE0)
#define MOLEMOLE_UITRAININGCOURSEPAGEPAGECONTROLLER___C__ONENTERSELECT_B__15_0_OFFSET UNITYSDK_OFFSET(0x12C7FDF0)
#define MOLEMOLE_UITRAININGCOURSEPAGEPAGECONTROLLER___C__ONENTERSELECT_B__15_1_OFFSET UNITYSDK_OFFSET(0x12C80020)

namespace MoleMole
{
	inline static constexpr unsigned int UITrainingCoursePagePageController___c_TypeDefinitionIndex = 77326;

	class UITrainingCoursePagePageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__15_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UITrainingCoursePagePageController___c_TypeDefinitionIndex)->GetStaticField(0x34A00);
		}
		static ::MoleMole::UILineupSelectContext_BeginBattleDel** StaticGet___9__15_1()
		{
			return (::MoleMole::UILineupSelectContext_BeginBattleDel**)Il2CppClass::FromTypeDefinitionIndex(UITrainingCoursePagePageController___c_TypeDefinitionIndex)->GetStaticField(0x34A08);
		}
		static ::MoleMole::UITrainingCoursePagePageController___c** StaticGet___9()
		{
			return (::MoleMole::UITrainingCoursePagePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UITrainingCoursePagePageController___c_TypeDefinitionIndex)->GetStaticField(0x34A10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITRAININGCOURSEPAGEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRAININGCOURSEPAGEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnEnterSelect_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRAININGCOURSEPAGEPAGECONTROLLER___C__ONENTERSELECT_B__15_0_OFFSET))(this);
		}

		::System::Void _OnEnterSelect_b__15_1(::Class_1_E081FCEC8F87505A* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E081FCEC8F87505A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRAININGCOURSEPAGEPAGECONTROLLER___C__ONENTERSELECT_B__15_1_OFFSET))(this, data);
		}
	};
}
