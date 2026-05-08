#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MeshRenderer; }

#define NAPSTREAMING_NAPSTREAMINGLIGHTMAPBATCHHELPER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x11D98FC0)
#define NAPSTREAMING_NAPSTREAMINGLIGHTMAPBATCHHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x11D99280)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingLightmapBatchHelper_TypeDefinitionIndex = 56574;

	class NapStreamingLightmapBatchHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* renderers; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* lightmapIndexs; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* lightmapScaleOffsets; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGLIGHTMAPBATCHHELPER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGLIGHTMAPBATCHHELPER_ONENABLE_OFFSET))(this);
		}
	};
}
