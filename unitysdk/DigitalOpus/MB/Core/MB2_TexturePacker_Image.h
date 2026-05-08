#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/AtlasPadding.h"
#include "unitysdk/System/Object.h"

#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER_IMAGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BCF9700)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER_IMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCF96C0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB2_TexturePacker_Image_TypeDefinitionIndex = 85104;

	class MB2_TexturePacker_Image : public ::System::Object
	{
	public:
		::System::Int32 w; // 0x10
		::System::Int32 y; // 0x14
		::System::Int32 h; // 0x18
		::System::Int32 x; // 0x1C
		::System::Int32 imgId; // 0x20

		::System::Void _ctor(::System::Int32 id, ::System::Int32 tw, ::System::Int32 th, ::DigitalOpus::MB::Core::AtlasPadding padding, ::System::Int32 minImageSizeX, ::System::Int32 minImageSizeY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::DigitalOpus::MB::Core::AtlasPadding, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER_IMAGE__CTOR_OFFSET))(this, id, tw, th, padding, minImageSizeX, minImageSizeY);
		}

		::System::Void _ctor_1(::DigitalOpus::MB::Core::MB2_TexturePacker_Image* im)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB2_TexturePacker_Image*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER_IMAGE__CTOR_1_OFFSET))(this, im);
		}
	};
}
