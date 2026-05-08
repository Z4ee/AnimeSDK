#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14FFE6D0)
#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14FFE710)
#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___C__UPDATEGETBUTTON_B__14_2_OFFSET UNITYSDK_OFFSET(0x14FFE720)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotNewsWidgetController___c_TypeDefinitionIndex = 60152;

	class UIInterKnotNewsWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIInterKnotNewsWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIInterKnotNewsWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotNewsWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37EF0);
		}
		static ::System::Action** StaticGet___9__14_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotNewsWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37EF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateGetButton_b__14_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___C__UPDATEGETBUTTON_B__14_2_OFFSET))(this);
		}
	};
}
