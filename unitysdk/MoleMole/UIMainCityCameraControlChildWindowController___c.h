#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13DCC6A0)
#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13DCC6E0)
#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__FULLSCREENBTNBOTTOMCALLBACK_B__78_0_OFFSET UNITYSDK_OFFSET(0x13DCC910)
#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__HIDEBOTTOMTIPS_B__44_0_OFFSET UNITYSDK_OFFSET(0x13DCC6F0)
#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__INITSTICKERSHOWMODULE_B__63_0_OFFSET UNITYSDK_OFFSET(0x13DCC700)
#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__INITSTICKERSHOWMODULE_B__63_1_OFFSET UNITYSDK_OFFSET(0x13DCC820)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityCameraControlChildWindowController___c_TypeDefinitionIndex = 82601;

	class UIMainCityCameraControlChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::String*>** StaticGet___9__63_0()
		{
			return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityCameraControlChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x46BA0);
		}
		static ::System::Action** StaticGet___9__44_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityCameraControlChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x46BA8);
		}
		static ::System::Action** StaticGet___9__78_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityCameraControlChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x46BB0);
		}
		static ::System::Func_1<::System::String*>** StaticGet___9__63_1()
		{
			return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityCameraControlChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x46BB8);
		}
		static ::MoleMole::UIMainCityCameraControlChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIMainCityCameraControlChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityCameraControlChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x46BC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _HideBottomTips_b__44_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__HIDEBOTTOMTIPS_B__44_0_OFFSET))(this);
		}

		::System::String* _InitStickerShowModule_b__63_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__INITSTICKERSHOWMODULE_B__63_0_OFFSET))(this);
		}

		::System::String* _InitStickerShowModule_b__63_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__INITSTICKERSHOWMODULE_B__63_1_OFFSET))(this);
		}

		::System::Void _FullScreenBtnBottomCallback_b__78_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__FULLSCREENBTNBOTTOMCALLBACK_B__78_0_OFFSET))(this);
		}
	};
}
