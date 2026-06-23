#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define CLASS_1_A4C39CFFEBDB39AE_CLASS_1_2F7452F15642FB76_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14946B70)
#define CLASS_1_A4C39CFFEBDB39AE_CLASS_1_2F7452F15642FB76_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14947B50)
#define CLASS_1_A4C39CFFEBDB39AE_CLASS_1_2F7452F15642FB76_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14947BB0)
#define CLASS_1_A4C39CFFEBDB39AE_CLASS_1_2F7452F15642FB76_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x14947B60)
#define CLASS_1_A4C39CFFEBDB39AE_CLASS_1_2F7452F15642FB76_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14946B60)
#define CLASS_1_A4C39CFFEBDB39AE_CLASS_1_2F7452F15642FB76__CTOR_OFFSET UNITYSDK_OFFSET(0x14946B50)

inline static constexpr unsigned int Class_1_A4C39CFFEBDB39AE_Class_1_2F7452F15642FB76_TypeDefinitionIndex = 79738;

class Class_1_A4C39CFFEBDB39AE_Class_1_2F7452F15642FB76 : public ::System::Object
{
public:
	::System::Object* Field_1_1; // 0x10
	::Foundation::ViewObject::ViewObjectHandle Field_1_3; // 0x18
	::Foundation::ViewObject::ViewObjectHandle Field_1_7; // 0x28
	::System::Single Field_1_6; // 0x38
	::System::Int32 Field_1_0; // 0x3C
	::System::Boolean Field_1_2; // 0x40
	::System::Single Field_1_4; // 0x44
	::System::Single Field_1_5; // 0x48
	::System::ValueTuple_2<::System::Int32, ::System::Int32> Field_1_8; // 0x4C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A4C39CFFEBDB39AE_CLASS_1_2F7452F15642FB76__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4C39CFFEBDB39AE_CLASS_1_2F7452F15642FB76_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4C39CFFEBDB39AE_CLASS_1_2F7452F15642FB76_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4C39CFFEBDB39AE_CLASS_1_2F7452F15642FB76_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4C39CFFEBDB39AE_CLASS_1_2F7452F15642FB76_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4C39CFFEBDB39AE_CLASS_1_2F7452F15642FB76_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
