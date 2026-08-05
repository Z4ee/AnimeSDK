#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_47;
class Class_0_16E4307DCC419505_55;

#define CLASS_1_FD893FD36F6A3A6D_METHOD_1_7CB4BF39BF8A51BE_OFFSET UNITYSDK_OFFSET(0x1F9BE110)
#define CLASS_1_FD893FD36F6A3A6D__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9BE100)

inline static constexpr unsigned int Class_1_FD893FD36F6A3A6D_TypeDefinitionIndex = 28757;

class Class_1_FD893FD36F6A3A6D : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_55* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_47* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_47*))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_55* Method_1_7CB4BF39BF8A51BE()
	{
		return ((::Class_0_16E4307DCC419505_55*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_METHOD_1_7CB4BF39BF8A51BE_OFFSET))(this);
	}
};
