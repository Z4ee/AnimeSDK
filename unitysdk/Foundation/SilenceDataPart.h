#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_SILENCEDATAPART__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2E7890)

namespace Foundation
{
	inline static constexpr unsigned int SilenceDataPart_TypeDefinitionIndex = 7830;

	class SilenceDataPart : public ::System::Object
	{
	public:
		::System::String* base_url; // 0x10
		::System::String* md5_files; // 0x18
		::System::String* silence_revision; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SILENCEDATAPART__CTOR_OFFSET))(this);
		}
	};
}
