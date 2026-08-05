#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NAPSTREAMING_NAPSTREAMINGOVERRIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x954CA10)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingOverrideConfig_TypeDefinitionIndex = 90353;

	class NapStreamingOverrideConfig : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* sceneOverrideConfigMap; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGOVERRIDECONFIG__CTOR_OFFSET))(this);
		}
	};
}
