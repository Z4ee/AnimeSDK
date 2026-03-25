#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

namespace System { class String; }

#define SIMPLYGON_SPOBJECT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1836B5A0)
#define SIMPLYGON_SPOBJECT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1835E590)
#define SIMPLYGON_SPOBJECT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18372910)
#define SIMPLYGON_SPOBJECT_SETNAME_OFFSET UNITYSDK_OFFSET(0x18372980)
#define SIMPLYGON_SPOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1836B410)

namespace Simplygon
{
	inline static constexpr unsigned int spObject_TypeDefinitionIndex = 29548;

	class spObject : public ::System::Object
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x10
		::System::Boolean swigCMemOwn; // 0x20

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPOBJECT__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_SPOBJECT_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_SPOBJECT_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPOBJECT_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void SetName(::System::String* Name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPOBJECT_SETNAME_OFFSET))(this, Name);
		}
	};
}
