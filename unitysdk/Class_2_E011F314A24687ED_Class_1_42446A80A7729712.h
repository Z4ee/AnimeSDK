#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_E011F314A24687ED;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_2_E011F314A24687ED_CLASS_1_42446A80A7729712_METHOD_1_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x10A05D60)
#define CLASS_2_E011F314A24687ED_CLASS_1_42446A80A7729712_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10A05E40)
#define CLASS_2_E011F314A24687ED_CLASS_1_42446A80A7729712_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_INT32X_SYSTEM_INT32Y___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x10A06330)
#define CLASS_2_E011F314A24687ED_CLASS_1_42446A80A7729712_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_INT32X_SYSTEM_INT32Y___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10A06280)
#define CLASS_2_E011F314A24687ED_CLASS_1_42446A80A7729712_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x10A063B0)
#define CLASS_2_E011F314A24687ED_CLASS_1_42446A80A7729712_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10A062E0)
#define CLASS_2_E011F314A24687ED_CLASS_1_42446A80A7729712_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x10A06290)
#define CLASS_2_E011F314A24687ED_CLASS_1_42446A80A7729712_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A05C70)
#define CLASS_2_E011F314A24687ED_CLASS_1_42446A80A7729712__CTOR_OFFSET UNITYSDK_OFFSET(0x10A05C50)

inline static constexpr unsigned int Class_2_E011F314A24687ED_Class_1_42446A80A7729712_TypeDefinitionIndex = 83058;

class Class_2_E011F314A24687ED_Class_1_42446A80A7729712 : public ::System::Object
{
public:
	::Class_2_E011F314A24687ED* Field_1_5; // 0x10
	::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_1_9; // 0x18
	::System::Int32 Field_1_0; // 0x20
	::System::Int32 Field_1_6; // 0x24
	::System::Int32 Field_1_11; // 0x28
	::System::Int32 Field_1_4; // 0x2C
	::System::ValueTuple_2<::System::Int32, ::System::Int32> Field_1_7; // 0x30
	::System::Int32 Field_1_10; // 0x38

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E011F314A24687ED_CLASS_1_42446A80A7729712__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E011F314A24687ED_CLASS_1_42446A80A7729712_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E011F314A24687ED_CLASS_1_42446A80A7729712_MOVENEXT_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> System_Collections_Generic_IEnumerator__System_Int32x_System_Int32y___get_Current()
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E011F314A24687ED_CLASS_1_42446A80A7729712_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_INT32X_SYSTEM_INT32Y___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E011F314A24687ED_CLASS_1_42446A80A7729712_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E011F314A24687ED_CLASS_1_42446A80A7729712_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* System_Collections_Generic_IEnumerable__System_Int32x_System_Int32y___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E011F314A24687ED_CLASS_1_42446A80A7729712_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_INT32X_SYSTEM_INT32Y___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E011F314A24687ED_CLASS_1_42446A80A7729712_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Void Method_1_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E011F314A24687ED_CLASS_1_42446A80A7729712_METHOD_1_7033EFB970A18315_OFFSET))(this);
	}
};
