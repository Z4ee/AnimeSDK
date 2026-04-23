#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Mesh; }

#define HOUDINIENGINEUNITY_HEU_GEOMETRYUTILITY_CALCULATEMESHTANGENTS_OFFSET UNITYSDK_OFFSET(0x8C50F20)
#define HOUDINIENGINEUNITY_HEU_GEOMETRYUTILITY_GENERATECUBEMESHFROMPOINTS_OFFSET UNITYSDK_OFFSET(0x8C5FCB0)
#define HOUDINIENGINEUNITY_HEU_GEOMETRYUTILITY_GENERATEPERTRIANGLE_OFFSET UNITYSDK_OFFSET(0x8C53300)
#define HOUDINIENGINEUNITY_HEU_GEOMETRYUTILITY_GENERATESECONDARYUVSET_OFFSET UNITYSDK_OFFSET(0x8C5FC00)
#define HOUDINIENGINEUNITY_HEU_GEOMETRYUTILITY_GETINSTANCEOUTPUTNAME_OFFSET UNITYSDK_OFFSET(0x8C3F850)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_GeometryUtility_TypeDefinitionIndex = 43698;

	class HEU_GeometryUtility : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector2>* GeneratePerTriangle(::UnityEngine::Mesh* meshSrc)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEOMETRYUTILITY_GENERATEPERTRIANGLE_OFFSET))(meshSrc);
		}

		static ::System::Void GenerateSecondaryUVSet(::UnityEngine::Mesh* meshsrc)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEOMETRYUTILITY_GENERATESECONDARYUVSET_OFFSET))(meshsrc);
		}

		static ::System::Void CalculateMeshTangents(::UnityEngine::Mesh* mesh)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEOMETRYUTILITY_CALCULATEMESHTANGENTS_OFFSET))(mesh);
		}

		static ::UnityEngine::Mesh* GenerateCubeMeshFromPoints(::Il2CppArray<::UnityEngine::Vector3>* points, ::Il2CppArray<::UnityEngine::Color>* pointsColor, ::System::Single size)
		{
			return ((::UnityEngine::Mesh*(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Color>*, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEOMETRYUTILITY_GENERATECUBEMESHFROMPOINTS_OFFSET))(points, pointsColor, size);
		}

		static ::System::String* GetInstanceOutputName(::System::String* partName, ::Il2CppArray<::System::String*>* userPrefix, ::System::Int32 index)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEOMETRYUTILITY_GETINSTANCEOUTPUTNAME_OFFSET))(partName, userPrefix, index);
		}
	};
}
