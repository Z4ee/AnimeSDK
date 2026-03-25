#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_ADDCHILD_OFFSET UNITYSDK_OFFSET(0xAAFFD10)
#define RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0xAAFFD70)
#define RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_CHILD_OFFSET UNITYSDK_OFFSET(0xAAFFD90)
#define RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_PARENT_OFFSET UNITYSDK_OFFSET(0xAAFFBC0)
#define RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_REMOVECHILD_1_OFFSET UNITYSDK_OFFSET(0xAAFFC40)
#define RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_REMOVECHILD_OFFSET UNITYSDK_OFFSET(0xAAFFBD0)
#define RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_SORTCHILD_OFFSET UNITYSDK_OFFSET(0xAAFFDF0)
#define RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_UPDATESELFDATA_OFFSET UNITYSDK_OFFSET(0xAAFFAA0)
#define RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0xAAFFE90)

namespace RPG::QA::ProfilePipeline::RPGLuaProfiler
{
	inline static constexpr unsigned int Sample_TypeDefinitionIndex = 41866;

	class Sample : public ::System::Object
	{
	public:
		::System::String* Source; // 0x10
		::System::String* NameWhat; // 0x18
		::RPG::QA::ProfilePipeline::RPGLuaProfiler::Sample* _Parent; // 0x20
		::System::String* What; // 0x28
		::System::String* Name; // 0x30
		::System::Collections::Generic::List_1<::RPG::QA::ProfilePipeline::RPGLuaProfiler::Sample*>* _Children; // 0x38
		::System::Int64 MonoMemoryInBytes; // 0x40
		::System::Int32 HookEvent; // 0x48
		::System::Int32 CurrentLine; // 0x4C
		::System::Int64 SelfMono; // 0x50
		::System::Int64 LuaMemoryInBytes; // 0x58
		::System::Int64 SelfLua; // 0x60
		::System::Int32 CallCount; // 0x68

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

		::System::Void RemoveChild(::RPG::QA::ProfilePipeline::RPGLuaProfiler::Sample* child)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::QA::ProfilePipeline::RPGLuaProfiler::Sample*))((::PBYTE)hIl2Cpp + RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_REMOVECHILD_OFFSET))(this, child);
		}

		::System::Void RemoveChild_1(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_REMOVECHILD_1_OFFSET))(this, index);
		}

		::System::Void AddChild(::RPG::QA::ProfilePipeline::RPGLuaProfiler::Sample* child)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::QA::ProfilePipeline::RPGLuaProfiler::Sample*))((::PBYTE)hIl2Cpp + RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_ADDCHILD_OFFSET))(this, child);
		}

		::System::Int32 ChildCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_CHILDCOUNT_OFFSET))(this);
		}

		::RPG::QA::ProfilePipeline::RPGLuaProfiler::Sample* Child(::System::Int32 index)
		{
			return ((::RPG::QA::ProfilePipeline::RPGLuaProfiler::Sample*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_CHILD_OFFSET))(this, index);
		}

		::System::Void SortChild(::System::Comparison_1<::RPG::QA::ProfilePipeline::RPGLuaProfiler::Sample*>* comparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Comparison_1<::RPG::QA::ProfilePipeline::RPGLuaProfiler::Sample*>*))((::PBYTE)hIl2Cpp + RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLE_SORTCHILD_OFFSET))(this, comparer);
		}
	};
}
