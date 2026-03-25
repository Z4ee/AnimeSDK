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

#define RPG_CUSTOMRP_RPGBLOOMRENDERER_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x16AA7D50)
#define RPG_CUSTOMRP_RPGBLOOMRENDERER_INITPYRAMIDS_OFFSET UNITYSDK_OFFSET(0x16AA8020)
#define RPG_CUSTOMRP_RPGBLOOMRENDERER_INITUVTRANSANDCLAMP_OFFSET UNITYSDK_OFFSET(0x16AAAC90)
#define RPG_CUSTOMRP_RPGBLOOMRENDERER_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x16AA7F40)
#define RPG_CUSTOMRP_RPGBLOOMRENDERER_RENDER_ATLASMODE_OFFSET UNITYSDK_OFFSET(0x16AA8910)
#define RPG_CUSTOMRP_RPGBLOOMRENDERER_RENDER_EXTRACTBRIGHTNESS_OFFSET UNITYSDK_OFFSET(0x16AAADF0)
#define RPG_CUSTOMRP_RPGBLOOMRENDERER_RENDER_TEXTUREMODE_OFFSET UNITYSDK_OFFSET(0x16AAB850)
#define RPG_CUSTOMRP_RPGBLOOMRENDERER_SETUPBLOOMTEX_OFFSET UNITYSDK_OFFSET(0x16AA7DE0)
#define RPG_CUSTOMRP_RPGBLOOMRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA7620)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGBloomRenderer_TypeDefinitionIndex = 29398;

	class RPGBloomRenderer : public ::RPG::CustomRP::CRPPostprocessSubPass2
	{
	public:
		// static const ::System::Int32 PyramidSize = 0x4; // 0x0
		// static const ::System::Int32 GaussArraySize = 0x20; // 0x0
		::Il2CppArray<::RPG::CustomRP::RPGBloomRenderer_Pyramid*>* m_Pyramids; // 0x28
		::Il2CppArray<::UnityEngine::Vector4>* m_UVClamp; // 0x30
		::UnityEngine::Material* m_UberMat; // 0x38
		::RPG::CustomRP::GaussianFilterKernel* m_GaussianFilterKernel; // 0x40
		::Il2CppArray<::UnityEngine::Vector4>* m_UVTrans; // 0x48
		::UnityEngine::MaterialPropertyBlock* m_UberSheet; // 0x50
		::Il2CppArray<::RPG::CustomRP::RTIDHandle>* _BrightnessTex; // 0x58
		::RPG::CustomRP::RTIDHandle _BloomAtlasTexTmp; // 0x60
		::System::Int32 m_BrightIndex; // 0x98
		::RPG::CustomRP::RTIDHandle _BloomAtlasTex; // 0xA0

		::System::Void _ctor(::RPG::CustomRP::MaterialLibrary* matLib, ::UnityEngine::MaterialPropertyBlock* uberSheet)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::MaterialLibrary*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGBLOOMRENDERER__CTOR_OFFSET))(this, matLib, uberSheet);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGBLOOMRENDERER_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void SetupBloomTex(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGBLOOMRENDERER_SETUPBLOOMTEX_OFFSET))(this, cmd);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGBLOOMRENDERER_INNEREXECUTE_OFFSET))(this, cmd);
		}

		::System::Void InitPyramids(::RPG::CustomRP::RPGBloom* settings)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGBloom*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGBLOOMRENDERER_INITPYRAMIDS_OFFSET))(this, settings);
		}

		::System::Void InitUVTransAndClamp(::System::Int32 atlasWidth, ::System::Int32 atlasHeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGBLOOMRENDERER_INITUVTRANSANDCLAMP_OFFSET))(this, atlasWidth, atlasHeight);
		}

		::System::Void Render_ExtractBrightness(::UnityEngine::Rendering::CommandBuffer* cmd, ::RPG::CustomRP::RPGBloom* settings, ::System::Int32 srcRT)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RPGBloom*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGBLOOMRENDERER_RENDER_EXTRACTBRIGHTNESS_OFFSET))(this, cmd, settings, srcRT);
		}

		::System::Void Render_TextureMode(::UnityEngine::Rendering::CommandBuffer* cmd, ::RPG::CustomRP::RPGBloom* settings, ::System::Int32 srcRT)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RPGBloom*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGBLOOMRENDERER_RENDER_TEXTUREMODE_OFFSET))(this, cmd, settings, srcRT);
		}

		::System::Void Render_AtlasMode(::UnityEngine::Rendering::CommandBuffer* cmd, ::RPG::CustomRP::RPGBloom* settings, ::System::Int32 srcRT)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RPGBloom*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGBLOOMRENDERER_RENDER_ATLASMODE_OFFSET))(this, cmd, settings, srcRT);
		}
	};
}
