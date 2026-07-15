#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_411;
class Class_1_C85C4DAB350DD5FC;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_1F6C3ED7A84F83A5_METHOD_1_06934619F4D05213_OFFSET UNITYSDK_OFFSET(0x179F0790)
#define CLASS_1_1F6C3ED7A84F83A5_METHOD_1_4CA8B5F8462FA46F_OFFSET UNITYSDK_OFFSET(0x179F0DE0)
#define CLASS_1_1F6C3ED7A84F83A5__CTOR_OFFSET UNITYSDK_OFFSET(0x179F0700)

inline static constexpr unsigned int Class_1_1F6C3ED7A84F83A5_TypeDefinitionIndex = 60010;

class Class_1_1F6C3ED7A84F83A5 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C85C4DAB350DD5FC*>* Field_1_0; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_411*>* Field_1_1; // 0x18

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C85C4DAB350DD5FC*>* a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_411*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C85C4DAB350DD5FC*>*, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_411*>*))((::PBYTE)hIl2Cpp + CLASS_1_1F6C3ED7A84F83A5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_06934619F4D05213(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1F6C3ED7A84F83A5_METHOD_1_06934619F4D05213_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Method_1_4CA8B5F8462FA46F()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F6C3ED7A84F83A5_METHOD_1_4CA8B5F8462FA46F_OFFSET))(this);
	}
};
