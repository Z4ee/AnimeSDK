#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_186A262452427E44;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_2_186A262452427E44_CLASS_1_09FDA153182A3E38_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12848600)
#define CLASS_2_186A262452427E44_CLASS_1_09FDA153182A3E38_1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_INT32__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x12848970)
#define CLASS_2_186A262452427E44_CLASS_1_09FDA153182A3E38_1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_INT32__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x128488C0)
#define CLASS_2_186A262452427E44_CLASS_1_09FDA153182A3E38_1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x12848A00)
#define CLASS_2_186A262452427E44_CLASS_1_09FDA153182A3E38_1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12848920)
#define CLASS_2_186A262452427E44_CLASS_1_09FDA153182A3E38_1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x128488D0)
#define CLASS_2_186A262452427E44_CLASS_1_09FDA153182A3E38_1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x128485F0)
#define CLASS_2_186A262452427E44_CLASS_1_09FDA153182A3E38_1__CTOR_OFFSET UNITYSDK_OFFSET(0x128485D0)

inline static constexpr unsigned int Class_2_186A262452427E44_Class_1_09FDA153182A3E38_1_TypeDefinitionIndex = 62150;

class Class_2_186A262452427E44_Class_1_09FDA153182A3E38_1 : public ::System::Object
{
public:
	::Class_2_186A262452427E44* Field_1_11; // 0x10
	::System::Int32 Field_1_10; // 0x18
	::System::Int32 Field_1_8; // 0x1C
	::System::Int32 Field_1_9; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::System::Int32 Field_1_15; // 0x28
	::System::Int32 Field_1_12; // 0x2C
	::System::Int32 Field_1_14; // 0x30
	::System::Int32 Field_1_5; // 0x34
	::System::Int32 Field_1_0; // 0x38
	::System::Int32 Field_1_6; // 0x3C
	::System::Int32 Field_1_16; // 0x40
	::System::Int32 Field_1_4; // 0x44
	::System::Int32 Field_1_1; // 0x48
	::System::Int32 Field_1_2; // 0x4C
	::System::Int32 Field_1_7; // 0x50
	::System::Int32 Field_1_13; // 0x54

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_CLASS_1_09FDA153182A3E38_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_CLASS_1_09FDA153182A3E38_1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_CLASS_1_09FDA153182A3E38_1_MOVENEXT_OFFSET))(this);
	}

	::System::Int32 System_Collections_Generic_IEnumerator_System_Int32__get_Current()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_CLASS_1_09FDA153182A3E38_1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_INT32__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_CLASS_1_09FDA153182A3E38_1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_CLASS_1_09FDA153182A3E38_1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Int32>* System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_CLASS_1_09FDA153182A3E38_1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_INT32__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_CLASS_1_09FDA153182A3E38_1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
