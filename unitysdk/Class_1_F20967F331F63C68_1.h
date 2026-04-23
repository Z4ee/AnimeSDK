#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1140;
class Class_2_E9C9AAD7C711B3E3;
class Class_3_543326C044264182;

#define CLASS_1_F20967F331F63C68_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0xECBD6C0)
#define CLASS_1_F20967F331F63C68_1__CTOR_OFFSET UNITYSDK_OFFSET(0xECBD6B0)

inline static constexpr unsigned int Class_1_F20967F331F63C68_1_TypeDefinitionIndex = 71450;

class Class_1_F20967F331F63C68_1 : public ::System::Object
{
public:
	::Class_2_E9C9AAD7C711B3E3* Field_1_0; // 0x10
	::Class_3_543326C044264182* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_1140* Field_1_2; // 0x20

	::System::Void _ctor(::Class_2_E9C9AAD7C711B3E3* a1, ::Class_3_543326C044264182* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E9C9AAD7C711B3E3*, ::Class_3_543326C044264182*))((::PBYTE)hIl2Cpp + CLASS_1_F20967F331F63C68_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F20967F331F63C68_1_EXECUTE_OFFSET))(this);
	}
};
