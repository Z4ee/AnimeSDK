#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_RENDERING_TERRAIN_TERRAINGRIDROOTMARKER_GETMARKEDBLOCKSFOREDITOR_OFFSET UNITYSDK_OFFSET(0x19D4D680)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDROOTMARKER_GET_STAGENAME_OFFSET UNITYSDK_OFFSET(0x19D4D130)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDROOTMARKER_SETBOXOFFSET_OFFSET UNITYSDK_OFFSET(0x19D4D210)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDROOTMARKER_SETBOXSIZE_OFFSET UNITYSDK_OFFSET(0x19D4D1B0)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDROOTMARKER_SETMARKEDBLOCKS_OFFSET UNITYSDK_OFFSET(0x19D4D270)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDROOTMARKER_SETSTAGENAME_OFFSET UNITYSDK_OFFSET(0x19D4D140)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDROOTMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D4D710)

namespace RPG::Rendering::Terrain
{
	inline static constexpr unsigned int TerrainGridRootMarker_TypeDefinitionIndex = 49440;

	class TerrainGridRootMarker : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* stageName; // 0x18
		::UnityEngine::Vector3 boxSize; // 0x20
		::UnityEngine::Vector3 boxOffset; // 0x2C
		::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* markedBlocks; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDROOTMARKER__CTOR_OFFSET))(this);
		}

		::System::String* get_StageName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDROOTMARKER_GET_STAGENAME_OFFSET))(this);
		}

		::System::Void SetStageName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDROOTMARKER_SETSTAGENAME_OFFSET))(this, a1);
		}

		::System::Void SetBoxSize(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDROOTMARKER_SETBOXSIZE_OFFSET))(this, a1);
		}

		::System::Void SetBoxOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDROOTMARKER_SETBOXOFFSET_OFFSET))(this, a1);
		}

		::System::Void SetMarkedBlocks(::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDROOTMARKER_SETMARKEDBLOCKS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* GetMarkedBlocksForEditor()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDROOTMARKER_GETMARKEDBLOCKSFOREDITOR_OFFSET))(this);
		}
	};
}
