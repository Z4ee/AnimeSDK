#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_388;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIVHSSTOREDIALOGDROPDOWNBOXROWPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DDC350)
#define MOLEMOLE_UIVHSSTOREDIALOGDROPDOWNBOXROWPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14DDC390)
#define MOLEMOLE_UIVHSSTOREDIALOGDROPDOWNBOXROWPOPWINDOWCONTROLLER___C__INITSELECTTYPE_B__9_0_OFFSET UNITYSDK_OFFSET(0x14DDC3A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreDialogDropDownBoxRowPopWindowController___c_TypeDefinitionIndex = 57074;

	class UIVHSStoreDialogDropDownBoxRowPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_208CC9941471731A_388*, ::System::Int32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_388*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIVHSStoreDialogDropDownBoxRowPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x35570);
		}
		static ::MoleMole::UIVHSStoreDialogDropDownBoxRowPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIVHSStoreDialogDropDownBoxRowPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIVHSStoreDialogDropDownBoxRowPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x35578);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGDROPDOWNBOXROWPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGDROPDOWNBOXROWPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitSelectType_b__9_0(::Class_2_208CC9941471731A_388* template_)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_388*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGDROPDOWNBOXROWPOPWINDOWCONTROLLER___C__INITSELECTTYPE_B__9_0_OFFSET))(this, template_);
		}
	};
}
