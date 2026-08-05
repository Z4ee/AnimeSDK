#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Format.h"
#include "unitysdk/Spine/TextureFilter.h"
#include "unitysdk/Spine/TextureWrap.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SPINE_ATLASPAGE_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC6F150)
#define SPINE_ATLASPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6F250)

namespace Spine
{
	inline static constexpr unsigned int AtlasPage_TypeDefinitionIndex = 33486;

	class AtlasPage : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Object* rendererObject; // 0x18
		::Spine::TextureWrap vWrap; // 0x20
		::Spine::TextureFilter minFilter; // 0x24
		::Spine::TextureFilter magFilter; // 0x28
		::System::Boolean pma; // 0x2C
		::System::Int32 width; // 0x30
		::Spine::Format format; // 0x34
		::Spine::TextureWrap uWrap; // 0x38
		::System::Int32 height; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASPAGE__CTOR_OFFSET))(this);
		}

		::Spine::AtlasPage* Clone()
		{
			return ((::Spine::AtlasPage*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASPAGE_CLONE_OFFSET))(this);
		}
	};
}
