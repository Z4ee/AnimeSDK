#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/TextureRegion.h"

namespace Spine { class AtlasPage; }
namespace System { class String; }

#define SPINE_ATLASREGION_CLONE_OFFSET UNITYSDK_OFFSET(0x1E09D700)
#define SPINE_ATLASREGION_GET_ORIGINALHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E09D6F0)
#define SPINE_ATLASREGION_GET_ORIGINALWIDTH_OFFSET UNITYSDK_OFFSET(0x1E09D6E0)
#define SPINE_ATLASREGION_GET_PACKEDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E09D6C0)
#define SPINE_ATLASREGION_GET_PACKEDWIDTH_OFFSET UNITYSDK_OFFSET(0x1E09D6A0)
#define SPINE_ATLASREGION_SET_PACKEDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E09D6D0)
#define SPINE_ATLASREGION_SET_PACKEDWIDTH_OFFSET UNITYSDK_OFFSET(0x1E09D6B0)
#define SPINE_ATLASREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E09D800)

namespace Spine
{
	inline static constexpr unsigned int AtlasRegion_TypeDefinitionIndex = 32852;

	class AtlasRegion : public ::Spine::TextureRegion
	{
	public:
		::Spine::AtlasPage* page; // 0x28
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* values; // 0x30
		::System::String* name; // 0x38
		::Il2CppArray<::System::String*>* names; // 0x40
		::System::Int32 originalHeight; // 0x48
		::System::Int32 originalWidth; // 0x4C
		::System::Single offsetY; // 0x50
		::System::Int32 index; // 0x54
		::System::Single offsetX; // 0x58
		::System::Int32 y; // 0x5C
		::System::Int32 x; // 0x60
		::System::Boolean rotate; // 0x64
		::System::Int32 degrees; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASREGION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_packedWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASREGION_GET_PACKEDWIDTH_OFFSET))(this);
		}

		::System::Void set_packedWidth(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_ATLASREGION_SET_PACKEDWIDTH_OFFSET))(this, value);
		}

		::System::Int32 get_packedHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASREGION_GET_PACKEDHEIGHT_OFFSET))(this);
		}

		::System::Void set_packedHeight(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_ATLASREGION_SET_PACKEDHEIGHT_OFFSET))(this, value);
		}

		::System::Int32 get_OriginalWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASREGION_GET_ORIGINALWIDTH_OFFSET))(this);
		}

		::System::Int32 get_OriginalHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASREGION_GET_ORIGINALHEIGHT_OFFSET))(this);
		}

		::Spine::AtlasRegion* Clone()
		{
			return ((::Spine::AtlasRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASREGION_CLONE_OFFSET))(this);
		}
	};
}
