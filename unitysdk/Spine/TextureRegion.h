#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SPINE_TEXTUREREGION_GET_ORIGINALHEIGHT_OFFSET UNITYSDK_OFFSET(0x1AC99D40)
#define SPINE_TEXTUREREGION_GET_ORIGINALWIDTH_OFFSET UNITYSDK_OFFSET(0x1AC99D30)
#define SPINE_TEXTUREREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC99D50)

namespace Spine
{
	inline static constexpr unsigned int TextureRegion_TypeDefinitionIndex = 36764;

	class TextureRegion : public ::System::Object
	{
	public:
		::System::Single u2; // 0x10
		::System::Single v; // 0x14
		::System::Single v2; // 0x18
		::System::Int32 width; // 0x1C
		::System::Int32 height; // 0x20
		::System::Single u; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TEXTUREREGION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_OriginalWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TEXTUREREGION_GET_ORIGINALWIDTH_OFFSET))(this);
		}

		::System::Int32 get_OriginalHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TEXTUREREGION_GET_ORIGINALHEIGHT_OFFSET))(this);
		}
	};
}
