#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A1DB058535A9061B.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::UI::Extension { class UIButtonEx; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_HIDE_OFFSET UNITYSDK_OFFSET(0x13850920)
#define MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_INIT_OFFSET UNITYSDK_OFFSET(0x138500B0)
#define MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_METHOD_5_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x13850150)
#define MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_METHOD_5_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0x13850400)
#define MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_SHOW_OFFSET UNITYSDK_OFFSET(0x138503B0)
#define MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x13850980)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGeneralWindowPlatformFuncWrapper_TypeDefinitionIndex = 80820;

	class MonoGeneralWindowPlatformFuncWrapper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Extension::UIButtonEx* ConsoleFakeSwitchPlatformBtn; // 0x18
		::UnityEngine::UI::Extension::UILocalizationText* ConsoleFakeSwitchPlatformBtnText; // 0x20
		::System::Boolean Field_5_0; // 0x28
		::Struct_2_A1DB058535A9061B Field_5_7; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::Struct_2_A1DB058535A9061B a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_A1DB058535A9061B))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_INIT_OFFSET))(this, a1);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_SHOW_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_HIDE_OFFSET))(this);
		}

		::System::Void Method_5_AB88190D695EBEA9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_METHOD_5_AB88190D695EBEA9_OFFSET))(this);
		}

		::System::Void Method_5_4389275F4099DE36()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_METHOD_5_4389275F4099DE36_OFFSET))(this);
		}
	};
}
