#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_IMAGECOLORGRADINGSCANLINE_GETMATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0xD3EC660)
#define RPG_CLIENT_IMAGECOLORGRADINGSCANLINE_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0xD3EC590)
#define RPG_CLIENT_IMAGECOLORGRADINGSCANLINE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD3ECD40)
#define RPG_CLIENT_IMAGECOLORGRADINGSCANLINE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD3ED050)
#define RPG_CLIENT_IMAGECOLORGRADINGSCANLINE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD3ED0B0)
#define RPG_CLIENT_IMAGECOLORGRADINGSCANLINE__CTOR_OFFSET UNITYSDK_OFFSET(0xD3ED100)

namespace RPG::Client
{
	inline static constexpr unsigned int ImageColorGradingScanline_TypeDefinitionIndex = 71012;

	class ImageColorGradingScanline : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::System::Int32 BKNNKHOOOON; // 0x18
		::System::Int32 DIGEEOONANB; // 0x1C
		::System::Int32 LIIMONBKCAD; // 0x20
		::System::Int32 BMGBLBFBJML; // 0x24
		::System::Int32 MKHAGPIIEFK; // 0x28
		::System::Int32 HPOAAPBILHA; // 0x2C
		::System::Int32 IABNFHNFOKC; // 0x30
		::System::Int32 NCENFKLKDGJ; // 0x34
		::System::Int32 PCOJAPFAPEN; // 0x38
		::System::Int32 NLOADHCOFDF; // 0x3C
		::System::Int32 GNEKFIJBPDP; // 0x40
		::System::Int32 GDNOLNJOBGG; // 0x44
		::System::Int32 BPNJEBGHBEE; // 0x48
		::System::Int32 CJENCHINABE; // 0x4C
		::System::Int32 JKIDIJOJBKC; // 0x50
		::UnityEngine::UI::Image* JGPEHEDMCMJ; // 0x58
		::UnityEngine::Material* FAALBBDOFIL; // 0x60
		::UnityEngine::Material* KLAEOKPPDHD; // 0x68
		::UnityEngine::Shader* defaultShader; // 0x70
		::System::Single Saturation; // 0x78
		::System::Single Brightness; // 0x7C
		::System::Single Contrast; // 0x80
		::UnityEngine::Color TintGrading; // 0x84
		::UnityEngine::Texture2D* ScanlineTex; // 0x98
		::UnityEngine::Color ScanlineTint; // 0xA0
		::UnityEngine::Vector4 ScanlineTexST; // 0xB0
		::UnityEngine::Vector4 ScanlineTexSTRuntime; // 0xC0
		::UnityEngine::Vector2 ScanlineMoveSpeed; // 0xD0
		::System::Single ScanlineRotateDegree; // 0xD8
		::System::Single ScanlineStrength; // 0xDC
		::System::Int32 ScanlineClipType; // 0xE0
		::System::Single ScanlineClipAlpha; // 0xE4
		::System::Single ScanlineRemainAlpha; // 0xE8
		::UnityEngine::Material* defaultMaterial; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGECOLORGRADINGSCANLINE__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_image()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGECOLORGRADINGSCANLINE_GET_IMAGE_OFFSET))(this);
		}

		::UnityEngine::Material* GetMaterialForRendering()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGECOLORGRADINGSCANLINE_GETMATERIALFORRENDERING_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGECOLORGRADINGSCANLINE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGECOLORGRADINGSCANLINE_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGECOLORGRADINGSCANLINE_ONDISABLE_OFFSET))(this);
		}
	};
}
