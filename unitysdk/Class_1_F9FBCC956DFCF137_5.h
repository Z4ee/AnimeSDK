#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_64D890C466F37235;

#define CLASS_1_F9FBCC956DFCF137_5_METHOD_1_4487776BEE04D471_OFFSET UNITYSDK_OFFSET(0xD16A640)
#define CLASS_1_F9FBCC956DFCF137_5__CTOR_OFFSET UNITYSDK_OFFSET(0xD16A630)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_5_TypeDefinitionIndex = 49115;

class Class_1_F9FBCC956DFCF137_5 : public ::System::Object
{
public:
	::Class_1_64D890C466F37235* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_5__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4487776BEE04D471()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_5_METHOD_1_4487776BEE04D471_OFFSET))(this);
	}
};
