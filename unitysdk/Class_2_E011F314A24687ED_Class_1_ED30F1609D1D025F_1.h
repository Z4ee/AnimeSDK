#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_2_E011F314A24687ED_CLASS_1_ED30F1609D1D025F_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13B1E690)
#define CLASS_2_E011F314A24687ED_CLASS_1_ED30F1609D1D025F_1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_INT32X_SYSTEM_INT32Y___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x13B1E7F0)
#define CLASS_2_E011F314A24687ED_CLASS_1_ED30F1609D1D025F_1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_INT32X_SYSTEM_INT32Y___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13B1E740)
#define CLASS_2_E011F314A24687ED_CLASS_1_ED30F1609D1D025F_1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x13B1E870)
#define CLASS_2_E011F314A24687ED_CLASS_1_ED30F1609D1D025F_1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13B1E7A0)
#define CLASS_2_E011F314A24687ED_CLASS_1_ED30F1609D1D025F_1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x13B1E750)
#define CLASS_2_E011F314A24687ED_CLASS_1_ED30F1609D1D025F_1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B1E680)
#define CLASS_2_E011F314A24687ED_CLASS_1_ED30F1609D1D025F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13B1E660)

inline static constexpr unsigned int Class_2_E011F314A24687ED_Class_1_ED30F1609D1D025F_1_TypeDefinitionIndex = 71069;

class Class_2_E011F314A24687ED_Class_1_ED30F1609D1D025F_1 : public ::System::Object
{
public:
	::System::Int32 Field_1_2; // 0x10
	::System::Int32 Field_1_7; // 0x14
	::System::Int32 Field_1_5; // 0x18
	::System::ValueTuple_2<::System::Int32, ::System::Int32> Field_1_1; // 0x1C
	::System::Int32 Field_1_4; // 0x24
	::System::Int32 Field_1_6; // 0x28
	::System::Int32 Field_1_0; // 0x2C
	::System::Int32 Field_1_3; // 0x30

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E011F314A24687ED_CLASS_1_ED30F1609D1D025F_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E011F314A24687ED_CLASS_1_ED30F1609D1D025F_1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E011F314A24687ED_CLASS_1_ED30F1609D1D025F_1_MOVENEXT_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> System_Collections_Generic_IEnumerator__System_Int32x_System_Int32y___get_Current()
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E011F314A24687ED_CLASS_1_ED30F1609D1D025F_1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_INT32X_SYSTEM_INT32Y___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E011F314A24687ED_CLASS_1_ED30F1609D1D025F_1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E011F314A24687ED_CLASS_1_ED30F1609D1D025F_1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* System_Collections_Generic_IEnumerable__System_Int32x_System_Int32y___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E011F314A24687ED_CLASS_1_ED30F1609D1D025F_1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_INT32X_SYSTEM_INT32Y___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E011F314A24687ED_CLASS_1_ED30F1609D1D025F_1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
