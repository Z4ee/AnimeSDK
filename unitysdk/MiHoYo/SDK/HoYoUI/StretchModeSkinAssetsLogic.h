#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define MIHOYO_SDK_HOYOUI_STRETCHMODESKINASSETSLOGIC_APPLYSTRETCHTOBASESPRITE_OFFSET UNITYSDK_OFFSET(0x1ADF2E10)
#define MIHOYO_SDK_HOYOUI_STRETCHMODESKINASSETSLOGIC_APPLYSTRETCHTOOVERRIDESPRITE_OFFSET UNITYSDK_OFFSET(0x1ADF36E0)
#define MIHOYO_SDK_HOYOUI_STRETCHMODESKINASSETSLOGIC_CREATEHORIZONTALSTRETCHSPRITE_OFFSET UNITYSDK_OFFSET(0x1ADF3350)
#define MIHOYO_SDK_HOYOUI_STRETCHMODESKINASSETSLOGIC_ISINSTRETCHWHITELIST_OFFSET UNITYSDK_OFFSET(0x1ADF2C60)
#define MIHOYO_SDK_HOYOUI_STRETCHMODESKINASSETSLOGIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADF3B60)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int StretchModeSkinAssetsLogic_TypeDefinitionIndex = 37104;

	class StretchModeSkinAssetsLogic : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_StretchWhitelist()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StretchModeSkinAssetsLogic_TypeDefinitionIndex)->GetStaticField(0x28760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_STRETCHMODESKINASSETSLOGIC__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsInStretchWhitelist(::System::String* spriteKey)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_STRETCHMODESKINASSETSLOGIC_ISINSTRETCHWHITELIST_OFFSET))(spriteKey);
		}

		static ::System::Void ApplyStretchToBaseSprite(::UnityEngine::UI::Image* image, ::System::Boolean forceLayout)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Image*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_STRETCHMODESKINASSETSLOGIC_APPLYSTRETCHTOBASESPRITE_OFFSET))(image, forceLayout);
		}

		static ::System::Void ApplyStretchToOverrideSprite(::UnityEngine::UI::Image* image)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_STRETCHMODESKINASSETSLOGIC_APPLYSTRETCHTOOVERRIDESPRITE_OFFSET))(image);
		}

		static ::UnityEngine::Sprite* CreateHorizontalStretchSprite(::UnityEngine::Sprite* source, ::System::Single renderHeight, ::System::Single canvasRefPPU)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::Sprite*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_STRETCHMODESKINASSETSLOGIC_CREATEHORIZONTALSTRETCHSPRITE_OFFSET))(source, renderHeight, canvasRefPPU);
		}
	};
}
