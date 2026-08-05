#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_477;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A63C5D0)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___C__CLEARMATERIAL_B__28_0_OFFSET UNITYSDK_OFFSET(0x1A63C620)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A63C610)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___C__SETCONSUME_B__32_0_OFFSET UNITYSDK_OFFSET(0x1A63C670)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooLevelUpWidgetController___c_TypeDefinitionIndex = 48614;

	class UIBangbooLevelUpWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBangbooLevelUpWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangbooLevelUpWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooLevelUpWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32B60);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_477*>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_477*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooLevelUpWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32B68);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_477*>** StaticGet___9__32_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_477*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooLevelUpWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _ClearMaterial_b__28_0(::Class_2_208CC9941471731A_477* ext, ::Class_2_208CC9941471731A_477* templateExt)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_477*, ::Class_2_208CC9941471731A_477*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___C__CLEARMATERIAL_B__28_0_OFFSET))(this, ext, templateExt);
		}

		::System::Int32 _SetConsume_b__32_0(::Class_2_208CC9941471731A_477* ext, ::Class_2_208CC9941471731A_477* templateExt)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_477*, ::Class_2_208CC9941471731A_477*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___C__SETCONSUME_B__32_0_OFFSET))(this, ext, templateExt);
		}
	};
}
