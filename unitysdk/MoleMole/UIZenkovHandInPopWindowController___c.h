#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x140FED90)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x140FEDD0)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___C__ONCLICKADDWISHLISTBTN_B__14_1_OFFSET UNITYSDK_OFFSET(0x140FEDE0)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___C__ONCLICKADDWISHLISTBTN_B__14_3_OFFSET UNITYSDK_OFFSET(0x140FEDF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovHandInPopWindowController___c_TypeDefinitionIndex = 58006;

	class UIZenkovHandInPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIZenkovHandInPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIZenkovHandInPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovHandInPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4AF70);
		}
		static ::System::Action** StaticGet___9__14_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovHandInPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4AF78);
		}
		static ::System::Action** StaticGet___9__14_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovHandInPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4AF80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickAddWishListBtn_b__14_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___C__ONCLICKADDWISHLISTBTN_B__14_1_OFFSET))(this);
		}

		::System::Void _OnClickAddWishListBtn_b__14_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___C__ONCLICKADDWISHLISTBTN_B__14_3_OFFSET))(this);
		}
	};
}
