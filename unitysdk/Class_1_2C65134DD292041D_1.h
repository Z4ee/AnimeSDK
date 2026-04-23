#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2670985A37556FEA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2C65134DD292041D_1_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0x12916460)
#define CLASS_1_2C65134DD292041D_1_METHOD_1_EC61075536D10822_OFFSET UNITYSDK_OFFSET(0x12916220)
#define CLASS_1_2C65134DD292041D_1_METHOD_1_F40AF41B962D2981_OFFSET UNITYSDK_OFFSET(0x129162B0)
#define CLASS_1_2C65134DD292041D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x129161D0)

inline static constexpr unsigned int Class_1_2C65134DD292041D_1_TypeDefinitionIndex = 60128;

class Class_1_2C65134DD292041D_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_2670985A37556FEA*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C65134DD292041D_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EC61075536D10822(::Class_1_2670985A37556FEA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2670985A37556FEA*))((::PBYTE)hIl2Cpp + CLASS_1_2C65134DD292041D_1_METHOD_1_EC61075536D10822_OFFSET))(this, a1);
	}

	::System::Void Method_1_F40AF41B962D2981(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2C65134DD292041D_1_METHOD_1_F40AF41B962D2981_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_2670985A37556FEA*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_2670985A37556FEA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C65134DD292041D_1_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}
};
