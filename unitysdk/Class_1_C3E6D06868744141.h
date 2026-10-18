#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_27E6EE7EA5B7F764;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C3E6D06868744141_METHOD_1_2C1334FE3190A928_OFFSET UNITYSDK_OFFSET(0x15B22D70)
#define CLASS_1_C3E6D06868744141_METHOD_1_8934C2BB31842777_OFFSET UNITYSDK_OFFSET(0x15B23240)
#define CLASS_1_C3E6D06868744141_METHOD_1_F88E7FA6F4B518D0_OFFSET UNITYSDK_OFFSET(0x15B22D10)
#define CLASS_1_C3E6D06868744141__CTOR_OFFSET UNITYSDK_OFFSET(0x15B23500)

inline static constexpr unsigned int Class_1_C3E6D06868744141_TypeDefinitionIndex = 80137;

class Class_1_C3E6D06868744141 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* PAKDIPDDBEH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3E6D06868744141__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* Method_1_F88E7FA6F4B518D0()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3E6D06868744141_METHOD_1_F88E7FA6F4B518D0_OFFSET))(this);
	}

	::Class_1_27E6EE7EA5B7F764* Method_1_8934C2BB31842777(::System::UInt32 a1)
	{
		return ((::Class_1_27E6EE7EA5B7F764*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C3E6D06868744141_METHOD_1_8934C2BB31842777_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* Method_1_2C1334FE3190A928()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3E6D06868744141_METHOD_1_2C1334FE3190A928_OFFSET))(this);
	}
};
