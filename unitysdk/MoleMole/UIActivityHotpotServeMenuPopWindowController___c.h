#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C1067BB4CC216C9A_1;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIACTIVITYHOTPOTSERVEMENUPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x167DFEE0)
#define MOLEMOLE_UIACTIVITYHOTPOTSERVEMENUPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x167DFF20)
#define MOLEMOLE_UIACTIVITYHOTPOTSERVEMENUPOPWINDOWCONTROLLER___C__REFRESHITEM_B__23_2_OFFSET UNITYSDK_OFFSET(0x167DFF30)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotServeMenuPopWindowController___c_TypeDefinitionIndex = 62418;

	class UIActivityHotpotServeMenuPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_C1067BB4CC216C9A_1*, ::System::Int32>** StaticGet___9__23_2()
		{
			return (::System::Func_2<::Class_1_C1067BB4CC216C9A_1*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotpotServeMenuPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2EAB0);
		}
		static ::MoleMole::UIActivityHotpotServeMenuPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityHotpotServeMenuPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotpotServeMenuPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2EAB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSERVEMENUPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSERVEMENUPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshItem_b__23_2(::Class_1_C1067BB4CC216C9A_1* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_C1067BB4CC216C9A_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSERVEMENUPOPWINDOWCONTROLLER___C__REFRESHITEM_B__23_2_OFFSET))(this, x);
		}
	};
}
