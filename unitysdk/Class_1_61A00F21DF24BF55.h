#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FF6C010A7514983E;
namespace System { class String; }

#define CLASS_1_61A00F21DF24BF55_METHOD_1_9A2033E43F4170EB_OFFSET UNITYSDK_OFFSET(0x8FD2BD0)
#define CLASS_1_61A00F21DF24BF55__CTOR_OFFSET UNITYSDK_OFFSET(0x8FD2C60)

inline static constexpr unsigned int Class_1_61A00F21DF24BF55_TypeDefinitionIndex = 59628;

class Class_1_61A00F21DF24BF55 : public ::System::Object
{
public:
	::Class_1_FF6C010A7514983E* Base; // 0x10
	::System::Int32 PageNum; // 0x18
	::System::Int32 PageSize; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61A00F21DF24BF55__CTOR_OFFSET))(this);
	}

	static ::Class_1_61A00F21DF24BF55* Method_1_9A2033E43F4170EB(::System::String* a1)
	{
		return ((::Class_1_61A00F21DF24BF55*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_61A00F21DF24BF55_METHOD_1_9A2033E43F4170EB_OFFSET))(a1);
	}
};
