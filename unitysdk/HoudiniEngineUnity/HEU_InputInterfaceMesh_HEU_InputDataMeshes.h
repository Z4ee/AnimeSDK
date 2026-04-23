#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_InputData.h"

namespace HoudiniEngineUnity { class HEU_InputInterfaceMesh_HEU_InputDataMesh; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_HEU_INPUTDATAMESHES__CTOR_OFFSET UNITYSDK_OFFSET(0x8C8A710)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputInterfaceMesh_HEU_InputDataMeshes_TypeDefinitionIndex = 43702;

	class HEU_InputInterfaceMesh_HEU_InputDataMeshes : public ::HoudiniEngineUnity::HEU_InputData
	{
	public:
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputInterfaceMesh_HEU_InputDataMesh*>* _inputMeshes; // 0x18
		::System::Boolean _hasLOD; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_HEU_INPUTDATAMESHES__CTOR_OFFSET))(this);
		}
	};
}
