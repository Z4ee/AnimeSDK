#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::QA::ProfilePipeline::RPGLuaProfiler { class FrameSample; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SESSION__CTOR_OFFSET UNITYSDK_OFFSET(0xB86C0B0)

namespace RPG::QA::ProfilePipeline::RPGLuaProfiler
{
	inline static constexpr unsigned int Session_TypeDefinitionIndex = 47843;

	class Session : public ::System::Object
	{
	public:
		::System::String* BeginDate; // 0x10
		::System::Collections::Generic::List_1<::RPG::QA::ProfilePipeline::RPGLuaProfiler::FrameSample*>* FrameSamples; // 0x18
		::System::String* EndDate; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SESSION__CTOR_OFFSET))(this);
		}
	};
}
