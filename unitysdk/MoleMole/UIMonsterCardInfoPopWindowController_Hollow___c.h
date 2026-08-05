#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_HOLLOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E06ED0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_HOLLOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E06F10)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_HOLLOW___C__GETHOLLOWMONSTERIDLIST_B__1_0_OFFSET UNITYSDK_OFFSET(0x17E06F20)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterCardInfoPopWindowController_Hollow___c_TypeDefinitionIndex = 52952;

	class UIMonsterCardInfoPopWindowController_Hollow___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Int32>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIMonsterCardInfoPopWindowController_Hollow___c_TypeDefinitionIndex)->GetStaticField(0x42CF0);
		}
		static ::MoleMole::UIMonsterCardInfoPopWindowController_Hollow___c** StaticGet___9()
		{
			return (::MoleMole::UIMonsterCardInfoPopWindowController_Hollow___c**)Il2CppClass::FromTypeDefinitionIndex(UIMonsterCardInfoPopWindowController_Hollow___c_TypeDefinitionIndex)->GetStaticField(0x42CF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_HOLLOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_HOLLOW___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetHollowMonsterIDList_b__1_0(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_HOLLOW___C__GETHOLLOWMONSTERIDLIST_B__1_0_OFFSET))(this, x, y);
		}
	};
}
