#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1242;
class Class_2_2090B77B5C7838F2;
class Class_3_543326C044264182;

#define CLASS_1_F20967F331F63C68_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x17562310)
#define CLASS_1_F20967F331F63C68_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17562300)

inline static constexpr unsigned int Class_1_F20967F331F63C68_1_TypeDefinitionIndex = 73997;

class Class_1_F20967F331F63C68_1 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1242* Field_1_0; // 0x10
	::Class_2_2090B77B5C7838F2* Field_1_1; // 0x18
	::Class_3_543326C044264182* Field_1_2; // 0x20

	::System::Void _ctor(::Class_2_2090B77B5C7838F2* a1, ::Class_3_543326C044264182* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2090B77B5C7838F2*, ::Class_3_543326C044264182*))((::PBYTE)hIl2Cpp + CLASS_1_F20967F331F63C68_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F20967F331F63C68_1_EXECUTE_OFFSET))(this);
	}
};
