#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1710A4EE34865C78;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C95EC0)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16C95F00)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER___C__ONSHOW_B__10_0_OFFSET UNITYSDK_OFFSET(0x16C95F10)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTaskSubPanelWidgetController___c_TypeDefinitionIndex = 71000;

	class UIBangkovTaskSubPanelWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_1710A4EE34865C78*>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::Class_1_1710A4EE34865C78*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovTaskSubPanelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44900);
		}
		static ::MoleMole::UIBangkovTaskSubPanelWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangkovTaskSubPanelWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovTaskSubPanelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44908);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnShow_b__10_0(::Class_1_1710A4EE34865C78* a, ::Class_1_1710A4EE34865C78* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_1710A4EE34865C78*, ::Class_1_1710A4EE34865C78*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER___C__ONSHOW_B__10_0_OFFSET))(this, a, b);
		}
	};
}
