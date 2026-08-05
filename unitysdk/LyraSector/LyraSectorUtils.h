#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define LYRASECTOR_LYRASECTORUTILS_DISPATCHCOMPUTESHADERWITHTHREADCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB02C50)
#define LYRASECTOR_LYRASECTORUTILS_RELEASECOMPUTEBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1CB02940)
#define LYRASECTOR_LYRASECTORUTILS_RELEASECOMPUTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CB02A50)
#define LYRASECTOR_LYRASECTORUTILS_RELEASERT_1_OFFSET UNITYSDK_OFFSET(0x1CB02C00)
#define LYRASECTOR_LYRASECTORUTILS_RELEASERT_OFFSET UNITYSDK_OFFSET(0x1CB02AA0)
#define LYRASECTOR_LYRASECTORUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB02DB0)

namespace LyraSector
{
	inline static constexpr unsigned int LyraSectorUtils_TypeDefinitionIndex = 27502;

	class LyraSectorUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Void ReleaseComputeBuffer(::UnityEngine::ComputeBuffer* buffer)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORUTILS_RELEASECOMPUTEBUFFER_OFFSET))(buffer);
		}

		static ::System::Void ReleaseComputeBuffer_1(::UnityEngine::ComputeBuffer*& buffer)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeBuffer*&))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORUTILS_RELEASECOMPUTEBUFFER_1_OFFSET))(buffer);
		}

		static ::System::Void ReleaseRT(::UnityEngine::RenderTexture* rt)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORUTILS_RELEASERT_OFFSET))(rt);
		}

		static ::System::Void ReleaseRT_1(::UnityEngine::RenderTexture*& rt)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*&))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORUTILS_RELEASERT_1_OFFSET))(rt);
		}

		static ::System::Void DispatchComputeShaderWithThreadCount(::UnityEngine::Rendering::CommandBuffer* cb, ::UnityEngine::ComputeShader* cs, ::System::Int32 kernel, ::System::Int32 threadCountX, ::System::Int32 threadCountY, ::System::Int32 threadCountZ)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORUTILS_DISPATCHCOMPUTESHADERWITHTHREADCOUNT_OFFSET))(cb, cs, kernel, threadCountX, threadCountY, threadCountZ);
		}
	};
}
