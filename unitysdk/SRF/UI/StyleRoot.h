#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviour.h"

namespace SRF::UI { class Style; }
namespace SRF::UI { class StyleSheet; }
namespace System { class String; }

#define SRF_UI_STYLEROOT_GETSTYLE_OFFSET UNITYSDK_OFFSET(0x1AD27A50)
#define SRF_UI_STYLEROOT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1AD280D0)
#define SRF_UI_STYLEROOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1AD28010)
#define SRF_UI_STYLEROOT_ONSTYLESHEETCHANGED_OFFSET UNITYSDK_OFFSET(0x1AD28080)
#define SRF_UI_STYLEROOT_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1AD281B0)
#define SRF_UI_STYLEROOT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AD28120)
#define SRF_UI_STYLEROOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD281C0)

namespace SRF::UI
{
	inline static constexpr unsigned int StyleRoot_TypeDefinitionIndex = 33591;

	class StyleRoot : public ::SRF::SRMonoBehaviour
	{
	public:
		::SRF::UI::StyleSheet* _activeStyleSheet; // 0x48
		::SRF::UI::StyleSheet* StyleSheet; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_STYLEROOT__CTOR_OFFSET))(this);
		}

		::SRF::UI::Style* GetStyle(::System::String* a1)
		{
			return ((::SRF::UI::Style*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRF_UI_STYLEROOT_GETSTYLE_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_STYLEROOT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_STYLEROOT_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_STYLEROOT_UPDATE_OFFSET))(this);
		}

		::System::Void OnStyleSheetChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_STYLEROOT_ONSTYLESHEETCHANGED_OFFSET))(this);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_STYLEROOT_SETDIRTY_OFFSET))(this);
		}
	};
}
