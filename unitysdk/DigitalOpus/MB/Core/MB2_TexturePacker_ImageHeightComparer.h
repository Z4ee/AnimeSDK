#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class MB2_TexturePacker_Image; }

#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER_IMAGEHEIGHTCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1F6333D0)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER_IMAGEHEIGHTCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F633410)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB2_TexturePacker_ImageHeightComparer_TypeDefinitionIndex = 94613;

	class MB2_TexturePacker_ImageHeightComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER_IMAGEHEIGHTCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::DigitalOpus::MB::Core::MB2_TexturePacker_Image* x, ::DigitalOpus::MB::Core::MB2_TexturePacker_Image* y)
		{
			return ((::System::Int32(*)(::PVOID, ::DigitalOpus::MB::Core::MB2_TexturePacker_Image*, ::DigitalOpus::MB::Core::MB2_TexturePacker_Image*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER_IMAGEHEIGHTCOMPARER_COMPARE_OFFSET))(this, x, y);
		}
	};
}
