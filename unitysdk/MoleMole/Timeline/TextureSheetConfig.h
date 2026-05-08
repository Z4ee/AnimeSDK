#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_TIMELINE_TEXTURESHEETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1237DAC0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int TextureSheetConfig_TypeDefinitionIndex = 56830;

	class TextureSheetConfig : public ::System::Object
	{
	public:
		::System::Int32 row; // 0x10
		::System::Int32 col; // 0x14
		::System::Int32 num; // 0x18
		::System::Int32 frequency; // 0x1C
		::System::Int32 loop; // 0x20
		::System::String* duration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEETCONFIG__CTOR_OFFSET))(this);
		}
	};
}
