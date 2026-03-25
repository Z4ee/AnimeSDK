#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/RawImage.h"

namespace RPG::Client { class PhotoGraphFilterConfig; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_AWAKE_OFFSET UNITYSDK_OFFSET(0x9F44830)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x9F451F0)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x9F45270)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0x9F44950)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_INITWITHFILTERCONFIG_OFFSET UNITYSDK_OFFSET(0x9F44E60)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9F448C0)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_RESETFILTER_OFFSET UNITYSDK_OFFSET(0x9F44A00)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_SETFILTERALPHA_OFFSET UNITYSDK_OFFSET(0x9F44DC0)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_SETFILTERLUT_OFFSET UNITYSDK_OFFSET(0x9F44D30)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x9F449B0)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F45380)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x9F452F0)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x9F45470)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE___IFIXBASEPROXY_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x9F454D0)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE___IFIXBASEPROXY_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0x9F454C0)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9F45480)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphFilterImage_TypeDefinitionIndex = 56752;

	class PhotoGraphFilterImage : public ::UnityEngine::UI::RawImage
	{
	public:
		static ::System::Int32* StaticGet__ShaderID_Contrast()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphFilterImage_TypeDefinitionIndex)->GetStaticField(0x12380);
		}
		static ::System::Int32* StaticGet__ShaderID_Brightness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphFilterImage_TypeDefinitionIndex)->GetStaticField(0x12384);
		}
		static ::System::Int32* StaticGet__ShaderID_ColorizeEnable()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphFilterImage_TypeDefinitionIndex)->GetStaticField(0x12388);
		}
		static ::System::Int32* StaticGet__ShaderID_SaturationColorize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphFilterImage_TypeDefinitionIndex)->GetStaticField(0x1238C);
		}
		static ::System::Int32* StaticGet__ShaderID_HueColorize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphFilterImage_TypeDefinitionIndex)->GetStaticField(0x12390);
		}
		static ::System::Int32* StaticGet__ShaderID_Saturation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphFilterImage_TypeDefinitionIndex)->GetStaticField(0x12394);
		}
		static ::System::Int32* StaticGet__ShaderID_Hue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphFilterImage_TypeDefinitionIndex)->GetStaticField(0x12398);
		}
		static ::System::Int32* StaticGet__ShaderID_Lightness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphFilterImage_TypeDefinitionIndex)->GetStaticField(0x1239C);
		}
		static ::System::Int32* StaticGet__ShaderID_FilterIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphFilterImage_TypeDefinitionIndex)->GetStaticField(0x123A0);
		}
		static ::System::Int32* StaticGet__ShaderID_LUT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphFilterImage_TypeDefinitionIndex)->GetStaticField(0x123A4);
		}
		static ::System::Int32* StaticGet__ShaderID_LUTEnable()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphFilterImage_TypeDefinitionIndex)->GetStaticField(0x123A8);
		}
		static ::System::Int32* StaticGet__ShaderID_LightnessColorize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphFilterImage_TypeDefinitionIndex)->GetStaticField(0x123AC);
		}
		::System::Boolean IsChangedAfterSave; // 0x108
		::UnityEngine::Material* _MaterialInstance; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::Material* get_materialForRendering()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_GET_MATERIALFORRENDERING_OFFSET))(this);
		}

		::System::Void SetTexture(::UnityEngine::Texture* img)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_SETTEXTURE_OFFSET))(this, img);
		}

		::System::Void ResetFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_RESETFILTER_OFFSET))(this);
		}

		::System::Void InitWithFilterConfig(::RPG::Client::PhotoGraphFilterConfig* filterConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphFilterConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_INITWITHFILTERCONFIG_OFFSET))(this, filterConfig);
		}

		::System::Void SetFilterLUT(::UnityEngine::Texture* tex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_SETFILTERLUT_OFFSET))(this, tex);
		}

		::System::Void SetFilterAlpha(::System::Single intensity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_SETFILTERALPHA_OFFSET))(this, intensity);
		}

		::UnityEngine::RenderTexture* GetTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_GETTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE___IFIXBASEPROXY_AWAKE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE___IFIXBASEPROXY_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::Material* __iFixBaseProxy_get_materialForRendering()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE___IFIXBASEPROXY_GET_MATERIALFORRENDERING_OFFSET))(this);
		}

		::UnityEngine::Texture* __iFixBaseProxy_get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE___IFIXBASEPROXY_GET_MAINTEXTURE_OFFSET))(this);
		}
	};
}
