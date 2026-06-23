#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C1067BB4CC216C9A;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIACTIVITYHOTPOTSERVEMENUPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x173C7D60)
#define MOLEMOLE_UIACTIVITYHOTPOTSERVEMENUPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x173C7DA0)
#define MOLEMOLE_UIACTIVITYHOTPOTSERVEMENUPOPWINDOWCONTROLLER___C__REFRESHITEM_B__23_2_OFFSET UNITYSDK_OFFSET(0x173C7DB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotServeMenuPopWindowController___c_TypeDefinitionIndex = 52539;

	class UIActivityHotpotServeMenuPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_C1067BB4CC216C9A*, ::System::Int32>** StaticGet___9__23_2()
		{
			return (::System::Func_2<::Class_1_C1067BB4CC216C9A*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotpotServeMenuPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x309D0);
		}
		static ::MoleMole::UIActivityHotpotServeMenuPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityHotpotServeMenuPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotpotServeMenuPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x309D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSERVEMENUPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSERVEMENUPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshItem_b__23_2(::Class_1_C1067BB4CC216C9A* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_C1067BB4CC216C9A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSERVEMENUPOPWINDOWCONTROLLER___C__REFRESHITEM_B__23_2_OFFSET))(this, x);
		}
	};
}
