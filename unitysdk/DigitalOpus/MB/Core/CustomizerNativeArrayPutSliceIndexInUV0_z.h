#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_DefaultMeshAssignCustomizer_NativeArray.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MB2_TextureBakeResults;
namespace DigitalOpus::MB::Core { class MB_IMeshBakerSettings; }

#define DIGITALOPUS_MB_CORE_CUSTOMIZERNATIVEARRAYPUTSLICEINDEXINUV0_Z_MESHASSIGN_UV_OFFSET UNITYSDK_OFFSET(0x1E819BB0)
#define DIGITALOPUS_MB_CORE_CUSTOMIZERNATIVEARRAYPUTSLICEINDEXINUV0_Z_UVCHANNELWITHEXTRAPARAMETER_OFFSET UNITYSDK_OFFSET(0x1E819BA0)
#define DIGITALOPUS_MB_CORE_CUSTOMIZERNATIVEARRAYPUTSLICEINDEXINUV0_Z__CTOR_OFFSET UNITYSDK_OFFSET(0x1E819C80)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int CustomizerNativeArrayPutSliceIndexInUV0_z_TypeDefinitionIndex = 90560;

	class CustomizerNativeArrayPutSliceIndexInUV0_z : public ::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_CUSTOMIZERNATIVEARRAYPUTSLICEINDEXINUV0_Z__CTOR_OFFSET))(this);
		}

		::System::Int32 UVchannelWithExtraParameter()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_CUSTOMIZERNATIVEARRAYPUTSLICEINDEXINUV0_Z_UVCHANNELWITHEXTRAPARAMETER_OFFSET))(this);
		}

		::System::Void meshAssign_UV(::System::Int32 channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings* settings, ::MB2_TextureBakeResults* textureBakeResults, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3> outUVsInMesh, ::Unity::Collections::NativeSlice_1<::System::Single> sliceIndexes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::MB2_TextureBakeResults*, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<::System::Single>))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_CUSTOMIZERNATIVEARRAYPUTSLICEINDEXINUV0_Z_MESHASSIGN_UV_OFFSET))(this, channel, settings, textureBakeResults, outUVsInMesh, sliceIndexes);
		}
	};
}
