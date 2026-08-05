#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_E49938F4BFE74407;
class Class_2_208CC9941471731A_461;
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x173C9330)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x173C9370)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER___C__FILTERANDSORTCONFIGS_B__17_0_OFFSET UNITYSDK_OFFSET(0x173C9380)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER___C__PROCESSSPECIALLAYER_B__26_0_OFFSET UNITYSDK_OFFSET(0x173C93C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2InlevelMapAreaWidgetController___c_TypeDefinitionIndex = 59482;

	class UIAbyssS2InlevelMapAreaWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::System::ValueTuple_2<::MoleMole::Vector2Int, ::Class_1_E49938F4BFE74407*>>** StaticGet___9__26_0()
		{
			return (::System::Predicate_1<::System::ValueTuple_2<::MoleMole::Vector2Int, ::Class_1_E49938F4BFE74407*>>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2InlevelMapAreaWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x368B0);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_461*>** StaticGet___9__17_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_461*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2InlevelMapAreaWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x368B8);
		}
		static ::MoleMole::UIAbyssS2InlevelMapAreaWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssS2InlevelMapAreaWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2InlevelMapAreaWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x368C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _FilterAndSortConfigs_b__17_0(::Class_2_208CC9941471731A_461* l, ::Class_2_208CC9941471731A_461* r)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_461*, ::Class_2_208CC9941471731A_461*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER___C__FILTERANDSORTCONFIGS_B__17_0_OFFSET))(this, l, r);
		}

		::System::Boolean _ProcessSpecialLayer_b__26_0(::System::ValueTuple_2<::MoleMole::Vector2Int, ::Class_1_E49938F4BFE74407*> n)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::Vector2Int, ::Class_1_E49938F4BFE74407*>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER___C__PROCESSSPECIALLAYER_B__26_0_OFFSET))(this, n);
		}
	};
}
