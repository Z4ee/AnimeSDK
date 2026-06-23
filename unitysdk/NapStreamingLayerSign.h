#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapStreaming/StreamingLayer.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define NAPSTREAMINGLAYERSIGN__CTOR_OFFSET UNITYSDK_OFFSET(0xEBE18E0)

inline static constexpr unsigned int NapStreamingLayerSign_TypeDefinitionIndex = 46225;

class NapStreamingLayerSign : public ::UnityEngine::MonoBehaviour
{
public:
	::NapStreaming::StreamingLayer layer; // 0x18
	::System::String* desc; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMINGLAYERSIGN__CTOR_OFFSET))(this);
	}
};
