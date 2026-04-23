#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_292;
class Class_1_60B5E5A0CB5606E4;

#define CLASS_1_7D75B031E6A291DA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19DB3280)
#define CLASS_1_7D75B031E6A291DA_METHOD_1_DF0870E03623C994_OFFSET UNITYSDK_OFFSET(0x19DB3370)
#define CLASS_1_7D75B031E6A291DA__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB3160)

inline static constexpr unsigned int Class_1_7D75B031E6A291DA_TypeDefinitionIndex = 39866;

class Class_1_7D75B031E6A291DA : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_292* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_292* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_292*))((::PBYTE)hIl2Cpp + CLASS_1_7D75B031E6A291DA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D75B031E6A291DA_DISPOSE_OFFSET))(this);
	}

	::System::Object* Method_1_DF0870E03623C994(::Class_1_60B5E5A0CB5606E4* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_60B5E5A0CB5606E4*))((::PBYTE)hIl2Cpp + CLASS_1_7D75B031E6A291DA_METHOD_1_DF0870E03623C994_OFFSET))(this, a1);
	}
};
