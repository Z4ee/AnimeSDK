#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class MB2_TexturePacker_Image; }

#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER_IMGIDCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1C11DE70)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER_IMGIDCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C11DEB0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB2_TexturePacker_ImgIDComparer_TypeDefinitionIndex = 85105;

	class MB2_TexturePacker_ImgIDComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER_IMGIDCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::DigitalOpus::MB::Core::MB2_TexturePacker_Image* x, ::DigitalOpus::MB::Core::MB2_TexturePacker_Image* y)
		{
			return ((::System::Int32(*)(::PVOID, ::DigitalOpus::MB::Core::MB2_TexturePacker_Image*, ::DigitalOpus::MB::Core::MB2_TexturePacker_Image*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER_IMGIDCOMPARER_COMPARE_OFFSET))(this, x, y);
		}
	};
}
