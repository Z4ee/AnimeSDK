#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYPHOTOPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D3EF60)
#define MOLEMOLE_UIMAINCITYPHOTOPOPWINDOWCONTROLLER___C__CLOSEUI_B__28_0_OFFSET UNITYSDK_OFFSET(0x14D3EFB0)
#define MOLEMOLE_UIMAINCITYPHOTOPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14D3EFA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityPhotoPopWindowController___c_TypeDefinitionIndex = 46640;

	class UIMainCityPhotoPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIMainCityPhotoPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIMainCityPhotoPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityPhotoPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x37FA0);
		}
		static ::System::Action** StaticGet___9__28_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityPhotoPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x37FA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPHOTOPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPHOTOPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _CloseUI_b__28_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPHOTOPOPWINDOWCONTROLLER___C__CLOSEUI_B__28_0_OFFSET))(this);
		}
	};
}
