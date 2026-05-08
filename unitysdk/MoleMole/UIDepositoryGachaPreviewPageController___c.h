#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14E97F30)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14E97F70)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___C__INITVIEW_B__32_3_OFFSET UNITYSDK_OFFSET(0x14E97FC0)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___C__ONUIINIT_B__19_0_OFFSET UNITYSDK_OFFSET(0x14E97F80)

namespace MoleMole
{
	inline static constexpr unsigned int UIDepositoryGachaPreviewPageController___c_TypeDefinitionIndex = 75693;

	class UIDepositoryGachaPreviewPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__32_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIDepositoryGachaPreviewPageController___c_TypeDefinitionIndex)->GetStaticField(0x41F80);
		}
		static ::MoleMole::UIDepositoryGachaPreviewPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIDepositoryGachaPreviewPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIDepositoryGachaPreviewPageController___c_TypeDefinitionIndex)->GetStaticField(0x41F88);
		}
		static ::System::Func_2<::Class_1_1685EC66FBD28897*, ::System::Boolean>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::Class_1_1685EC66FBD28897*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIDepositoryGachaPreviewPageController___c_TypeDefinitionIndex)->GetStaticField(0x41F90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUIInit_b__19_0(::Class_1_1685EC66FBD28897* viewData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_1685EC66FBD28897*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___C__ONUIINIT_B__19_0_OFFSET))(this, viewData);
		}

		::System::Void _InitView_b__32_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___C__INITVIEW_B__32_3_OFFSET))(this);
		}
	};
}
