#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_CLIPATLASOFFSETDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x5EF230)
#define NPCCROWD_ANIMATION_CLIPATLASOFFSETDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xE026A90)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int ClipAtlasOffsetData_TypeDefinitionIndex = 40581;

	struct alignas(4) ClipAtlasOffsetData
	{
		static ::NPCCrowd::Animation::ClipAtlasOffsetData* StaticGet_Unloaded()
		{
			return (::NPCCrowd::Animation::ClipAtlasOffsetData*)Il2CppClass::FromTypeDefinitionIndex(ClipAtlasOffsetData_TypeDefinitionIndex)->GetStaticField(0xDD70);
		}
		::System::Int32 clipStartFrame; // 0x10
		::System::Int32 atlasOffsetX; // 0x14
		::System::Int32 atlasOffsetY; // 0x18
		::System::Int32 clipFrameCount; // 0x1C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CLIPATLASOFFSETDATA__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::NPCCrowd::Animation::ClipAtlasOffsetData other)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::ClipAtlasOffsetData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CLIPATLASOFFSETDATA_EQUALS_OFFSET))(this, other);
		}
	};
}
