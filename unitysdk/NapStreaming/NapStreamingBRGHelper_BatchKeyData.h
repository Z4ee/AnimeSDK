#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/BatchDrawVisibilityMask.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define NAPSTREAMING_NAPSTREAMINGBRGHELPER_BATCHKEYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x11950D40)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingBRGHelper_BatchKeyData_TypeDefinitionIndex = 66356;

	class NapStreamingBRGHelper_BatchKeyData : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* mesh; // 0x10
		::UnityEngine::Material* material; // 0x18
		::System::Int32 lodLevel; // 0x20
		::System::Int32 submeshIndex; // 0x24
		::System::Int32 lightmapIndex; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* instanceIndices; // 0x30
		::UnityEngine::Rendering::BatchDrawVisibilityMask splitVisibilityMask; // 0x38
		::System::Single lodScreenRelativeMin; // 0x3C
		::System::Single lodScreenRelativeMax; // 0x40
		::System::Boolean useDistanceLod; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGBRGHELPER_BATCHKEYDATA__CTOR_OFFSET))(this);
		}
	};
}
