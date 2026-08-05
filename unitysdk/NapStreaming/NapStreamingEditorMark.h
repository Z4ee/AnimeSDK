#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define NAPSTREAMING_NAPSTREAMINGEDITORMARK_GET_DESC_OFFSET UNITYSDK_OFFSET(0x177E8AB0)
#define NAPSTREAMING_NAPSTREAMINGEDITORMARK__CTOR_OFFSET UNITYSDK_OFFSET(0x177E8AF0)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingEditorMark_TypeDefinitionIndex = 50377;

	class NapStreamingEditorMark : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGEDITORMARK__CTOR_OFFSET))(this);
		}

		::System::String* get_desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGEDITORMARK_GET_DESC_OFFSET))(this);
		}
	};
}
