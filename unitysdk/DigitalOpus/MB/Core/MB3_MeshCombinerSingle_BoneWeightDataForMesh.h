#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_BONEWEIGHTDATAFORMESH_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0xA65250)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_BONEWEIGHTDATAFORMESH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA65250)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshCombinerSingle_BoneWeightDataForMesh_TypeDefinitionIndex = 90635;

	struct alignas(8) MB3_MeshCombinerSingle_BoneWeightDataForMesh
	{
		::System::Boolean _disposed; // 0x10
		::System::Boolean initialized; // 0x11
		::System::Boolean weMustDispose; // 0x12
		::Il2CppArray<::System::Boolean>* UsedBoneIdxsInSrcMesh; // 0x18
		::System::Int32 numUsedbones; // 0x20

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_BONEWEIGHTDATAFORMESH_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_BONEWEIGHTDATAFORMESH_DISPOSE_1_OFFSET))(this, disposing);
		}
	};
}
