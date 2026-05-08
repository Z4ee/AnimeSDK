#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MB2_TextureBakeResults;
namespace DigitalOpus::MB::Core { class MB_IMeshBakerSettings; }

#define DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_NATIVEARRAY_MESHASSIGN_COLORS_OFFSET UNITYSDK_OFFSET(0x1BE03F40)
#define DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_NATIVEARRAY_MESHASSIGN_UV_OFFSET UNITYSDK_OFFSET(0x1BE03F30)
#define DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_NATIVEARRAY_UVCHANNELWITHEXTRAPARAMETER_OFFSET UNITYSDK_OFFSET(0x1BE03F20)
#define DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_NATIVEARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE03F50)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB_DefaultMeshAssignCustomizer_NativeArray_TypeDefinitionIndex = 85098;

	class MB_DefaultMeshAssignCustomizer_NativeArray : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_NATIVEARRAY__CTOR_OFFSET))(this);
		}

		::System::Int32 UVchannelWithExtraParameter()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_NATIVEARRAY_UVCHANNELWITHEXTRAPARAMETER_OFFSET))(this);
		}

		::System::Void meshAssign_UV(::System::Int32 channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings* settings, ::MB2_TextureBakeResults* textureBakeResults, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3> outUVsInMesh, ::Unity::Collections::NativeSlice_1<::System::Single> sliceIndexes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::MB2_TextureBakeResults*, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<::System::Single>))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_NATIVEARRAY_MESHASSIGN_UV_OFFSET))(this, channel, settings, textureBakeResults, outUVsInMesh, sliceIndexes);
		}

		::System::Void meshAssign_colors(::DigitalOpus::MB::Core::MB_IMeshBakerSettings* settings, ::MB2_TextureBakeResults* textureBakeResults, ::Unity::Collections::NativeSlice_1<::UnityEngine::Color> outUVsInMesh, ::Unity::Collections::NativeSlice_1<::System::Single> sliceIndexes)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::MB2_TextureBakeResults*, ::Unity::Collections::NativeSlice_1<::UnityEngine::Color>, ::Unity::Collections::NativeSlice_1<::System::Single>))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_NATIVEARRAY_MESHASSIGN_COLORS_OFFSET))(this, settings, textureBakeResults, outUVsInMesh, sliceIndexes);
		}
	};
}
