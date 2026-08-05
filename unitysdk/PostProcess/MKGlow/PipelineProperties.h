#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_GET_SCRIPTABLERENDERPIPELINEACTIVE_OFFSET UNITYSDK_OFFSET(0x1E241310)
#define POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_GET_SINGLEPASSSTEREODOUBLEWIDEENABLED_OFFSET UNITYSDK_OFFSET(0x1E2414A0)
#define POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_GET_SINGLEPASSSTEREOINSTANCEDENABLED_OFFSET UNITYSDK_OFFSET(0x1E2414F0)
#define POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_GET_XRENABLED_OFFSET UNITYSDK_OFFSET(0x1E241490)
#define POSTPROCESS_MKGLOW_PIPELINEPROPERTIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E241550)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int PipelineProperties_TypeDefinitionIndex = 27285;

	class PipelineProperties : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_renderBufferSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_TypeDefinitionIndex)->GetStaticField(0x6330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEPROPERTIES__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_scriptableRenderPipelineActive()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_GET_SCRIPTABLERENDERPIPELINEACTIVE_OFFSET))();
		}

		static ::System::Boolean get_xrEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_GET_XRENABLED_OFFSET))();
		}

		static ::System::Boolean get_singlePassStereoDoubleWideEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_GET_SINGLEPASSSTEREODOUBLEWIDEENABLED_OFFSET))();
		}

		static ::System::Boolean get_singlePassStereoInstancedEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_GET_SINGLEPASSSTEREOINSTANCEDENABLED_OFFSET))();
		}
	};
}
