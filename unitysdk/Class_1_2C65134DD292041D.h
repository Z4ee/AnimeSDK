#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DED09791E4319D54;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2C65134DD292041D_METHOD_1_EC61075536D10822_OFFSET UNITYSDK_OFFSET(0x17C67DB0)
#define CLASS_1_2C65134DD292041D__CTOR_OFFSET UNITYSDK_OFFSET(0x17C2FD90)

inline static constexpr unsigned int Class_1_2C65134DD292041D_TypeDefinitionIndex = 34301;

class Class_1_2C65134DD292041D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_DED09791E4319D54*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C65134DD292041D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EC61075536D10822(::Class_1_DED09791E4319D54* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DED09791E4319D54*))((::PBYTE)hIl2Cpp + CLASS_1_2C65134DD292041D_METHOD_1_EC61075536D10822_OFFSET))(this, a1);
	}
};
