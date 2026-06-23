#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Standart::Hash::xxHash { class XXHash64Update; }

#define FOUNDATION_HASHUPDATER_URANIUM62_DIGEST_OFFSET UNITYSDK_OFFSET(0x13B82710)
#define FOUNDATION_HASHUPDATER_URANIUM62_RESET_OFFSET UNITYSDK_OFFSET(0x13B828A0)
#define FOUNDATION_HASHUPDATER_URANIUM62_UPDATE_OFFSET UNITYSDK_OFFSET(0x13B82690)
#define FOUNDATION_HASHUPDATER_URANIUM62__CTOR_OFFSET UNITYSDK_OFFSET(0x13B82640)

namespace Foundation
{
	inline static constexpr unsigned int HashUpdater_uranium62_TypeDefinitionIndex = 45437;

	class HashUpdater_uranium62 : public ::System::Object
	{
	public:
		::Standart::Hash::xxHash::XXHash64Update* _XXH64; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_HASHUPDATER_URANIUM62__CTOR_OFFSET))(this);
		}

		::System::Void Update(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_HASHUPDATER_URANIUM62_UPDATE_OFFSET))(this, bytes, offset, length);
		}

		::System::UInt64 Digest()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_HASHUPDATER_URANIUM62_DIGEST_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_HASHUPDATER_URANIUM62_RESET_OFFSET))(this);
		}
	};
}
