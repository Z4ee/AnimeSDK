#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/spObject.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

namespace Simplygon { class spPipeline; }
namespace System { class String; }

#define SIMPLYGON_SPPIPELINESERIALIZER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18373290)
#define SIMPLYGON_SPPIPELINESERIALIZER_LOADPIPELINEFROMFILE_OFFSET UNITYSDK_OFFSET(0x18373410)
#define SIMPLYGON_SPPIPELINESERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x18362110)

namespace Simplygon
{
	inline static constexpr unsigned int spPipelineSerializer_TypeDefinitionIndex = 29577;

	class spPipelineSerializer : public ::Simplygon::spObject
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x28

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPPIPELINESERIALIZER__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPPIPELINESERIALIZER_DISPOSE_OFFSET))(this, disposing);
		}

		::Simplygon::spPipeline* LoadPipelineFromFile(::System::String* path)
		{
			return ((::Simplygon::spPipeline*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPPIPELINESERIALIZER_LOADPIPELINEFROMFILE_OFFSET))(this, path);
		}
	};
}
