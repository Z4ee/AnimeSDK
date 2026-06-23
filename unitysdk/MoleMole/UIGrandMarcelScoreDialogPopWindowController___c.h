#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_58CFABFCA3B97E5A_3;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIGRANDMARCELSCOREDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F79E80)
#define MOLEMOLE_UIGRANDMARCELSCOREDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16F79EC0)
#define MOLEMOLE_UIGRANDMARCELSCOREDIALOGPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__16_0_OFFSET UNITYSDK_OFFSET(0x16F79ED0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGrandMarcelScoreDialogPopWindowController___c_TypeDefinitionIndex = 57258;

	class UIGrandMarcelScoreDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIGrandMarcelScoreDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIGrandMarcelScoreDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGrandMarcelScoreDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x413E0);
		}
		static ::System::Comparison_1<::Class_3_58CFABFCA3B97E5A_3*>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::Class_3_58CFABFCA3B97E5A_3*>**)Il2CppClass::FromTypeDefinitionIndex(UIGrandMarcelScoreDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x413E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELSCOREDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELSCOREDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__16_0(::Class_3_58CFABFCA3B97E5A_3* a, ::Class_3_58CFABFCA3B97E5A_3* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_3_58CFABFCA3B97E5A_3*, ::Class_3_58CFABFCA3B97E5A_3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELSCOREDIALOGPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__16_0_OFFSET))(this, a, b);
		}
	};
}
