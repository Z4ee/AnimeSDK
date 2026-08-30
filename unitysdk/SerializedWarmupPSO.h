#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/SerializedBlendState.h"
#include "unitysdk/SerializedDepthState.h"
#include "unitysdk/SerializedRasterState.h"
#include "unitysdk/SerializedStencilState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/WarmupPipelineState.h"
#include "unitysdk/UnityEngine/WarmupQualityCategory.h"
#include "unitysdk/UnityEngine/WarmupSubpass.h"
#include "unitysdk/WarmupQualitySet.h"

namespace System { class String; }

#define SERIALIZEDWARMUPPSO_GET_QUALITYSET_OFFSET UNITYSDK_OFFSET(0x1BF47E30)
#define SERIALIZEDWARMUPPSO_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0x1BF47A30)
#define SERIALIZEDWARMUPPSO_GET_USERENDERPASS_OFFSET UNITYSDK_OFFSET(0x1BF47C90)
#define SERIALIZEDWARMUPPSO_METHOD_1_0DC9528EB5E93120_OFFSET UNITYSDK_OFFSET(0x1BF47CA0)
#define SERIALIZEDWARMUPPSO_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x1BF47CF0)
#define SERIALIZEDWARMUPPSO_METHOD_1_52508B18329E2DF9_OFFSET UNITYSDK_OFFSET(0x1BF48300)
#define SERIALIZEDWARMUPPSO_METHOD_1_5BE47D4D14CD5E73_OFFSET UNITYSDK_OFFSET(0x1BF48360)
#define SERIALIZEDWARMUPPSO_METHOD_1_9DA7412737B1DA97_1_OFFSET UNITYSDK_OFFSET(0x1BF480C0)
#define SERIALIZEDWARMUPPSO_METHOD_1_9DA7412737B1DA97_OFFSET UNITYSDK_OFFSET(0x1BF47E70)
#define SERIALIZEDWARMUPPSO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF484C0)

inline static constexpr unsigned int SerializedWarmupPSO_TypeDefinitionIndex = 47879;

class SerializedWarmupPSO : public ::System::Object
{
public:
	::UnityEngine::WarmupQualityCategory qualityCategory; // 0x10
	::RPG::CustomRP::Quality qualityLevel; // 0x14
	::System::String* shaderName; // 0x18
	::System::Int32 subshaderIndex; // 0x20
	::System::Int32 passIndex; // 0x24
	::System::String* keywordStr; // 0x28
	::Il2CppArray<::UnityEngine::Experimental::Rendering::GraphicsFormat>* colorRTFormats; // 0x30
	::UnityEngine::Experimental::Rendering::GraphicsFormat depthRTFormat; // 0x38
	::System::Int32 inputAttachmentIndex; // 0x3C
	::Il2CppArray<::System::Byte>* colorLoadAction; // 0x40
	::Il2CppArray<::System::Byte>* colorStoreAction; // 0x48
	::System::Byte depthLoadAction; // 0x50
	::System::Byte depthStoreAction; // 0x51
	::System::Byte stencilLoadAction; // 0x52
	::System::Byte stencilStoreAction; // 0x53
	::System::Int32 subpassIndex; // 0x54
	::Il2CppArray<::UnityEngine::WarmupSubpass>* subPasses; // 0x58
	::System::Int32 rpDepthStencilAttachment; // 0x60
	::SerializedBlendState blendState; // 0x64
	::SerializedRasterState rasterState; // 0x148
	::SerializedDepthState depthState; // 0x15C
	::SerializedStencilState stencilState; // 0x164
	::System::Int32 globalDepthBias; // 0x188
	::System::Int32 globalSlopeBias; // 0x18C
	::System::Int32 depthBoundNear; // 0x190
	::System::Int32 depthBoundFar; // 0x194
	::Il2CppArray<::System::UInt32>* vertexChannels; // 0x198
	::Il2CppArray<::System::UInt16>* vertexStreamStrides; // 0x1A0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZEDWARMUPPSO__CTOR_OFFSET))(this);
	}

	::System::String* get_Summary()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZEDWARMUPPSO_GET_SUMMARY_OFFSET))(this);
	}

	::System::Boolean get_UseRenderPass()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZEDWARMUPPSO_GET_USERENDERPASS_OFFSET))(this);
	}

	static ::UnityEngine::Experimental::Rendering::GraphicsFormat Method_1_0DC9528EB5E93120(::UnityEngine::Experimental::Rendering::GraphicsFormat a1)
	{
		return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + SERIALIZEDWARMUPPSO_METHOD_1_0DC9528EB5E93120_OFFSET))(a1);
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZEDWARMUPPSO_METHOD_1_51BBA01F511E6107_OFFSET))(this);
	}

	::WarmupQualitySet get_QualitySet()
	{
		return ((::WarmupQualitySet(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZEDWARMUPPSO_GET_QUALITYSET_OFFSET))(this);
	}

	::System::Void Method_1_9DA7412737B1DA97(::UnityEngine::WarmupPipelineState& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::WarmupPipelineState&))((::PBYTE)hIl2Cpp + SERIALIZEDWARMUPPSO_METHOD_1_9DA7412737B1DA97_OFFSET))(this, a1);
	}

	::System::Void Method_1_9DA7412737B1DA97_1(::UnityEngine::WarmupPipelineState& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::WarmupPipelineState&))((::PBYTE)hIl2Cpp + SERIALIZEDWARMUPPSO_METHOD_1_9DA7412737B1DA97_1_OFFSET))(this, a1);
	}

	::SerializedWarmupPSO* Method_1_52508B18329E2DF9()
	{
		return ((::SerializedWarmupPSO*(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZEDWARMUPPSO_METHOD_1_52508B18329E2DF9_OFFSET))(this);
	}

	::SerializedWarmupPSO* Method_1_5BE47D4D14CD5E73()
	{
		return ((::SerializedWarmupPSO*(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZEDWARMUPPSO_METHOD_1_5BE47D4D14CD5E73_OFFSET))(this);
	}
};
