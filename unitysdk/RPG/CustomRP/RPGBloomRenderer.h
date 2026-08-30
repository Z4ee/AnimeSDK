#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPPostprocessSubPass2.h"
#include "unitysdk/RPG/CustomRP/RTIDHandle.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::CustomRP { class GaussianFilterKernel; }
namespace RPG::CustomRP { class MaterialLibrary; }
namespace RPG::CustomRP { class RPGBloom; }
namespace RPG::CustomRP { class RPGBloomRenderer_Pyramid; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_RPGBLOOMRENDERER_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1C6B78B0)
#define RPG_CUSTOMRP_RPGBLOOMRENDERER_INITPYRAMIDS_OFFSET UNITYSDK_OFFSET(0x1C6B7B40)
#define RPG_CUSTOMRP_RPGBLOOMRENDERER_INITUVTRANSANDCLAMP_OFFSET UNITYSDK_OFFSET(0x1C6BA550)
#define RPG_CUSTOMRP_RPGBLOOMRENDERER_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x1C6B7A60)
#define RPG_CUSTOMRP_RPGBLOOMRENDERER_RENDER_ATLASMODE_OFFSET UNITYSDK_OFFSET(0x1C6B8350)
#define RPG_CUSTOMRP_RPGBLOOMRENDERER_RENDER_EXTRACTBRIGHTNESS_OFFSET UNITYSDK_OFFSET(0x1C6BA670)
#define RPG_CUSTOMRP_RPGBLOOMRENDERER_RENDER_TEXTUREMODE_OFFSET UNITYSDK_OFFSET(0x1C6BB260)
#define RPG_CUSTOMRP_RPGBLOOMRENDERER_SETUPBLOOMTEX_OFFSET UNITYSDK_OFFSET(0x1C6B7930)
#define RPG_CUSTOMRP_RPGBLOOMRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6B71E0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGBloomRenderer_TypeDefinitionIndex = 37106;

	class RPGBloomRenderer : public ::RPG::CustomRP::CRPPostprocessSubPass2
	{
	public:
		// static const ::System::Int32 PyramidSize = 0x4; // 0x0
		// static const ::System::Int32 GaussArraySize = 0x20; // 0x0
		::RPG::CustomRP::GaussianFilterKernel* m_GaussianFilterKernel; // 0x28
		::UnityEngine::MaterialPropertyBlock* m_UberSheet; // 0x30
		::Il2CppArray<::RPG::CustomRP::RPGBloomRenderer_Pyramid*>* m_Pyramids; // 0x38
		::Il2CppArray<::UnityEngine::Vector4>* m_UVTrans; // 0x40
		::UnityEngine::Material* m_UberMat; // 0x48
		::Il2CppArray<::UnityEngine::Vector4>* m_UVClamp; // 0x50
		::Il2CppArray<::RPG::CustomRP::RTIDHandle>* _BrightnessTex; // 0x58
		::RPG::CustomRP::RTIDHandle _BloomAtlasTexTmp; // 0x60
		::RPG::CustomRP::RTIDHandle _BloomAtlasTex; // 0x98
		::System::Int32 m_BrightIndex; // 0xD0

		::System::Void _ctor(::RPG::CustomRP::MaterialLibrary* a1, ::UnityEngine::MaterialPropertyBlock* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::MaterialLibrary*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGBLOOMRENDERER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGBLOOMRENDERER_FRAMECLEANUP_OFFSET))(this, a1);
		}

		::System::Void SetupBloomTex(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGBLOOMRENDERER_SETUPBLOOMTEX_OFFSET))(this, a1);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGBLOOMRENDERER_INNEREXECUTE_OFFSET))(this, a1);
		}

		::System::Void InitPyramids(::RPG::CustomRP::RPGBloom* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGBloom*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGBLOOMRENDERER_INITPYRAMIDS_OFFSET))(this, a1);
		}

		::System::Void InitUVTransAndClamp(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGBLOOMRENDERER_INITUVTRANSANDCLAMP_OFFSET))(this, a1, a2);
		}

		::System::Void Render_ExtractBrightness(::UnityEngine::Rendering::CommandBuffer* a1, ::RPG::CustomRP::RPGBloom* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RPGBloom*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGBLOOMRENDERER_RENDER_EXTRACTBRIGHTNESS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Render_TextureMode(::UnityEngine::Rendering::CommandBuffer* a1, ::RPG::CustomRP::RPGBloom* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RPGBloom*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGBLOOMRENDERER_RENDER_TEXTUREMODE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Render_AtlasMode(::UnityEngine::Rendering::CommandBuffer* a1, ::RPG::CustomRP::RPGBloom* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RPGBloom*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGBLOOMRENDERER_RENDER_ATLASMODE_OFFSET))(this, a1, a2, a3);
		}
	};
}
