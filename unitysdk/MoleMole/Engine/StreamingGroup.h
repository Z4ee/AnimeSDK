#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class LODGroup; }
namespace UnityEngine { class MeshFilter; }

#define MOLEMOLE_ENGINE_STREAMINGGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A990C00)

namespace MoleMole::Engine
{
	inline static constexpr unsigned int StreamingGroup_TypeDefinitionIndex = 81761;

	class StreamingGroup : public ::System::Object
	{
	public:
		::UnityEngine::LODGroup* LODGroup; // 0x10
		::Il2CppArray<::System::Int32>* LevelMeshIndices; // 0x18
		::Il2CppArray<::UnityEngine::MeshFilter*>* LevelMeshFilters; // 0x20
		::Il2CppArray<::System::Int32>* LevelRangeStarts; // 0x28
		::System::Int32 lightMapIndex; // 0x30
		::UnityEngine::Vector4 lightMapScaleOffset; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_STREAMINGGROUP__CTOR_OFFSET))(this);
		}
	};
}
