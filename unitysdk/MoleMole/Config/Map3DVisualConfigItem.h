#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Map3DColorBoxItem;
namespace MoleMole::Config { class Map3DFontItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_MAP3DVISUALCONFIGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x10D11DA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int Map3DVisualConfigItem_TypeDefinitionIndex = 40765;

	class Map3DVisualConfigItem : public ::System::Object
	{
	public:
		::System::String* mapKey; // 0x10
		::System::Boolean overrideGridParams; // 0x18
		::System::Single gridTilling; // 0x1C
		::UnityEngine::Vector2 gridOffset; // 0x20
		::UnityEngine::Vector4 circleOffset; // 0x28
		::System::Collections::Generic::List_1<::Map3DColorBoxItem*>* m_ColorBoxItems; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::Config::Map3DFontItem*>* m_FontItems; // 0x40
		::System::Single groundRotate; // 0x48
		::UnityEngine::Vector2 groundXZOffset; // 0x4C
		::System::Boolean fontRotateWithGround; // 0x54
		::UnityEngine::Vector2 fontXZOffset; // 0x58
		::System::Single fontSelfRotateAngle; // 0x60
		::System::Boolean overrideGroundPosition; // 0x64
		::System::Single groundOffset; // 0x68
		::UnityEngine::Vector3 lightEulerAngle; // 0x6C
		::UnityEngine::Vector4 cascadeShadowSplitValue; // 0x78
		::UnityEngine::Vector4 outlineWithInnerMaxMinOuterMaxMin; // 0x88
		::System::Boolean disablePostOutline; // 0x98
		::UnityEngine::Color outlineColor; // 0x9C
		::System::Single outlineWidth; // 0xAC
		::System::Boolean enableFarOutlineFix; // 0xB0
		::System::Boolean characterArrayDisableOcclusionHighLight; // 0xB1
		::System::Single characterOcclusionDitherAlpha; // 0xB4
		::System::Single layerClipYOffset; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAP3DVISUALCONFIGITEM__CTOR_OFFSET))(this);
		}
	};
}
