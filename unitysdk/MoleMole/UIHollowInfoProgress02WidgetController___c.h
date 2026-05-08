#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A047EA5169B6B30F;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x150C76C0)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x150C7700)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___C__REFRESHVIEW_B__4_0_OFFSET UNITYSDK_OFFSET(0x150C7710)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowInfoProgress02WidgetController___c_TypeDefinitionIndex = 81152;

	class UIHollowInfoProgress02WidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHollowInfoProgress02WidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowInfoProgress02WidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowInfoProgress02WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x351E0);
		}
		static ::System::Comparison_1<::Class_1_A047EA5169B6B30F*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::Class_1_A047EA5169B6B30F*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowInfoProgress02WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x351E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__4_0(::Class_1_A047EA5169B6B30F* a, ::Class_1_A047EA5169B6B30F* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_A047EA5169B6B30F*, ::Class_1_A047EA5169B6B30F*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___C__REFRESHVIEW_B__4_0_OFFSET))(this, a, b);
		}
	};
}
