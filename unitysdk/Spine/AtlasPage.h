#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Format.h"
#include "unitysdk/Spine/TextureFilter.h"
#include "unitysdk/Spine/TextureWrap.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SPINE_ATLASPAGE_CLONE_OFFSET UNITYSDK_OFFSET(0x18398BE0)
#define SPINE_ATLASPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18396D60)

namespace Spine
{
	inline static constexpr unsigned int AtlasPage_TypeDefinitionIndex = 30688;

	class AtlasPage : public ::System::Object
	{
	public:
		::System::Object* rendererObject; // 0x10
		::System::String* name; // 0x18
		::Spine::TextureWrap uWrap; // 0x20
		::System::Int32 height; // 0x24
		::Spine::TextureFilter magFilter; // 0x28
		::System::Boolean pma; // 0x2C
		::Spine::Format format; // 0x30
		::Spine::TextureWrap vWrap; // 0x34
		::System::Int32 width; // 0x38
		::Spine::TextureFilter minFilter; // 0x3C

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
