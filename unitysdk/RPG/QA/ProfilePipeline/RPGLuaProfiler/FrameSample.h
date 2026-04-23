#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::QA::ProfilePipeline::RPGLuaProfiler { class Sample; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_FRAMESAMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0xB86BB70)

namespace RPG::QA::ProfilePipeline::RPGLuaProfiler
{
	inline static constexpr unsigned int FrameSample_TypeDefinitionIndex = 47842;

	class FrameSample : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::QA::ProfilePipeline::RPGLuaProfiler::Sample*>* Samples; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_FRAMESAMPLE__CTOR_OFFSET))(this);
		}
	};
}
