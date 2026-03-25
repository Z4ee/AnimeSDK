#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HPATCHZ_HPATCH_HPATCHZ_OFFSET UNITYSDK_OFFSET(0x83E8290)
#define HPATCHZ_HPATCH_PATCH_OFFSET UNITYSDK_OFFSET(0x83E8380)
#define HPATCHZ_HPATCH__CTOR_OFFSET UNITYSDK_OFFSET(0x83E8390)

namespace HPatchZ
{
	inline static constexpr unsigned int HPatch_TypeDefinitionIndex = 37928;

	class HPatch : public ::System::Object
	{
	public:
		// static const ::System::Int32 kPatchCacheSizeDefault = 0x4000000; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPATCHZ_HPATCH__CTOR_OFFSET))(this);
		}

		static ::System::Int32 hpatchz(::System::String* oldFileName, ::System::String* diffFileName, ::System::String* outNewFileName, ::System::Int64 patchCacheSize)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + HPATCHZ_HPATCH_HPATCHZ_OFFSET))(oldFileName, diffFileName, outNewFileName, patchCacheSize);
		}

		static ::System::Int32 Patch(::System::String* oldFile, ::System::String* diffFile, ::System::String* newFile, ::System::Int64 caseSize)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + HPATCHZ_HPATCH_PATCH_OFFSET))(oldFile, diffFile, newFile, caseSize);
		}
	};
}
