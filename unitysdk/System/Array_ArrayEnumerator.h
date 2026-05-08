#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }

#define SYSTEM_ARRAY_ARRAYENUMERATOR_CLONE_OFFSET UNITYSDK_OFFSET(0x19E038A0)
#define SYSTEM_ARRAY_ARRAYENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19E039E0)
#define SYSTEM_ARRAY_ARRAYENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19E03870)
#define SYSTEM_ARRAY_ARRAYENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19E03890)
#define SYSTEM_ARRAY_ARRAYENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19E03750)

namespace System
{
	inline static constexpr unsigned int Array_ArrayEnumerator_TypeDefinitionIndex = 127;

	class Array_ArrayEnumerator : public ::System::Object
	{
	public:
		::System::Array* _array; // 0x10
		::System::Int32 _index; // 0x18
		::System::Int32 _endIndex; // 0x1C

		::System::Void _ctor(::System::Array* array)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_ARRAYENUMERATOR__CTOR_OFFSET))(this, array);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_ARRAYENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_ARRAYENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_ARRAYENUMERATOR_CLONE_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_ARRAYENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
