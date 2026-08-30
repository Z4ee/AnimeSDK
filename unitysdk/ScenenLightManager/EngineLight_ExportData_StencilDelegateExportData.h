#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ScenenLightManager { class TransformExportData; }
namespace System { class String; }

#define SCENENLIGHTMANAGER_ENGINELIGHT_EXPORTDATA_STENCILDELEGATEEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF43830)

namespace ScenenLightManager
{
	inline static constexpr unsigned int EngineLight_ExportData_StencilDelegateExportData_TypeDefinitionIndex = 49526;

	class EngineLight_ExportData_StencilDelegateExportData : public ::System::Object
	{
	public:
		::ScenenLightManager::TransformExportData* transform; // 0x10
		::System::String* meshPath; // 0x18
		::System::Int32 subMeshIndex; // 0x20
		::System::Int64 stencil_delegate_mesh_id; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_ENGINELIGHT_EXPORTDATA_STENCILDELEGATEEXPORTDATA__CTOR_OFFSET))(this);
		}
	};
}
