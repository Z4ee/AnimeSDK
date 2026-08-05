#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EF860E4BE665C11B;
class Class_3_8069852B6FA1A544_4;
class Class_3_DB4CE4A742A69D50_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_28D8F3CFB77F2E64_METHOD_1_0CC7CF80213112F1_OFFSET UNITYSDK_OFFSET(0x17652030)
#define CLASS_1_28D8F3CFB77F2E64_METHOD_1_DB8E8E75B685B975_OFFSET UNITYSDK_OFFSET(0x17652920)
#define CLASS_1_28D8F3CFB77F2E64_METHOD_1_F5E011FAC512A7AF_OFFSET UNITYSDK_OFFSET(0x176519F0)
#define CLASS_1_28D8F3CFB77F2E64__CTOR_OFFSET UNITYSDK_OFFSET(0x17651330)

inline static constexpr unsigned int Class_1_28D8F3CFB77F2E64_TypeDefinitionIndex = 72909;

class Class_1_28D8F3CFB77F2E64 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_1; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_7; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_EF860E4BE665C11B*>* Field_1_5; // 0x20
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_6; // 0x28
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_0; // 0x30

	::System::Void _ctor(::Class_3_DB4CE4A742A69D50_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DB4CE4A742A69D50_1*))((::PBYTE)hIl2Cpp + CLASS_1_28D8F3CFB77F2E64__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_DB8E8E75B685B975(::Class_3_8069852B6FA1A544_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_8069852B6FA1A544_4*))((::PBYTE)hIl2Cpp + CLASS_1_28D8F3CFB77F2E64_METHOD_1_DB8E8E75B685B975_OFFSET))(this, a1);
	}

	::System::Void Method_1_0CC7CF80213112F1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_28D8F3CFB77F2E64_METHOD_1_0CC7CF80213112F1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5E011FAC512A7AF(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_28D8F3CFB77F2E64_METHOD_1_F5E011FAC512A7AF_OFFSET))(this, a1);
	}
};
