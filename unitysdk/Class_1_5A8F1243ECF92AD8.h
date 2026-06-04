#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_070A00258D76D4EF.h"
#include "unitysdk/Struct_2_640507420B9CBB65.h"
#include "unitysdk/Struct_2_75D6A6CD8F418D47.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59;
class Class_1_5A8F1243ECF92AD8_Class_1_355B5C5C403A9E84;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5A8F1243ECF92AD8_METHOD_1_1FFD915B86FF931D_OFFSET UNITYSDK_OFFSET(0xAB8D5C0)
#define CLASS_1_5A8F1243ECF92AD8_METHOD_1_65FE5FFECBA7EA77_OFFSET UNITYSDK_OFFSET(0xAB8D0E0)
#define CLASS_1_5A8F1243ECF92AD8_METHOD_1_7947CA3A9C720931_OFFSET UNITYSDK_OFFSET(0xAB8CAB0)
#define CLASS_1_5A8F1243ECF92AD8_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xAB8D730)
#define CLASS_1_5A8F1243ECF92AD8_METHOD_1_D703B768611EB5BB_OFFSET UNITYSDK_OFFSET(0xAB8CF00)
#define CLASS_1_5A8F1243ECF92AD8_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xAB8C9C0)
#define CLASS_1_5A8F1243ECF92AD8__CTOR_OFFSET UNITYSDK_OFFSET(0xAB8D7C0)

inline static constexpr unsigned int Class_1_5A8F1243ECF92AD8_TypeDefinitionIndex = 58142;

class Class_1_5A8F1243ECF92AD8 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Class_1_303D5A33D1401D59*, ::Class_1_5A8F1243ECF92AD8_Class_1_355B5C5C403A9E84*>* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A8F1243ECF92AD8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A8F1243ECF92AD8_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_1_7947CA3A9C720931(::Class_1_303D5A33D1401D59* a1, ::Struct_2_640507420B9CBB65 a2, ::Struct_2_75D6A6CD8F418D47 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::Struct_2_640507420B9CBB65, ::Struct_2_75D6A6CD8F418D47))((::PBYTE)hIl2Cpp + CLASS_1_5A8F1243ECF92AD8_METHOD_1_7947CA3A9C720931_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D703B768611EB5BB(::Class_1_303D5A33D1401D59* a1, ::Struct_2_640507420B9CBB65 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::Struct_2_640507420B9CBB65))((::PBYTE)hIl2Cpp + CLASS_1_5A8F1243ECF92AD8_METHOD_1_D703B768611EB5BB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_65FE5FFECBA7EA77(::Class_1_303D5A33D1401D59* a1, ::System::Collections::Generic::List_1<::Struct_2_070A00258D76D4EF>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::System::Collections::Generic::List_1<::Struct_2_070A00258D76D4EF>*))((::PBYTE)hIl2Cpp + CLASS_1_5A8F1243ECF92AD8_METHOD_1_65FE5FFECBA7EA77_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1FFD915B86FF931D(::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>*))((::PBYTE)hIl2Cpp + CLASS_1_5A8F1243ECF92AD8_METHOD_1_1FFD915B86FF931D_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A8F1243ECF92AD8_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}
};
