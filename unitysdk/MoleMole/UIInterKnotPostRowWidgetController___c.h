#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x179D8310)
#define MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x179D8350)
#define MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__REFRESHINTERKNOT_B__30_0_OFFSET UNITYSDK_OFFSET(0x179D8360)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotPostRowWidgetController___c_TypeDefinitionIndex = 41682;

	class UIInterKnotPostRowWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIInterKnotPostRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIInterKnotPostRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotPostRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x451B0);
		}
		static ::System::Action_1<::System::Int32>** StaticGet___9__30_0()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotPostRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x451B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshInterKnot_b__30_0(::System::Int32 newState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__REFRESHINTERKNOT_B__30_0_OFFSET))(this, newState);
		}
	};
}
