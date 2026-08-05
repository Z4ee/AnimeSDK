#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_DCAE8F26C462318B;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_2_DCAE8F26C462318B_CLASS_1_09FDA153182A3E38_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12D821D0)
#define CLASS_2_DCAE8F26C462318B_CLASS_1_09FDA153182A3E38_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_SINGLE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x12D82500)
#define CLASS_2_DCAE8F26C462318B_CLASS_1_09FDA153182A3E38_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12D82450)
#define CLASS_2_DCAE8F26C462318B_CLASS_1_09FDA153182A3E38_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x12D825A0)
#define CLASS_2_DCAE8F26C462318B_CLASS_1_09FDA153182A3E38_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12D824B0)
#define CLASS_2_DCAE8F26C462318B_CLASS_1_09FDA153182A3E38_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x12D82460)
#define CLASS_2_DCAE8F26C462318B_CLASS_1_09FDA153182A3E38_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12D821C0)
#define CLASS_2_DCAE8F26C462318B_CLASS_1_09FDA153182A3E38__CTOR_OFFSET UNITYSDK_OFFSET(0x12D821A0)

inline static constexpr unsigned int Class_2_DCAE8F26C462318B_Class_1_09FDA153182A3E38_TypeDefinitionIndex = 72230;

class Class_2_DCAE8F26C462318B_Class_1_09FDA153182A3E38 : public ::System::Object
{
public:
	::Class_2_DCAE8F26C462318B* Field_1_10; // 0x10
	::System::Single Field_1_9; // 0x18
	::System::Int32 Field_1_7; // 0x1C
	::System::Single Field_1_15; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::System::Single Field_1_14; // 0x28
	::System::Int32 Field_1_11; // 0x2C
	::System::Int32 Field_1_1; // 0x30
	::System::Int32 Field_1_4; // 0x34
	::System::Single Field_1_8; // 0x38
	::System::Int32 Field_1_0; // 0x3C
	::System::Int32 Field_1_6; // 0x40
	::System::Single Field_1_2; // 0x44
	::System::Int32 Field_1_5; // 0x48
	::System::Single Field_1_13; // 0x4C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DCAE8F26C462318B_CLASS_1_09FDA153182A3E38__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DCAE8F26C462318B_CLASS_1_09FDA153182A3E38_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DCAE8F26C462318B_CLASS_1_09FDA153182A3E38_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DCAE8F26C462318B_CLASS_1_09FDA153182A3E38_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DCAE8F26C462318B_CLASS_1_09FDA153182A3E38_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DCAE8F26C462318B_CLASS_1_09FDA153182A3E38_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* System_Collections_Generic_IEnumerable_System_Single__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DCAE8F26C462318B_CLASS_1_09FDA153182A3E38_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_SINGLE__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DCAE8F26C462318B_CLASS_1_09FDA153182A3E38_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
