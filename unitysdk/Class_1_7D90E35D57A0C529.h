#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF19F6206AF6DD7_22;
class Class_1_827FD69C8A8AE28F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7D90E35D57A0C529_GET_FRIENDS_OFFSET UNITYSDK_OFFSET(0x1286B3D0)
#define CLASS_1_7D90E35D57A0C529_METHOD_1_1454A2C87876CD3B_OFFSET UNITYSDK_OFFSET(0x1286ADE0)
#define CLASS_1_7D90E35D57A0C529_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1286B390)
#define CLASS_1_7D90E35D57A0C529__CTOR_OFFSET UNITYSDK_OFFSET(0x1286B3E0)

inline static constexpr unsigned int Class_1_7D90E35D57A0C529_TypeDefinitionIndex = 74667;

class Class_1_7D90E35D57A0C529 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_827FD69C8A8AE28F*>* _Friends_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D90E35D57A0C529__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1454A2C87876CD3B(::Class_1_7FF19F6206AF6DD7_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_22*))((::PBYTE)hIl2Cpp + CLASS_1_7D90E35D57A0C529_METHOD_1_1454A2C87876CD3B_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D90E35D57A0C529_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_827FD69C8A8AE28F*>* get_Friends()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_827FD69C8A8AE28F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D90E35D57A0C529_GET_FRIENDS_OFFSET))(this);
	}
};
