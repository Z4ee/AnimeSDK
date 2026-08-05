#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A1E5B0)
#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__CREATESPECIALGESTURECONTEXTDATA_B__93_0_OFFSET UNITYSDK_OFFSET(0x18A1E610)
#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18A1E5F0)
#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__FULLSCREENBTNBOTTOMCALLBACK_B__123_0_OFFSET UNITYSDK_OFFSET(0x18A1E8E0)
#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__HIDEBOTTOMTIPS_B__47_0_OFFSET UNITYSDK_OFFSET(0x18A1E600)
#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__INITSTICKERSHOWMODULE_B__108_0_OFFSET UNITYSDK_OFFSET(0x18A1E6D0)
#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__INITSTICKERSHOWMODULE_B__108_1_OFFSET UNITYSDK_OFFSET(0x18A1E7F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityCameraControlChildWindowController___c_TypeDefinitionIndex = 48625;

	class UIMainCityCameraControlChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__123_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityCameraControlChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4EC00);
		}
		static ::System::Action** StaticGet___9__47_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityCameraControlChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4EC08);
		}
		static ::MoleMole::UIMainCityCameraControlChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIMainCityCameraControlChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityCameraControlChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4EC10);
		}
		static ::System::Func_1<::System::String*>** StaticGet___9__108_0()
		{
			return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityCameraControlChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4EC18);
		}
		static ::System::Func_1<::System::String*>** StaticGet___9__108_1()
		{
			return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityCameraControlChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4EC20);
		}
		static ::System::Func_1<::System::Int32>** StaticGet___9__93_0()
		{
			return (::System::Func_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityCameraControlChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4EC28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _HideBottomTips_b__47_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__HIDEBOTTOMTIPS_B__47_0_OFFSET))(this);
		}

		::System::Int32 _CreateSpecialGestureContextData_b__93_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__CREATESPECIALGESTURECONTEXTDATA_B__93_0_OFFSET))(this);
		}

		::System::String* _InitStickerShowModule_b__108_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__INITSTICKERSHOWMODULE_B__108_0_OFFSET))(this);
		}

		::System::String* _InitStickerShowModule_b__108_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__INITSTICKERSHOWMODULE_B__108_1_OFFSET))(this);
		}

		::System::Void _FullScreenBtnBottomCallback_b__123_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__FULLSCREENBTNBOTTOMCALLBACK_B__123_0_OFFSET))(this);
		}
	};
}
