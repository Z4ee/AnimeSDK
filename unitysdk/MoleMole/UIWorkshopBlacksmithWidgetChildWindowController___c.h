#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D2E90365D99FC7E6;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIWORKSHOPBLACKSMITHWIDGETCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11653F80)
#define MOLEMOLE_UIWORKSHOPBLACKSMITHWIDGETCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11653FC0)
#define MOLEMOLE_UIWORKSHOPBLACKSMITHWIDGETCHILDWINDOWCONTROLLER___C__REFRESHITEMSPREVIEW_B__65_0_OFFSET UNITYSDK_OFFSET(0x11653FD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkshopBlacksmithWidgetChildWindowController___c_TypeDefinitionIndex = 79902;

	class UIWorkshopBlacksmithWidgetChildWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIWorkshopBlacksmithWidgetChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIWorkshopBlacksmithWidgetChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIWorkshopBlacksmithWidgetChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3A990);
		}
		static ::System::Comparison_1<::Class_1_D2E90365D99FC7E6*>** StaticGet___9__65_0()
		{
			return (::System::Comparison_1<::Class_1_D2E90365D99FC7E6*>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkshopBlacksmithWidgetChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3A998);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPBLACKSMITHWIDGETCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPBLACKSMITHWIDGETCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshItemsPreview_b__65_0(::Class_1_D2E90365D99FC7E6* a, ::Class_1_D2E90365D99FC7E6* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_D2E90365D99FC7E6*, ::Class_1_D2E90365D99FC7E6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPBLACKSMITHWIDGETCHILDWINDOWCONTROLLER___C__REFRESHITEMSPREVIEW_B__65_0_OFFSET))(this, a, b);
		}
	};
}
