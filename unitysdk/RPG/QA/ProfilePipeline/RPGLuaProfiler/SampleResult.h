#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::QA::ProfilePipeline::RPGLuaProfiler { class Sample; }
namespace System { class String; }
namespace System::Collections { class Hashtable; }

#define RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLERESULT__CCTOR_OFFSET UNITYSDK_OFFSET(0xB86C090)
#define RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xB86B780)

namespace RPG::QA::ProfilePipeline::RPGLuaProfiler
{
	inline static constexpr unsigned int SampleResult_TypeDefinitionIndex = 47840;

	class SampleResult : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_EMPTY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SampleResult_TypeDefinitionIndex)->GetStaticField(0x664A0);
		}
		::System::Int32 Name; // 0x10
		::System::Int32 Source; // 0x14
		::System::Int32 Line; // 0x18
		::System::Int64 LuaTotal; // 0x20
		::System::Int64 MonoTotal; // 0x28
		::System::Int64 LuaSelf; // 0x30
		::System::Int64 MonoSelf; // 0x38
		::System::Int32 Count; // 0x40
		::Il2CppArray<::RPG::QA::ProfilePipeline::RPGLuaProfiler::SampleResult*>* Children; // 0x48

		::System::Void _ctor(::RPG::QA::ProfilePipeline::RPGLuaProfiler::Sample* origin, ::System::Collections::Hashtable* hash)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::QA::ProfilePipeline::RPGLuaProfiler::Sample*, ::System::Collections::Hashtable*))((::PBYTE)hIl2Cpp + RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLERESULT__CTOR_OFFSET))(this, origin, hash);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_QA_PROFILEPIPELINE_RPGLUAPROFILER_SAMPLERESULT__CCTOR_OFFSET))();
		}
	};
}
