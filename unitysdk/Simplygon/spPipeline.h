#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/EErrorCodes.h"
#include "unitysdk/Simplygon/EPipelineRunMode.h"
#include "unitysdk/Simplygon/spObject.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

namespace Simplygon { class spScene; }
namespace System { class String; }

#define SIMPLYGON_SPPIPELINE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18372C90)
#define SIMPLYGON_SPPIPELINE_RUNSCENEFROMFILE_OFFSET UNITYSDK_OFFSET(0x18372E10)
#define SIMPLYGON_SPPIPELINE_RUNSCENE_OFFSET UNITYSDK_OFFSET(0x18373050)
#define SIMPLYGON_SPPIPELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x18372B90)

namespace Simplygon
{
	inline static constexpr unsigned int spPipeline_TypeDefinitionIndex = 29576;

	class spPipeline : public ::Simplygon::spObject
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x28

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPPIPELINE__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPPIPELINE_DISPOSE_OFFSET))(this, disposing);
		}

		::Simplygon::EErrorCodes RunSceneFromFile(::System::String* inputScene, ::System::String* outputScene, ::Simplygon::EPipelineRunMode runMode)
		{
			return ((::Simplygon::EErrorCodes(*)(::PVOID, ::System::String*, ::System::String*, ::Simplygon::EPipelineRunMode))((::PBYTE)hIl2Cpp + SIMPLYGON_SPPIPELINE_RUNSCENEFROMFILE_OFFSET))(this, inputScene, outputScene, runMode);
		}

		::Simplygon::EErrorCodes RunScene(::Simplygon::spScene* scene, ::Simplygon::EPipelineRunMode runMode)
		{
			return ((::Simplygon::EErrorCodes(*)(::PVOID, ::Simplygon::spScene*, ::Simplygon::EPipelineRunMode))((::PBYTE)hIl2Cpp + SIMPLYGON_SPPIPELINE_RUNSCENE_OFFSET))(this, scene, runMode);
		}
	};
}
