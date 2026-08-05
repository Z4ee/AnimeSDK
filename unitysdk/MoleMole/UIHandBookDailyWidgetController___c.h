#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5D048BBBEAD733B3;
class Class_2_208CC9941471731A_366;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18981220)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18981260)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__ONSHOW_B__5_0_OFFSET UNITYSDK_OFFSET(0x18981440)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__ONUIOPEN_B__4_0_OFFSET UNITYSDK_OFFSET(0x18981270)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookDailyWidgetController___c_TypeDefinitionIndex = 44693;

	class UIHandBookDailyWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_5D048BBBEAD733B3*, ::System::Int32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::Class_1_5D048BBBEAD733B3*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookDailyWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A440);
		}
		static ::MoleMole::UIHandBookDailyWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookDailyWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookDailyWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A448);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_366*, ::Class_1_5D048BBBEAD733B3*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_366*, ::Class_1_5D048BBBEAD733B3*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookDailyWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::Class_1_5D048BBBEAD733B3* _OnUIOpen_b__4_0(::Class_2_208CC9941471731A_366* template_)
		{
			return ((::Class_1_5D048BBBEAD733B3*(*)(::PVOID, ::Class_2_208CC9941471731A_366*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__ONUIOPEN_B__4_0_OFFSET))(this, template_);
		}

		::System::Int32 _OnShow_b__5_0(::Class_1_5D048BBBEAD733B3* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_5D048BBBEAD733B3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__ONSHOW_B__5_0_OFFSET))(this, b);
		}
	};
}
