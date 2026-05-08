#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIACTIVITYHOTPOTCARDSELECTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15613F10)
#define MOLEMOLE_UIACTIVITYHOTPOTCARDSELECTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15613F50)
#define MOLEMOLE_UIACTIVITYHOTPOTCARDSELECTPOPWINDOWCONTROLLER___C__GACHAANDSHOW_B__25_0_OFFSET UNITYSDK_OFFSET(0x15613F70)
#define MOLEMOLE_UIACTIVITYHOTPOTCARDSELECTPOPWINDOWCONTROLLER___C__GACHAANDSHOW_B__25_2_OFFSET UNITYSDK_OFFSET(0x15613F60)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotCardSelectPopWindowController___c_TypeDefinitionIndex = 53698;

	class UIActivityHotPotCardSelectPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::UInt32>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotCardSelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x325B0);
		}
		static ::MoleMole::UIActivityHotPotCardSelectPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityHotPotCardSelectPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotCardSelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x325B8);
		}
		static ::System::Func_2<::System::Int32, ::System::UInt32>** StaticGet___9__25_2()
		{
			return (::System::Func_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotCardSelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x325C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCARDSELECTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCARDSELECTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GachaAndShow_b__25_2(::System::Int32 x)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCARDSELECTPOPWINDOWCONTROLLER___C__GACHAANDSHOW_B__25_2_OFFSET))(this, x);
		}

		::System::UInt32 _GachaAndShow_b__25_0(::System::Int32 x)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCARDSELECTPOPWINDOWCONTROLLER___C__GACHAANDSHOW_B__25_0_OFFSET))(this, x);
		}
	};
}
