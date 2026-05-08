#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIVHSStorePicBtnWidgetController_Data; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIVHSSTOREDIALOGV2POPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE46EAC0)
#define MOLEMOLE_UIVHSSTOREDIALOGV2POPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE46EB00)
#define MOLEMOLE_UIVHSSTOREDIALOGV2POPWINDOWCONTROLLER___C__INITDATA_B__21_0_OFFSET UNITYSDK_OFFSET(0xE46EB10)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreDialogV2PopWindowController___c_TypeDefinitionIndex = 67891;

	class UIVHSStoreDialogV2PopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIVHSStoreDialogV2PopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIVHSStoreDialogV2PopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIVHSStoreDialogV2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38270);
		}
		static ::System::Comparison_1<::MoleMole::UIVHSStorePicBtnWidgetController_Data*>** StaticGet___9__21_0()
		{
			return (::System::Comparison_1<::MoleMole::UIVHSStorePicBtnWidgetController_Data*>**)Il2CppClass::FromTypeDefinitionIndex(UIVHSStoreDialogV2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38278);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGV2POPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGV2POPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitData_b__21_0(::MoleMole::UIVHSStorePicBtnWidgetController_Data* a, ::MoleMole::UIVHSStorePicBtnWidgetController_Data* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIVHSStorePicBtnWidgetController_Data*, ::MoleMole::UIVHSStorePicBtnWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGV2POPWINDOWCONTROLLER___C__INITDATA_B__21_0_OFFSET))(this, a, b);
		}
	};
}
