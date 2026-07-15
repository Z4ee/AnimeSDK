#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MONO_GLOBALIZATION_UNICODE_TAILORINGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x155D0B90)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int TailoringInfo_TypeDefinitionIndex = 31;

	class TailoringInfo : public ::System::Object
	{
	public:
		::System::Int32 LCID; // 0x10
		::System::Int32 TailoringIndex; // 0x14
		::System::Boolean FrenchSort; // 0x18
		::System::Int32 TailoringCount; // 0x1C

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_TAILORINGINFO__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
