#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BlendPoseData.h"
#include "unitysdk/BlendPoseDeltaData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int OneBoneLayer_TypeDefinitionIndex = 52983;

struct alignas(8) OneBoneLayer
{
	::System::Boolean DrivenBoneWithoutAnimation; // 0x10
	::System::Boolean IsNotAnimageIk; // 0x11
	::System::String* MasterBoneRootName; // 0x18
	::System::String* MasterBoneName; // 0x20
	::System::String* MasterForwardBoneName; // 0x28
	::Il2CppArray<::System::String*>* DrivenBoneName; // 0x30
	::Il2CppArray<::BlendPoseData>* TargetPose; // 0x38
	::Il2CppArray<::BlendPoseDeltaData>* TargetPoseDelta; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* TriangleIndices; // 0x48
	::Il2CppArray<::System::Int32>* ExteriorEdges; // 0x50
	::UnityEngine::Quaternion CoordRot; // 0x58
};
