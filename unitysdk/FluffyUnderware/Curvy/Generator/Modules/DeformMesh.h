#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGSpot.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/Modules/ScalingModule.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArray_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy::Generator { class CGModuleInputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleOutputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGPath; }
namespace FluffyUnderware::Curvy::Generator { class CGSpots; }
namespace FluffyUnderware::Curvy::Generator { class CGVMesh; }
namespace FluffyUnderware::Curvy::Generator::Modules { class ScaleParameters; }
namespace FluffyUnderware::DevTools { template <typename T> class ThreadPoolWorker_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH_DEFORMMESHES_1_OFFSET UNITYSDK_OFFSET(0x1B735060)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH_DEFORMMESHES_OFFSET UNITYSDK_OFFSET(0x1B735A70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH_GETSPOTDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B735C30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH_GET_STRETCHTOEND_OFFSET UNITYSDK_OFFSET(0x1B734200)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH_ISCURVEEVALUATIONNEEDED_OFFSET UNITYSDK_OFFSET(0x1B735B90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B734290)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH_REFRESH_OFFSET UNITYSDK_OFFSET(0x1B7342D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH_RESET_OFFSET UNITYSDK_OFFSET(0x1B734250)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH_SET_STRETCHTOEND_OFFSET UNITYSDK_OFFSET(0x1B734210)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH_TOONEDIMENSIONALARRAY_OFFSET UNITYSDK_OFFSET(0x1B734BC0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B735D00)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int DeformMesh_TypeDefinitionIndex = 37411;

	class DeformMesh : public ::FluffyUnderware::Curvy::Generator::Modules::ScalingModule
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InVMeshes; // 0xE8
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InPath; // 0xF0
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InSpots; // 0xF8
		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* OutVMeshes; // 0x100
		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* OutSpots; // 0x108
		::System::Boolean stretchToEnd; // 0x110
		::FluffyUnderware::DevTools::ThreadPoolWorker_1<::FluffyUnderware::Curvy::Generator::CGSpot>* threadWorker; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH__CTOR_OFFSET))(this);
		}

		::System::Boolean get_StretchToEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH_GET_STRETCHTOEND_OFFSET))(this);
		}

		::System::Void set_StretchToEnd(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH_SET_STRETCHTOEND_OFFSET))(this, value);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH_RESET_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH_ONDESTROY_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH_REFRESH_OFFSET))(this);
		}

		static ::System::Void DeformMeshes(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGVMesh*>* inputMeshes, ::ToolBuddy::Pooling::Collections::SubArray_1<::FluffyUnderware::Curvy::Generator::CGSpot> inputSpots, ::ToolBuddy::Pooling::Collections::SubArray_1<::FluffyUnderware::Curvy::Generator::CGSpot> outputSpots, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGVMesh*>* outputMeshes, ::FluffyUnderware::Curvy::Generator::CGPath* path, ::System::Boolean stretchToEnd, ::FluffyUnderware::DevTools::ThreadPoolWorker_1<::FluffyUnderware::Curvy::Generator::CGSpot>* threadPoolWorker)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGVMesh*>*, ::ToolBuddy::Pooling::Collections::SubArray_1<::FluffyUnderware::Curvy::Generator::CGSpot>, ::ToolBuddy::Pooling::Collections::SubArray_1<::FluffyUnderware::Curvy::Generator::CGSpot>, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGVMesh*>*, ::FluffyUnderware::Curvy::Generator::CGPath*, ::System::Boolean, ::FluffyUnderware::DevTools::ThreadPoolWorker_1<::FluffyUnderware::Curvy::Generator::CGSpot>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH_DEFORMMESHES_OFFSET))(inputMeshes, inputSpots, outputSpots, outputMeshes, path, stretchToEnd, threadPoolWorker);
		}

		static ::System::Void DeformMeshes_1(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGVMesh*>* inputMeshes, ::ToolBuddy::Pooling::Collections::SubArray_1<::FluffyUnderware::Curvy::Generator::CGSpot> inputSpots, ::ToolBuddy::Pooling::Collections::SubArray_1<::FluffyUnderware::Curvy::Generator::CGSpot> outputSpots, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGVMesh*>* outputMeshes, ::FluffyUnderware::Curvy::Generator::CGPath* path, ::System::Boolean stretchToEnd, ::FluffyUnderware::DevTools::ThreadPoolWorker_1<::FluffyUnderware::Curvy::Generator::CGSpot>* threadPoolWorker, ::FluffyUnderware::Curvy::Generator::Modules::ScaleParameters* scaleParameters)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGVMesh*>*, ::ToolBuddy::Pooling::Collections::SubArray_1<::FluffyUnderware::Curvy::Generator::CGSpot>, ::ToolBuddy::Pooling::Collections::SubArray_1<::FluffyUnderware::Curvy::Generator::CGSpot>, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGVMesh*>*, ::FluffyUnderware::Curvy::Generator::CGPath*, ::System::Boolean, ::FluffyUnderware::DevTools::ThreadPoolWorker_1<::FluffyUnderware::Curvy::Generator::CGSpot>*, ::FluffyUnderware::Curvy::Generator::Modules::ScaleParameters*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH_DEFORMMESHES_1_OFFSET))(inputMeshes, inputSpots, outputSpots, outputMeshes, path, stretchToEnd, threadPoolWorker, scaleParameters);
		}

		static ::System::Boolean IsCurveEvaluationNeeded(::FluffyUnderware::Curvy::Generator::Modules::ScaleParameters* scaleParameters)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::Generator::Modules::ScaleParameters*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH_ISCURVEEVALUATIONNEEDED_OFFSET))(scaleParameters);
		}

		static ::System::Single GetSpotDistance(::FluffyUnderware::Curvy::Generator::CGPath* path, ::UnityEngine::Vector3 spotPosition, ::Il2CppArray<::UnityEngine::Vector3>* pathPoints, ::System::Int32 maxIndex, ::Il2CppArray<::System::Single>* pathRelativeDistances, ::System::Single pathLength)
		{
			return ((::System::Single(*)(::FluffyUnderware::Curvy::Generator::CGPath*, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH_GETSPOTDISTANCE_OFFSET))(path, spotPosition, pathPoints, maxIndex, pathRelativeDistances, pathLength);
		}

		static ::System::Nullable_1<::ToolBuddy::Pooling::Collections::SubArray_1<::FluffyUnderware::Curvy::Generator::CGSpot>> ToOneDimensionalArray(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGSpots*>* spotsList, ::System::Boolean& arrayIsCopy)
		{
			return ((::System::Nullable_1<::ToolBuddy::Pooling::Collections::SubArray_1<::FluffyUnderware::Curvy::Generator::CGSpot>>(*)(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGSpots*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH_TOONEDIMENSIONALARRAY_OFFSET))(spotsList, arrayIsCopy);
		}
	};
}
