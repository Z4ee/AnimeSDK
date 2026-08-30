#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Mesh; }

#define HOUDINIENGINEUNITY_HEU_GEOMETRYUTILITY_CALCULATEMESHTANGENTS_OFFSET UNITYSDK_OFFSET(0x167E9ED0)
#define HOUDINIENGINEUNITY_HEU_GEOMETRYUTILITY_GENERATECUBEMESHFROMPOINTS_OFFSET UNITYSDK_OFFSET(0x167F4F80)
#define HOUDINIENGINEUNITY_HEU_GEOMETRYUTILITY_GENERATEPERTRIANGLE_OFFSET UNITYSDK_OFFSET(0x167EC160)
#define HOUDINIENGINEUNITY_HEU_GEOMETRYUTILITY_GENERATESECONDARYUVSET_OFFSET UNITYSDK_OFFSET(0x167F4F40)
#define HOUDINIENGINEUNITY_HEU_GEOMETRYUTILITY_GETINSTANCEOUTPUTNAME_OFFSET UNITYSDK_OFFSET(0x167CD920)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_GeometryUtility_TypeDefinitionIndex = 39344;

	class HEU_GeometryUtility : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector2>* GeneratePerTriangle(::UnityEngine::Mesh* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEOMETRYUTILITY_GENERATEPERTRIANGLE_OFFSET))(a1);
		}

		static ::System::Void GenerateSecondaryUVSet(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEOMETRYUTILITY_GENERATESECONDARYUVSET_OFFSET))(a1);
		}

		static ::System::Void CalculateMeshTangents(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEOMETRYUTILITY_CALCULATEMESHTANGENTS_OFFSET))(a1);
		}

		static ::UnityEngine::Mesh* GenerateCubeMeshFromPoints(::Il2CppArray<::UnityEngine::Vector3>* a1, ::Il2CppArray<::UnityEngine::Color>* a2, ::System::Single a3)
		{
			return ((::UnityEngine::Mesh*(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Color>*, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEOMETRYUTILITY_GENERATECUBEMESHFROMPOINTS_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetInstanceOutputName(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEOMETRYUTILITY_GETINSTANCEOUTPUTNAME_OFFSET))(a1, a2, a3);
		}
	};
}
