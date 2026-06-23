#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_17C17EA0873E8BE7.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class RawImage; }

#define PHOTOFRAME_CALTEXTURESIZEINPHOTOIMAGE_OFFSET UNITYSDK_OFFSET(0x19E33EA0)
#define PHOTOFRAME_GETPHOTOCANVASSIZE_OFFSET UNITYSDK_OFFSET(0x19E336D0)
#define PHOTOFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x19E33F40)

inline static constexpr unsigned int PhotoFrame_TypeDefinitionIndex = 55570;

class PhotoFrame : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::UI::RawImage* photoImage; // 0x18
	::UnityEngine::RectTransform* TotalScaleRoot; // 0x20
	::UnityEngine::RectTransform* PhotoEdgeCustomSize; // 0x28
	::UnityEngine::RectTransform* PhotoOuterEdgeCustomSize; // 0x30
	::UnityEngine::RectTransform* FrameOuterBackRoot; // 0x38
	::UnityEngine::RectTransform* FrameOuterFrontRoot; // 0x40
	::Enum_3_17C17EA0873E8BE7 SaveMode; // 0x48
	::UnityEngine::Vector2 m_RenderCanvasSize; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHOTOFRAME__CTOR_OFFSET))(this);
	}

	::System::ValueTuple_2<::UnityEngine::Vector2, ::System::Single> GetPhotoCanvasSize()
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector2, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + PHOTOFRAME_GETPHOTOCANVASSIZE_OFFSET))(this);
	}

	static ::UnityEngine::Vector2 CalTextureSizeInPhotoImage(::UnityEngine::Vector2 texSize, ::UnityEngine::Vector2 photoFixSize, ::System::Single photoAspectRatio)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + PHOTOFRAME_CALTEXTURESIZEINPHOTOIMAGE_OFFSET))(texSize, photoFixSize, photoAspectRatio);
	}
};
