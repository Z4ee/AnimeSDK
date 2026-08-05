#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_58CFABFCA3B97E5A_4;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIGRANDMARCELSCOREDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19607780)
#define MOLEMOLE_UIGRANDMARCELSCOREDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x196077C0)
#define MOLEMOLE_UIGRANDMARCELSCOREDIALOGPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__16_0_OFFSET UNITYSDK_OFFSET(0x196077D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGrandMarcelScoreDialogPopWindowController___c_TypeDefinitionIndex = 78011;

	class UIGrandMarcelScoreDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIGrandMarcelScoreDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIGrandMarcelScoreDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGrandMarcelScoreDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x42A40);
		}
		static ::System::Comparison_1<::Class_3_58CFABFCA3B97E5A_4*>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::Class_3_58CFABFCA3B97E5A_4*>**)Il2CppClass::FromTypeDefinitionIndex(UIGrandMarcelScoreDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x42A48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELSCOREDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELSCOREDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__16_0(::Class_3_58CFABFCA3B97E5A_4* a, ::Class_3_58CFABFCA3B97E5A_4* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_3_58CFABFCA3B97E5A_4*, ::Class_3_58CFABFCA3B97E5A_4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELSCOREDIALOGPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__16_0_OFFSET))(this, a, b);
		}
	};
}
