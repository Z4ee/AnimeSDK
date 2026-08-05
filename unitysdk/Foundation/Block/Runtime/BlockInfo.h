#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define FOUNDATION_BLOCK_RUNTIME_BLOCKINFO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA47430)
#define FOUNDATION_BLOCK_RUNTIME_BLOCKINFO_GETASSETBUNDLENAME_OFFSET UNITYSDK_OFFSET(0xA47380)
#define FOUNDATION_BLOCK_RUNTIME_BLOCKINFO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xA473A0)
#define FOUNDATION_BLOCK_RUNTIME_BLOCKINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA47390)
#define FOUNDATION_BLOCK_RUNTIME_BLOCKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x66EFE0)
#define FOUNDATION_BLOCK_RUNTIME_BLOCKINFO___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA474C0)

namespace Foundation::Block::Runtime
{
	inline static constexpr unsigned int BlockInfo_TypeDefinitionIndex = 8317;

	struct alignas(8) BlockInfo
	{
		::System::Int32 blockID; // 0x10
		::System::UInt64 bundleHash; // 0x18
		::System::UInt64 offset; // 0x20

		::System::Void _ctor(::System::Int32 blockID, ::System::UInt64 bundleHash, ::System::UInt64 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_BLOCK_RUNTIME_BLOCKINFO__CTOR_OFFSET))(this, blockID, bundleHash, offset);
		}

		::System::String* GetAssetBundleName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BLOCK_RUNTIME_BLOCKINFO_GETASSETBUNDLENAME_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BLOCK_RUNTIME_BLOCKINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void Serialize(::System::IO::BinaryWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + FOUNDATION_BLOCK_RUNTIME_BLOCKINFO_SERIALIZE_OFFSET))(this, writer);
		}

		::System::Void Deserialize(::System::IO::BinaryReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + FOUNDATION_BLOCK_RUNTIME_BLOCKINFO_DESERIALIZE_OFFSET))(this, reader);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BLOCK_RUNTIME_BLOCKINFO___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
