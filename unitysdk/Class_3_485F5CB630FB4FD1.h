#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4DC157067B9EC20C.h"

class Class_0_16E4307DCC419505_511;
namespace System { class String; }

#define CLASS_3_485F5CB630FB4FD1_METHOD_3_9FF185A3AC39D204_OFFSET UNITYSDK_OFFSET(0x16A63380)
#define CLASS_3_485F5CB630FB4FD1__CTOR_OFFSET UNITYSDK_OFFSET(0x16A63370)

inline static constexpr unsigned int Class_3_485F5CB630FB4FD1_TypeDefinitionIndex = 75841;

class Class_3_485F5CB630FB4FD1 : public ::Class_2_4DC157067B9EC20C
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_485F5CB630FB4FD1__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_511* Method_3_9FF185A3AC39D204(::System::UInt32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::Class_0_16E4307DCC419505_511*(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_485F5CB630FB4FD1_METHOD_3_9FF185A3AC39D204_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
