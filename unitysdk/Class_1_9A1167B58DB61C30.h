#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C8489A0F22314D2F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9A1167B58DB61C30_METHOD_1_613FC0E80658FE77_OFFSET UNITYSDK_OFFSET(0x134EE240)
#define CLASS_1_9A1167B58DB61C30_METHOD_1_DECD8F5296651B19_OFFSET UNITYSDK_OFFSET(0x134EE8F0)
#define CLASS_1_9A1167B58DB61C30__CTOR_OFFSET UNITYSDK_OFFSET(0x134EE230)

inline static constexpr unsigned int Class_1_9A1167B58DB61C30_TypeDefinitionIndex = 57847;

class Class_1_9A1167B58DB61C30 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A1167B58DB61C30__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_613FC0E80658FE77(::Class_1_C8489A0F22314D2F* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Boolean(*)(::Class_1_C8489A0F22314D2F*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_9A1167B58DB61C30_METHOD_1_613FC0E80658FE77_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_DECD8F5296651B19(::Class_1_C8489A0F22314D2F* a1)
	{
		return ((::System::Boolean(*)(::Class_1_C8489A0F22314D2F*))((::PBYTE)hIl2Cpp + CLASS_1_9A1167B58DB61C30_METHOD_1_DECD8F5296651B19_OFFSET))(a1);
	}
};
