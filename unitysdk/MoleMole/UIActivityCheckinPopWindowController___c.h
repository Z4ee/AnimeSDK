#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_BD954AEAE8F1A57B;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIACTIVITYCHECKINPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16117EE0)
#define MOLEMOLE_UIACTIVITYCHECKINPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16117F20)
#define MOLEMOLE_UIACTIVITYCHECKINPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__8_0_OFFSET UNITYSDK_OFFSET(0x16117F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCheckinPopWindowController___c_TypeDefinitionIndex = 66597;

	class UIActivityCheckinPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_3_BD954AEAE8F1A57B*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::Class_3_BD954AEAE8F1A57B*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCheckinPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x44FE0);
		}
		static ::MoleMole::UIActivityCheckinPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityCheckinPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCheckinPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x44FE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__8_0(::Class_3_BD954AEAE8F1A57B* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_BD954AEAE8F1A57B*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__8_0_OFFSET))(this, x);
		}
	};
}
