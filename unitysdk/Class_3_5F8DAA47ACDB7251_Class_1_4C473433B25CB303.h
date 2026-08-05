#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_5F8DAA47ACDB7251;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_5F8DAA47ACDB7251_CLASS_1_4C473433B25CB303_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1250F7E0)
#define CLASS_3_5F8DAA47ACDB7251_CLASS_1_4C473433B25CB303_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x125118E0)
#define CLASS_3_5F8DAA47ACDB7251_CLASS_1_4C473433B25CB303_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12511940)
#define CLASS_3_5F8DAA47ACDB7251_CLASS_1_4C473433B25CB303_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x125118F0)
#define CLASS_3_5F8DAA47ACDB7251_CLASS_1_4C473433B25CB303_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1250F7D0)
#define CLASS_3_5F8DAA47ACDB7251_CLASS_1_4C473433B25CB303__CTOR_OFFSET UNITYSDK_OFFSET(0x1250F7C0)

inline static constexpr unsigned int Class_3_5F8DAA47ACDB7251_Class_1_4C473433B25CB303_TypeDefinitionIndex = 70166;

class Class_3_5F8DAA47ACDB7251_Class_1_4C473433B25CB303 : public ::System::Object
{
public:
	::Class_3_5F8DAA47ACDB7251* Field_1_7; // 0x10
	::System::Action* Field_1_6; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_5; // 0x20
	::System::Int32 Field_1_1; // 0x28
	::System::Int32 Field_1_4; // 0x2C
	::System::Single Field_1_0; // 0x30

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5F8DAA47ACDB7251_CLASS_1_4C473433B25CB303__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F8DAA47ACDB7251_CLASS_1_4C473433B25CB303_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F8DAA47ACDB7251_CLASS_1_4C473433B25CB303_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F8DAA47ACDB7251_CLASS_1_4C473433B25CB303_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F8DAA47ACDB7251_CLASS_1_4C473433B25CB303_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F8DAA47ACDB7251_CLASS_1_4C473433B25CB303_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
