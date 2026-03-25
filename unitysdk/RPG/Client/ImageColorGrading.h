#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_IMAGECOLORGRADING_GETMATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0x9937720)
#define RPG_CLIENT_IMAGECOLORGRADING_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0x9937670)
#define RPG_CLIENT_IMAGECOLORGRADING_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9937F70)
#define RPG_CLIENT_IMAGECOLORGRADING_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9937FD0)
#define RPG_CLIENT_IMAGECOLORGRADING_UPDATE_OFFSET UNITYSDK_OFFSET(0x9937D10)
#define RPG_CLIENT_IMAGECOLORGRADING__CTOR_OFFSET UNITYSDK_OFFSET(0x9938020)
#define RPG_CLIENT_IMAGECOLORGRADING___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x99380A0)
#define RPG_CLIENT_IMAGECOLORGRADING___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x99380B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ImageColorGrading_TypeDefinitionIndex = 59449;

	class ImageColorGrading : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::System::Int32 _ColorGradingID; // 0x18
		::System::Int32 _SaturationID; // 0x1C
		::System::Int32 _BrightnessID; // 0x20
		::System::Int32 _ContrastID; // 0x24
		::System::Int32 _TintGradingID; // 0x28
		::System::Single _Saturation; // 0x2C
		::System::Single _Brightness; // 0x30
		::System::Single _Contrast; // 0x34
		::UnityEngine::Color _TintGrading; // 0x38
		::UnityEngine::UI::Image* _image; // 0x48
		::UnityEngine::Material* _MaterialInstance; // 0x50
		::UnityEngine::Material* _MaterialForRendering; // 0x58
		::System::Single Saturation; // 0x60
		::System::Single Brightness; // 0x64
		::System::Single Contrast; // 0x68
		::UnityEngine::Color TintGrading; // 0x6C
		::System::Boolean AlwaysUpdateColor; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGECOLORGRADING__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_image()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGECOLORGRADING_GET_IMAGE_OFFSET))(this);
		}

		::UnityEngine::Material* GetMaterialForRendering()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGECOLORGRADING_GETMATERIALFORRENDERING_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGECOLORGRADING_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGECOLORGRADING_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGECOLORGRADING_ONDISABLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGECOLORGRADING___IFIXBASEPROXY_ONDESTROY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGECOLORGRADING___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
		}
	};
}
