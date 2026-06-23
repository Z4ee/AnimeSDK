#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_732;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHOLLOWRELICOPTIONITEMWIDGETCONTROLLER___C__BUILDDESCRIPTION_B__30_1_OFFSET UNITYSDK_OFFSET(0x16ACC700)
#define MOLEMOLE_UIHOLLOWRELICOPTIONITEMWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16ACC6B0)
#define MOLEMOLE_UIHOLLOWRELICOPTIONITEMWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16ACC6F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowRelicOptionItemWidgetController___c_TypeDefinitionIndex = 74627;

	class UIHollowRelicOptionItemWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHollowRelicOptionItemWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowRelicOptionItemWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowRelicOptionItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F1E0);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_732*>** StaticGet___9__30_1()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_732*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowRelicOptionItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F1E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICOPTIONITEMWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICOPTIONITEMWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _BuildDescription_b__30_1(::Class_2_208CC9941471731A_732* l, ::Class_2_208CC9941471731A_732* r)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_732*, ::Class_2_208CC9941471731A_732*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICOPTIONITEMWIDGETCONTROLLER___C__BUILDDESCRIPTION_B__30_1_OFFSET))(this, l, r);
		}
	};
}
