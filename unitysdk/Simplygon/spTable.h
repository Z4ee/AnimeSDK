#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/spObject.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

#define SIMPLYGON_SPTABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18370770)
#define SIMPLYGON_SPTABLE_GETCPTR_OFFSET UNITYSDK_OFFSET(0x18370CF0)
#define SIMPLYGON_SPTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x183704E0)

namespace Simplygon
{
	inline static constexpr unsigned int spTable_TypeDefinitionIndex = 29551;

	class spTable : public ::Simplygon::spObject
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x28

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPTABLE__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		static ::System::Runtime::InteropServices::HandleRef getCPtr(::Simplygon::spTable* obj)
		{
			return ((::System::Runtime::InteropServices::HandleRef(*)(::Simplygon::spTable*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPTABLE_GETCPTR_OFFSET))(obj);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPTABLE_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
