#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A74240)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15A74280)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__UPDATEPOSITION_B__37_0_OFFSET UNITYSDK_OFFSET(0x15A74290)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleWidgetController___c_TypeDefinitionIndex = 54505;

	class UIGeneralNewsBubbleWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::MoleMole::UIGeneralNewsBubbleRowWidgetController*>** StaticGet___9__37_0()
		{
			return (::System::Comparison_1<::MoleMole::UIGeneralNewsBubbleRowWidgetController*>**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralNewsBubbleWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x30C40);
		}
		static ::MoleMole::UIGeneralNewsBubbleWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIGeneralNewsBubbleWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralNewsBubbleWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x30C48);
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
