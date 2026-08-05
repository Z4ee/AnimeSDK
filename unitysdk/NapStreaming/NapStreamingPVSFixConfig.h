#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapStreaming/PVSUnloadData.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x112B1EA0)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingPVSFixConfig_TypeDefinitionIndex = 41599;

	class NapStreamingPVSFixConfig : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Bounds>*>* fixSceneData; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::NapStreaming::PVSUnloadData>*>* fixUnloadSceneData; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG__CTOR_OFFSET))(this);
		}
	};
}
