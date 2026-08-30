#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x1A374D70)
#define RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x1A374E20)
#define RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_CHILD_OFFSET UNITYSDK_OFFSET(0x1A374E40)
#define RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_PARENT_OFFSET UNITYSDK_OFFSET(0x1A374C10)
#define RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_REMOVECHILD_1_OFFSET UNITYSDK_OFFSET(0x1A374C90)
#define RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_REMOVECHILD_OFFSET UNITYSDK_OFFSET(0x1A374C20)
#define RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_SORTCHILD_OFFSET UNITYSDK_OFFSET(0x1A374E90)
#define RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_UPDATESELFDATA_OFFSET UNITYSDK_OFFSET(0x1A374AD0)
#define RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A374F40)

namespace RPG::QA::ProfilePipeline::RPGLuaProfiler
{
	inline static constexpr unsigned int Sample_TypeDefinitionIndex = 52121;

	class Sample : public ::System::Object
	{
	public:
		::System::String* What; // 0x10
		::System::Collections::Generic::List_1<::RPG::QA::ProfilePipeline::RPGLuaProfiler::Sample*>* _Children; // 0x18
		::System::String* Source; // 0x20
		::System::String* NameWhat; // 0x28
		::RPG::QA::ProfilePipeline::RPGLuaProfiler::Sample* _Parent; // 0x30
		::System::String* Name; // 0x38
		::System::Int64 SelfMono; // 0x40
		::System::Int32 HookEvent; // 0x48
		::System::Int32 CallCount; // 0x4C
		::System::Int64 MonoMemoryInBytes; // 0x50
		::System::Int64 SelfLua; // 0x58
		::System::Int64 LuaMemoryInBytes; // 0x60
		::System::Int32 CurrentLine; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE__CTOR_OFFSET))(this);
		}

		::System::Void UpdateSelfData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_UPDATESELFDATA_OFFSET))(this);
		}

		::RPG::QA::ProfilePipeline::RPGLuaProfiler::Sample* Parent()
		{
			return ((::RPG::QA::ProfilePipeline::RPGLuaProfiler::Sample*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_PARENT_OFFSET))(this);
		}

		::System::Void RemoveChild(::RPG::QA::ProfilePipeline::RPGLuaProfiler::Sample* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::QA::ProfilePipeline::RPGLuaProfiler::Sample*))((::PBYTE)hIl2Cpp + RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_REMOVECHILD_OFFSET))(this, a1);
		}

		::System::Void RemoveChild_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_REMOVECHILD_1_OFFSET))(this, a1);
		}

		::System::Void AddChild(::RPG::QA::ProfilePipeline::RPGLuaProfiler::Sample* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::QA::ProfilePipeline::RPGLuaProfiler::Sample*))((::PBYTE)hIl2Cpp + RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_ADDCHILD_OFFSET))(this, a1);
		}

		::System::Int32 ChildCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_CHILDCOUNT_OFFSET))(this);
		}

		::RPG::QA::ProfilePipeline::RPGLuaProfiler::Sample* Child(::System::Int32 a1)
		{
			return ((::RPG::QA::ProfilePipeline::RPGLuaProfiler::Sample*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_CHILD_OFFSET))(this, a1);
		}

		::System::Void SortChild(::System::Comparison_1<::RPG::QA::ProfilePipeline::RPGLuaProfiler::Sample*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Comparison_1<::RPG::QA::ProfilePipeline::RPGLuaProfiler::Sample*>*))((::PBYTE)hIl2Cpp + RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_SORTCHILD_OFFSET))(this, a1);
		}
	};
}
