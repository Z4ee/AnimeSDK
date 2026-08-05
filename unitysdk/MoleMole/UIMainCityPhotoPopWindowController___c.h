#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYPHOTOPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16520820)
#define MOLEMOLE_UIMAINCITYPHOTOPOPWINDOWCONTROLLER___C__CLOSEUI_B__28_0_OFFSET UNITYSDK_OFFSET(0x16520870)
#define MOLEMOLE_UIMAINCITYPHOTOPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16520860)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityPhotoPopWindowController___c_TypeDefinitionIndex = 86795;

	class UIMainCityPhotoPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__28_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityPhotoPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3D270);
		}
		static ::MoleMole::UIMainCityPhotoPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIMainCityPhotoPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityPhotoPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3D278);
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
