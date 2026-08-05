#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }

#define POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_COMPUTESHADER_OFFSET UNITYSDK_OFFSET(0x11091270)
#define POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_GLAREMATERIAL1_OFFSET UNITYSDK_OFFSET(0x110912D0)
#define POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_GLAREMATERIAL2_OFFSET UNITYSDK_OFFSET(0x110912E0)
#define POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_GLAREMATERIAL3_OFFSET UNITYSDK_OFFSET(0x110912F0)
#define POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_GLAREMATERIAL4_OFFSET UNITYSDK_OFFSET(0x11091300)
#define POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_LENSFLARECOLORRAMPDEFAULT_OFFSET UNITYSDK_OFFSET(0x11091200)
#define POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_LENSSURFACEDIFFRACTIONTEXTUREDEFAULT_OFFSET UNITYSDK_OFFSET(0x110911F0)
#define POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_LENSSURFACEDIRTTEXTUREDEFAULT_OFFSET UNITYSDK_OFFSET(0x110911E0)
#define POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_SELECTIVERENDERSHADER_OFFSET UNITYSDK_OFFSET(0x11091210)
#define POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_SM20SHADER_OFFSET UNITYSDK_OFFSET(0x11091220)
#define POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_SM25SHADER_OFFSET UNITYSDK_OFFSET(0x11091230)
#define POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_SM35SHADER_OFFSET UNITYSDK_OFFSET(0x11091240)
#define POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_SM40GEOMETRYSHADER_OFFSET UNITYSDK_OFFSET(0x11091260)
#define POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_SM45SHADER_OFFSET UNITYSDK_OFFSET(0x11091250)
#define POSTPROCESS_MKGLOW_MKGLOWRESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x11091310)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int MKGlowResources_TypeDefinitionIndex = 27453;

	class MKGlowResources : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::Texture2D* _lensSurfaceDirtTextureDefault; // 0x18
		::UnityEngine::Texture2D* _lensSurfaceDiffractionTextureDefault; // 0x20
		::UnityEngine::Texture2D* _lensFlareColorRampDefault; // 0x28
		::UnityEngine::Shader* _selectiveRenderShader; // 0x30
		::UnityEngine::Shader* _sm20Shader; // 0x38
		::UnityEngine::Shader* _sm25Shader; // 0x40
		::UnityEngine::Shader* _sm35Shader; // 0x48
		::UnityEngine::Shader* _sm45Shader; // 0x50
		::UnityEngine::Shader* _sm40GeometryShader; // 0x58
		::UnityEngine::ComputeShader* _computeShader; // 0x60
		::UnityEngine::ComputeShader* _computeShaderGles; // 0x68
		::UnityEngine::Material* glareMaterial1; // 0x70
		::UnityEngine::Material* glareMaterial2; // 0x78
		::UnityEngine::Material* glareMaterial3; // 0x80
		::UnityEngine::Material* glareMaterial4; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_MKGLOWRESOURCES__CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_lensSurfaceDirtTextureDefault()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_LENSSURFACEDIRTTEXTUREDEFAULT_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_lensSurfaceDiffractionTextureDefault()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_LENSSURFACEDIFFRACTIONTEXTUREDEFAULT_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_lensFlareColorRampDefault()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_LENSFLARECOLORRAMPDEFAULT_OFFSET))(this);
		}

		::UnityEngine::Shader* get_selectiveRenderShader()
		{
			return ((::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_SELECTIVERENDERSHADER_OFFSET))(this);
		}

		::UnityEngine::Shader* get_sm20Shader()
		{
			return ((::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_SM20SHADER_OFFSET))(this);
		}

		::UnityEngine::Shader* get_sm25Shader()
		{
			return ((::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_SM25SHADER_OFFSET))(this);
		}

		::UnityEngine::Shader* get_sm35Shader()
		{
			return ((::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_SM35SHADER_OFFSET))(this);
		}

		::UnityEngine::Shader* get_sm45Shader()
		{
			return ((::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_SM45SHADER_OFFSET))(this);
		}

		::UnityEngine::Shader* get_sm40GeometryShader()
		{
			return ((::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_SM40GEOMETRYSHADER_OFFSET))(this);
		}

		::UnityEngine::ComputeShader* get_computeShader()
		{
			return ((::UnityEngine::ComputeShader*(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_COMPUTESHADER_OFFSET))(this);
		}

		::UnityEngine::Material* get_GlareMaterial1()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_GLAREMATERIAL1_OFFSET))(this);
		}

		::UnityEngine::Material* get_GlareMaterial2()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_GLAREMATERIAL2_OFFSET))(this);
		}

		::UnityEngine::Material* get_GlareMaterial3()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_GLAREMATERIAL3_OFFSET))(this);
		}

		::UnityEngine::Material* get_GlareMaterial4()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_MKGLOWRESOURCES_GET_GLAREMATERIAL4_OFFSET))(this);
		}
	};
}
