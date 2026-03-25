#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/spTable.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

namespace Simplygon { class spTexture; }

#define SIMPLYGON_SPTEXTURETABLE_ADDTEXTURE_OFFSET UNITYSDK_OFFSET(0x18378B20)
#define SIMPLYGON_SPTEXTURETABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x18378720)
#define SIMPLYGON_SPTEXTURETABLE_COPY_OFFSET UNITYSDK_OFFSET(0x18378910)
#define SIMPLYGON_SPTEXTURETABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18378590)
#define SIMPLYGON_SPTEXTURETABLE_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1836C690)
#define SIMPLYGON_SPTEXTURETABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18361710)

namespace Simplygon
{
	inline static constexpr unsigned int spTextureTable_TypeDefinitionIndex = 29573;

	class spTextureTable : public ::Simplygon::spTable
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x38

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPTEXTURETABLE__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		static ::System::Runtime::InteropServices::HandleRef getCPtr(::Simplygon::spTextureTable* obj)
		{
			return ((::System::Runtime::InteropServices::HandleRef(*)(::Simplygon::spTextureTable*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPTEXTURETABLE_GETCPTR_OFFSET))(obj);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPTEXTURETABLE_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_SPTEXTURETABLE_CLEAR_OFFSET))(this);
		}

		::System::Void Copy(::Simplygon::spTable* src)
		{
			return ((::System::Void(*)(::PVOID, ::Simplygon::spTable*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPTEXTURETABLE_COPY_OFFSET))(this, src);
		}

		::System::Int32 AddTexture(::Simplygon::spTexture* texture)
		{
			return ((::System::Int32(*)(::PVOID, ::Simplygon::spTexture*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPTEXTURETABLE_ADDTEXTURE_OFFSET))(this, texture);
		}
	};
}
