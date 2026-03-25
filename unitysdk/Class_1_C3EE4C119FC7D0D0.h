#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_20DE710EADC62E5E;
class Class_1_5FEFAED860528596_21;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C3EE4C119FC7D0D0_GET_FRIENDS_OFFSET UNITYSDK_OFFSET(0xD1988D0)
#define CLASS_1_C3EE4C119FC7D0D0_METHOD_1_3DCAF09BEB5CADD1_OFFSET UNITYSDK_OFFSET(0xD198460)
#define CLASS_1_C3EE4C119FC7D0D0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD198890)
#define CLASS_1_C3EE4C119FC7D0D0__CTOR_OFFSET UNITYSDK_OFFSET(0xD1988E0)

inline static constexpr unsigned int Class_1_C3EE4C119FC7D0D0_TypeDefinitionIndex = 61518;

class Class_1_C3EE4C119FC7D0D0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_20DE710EADC62E5E*>* _Friends_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3EE4C119FC7D0D0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3DCAF09BEB5CADD1(::Class_1_5FEFAED860528596_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_21*))((::PBYTE)hIl2Cpp + CLASS_1_C3EE4C119FC7D0D0_METHOD_1_3DCAF09BEB5CADD1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3EE4C119FC7D0D0_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_20DE710EADC62E5E*>* get_Friends()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_20DE710EADC62E5E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3EE4C119FC7D0D0_GET_FRIENDS_OFFSET))(this);
	}
};
