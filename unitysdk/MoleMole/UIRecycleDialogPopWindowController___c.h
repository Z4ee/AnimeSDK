#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D2E90365D99FC7E6_1;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B9C8C0)
#define MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11B9C900)
#define MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__REFRESHITEMSPREVIEW_B__89_0_OFFSET UNITYSDK_OFFSET(0x11B9C910)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecycleDialogPopWindowController___c_TypeDefinitionIndex = 45866;

	class UIRecycleDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIRecycleDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIRecycleDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRecycleDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F440);
		}
		static ::System::Comparison_1<::Class_1_D2E90365D99FC7E6_1*>** StaticGet___9__89_0()
		{
			return (::System::Comparison_1<::Class_1_D2E90365D99FC7E6_1*>**)Il2CppClass::FromTypeDefinitionIndex(UIRecycleDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F448);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshItemsPreview_b__89_0(::Class_1_D2E90365D99FC7E6_1* a, ::Class_1_D2E90365D99FC7E6_1* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_D2E90365D99FC7E6_1*, ::Class_1_D2E90365D99FC7E6_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__REFRESHITEMSPREVIEW_B__89_0_OFFSET))(this, a, b);
		}
	};
}
