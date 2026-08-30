#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::QA::ProfilePipeline::RPGLuaProfiler { class SessionResult; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_RESULTPACKAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A374A50)

namespace RPG::QA::ProfilePipeline::RPGLuaProfiler
{
	inline static constexpr unsigned int ResultPackage_TypeDefinitionIndex = 52117;

	class ResultPackage : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::QA::ProfilePipeline::RPGLuaProfiler::SessionResult*>* Sessions; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* Symbols; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_RESULTPACKAGE__CTOR_OFFSET))(this);
		}
	};
}
