#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_DESIGNDATAPART__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA33A00)

namespace Foundation
{
	inline static constexpr unsigned int DesignDataPart_TypeDefinitionIndex = 7855;

	class DesignDataPart : public ::System::Object
	{
	public:
		::System::String* base_url; // 0x10
		::System::String* data_revision; // 0x18
		::System::String* md5_files; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DESIGNDATAPART__CTOR_OFFSET))(this);
		}
	};
}
