#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviour.h"

namespace SRF::UI { class Style; }
namespace SRF::UI { class StyleRoot; }
namespace System { class String; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Selectable; }

#define SRF_UI_STYLECOMPONENT_APPLYSTYLE_OFFSET UNITYSDK_OFFSET(0x18475EE0)
#define SRF_UI_STYLECOMPONENT_GETSTYLEROOT_OFFSET UNITYSDK_OFFSET(0x18475C70)
#define SRF_UI_STYLECOMPONENT_GET_STYLEKEY_OFFSET UNITYSDK_OFFSET(0x18475990)
#define SRF_UI_STYLECOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18475C60)
#define SRF_UI_STYLECOMPONENT_REFRESH_OFFSET UNITYSDK_OFFSET(0x184759B0)
#define SRF_UI_STYLECOMPONENT_SET_STYLEKEY_OFFSET UNITYSDK_OFFSET(0x184759A0)
#define SRF_UI_STYLECOMPONENT_SRSTYLEDIRTY_OFFSET UNITYSDK_OFFSET(0x18476230)
#define SRF_UI_STYLECOMPONENT_START_OFFSET UNITYSDK_OFFSET(0x18475C40)
#define SRF_UI_STYLECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18476290)

namespace SRF::UI
{
	inline static constexpr unsigned int StyleComponent_TypeDefinitionIndex = 27684;

	class StyleComponent : public ::SRF::SRMonoBehaviour
	{
	public:
		::SRF::UI::Style* _activeStyle; // 0x48
		::SRF::UI::StyleRoot* _cachedRoot; // 0x50
		::UnityEngine::UI::Graphic* _graphic; // 0x58
		::System::Boolean _hasStarted; // 0x60
		::UnityEngine::UI::Image* _image; // 0x68
		::UnityEngine::UI::Selectable* _selectable; // 0x70
		::System::String* _styleKey; // 0x78
		::System::Boolean IgnoreImage; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_STYLECOMPONENT__CTOR_OFFSET))(this);
		}

		::System::String* get_StyleKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_STYLECOMPONENT_GET_STYLEKEY_OFFSET))(this);
		}

		::System::Void set_StyleKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRF_UI_STYLECOMPONENT_SET_STYLEKEY_OFFSET))(this, value);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_STYLECOMPONENT_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_STYLECOMPONENT_ONENABLE_OFFSET))(this);
		}

		::System::Void Refresh(::System::Boolean invalidateCache)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRF_UI_STYLECOMPONENT_REFRESH_OFFSET))(this, invalidateCache);
		}

		::SRF::UI::StyleRoot* GetStyleRoot()
		{
			return ((::SRF::UI::StyleRoot*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_STYLECOMPONENT_GETSTYLEROOT_OFFSET))(this);
		}

		::System::Void ApplyStyle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_STYLECOMPONENT_APPLYSTYLE_OFFSET))(this);
		}

		::System::Void SRStyleDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_STYLECOMPONENT_SRSTYLEDIRTY_OFFSET))(this);
		}
	};
}
