#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_55E8B218694388DC.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::UI::Extension { class UIButtonEx; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_HIDE_OFFSET UNITYSDK_OFFSET(0x1605CBF0)
#define MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_INIT_OFFSET UNITYSDK_OFFSET(0x1605C360)
#define MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_METHOD_5_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x1605C400)
#define MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_METHOD_5_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x1605C6B0)
#define MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_SHOW_OFFSET UNITYSDK_OFFSET(0x1605C660)
#define MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1605CC50)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGeneralWindowPlatformFuncWrapper_TypeDefinitionIndex = 58280;

	class MonoGeneralWindowPlatformFuncWrapper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Extension::UIButtonEx* ConsoleFakeSwitchPlatformBtn; // 0x18
		::UnityEngine::UI::Extension::UILocalizationText* ConsoleFakeSwitchPlatformBtnText; // 0x20
		::System::Boolean Field_5_2; // 0x28
		::Struct_2_55E8B218694388DC Field_5_3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::Struct_2_55E8B218694388DC a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_55E8B218694388DC))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_INIT_OFFSET))(this, a1);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_SHOW_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_HIDE_OFFSET))(this);
		}

		::System::Void Method_5_D109CE569415FA03()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_METHOD_5_D109CE569415FA03_OFFSET))(this);
		}

		::System::Void Method_5_4389275F4099DE36()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_METHOD_5_4389275F4099DE36_OFFSET))(this);
		}
	};
}
