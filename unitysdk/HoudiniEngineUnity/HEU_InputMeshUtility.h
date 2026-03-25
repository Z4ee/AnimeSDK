#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_PartInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }
namespace UnityEngine { class Mesh; }

#define HOUDINIENGINEUNITY_HEU_INPUTMESHUTILITY_SETMESHPOINTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x8461930)
#define HOUDINIENGINEUNITY_HEU_INPUTMESHUTILITY_SETMESHVERTEXATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x8461D00)
#define HOUDINIENGINEUNITY_HEU_INPUTMESHUTILITY_SETMESHVERTEXFLOATATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x8462120)
#define HOUDINIENGINEUNITY_HEU_INPUTMESHUTILITY_UPLOADMESHINTOHOUDININODE_OFFSET UNITYSDK_OFFSET(0x8465410)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputMeshUtility_TypeDefinitionIndex = 37829;

	class HEU_InputMeshUtility : public ::System::Object
	{
	public:
		static ::System::Boolean SetMeshPointAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::String* attrName, ::System::Int32 tupleSize, ::Il2CppArray<::UnityEngine::Vector3>* data, ::HoudiniEngineUnity::HAPI_PartInfo& partInfo, ::System::Boolean bConvertToHoudiniCoordinateSystem)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*, ::HoudiniEngineUnity::HAPI_PartInfo&, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTMESHUTILITY_SETMESHPOINTATTRIBUTE_OFFSET))(session, geoID, partID, attrName, tupleSize, data, partInfo, bConvertToHoudiniCoordinateSystem);
		}

		static ::System::Boolean SetMeshVertexAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::String* attrName, ::System::Int32 tupleSize, ::Il2CppArray<::UnityEngine::Vector3>* data, ::Il2CppArray<::System::Int32>* indices, ::HoudiniEngineUnity::HAPI_PartInfo& partInfo, ::System::Boolean bConvertToHoudiniCoordinateSystem)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::System::Int32>*, ::HoudiniEngineUnity::HAPI_PartInfo&, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTMESHUTILITY_SETMESHVERTEXATTRIBUTE_OFFSET))(session, geoID, partID, attrName, tupleSize, data, indices, partInfo, bConvertToHoudiniCoordinateSystem);
		}

		static ::System::Boolean SetMeshVertexFloatAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::String* attrName, ::System::Int32 tupleSize, ::Il2CppArray<::System::Single>* data, ::Il2CppArray<::System::Int32>* indices, ::HoudiniEngineUnity::HAPI_PartInfo& partInfo)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Int32>*, ::HoudiniEngineUnity::HAPI_PartInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTMESHUTILITY_SETMESHVERTEXFLOATATTRIBUTE_OFFSET))(session, geoID, partID, attrName, tupleSize, data, indices, partInfo);
		}

		static ::System::Boolean UploadMeshIntoHoudiniNode(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 assetNodeID, ::System::Int32 objectID, ::System::Int32 geoID, ::UnityEngine::Mesh*& mesh)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Mesh*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTMESHUTILITY_UPLOADMESHINTOHOUDININODE_OFFSET))(session, assetNodeID, objectID, geoID, mesh);
		}
	};
}
