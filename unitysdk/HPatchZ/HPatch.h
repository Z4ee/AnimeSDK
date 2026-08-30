#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HPATCHZ_HPATCH_HPATCHZ_OFFSET UNITYSDK_OFFSET(0x1D45AE60)
#define HPATCHZ_HPATCH_PATCH_OFFSET UNITYSDK_OFFSET(0x1D45AF50)
#define HPATCHZ_HPATCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D45AF60)

namespace HPatchZ
{
	inline static constexpr unsigned int HPatch_TypeDefinitionIndex = 47453;

	class HPatch : public ::System::Object
	{
	public:
		// static const ::System::Int32 kPatchCacheSizeDefault = 0x4000000; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPATCHZ_HPATCH__CTOR_OFFSET))(this);
		}

		static ::System::Int32 hpatchz(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int64 a4)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + HPATCHZ_HPATCH_HPATCHZ_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 Patch(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int64 a4)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + HPATCHZ_HPATCH_PATCH_OFFSET))(a1, a2, a3, a4);
		}
	};
}
