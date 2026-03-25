#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::QA::ProfilePipeline::RPGLuaProfiler { class FrameSample; }
namespace RPG::QA::ProfilePipeline::RPGLuaProfiler { class SampleResult; }
namespace System::Collections { class Hashtable; }

#define RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_FRAMERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xAAFF440)

namespace RPG::QA::ProfilePipeline::RPGLuaProfiler
{
	inline static constexpr unsigned int FrameResult_TypeDefinitionIndex = 41864;

	class FrameResult : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::QA::ProfilePipeline::RPGLuaProfiler::SampleResult*>* Samples; // 0x10

		::System::Void _ctor(::RPG::QA::ProfilePipeline::RPGLuaProfiler::FrameSample* origin, ::System::Collections::Hashtable* hash)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::QA::ProfilePipeline::RPGLuaProfiler::FrameSample*, ::System::Collections::Hashtable*))((::PBYTE)hIl2Cpp + RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_FRAMERESULT__CTOR_OFFSET))(this, origin, hash);
		}
	};
}
