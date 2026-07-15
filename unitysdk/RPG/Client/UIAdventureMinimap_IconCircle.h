#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_UIADVENTUREMINIMAP_ICONCIRCLE_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0x1700D930)
#define RPG_CLIENT_UIADVENTUREMINIMAP_ICONCIRCLE_SETRADIUS_OFFSET UNITYSDK_OFFSET(0x17009710)
#define RPG_CLIENT_UIADVENTUREMINIMAP_ICONCIRCLE_SET_IMAGE_OFFSET UNITYSDK_OFFSET(0x1700D940)
#define RPG_CLIENT_UIADVENTUREMINIMAP_ICONCIRCLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1700BB40)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdventureMinimap_IconCircle_TypeDefinitionIndex = 65990;

	class UIAdventureMinimap_IconCircle : public ::System::Object
	{
	public:
		// static const ::System::Single CIRCLE_FILL_RATIO; // 0x0
		::UnityEngine::UI::Image* _Image_k__BackingField; // 0x10
		::System::Single _Radius; // 0x18

		::System::Void _ctor(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP_ICONCIRCLE__CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Image* get_Image()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP_ICONCIRCLE_GET_IMAGE_OFFSET))(this);
		}

		::System::Void set_Image(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP_ICONCIRCLE_SET_IMAGE_OFFSET))(this, a1);
		}

		::System::Void SetRadius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP_ICONCIRCLE_SETRADIUS_OFFSET))(this, a1);
		}
	};
}
