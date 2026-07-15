#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_890;
class Class_0_16E4307DCC419505_894;
class Class_1_05F6758DFB00BCF4_1;
class Class_1_C22769E5B6B38BE7;

#define CLASS_1_015463249C310988_METHOD_1_CB84AE89DA217A16_OFFSET UNITYSDK_OFFSET(0x17D64D60)
#define CLASS_1_015463249C310988__CTOR_OFFSET UNITYSDK_OFFSET(0x17D64C20)

inline static constexpr unsigned int Class_1_015463249C310988_TypeDefinitionIndex = 64133;

class Class_1_015463249C310988 : public ::System::Object
{
public:
	::Class_1_C22769E5B6B38BE7* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_890* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_890*))((::PBYTE)hIl2Cpp + CLASS_1_015463249C310988__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_894* Method_1_CB84AE89DA217A16(::Class_1_05F6758DFB00BCF4_1* a1)
	{
		return ((::Class_0_16E4307DCC419505_894*(*)(::PVOID, ::Class_1_05F6758DFB00BCF4_1*))((::PBYTE)hIl2Cpp + CLASS_1_015463249C310988_METHOD_1_CB84AE89DA217A16_OFFSET))(this, a1);
	}
};
