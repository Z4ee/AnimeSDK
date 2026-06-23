#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5887222B9AE38D34_2.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class IPEndPoint; }
namespace System::Net { class ServicePoint; }

#define CLASS_2_6CAC28ACDD58FF63_CLASS_1_C7030828536840A6_METHOD_1_3E17B7FB3DE84C14_OFFSET UNITYSDK_OFFSET(0x145A8AF0)
#define CLASS_2_6CAC28ACDD58FF63_CLASS_1_C7030828536840A6__CTOR_OFFSET UNITYSDK_OFFSET(0x145A8AE0)

inline static constexpr unsigned int Class_2_6CAC28ACDD58FF63_Class_1_C7030828536840A6_TypeDefinitionIndex = 58023;

class Class_2_6CAC28ACDD58FF63_Class_1_C7030828536840A6 : public ::System::Object
{
public:
	::Struct_2_5887222B9AE38D34_2 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_CLASS_1_C7030828536840A6__CTOR_OFFSET))(this);
	}

	::System::Net::IPEndPoint* Method_1_3E17B7FB3DE84C14(::System::Net::ServicePoint* a1, ::System::Net::IPEndPoint* a2, ::System::Int32 a3)
	{
		return ((::System::Net::IPEndPoint*(*)(::PVOID, ::System::Net::ServicePoint*, ::System::Net::IPEndPoint*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_CLASS_1_C7030828536840A6_METHOD_1_3E17B7FB3DE84C14_OFFSET))(this, a1, a2, a3);
	}
};
