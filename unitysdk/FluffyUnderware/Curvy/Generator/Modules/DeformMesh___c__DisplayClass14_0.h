#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGSpot.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArray_1.h"

namespace FluffyUnderware::Curvy::Generator { class CGPath; }
namespace FluffyUnderware::Curvy::Generator { class CGVMesh; }
namespace FluffyUnderware::Curvy::Generator::Modules { class ScaleParameters; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E530710)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH___C__DISPLAYCLASS14_0__DEFORMMESHES_B__0_OFFSET UNITYSDK_OFFSET(0x1E530720)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int DeformMesh___c__DisplayClass14_0_TypeDefinitionIndex = 38830;

	class DeformMesh___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGVMesh*>* outputMeshes; // 0x10
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGVMesh*>* inputMeshes; // 0x18
		::FluffyUnderware::Curvy::Generator::Modules::ScaleParameters* scaleParameters; // 0x20
		::FluffyUnderware::Curvy::Generator::CGPath* path; // 0x28
		::ToolBuddy::Pooling::Collections::SubArray_1<::FluffyUnderware::Curvy::Generator::CGSpot> outputSpots; // 0x30
		::System::Boolean stretchToEnd; // 0x40
		::System::Boolean isCurveEvaluationNeeded; // 0x41
		::System::Single stretchingAdditionalDistanceRatio; // 0x44
		::System::Single smallestVertexDistance; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _DeformMeshes_b__0(::FluffyUnderware::Curvy::Generator::CGSpot spot, ::System::Int32 spotIndex, ::System::Int32 elementsCount)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGSpot, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH___C__DISPLAYCLASS14_0__DEFORMMESHES_B__0_OFFSET))(this, spot, spotIndex, elementsCount);
		}
	};
}
