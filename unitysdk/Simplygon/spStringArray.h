#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/spValueArray.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

namespace System { class String; }

#define SIMPLYGON_SPSTRINGARRAY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18377A80)
#define SIMPLYGON_SPSTRINGARRAY_GETCPTR_OFFSET UNITYSDK_OFFSET(0x18363080)
#define SIMPLYGON_SPSTRINGARRAY_GETITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x18377DA0)
#define SIMPLYGON_SPSTRINGARRAY_GETITEM_OFFSET UNITYSDK_OFFSET(0x18377FA0)
#define SIMPLYGON_SPSTRINGARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x183625B0)

namespace Simplygon
{
	inline static constexpr unsigned int spStringArray_TypeDefinitionIndex = 29579;

	class spStringArray : public ::Simplygon::spValueArray
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x48

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSTRINGARRAY__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		static ::System::Runtime::InteropServices::HandleRef getCPtr(::Simplygon::spStringArray* obj)
		{
			return ((::System::Runtime::InteropServices::HandleRef(*)(::Simplygon::spStringArray*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSTRINGARRAY_GETCPTR_OFFSET))(obj);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSTRINGARRAY_DISPOSE_OFFSET))(this, disposing);
		}

		::System::UInt32 GetItemCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSTRINGARRAY_GETITEMCOUNT_OFFSET))(this);
		}

		::System::String* GetItem(::System::Int32 id)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSTRINGARRAY_GETITEM_OFFSET))(this, id);
		}
	};
}
