#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x162CA600)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x162CA640)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__UPDATEPOSITION_B__37_0_OFFSET UNITYSDK_OFFSET(0x162CA650)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleWidgetController___c_TypeDefinitionIndex = 58767;

	class UIGeneralNewsBubbleWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIGeneralNewsBubbleWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIGeneralNewsBubbleWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralNewsBubbleWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2ED00);
		}
		static ::System::Comparison_1<::MoleMole::UIGeneralNewsBubbleRowWidgetController*>** StaticGet___9__37_0()
		{
			return (::System::Comparison_1<::MoleMole::UIGeneralNewsBubbleRowWidgetController*>**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralNewsBubbleWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2ED08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _UpdatePosition_b__37_0(::MoleMole::UIGeneralNewsBubbleRowWidgetController* a, ::MoleMole::UIGeneralNewsBubbleRowWidgetController* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__UPDATEPOSITION_B__37_0_OFFSET))(this, a, b);
		}
	};
}
