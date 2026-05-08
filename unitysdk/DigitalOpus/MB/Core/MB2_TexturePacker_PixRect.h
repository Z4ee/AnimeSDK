#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER_PIXRECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B6DB850)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER_PIXRECT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B6DB830)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER_PIXRECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6DB820)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB2_TexturePacker_PixRect_TypeDefinitionIndex = 85103;

	class MB2_TexturePacker_PixRect : public ::System::Object
	{
	public:
		::System::Int32 y; // 0x10
		::System::Int32 h; // 0x14
		::System::Int32 w; // 0x18
		::System::Int32 x; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER_PIXRECT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 xx, ::System::Int32 yy, ::System::Int32 ww, ::System::Int32 hh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER_PIXRECT__CTOR_1_OFFSET))(this, xx, yy, ww, hh);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER_PIXRECT_TOSTRING_OFFSET))(this);
		}
	};
}
