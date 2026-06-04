#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MONO_GLOBALIZATION_UNICODE_LEVEL2MAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1854BF90)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int Level2Map_TypeDefinitionIndex = 34;

	class Level2Map : public ::System::Object
	{
	public:
		::System::Byte Replace; // 0x10
		::System::Byte Source; // 0x11

		::System::Void _ctor(::System::Byte a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_LEVEL2MAP__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
