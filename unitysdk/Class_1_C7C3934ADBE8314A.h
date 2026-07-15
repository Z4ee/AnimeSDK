#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_C7C3934ADBE8314A_Class_1_3F628EDA3EB81EE5;
class Class_2_F3C45F1FC7349B6E;
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C7C3934ADBE8314A_METHOD_1_2BE50D667BCCC3F2_OFFSET UNITYSDK_OFFSET(0x13EC6D10)
#define CLASS_1_C7C3934ADBE8314A_METHOD_1_47568803C94865D8_OFFSET UNITYSDK_OFFSET(0x13EC5F30)
#define CLASS_1_C7C3934ADBE8314A_METHOD_1_AEF085E6C83B79B3_OFFSET UNITYSDK_OFFSET(0x13EC6F60)
#define CLASS_1_C7C3934ADBE8314A_METHOD_1_C1D3BDE2A17F5C9D_OFFSET UNITYSDK_OFFSET(0x13EC60B0)
#define CLASS_1_C7C3934ADBE8314A_METHOD_1_D690ADF0ABC8D57C_OFFSET UNITYSDK_OFFSET(0x13EC69F0)
#define CLASS_1_C7C3934ADBE8314A_METHOD_1_FD94FC1B693FC0F6_OFFSET UNITYSDK_OFFSET(0x13EC5BE0)
#define CLASS_1_C7C3934ADBE8314A__CTOR_OFFSET UNITYSDK_OFFSET(0x13EC5AD0)

inline static constexpr unsigned int Class_1_C7C3934ADBE8314A_TypeDefinitionIndex = 35753;

class Class_1_C7C3934ADBE8314A : public ::System::Object
{
public:
	::Class_2_F3C45F1FC7349B6E* Field_1_0; // 0x10
	::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::Class_1_C7C3934ADBE8314A_Class_1_3F628EDA3EB81EE5*>* Field_1_1; // 0x18
	::System::Collections::Generic::SortedDictionary_2<::System::UInt64, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32>>*>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_C7C3934ADBE8314A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD94FC1B693FC0F6(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CLASS_1_C7C3934ADBE8314A_METHOD_1_FD94FC1B693FC0F6_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_47568803C94865D8(::System::UInt32 a1, ::System::UInt32& a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_C7C3934ADBE8314A_METHOD_1_47568803C94865D8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C1D3BDE2A17F5C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7C3934ADBE8314A_METHOD_1_C1D3BDE2A17F5C9D_OFFSET))(this);
	}

	::System::Void Method_1_2BE50D667BCCC3F2(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C7C3934ADBE8314A_METHOD_1_2BE50D667BCCC3F2_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_C7C3934ADBE8314A_Class_1_3F628EDA3EB81EE5* Method_1_D690ADF0ABC8D57C(::System::UInt32 a1)
	{
		return ((::Class_1_C7C3934ADBE8314A_Class_1_3F628EDA3EB81EE5*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C7C3934ADBE8314A_METHOD_1_D690ADF0ABC8D57C_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_AEF085E6C83B79B3()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7C3934ADBE8314A_METHOD_1_AEF085E6C83B79B3_OFFSET))(this);
	}
};
