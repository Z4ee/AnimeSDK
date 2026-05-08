#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/TextureRegion.h"

namespace Spine { class AtlasPage; }
namespace System { class String; }

#define SPINE_ATLASREGION_CLONE_OFFSET UNITYSDK_OFFSET(0x1BD4CDB0)
#define SPINE_ATLASREGION_GET_ORIGINALHEIGHT_OFFSET UNITYSDK_OFFSET(0x1BD4CDA0)
#define SPINE_ATLASREGION_GET_ORIGINALWIDTH_OFFSET UNITYSDK_OFFSET(0x1BD4CD90)
#define SPINE_ATLASREGION_GET_PACKEDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1BD4CD70)
#define SPINE_ATLASREGION_GET_PACKEDWIDTH_OFFSET UNITYSDK_OFFSET(0x1BD4CD50)
#define SPINE_ATLASREGION_SET_PACKEDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1BD4CD80)
#define SPINE_ATLASREGION_SET_PACKEDWIDTH_OFFSET UNITYSDK_OFFSET(0x1BD4CD60)
#define SPINE_ATLASREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD4CEB0)

namespace Spine
{
	inline static constexpr unsigned int AtlasRegion_TypeDefinitionIndex = 31301;

	class AtlasRegion : public ::Spine::TextureRegion
	{
	public:
		::Il2CppArray<::System::String*>* names; // 0x28
		::System::String* name; // 0x30
		::Spine::AtlasPage* page; // 0x38
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* values; // 0x40
		::System::Int32 index; // 0x48
		::System::Int32 y; // 0x4C
		::System::Int32 originalHeight; // 0x50
		::System::Single offsetY; // 0x54
		::System::Single offsetX; // 0x58
		::System::Int32 originalWidth; // 0x5C
		::System::Int32 x; // 0x60
		::System::Int32 degrees; // 0x64
		::System::Boolean rotate; // 0x68

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
