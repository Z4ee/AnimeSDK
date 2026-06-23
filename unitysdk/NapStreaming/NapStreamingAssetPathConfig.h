#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NAPSTREAMING_NAPSTREAMINGASSETPATHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xFDFB300)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingAssetPathConfig_TypeDefinitionIndex = 48546;

	class NapStreamingAssetPathConfig : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>* hashToPathDict; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGASSETPATHCONFIG__CTOR_OFFSET))(this);
		}
	};
}
