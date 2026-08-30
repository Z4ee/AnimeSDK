#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::QA::ProfilePipeline::RPGLuaProfiler { class FrameResult; }
namespace RPG::QA::ProfilePipeline::RPGLuaProfiler { class Session; }
namespace System { class String; }
namespace System::Collections { class Hashtable; }

#define RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SESSIONRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A375070)

namespace RPG::QA::ProfilePipeline::RPGLuaProfiler
{
	inline static constexpr unsigned int SessionResult_TypeDefinitionIndex = 52118;

	class SessionResult : public ::System::Object
	{
	public:
		::System::String* BeginDate; // 0x10
		::System::String* EndDate; // 0x18
		::Il2CppArray<::RPG::QA::ProfilePipeline::RPGLuaProfiler::FrameResult*>* Frames; // 0x20

		::System::Void _ctor(::RPG::QA::ProfilePipeline::RPGLuaProfiler::Session* a1, ::System::Collections::Hashtable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::QA::ProfilePipeline::RPGLuaProfiler::Session*, ::System::Collections::Hashtable*))((::PBYTE)hIl2Cpp + RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SESSIONRESULT__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
