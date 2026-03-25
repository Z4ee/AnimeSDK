#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Simplygon { class ISimplygon; }
namespace Simplygon { class spScene; }
namespace System { class String; }

#define SIMPLYGONRPG_CORE_GET_SIMPLYGONINSTANCE_OFFSET UNITYSDK_OFFSET(0x861DFE0)
#define SIMPLYGONRPG_CORE_REDUCE_OFFSET UNITYSDK_OFFSET(0x861F0B0)
#define SIMPLYGONRPG_CORE_REMESH_OFFSET UNITYSDK_OFFSET(0x861F0E0)
#define SIMPLYGONRPG_CORE_RUNPIPELINE_OFFSET UNITYSDK_OFFSET(0x861F040)
#define SIMPLYGONRPG_CORE__CHECKLOG_OFFSET UNITYSDK_OFFSET(0x861E200)
#define SIMPLYGONRPG_CORE__CTOR_OFFSET UNITYSDK_OFFSET(0x861F110)
#define SIMPLYGONRPG_CORE__LOADSCENE_OFFSET UNITYSDK_OFFSET(0x861DF10)
#define SIMPLYGONRPG_CORE__RUNPIPELINE_OFFSET UNITYSDK_OFFSET(0x861DC80)
#define SIMPLYGONRPG_CORE__RUNREDUCTION_OFFSET UNITYSDK_OFFSET(0x861E670)
#define SIMPLYGONRPG_CORE__RUNREMESHING_OFFSET UNITYSDK_OFFSET(0x861E930)
#define SIMPLYGONRPG_CORE__SAVESCENE_OFFSET UNITYSDK_OFFSET(0x861E130)

namespace SimplygonRPG
{
	inline static constexpr unsigned int Core_TypeDefinitionIndex = 35161;

	class Core : public ::System::Object
	{
	public:
		static ::Simplygon::ISimplygon** StaticGet__SimplygonInstance()
		{
			return (::Simplygon::ISimplygon**)Il2CppClass::FromTypeDefinitionIndex(Core_TypeDefinitionIndex)->GetStaticField(0x10E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGONRPG_CORE__CTOR_OFFSET))(this);
		}

		static ::System::Void _RunPipeline(::Simplygon::ISimplygon* sg, ::System::String* inputPath, ::System::String* outputPath, ::System::String* pipelinePath)
		{
			return ((::System::Void(*)(::Simplygon::ISimplygon*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGONRPG_CORE__RUNPIPELINE_OFFSET))(sg, inputPath, outputPath, pipelinePath);
		}

		static ::System::Void _RunReduction(::Simplygon::ISimplygon* sg, ::System::String* inputPath, ::System::String* outputPath)
		{
			return ((::System::Void(*)(::Simplygon::ISimplygon*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGONRPG_CORE__RUNREDUCTION_OFFSET))(sg, inputPath, outputPath);
		}

		static ::System::Void _RunRemeshing(::Simplygon::ISimplygon* sg, ::System::String* inputPath, ::System::String* outputPath)
		{
			return ((::System::Void(*)(::Simplygon::ISimplygon*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGONRPG_CORE__RUNREMESHING_OFFSET))(sg, inputPath, outputPath);
		}

		static ::Simplygon::spScene* _LoadScene(::Simplygon::ISimplygon* sg, ::System::String* path)
		{
			return ((::Simplygon::spScene*(*)(::Simplygon::ISimplygon*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGONRPG_CORE__LOADSCENE_OFFSET))(sg, path);
		}

		static ::System::Void _SaveScene(::Simplygon::ISimplygon* sg, ::Simplygon::spScene* sgScene, ::System::String* path)
		{
			return ((::System::Void(*)(::Simplygon::ISimplygon*, ::Simplygon::spScene*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGONRPG_CORE__SAVESCENE_OFFSET))(sg, sgScene, path);
		}

		static ::System::Void _CheckLog(::Simplygon::ISimplygon* sg)
		{
			return ((::System::Void(*)(::Simplygon::ISimplygon*))((::PBYTE)hIl2Cpp + SIMPLYGONRPG_CORE__CHECKLOG_OFFSET))(sg);
		}

		static ::Simplygon::ISimplygon* get_SimplygonInstance()
		{
			return ((::Simplygon::ISimplygon*(*)())((::PBYTE)hIl2Cpp + SIMPLYGONRPG_CORE_GET_SIMPLYGONINSTANCE_OFFSET))();
		}

		static ::System::Int32 RunPipeline(::System::String* inputPath, ::System::String* outputPath, ::System::String* pipelinePath)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGONRPG_CORE_RUNPIPELINE_OFFSET))(inputPath, outputPath, pipelinePath);
		}

		static ::System::Int32 Reduce(::System::String* inputPath, ::System::String* outputPath)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGONRPG_CORE_REDUCE_OFFSET))(inputPath, outputPath);
		}

		static ::System::Int32 Remesh(::System::String* inputPath, ::System::String* outputPath)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGONRPG_CORE_REMESH_OFFSET))(inputPath, outputPath);
		}
	};
}
