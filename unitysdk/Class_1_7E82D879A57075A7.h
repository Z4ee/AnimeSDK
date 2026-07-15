#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4B40E2DA9965A7E7;
class Class_1_7807B2B04302CD7B;
class Class_1_7807B2B04302CD7B_1;
class Class_1_D2E90365D99FC7E6;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7E82D879A57075A7__CTOR_OFFSET UNITYSDK_OFFSET(0x17B82ED0)

inline static constexpr unsigned int Class_1_7E82D879A57075A7_TypeDefinitionIndex = 35623;

class Class_1_7E82D879A57075A7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_1*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_D2E90365D99FC7E6*>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_3; // 0x28
	::Class_1_4B40E2DA9965A7E7* Field_1_4; // 0x30
	::System::UInt32 Field_1_5; // 0x38
	::System::Int32 Field_1_6; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E82D879A57075A7__CTOR_OFFSET))(this);
	}
};
