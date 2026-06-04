#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_FF343A54D15F6E7D_METHOD_1_03E54C8EEBF7E3E0_OFFSET UNITYSDK_OFFSET(0x1AC066F0)
#define CLASS_1_FF343A54D15F6E7D_METHOD_1_5A6434846524FCDB_OFFSET UNITYSDK_OFFSET(0x1AC06350)
#define CLASS_1_FF343A54D15F6E7D_METHOD_1_639D753455DD6897_OFFSET UNITYSDK_OFFSET(0x1AC065A0)
#define CLASS_1_FF343A54D15F6E7D_METHOD_1_881968E3C2C30A42_OFFSET UNITYSDK_OFFSET(0x1AC06500)
#define CLASS_1_FF343A54D15F6E7D_METHOD_1_DD4F016BB5B32AD3_OFFSET UNITYSDK_OFFSET(0x1AC06360)
#define CLASS_1_FF343A54D15F6E7D_METHOD_1_FBFFDE6401FFA6A5_OFFSET UNITYSDK_OFFSET(0x1AC06370)
#define CLASS_1_FF343A54D15F6E7D__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC062C0)

inline static constexpr unsigned int Class_1_FF343A54D15F6E7D_TypeDefinitionIndex = 33438;

class Class_1_FF343A54D15F6E7D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Stack_1<::Il2CppArray<::System::Byte>*>*>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::UInt32 Field_1_3; // 0x20
	::System::Int32 Field_1_4; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF343A54D15F6E7D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_5A6434846524FCDB(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF343A54D15F6E7D_METHOD_1_5A6434846524FCDB_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_DD4F016BB5B32AD3(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF343A54D15F6E7D_METHOD_1_DD4F016BB5B32AD3_OFFSET))(this, a1);
	}

	::System::Void Method_1_FBFFDE6401FFA6A5(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_FF343A54D15F6E7D_METHOD_1_FBFFDE6401FFA6A5_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Byte>* Method_1_881968E3C2C30A42(::System::Int32 a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF343A54D15F6E7D_METHOD_1_881968E3C2C30A42_OFFSET))(this, a1);
	}

	::System::Void Method_1_639D753455DD6897()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF343A54D15F6E7D_METHOD_1_639D753455DD6897_OFFSET))(this);
	}

	::System::Boolean Method_1_03E54C8EEBF7E3E0(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_FF343A54D15F6E7D_METHOD_1_03E54C8EEBF7E3E0_OFFSET))(this, a1);
	}
};
