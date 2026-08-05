#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIACTIVITYHOTPOTDELETECARDPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11DA5E40)
#define MOLEMOLE_UIACTIVITYHOTPOTDELETECARDPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11DA5E80)
#define MOLEMOLE_UIACTIVITYHOTPOTDELETECARDPOPWINDOWCONTROLLER___C__ONCONFIRMBTNCLICK_B__17_0_OFFSET UNITYSDK_OFFSET(0x11DA5E90)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotDeleteCardPopWindowController___c_TypeDefinitionIndex = 60271;

	class UIActivityHotPotDeleteCardPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Int32>** StaticGet___9__17_0()
		{
			return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotDeleteCardPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4FEA0);
		}
		static ::MoleMole::UIActivityHotPotDeleteCardPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityHotPotDeleteCardPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotDeleteCardPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4FEA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTDELETECARDPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTDELETECARDPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnConfirmBtnClick_b__17_0(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTDELETECARDPOPWINDOWCONTROLLER___C__ONCONFIRMBTNCLICK_B__17_0_OFFSET))(this, a, b);
		}
	};
}
