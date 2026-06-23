#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x176008B0)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x176008F0)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER___C__ONCLICKADDWISHLISTBTN_B__14_1_OFFSET UNITYSDK_OFFSET(0x17600910)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER___C__ONCLICKADDWISHLISTBTN_B__14_3_OFFSET UNITYSDK_OFFSET(0x17600920)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER___C__OPENBANGKOVITEMINFOFROMWISHLISTICON_B__10_1_OFFSET UNITYSDK_OFFSET(0x17600900)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangKovHandInPopWindowController___c_TypeDefinitionIndex = 58998;

	class UIBangKovHandInPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBangKovHandInPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangKovHandInPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangKovHandInPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x41340);
		}
		static ::System::Action** StaticGet___9__14_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBangKovHandInPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x41348);
		}
		static ::System::Action** StaticGet___9__14_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBangKovHandInPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x41350);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__10_1()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIBangKovHandInPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x41358);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OpenBangkovItemInfoFromWishlistIcon_b__10_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER___C__OPENBANGKOVITEMINFOFROMWISHLISTICON_B__10_1_OFFSET))(this);
		}

		::System::Void _OnClickAddWishListBtn_b__14_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER___C__ONCLICKADDWISHLISTBTN_B__14_1_OFFSET))(this);
		}

		::System::Void _OnClickAddWishListBtn_b__14_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER___C__ONCLICKADDWISHLISTBTN_B__14_3_OFFSET))(this);
		}
	};
}
