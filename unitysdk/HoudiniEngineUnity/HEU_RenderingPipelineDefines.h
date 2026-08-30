#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_PipelineType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_RENDERINGPIPELINEDEFINES_ADDDEFINE_OFFSET UNITYSDK_OFFSET(0x1B479E10)
#define HOUDINIENGINEUNITY_HEU_RENDERINGPIPELINEDEFINES_GETDEFINES_OFFSET UNITYSDK_OFFSET(0x1B47A000)
#define HOUDINIENGINEUNITY_HEU_RENDERINGPIPELINEDEFINES_GETPIPELINE_OFFSET UNITYSDK_OFFSET(0x1B474D70)
#define HOUDINIENGINEUNITY_HEU_RENDERINGPIPELINEDEFINES_REMOVEDEFINE_OFFSET UNITYSDK_OFFSET(0x1B479F30)
#define HOUDINIENGINEUNITY_HEU_RENDERINGPIPELINEDEFINES_SETDEFINES_OFFSET UNITYSDK_OFFSET(0x1B47A030)
#define HOUDINIENGINEUNITY_HEU_RENDERINGPIPELINEDEFINES_UPDATEDEFINES_OFFSET UNITYSDK_OFFSET(0x1B479D00)
#define HOUDINIENGINEUNITY_HEU_RENDERINGPIPELINEDEFINES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B479CF0)
#define HOUDINIENGINEUNITY_HEU_RENDERINGPIPELINEDEFINES__CTOR_OFFSET UNITYSDK_OFFSET(0x1B47A040)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_RenderingPipelineDefines_TypeDefinitionIndex = 39362;

	class HEU_RenderingPipelineDefines : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_RENDERINGPIPELINEDEFINES__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_RENDERINGPIPELINEDEFINES__CTOR_OFFSET))(this);
		}

		static ::System::Void UpdateDefines()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_RENDERINGPIPELINEDEFINES_UPDATEDEFINES_OFFSET))();
		}

		static ::HoudiniEngineUnity::HEU_PipelineType GetPipeline()
		{
			return ((::HoudiniEngineUnity::HEU_PipelineType(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_RENDERINGPIPELINEDEFINES_GETPIPELINE_OFFSET))();
		}

		static ::System::Void AddDefine(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_RENDERINGPIPELINEDEFINES_ADDDEFINE_OFFSET))(a1);
		}

		static ::System::Void RemoveDefine(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_RENDERINGPIPELINEDEFINES_REMOVEDEFINE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* GetDefines()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_RENDERINGPIPELINEDEFINES_GETDEFINES_OFFSET))();
		}

		static ::System::Void SetDefines(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_RENDERINGPIPELINEDEFINES_SETDEFINES_OFFSET))(a1);
		}
	};
}
