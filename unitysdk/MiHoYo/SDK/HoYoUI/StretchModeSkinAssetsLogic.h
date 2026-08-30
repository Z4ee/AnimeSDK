#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define MIHOYO_SDK_HOYOUI_STRETCHMODESKINASSETSLOGIC_APPLYSTRETCHTOBASESPRITE_OFFSET UNITYSDK_OFFSET(0xB2049E0)
#define MIHOYO_SDK_HOYOUI_STRETCHMODESKINASSETSLOGIC_APPLYSTRETCHTOOVERRIDESPRITE_OFFSET UNITYSDK_OFFSET(0xB204CA0)
#define MIHOYO_SDK_HOYOUI_STRETCHMODESKINASSETSLOGIC_CREATEHORIZONTALSTRETCHSPRITE_OFFSET UNITYSDK_OFFSET(0xB208D10)
#define MIHOYO_SDK_HOYOUI_STRETCHMODESKINASSETSLOGIC_ISINSTRETCHWHITELIST_OFFSET UNITYSDK_OFFSET(0xB208B40)
#define MIHOYO_SDK_HOYOUI_STRETCHMODESKINASSETSLOGIC__CCTOR_OFFSET UNITYSDK_OFFSET(0xB208F20)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int StretchModeSkinAssetsLogic_TypeDefinitionIndex = 47196;

	class StretchModeSkinAssetsLogic : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_StretchWhitelist()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StretchModeSkinAssetsLogic_TypeDefinitionIndex)->GetStaticField(0x48F00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_STRETCHMODESKINASSETSLOGIC__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsInStretchWhitelist(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_STRETCHMODESKINASSETSLOGIC_ISINSTRETCHWHITELIST_OFFSET))(a1);
		}

		static ::System::Void ApplyStretchToBaseSprite(::UnityEngine::UI::Image* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Image*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_STRETCHMODESKINASSETSLOGIC_APPLYSTRETCHTOBASESPRITE_OFFSET))(a1, a2);
		}

		static ::System::Void ApplyStretchToOverrideSprite(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_STRETCHMODESKINASSETSLOGIC_APPLYSTRETCHTOOVERRIDESPRITE_OFFSET))(a1);
		}

		static ::UnityEngine::Sprite* CreateHorizontalStretchSprite(::UnityEngine::Sprite* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::Sprite*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_STRETCHMODESKINASSETSLOGIC_CREATEHORIZONTALSTRETCHSPRITE_OFFSET))(a1, a2, a3);
		}
	};
}
