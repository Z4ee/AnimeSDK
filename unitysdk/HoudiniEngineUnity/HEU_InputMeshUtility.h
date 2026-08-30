#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_PartInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }
namespace UnityEngine { class Mesh; }

#define HOUDINIENGINEUNITY_HEU_INPUTMESHUTILITY_SETMESHDETAILATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x11A5D930)
#define HOUDINIENGINEUNITY_HEU_INPUTMESHUTILITY_SETMESHPOINTATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x11A5C0E0)
#define HOUDINIENGINEUNITY_HEU_INPUTMESHUTILITY_SETMESHPOINTATTRIBUTE_2_OFFSET UNITYSDK_OFFSET(0x11A5D0A0)
#define HOUDINIENGINEUNITY_HEU_INPUTMESHUTILITY_SETMESHPOINTATTRIBUTE_3_OFFSET UNITYSDK_OFFSET(0x11A5D5D0)
#define HOUDINIENGINEUNITY_HEU_INPUTMESHUTILITY_SETMESHPOINTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x11A536F0)
#define HOUDINIENGINEUNITY_HEU_INPUTMESHUTILITY_SETMESHVERTEXATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x11A53C10)
#define HOUDINIENGINEUNITY_HEU_INPUTMESHUTILITY_SETMESHVERTEXFLOATATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x11A54170)
#define HOUDINIENGINEUNITY_HEU_INPUTMESHUTILITY_UPLOADMESHINTOHOUDININODE_OFFSET UNITYSDK_OFFSET(0x11A5C490)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputMeshUtility_TypeDefinitionIndex = 39356;

	class HEU_InputMeshUtility : public ::System::Object
	{
	public:
		static ::System::Boolean SetMeshPointAttribute(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::Int32 a5, ::Il2CppArray<::UnityEngine::Vector3>* a6, ::HoudiniEngineUnity::HAPI_PartInfo& a7, ::System::Boolean a8)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*, ::HoudiniEngineUnity::HAPI_PartInfo&, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTMESHUTILITY_SETMESHPOINTATTRIBUTE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Boolean SetMeshPointAttribute_1(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::Int32 a5, ::Il2CppArray<::System::Single>* a6, ::HoudiniEngineUnity::HAPI_PartInfo& a7)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::Il2CppArray<::System::Single>*, ::HoudiniEngineUnity::HAPI_PartInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTMESHUTILITY_SETMESHPOINTATTRIBUTE_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean SetMeshVertexAttribute(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::Int32 a5, ::Il2CppArray<::UnityEngine::Vector3>* a6, ::Il2CppArray<::System::Int32>* a7, ::HoudiniEngineUnity::HAPI_PartInfo& a8, ::System::Boolean a9)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::System::Int32>*, ::HoudiniEngineUnity::HAPI_PartInfo&, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTMESHUTILITY_SETMESHVERTEXATTRIBUTE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Boolean SetMeshVertexFloatAttribute(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::Int32 a5, ::Il2CppArray<::System::Single>* a6, ::Il2CppArray<::System::Int32>* a7, ::HoudiniEngineUnity::HAPI_PartInfo& a8)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Int32>*, ::HoudiniEngineUnity::HAPI_PartInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTMESHUTILITY_SETMESHVERTEXFLOATATTRIBUTE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Boolean UploadMeshIntoHoudiniNode(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::UnityEngine::Mesh*& a5)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Mesh*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTMESHUTILITY_UPLOADMESHINTOHOUDININODE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean SetMeshPointAttribute_2(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::Int32 a5, ::Il2CppArray<::UnityEngine::Vector3Int>* a6, ::HoudiniEngineUnity::HAPI_PartInfo& a7)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector3Int>*, ::HoudiniEngineUnity::HAPI_PartInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTMESHUTILITY_SETMESHPOINTATTRIBUTE_2_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean SetMeshPointAttribute_3(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::Il2CppArray<::System::String*>* a5, ::HoudiniEngineUnity::HAPI_PartInfo& a6)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::Il2CppArray<::System::String*>*, ::HoudiniEngineUnity::HAPI_PartInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTMESHUTILITY_SETMESHPOINTATTRIBUTE_3_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean SetMeshDetailAttribute(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::Int32 a5, ::UnityEngine::Vector3 a6, ::HoudiniEngineUnity::HAPI_PartInfo& a7)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::UnityEngine::Vector3, ::HoudiniEngineUnity::HAPI_PartInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTMESHUTILITY_SETMESHDETAILATTRIBUTE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
