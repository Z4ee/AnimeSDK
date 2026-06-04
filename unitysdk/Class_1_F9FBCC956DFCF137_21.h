#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D243AE0767398AE4;

#define CLASS_1_F9FBCC956DFCF137_21_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x13A9F220)
#define CLASS_1_F9FBCC956DFCF137_21__CTOR_OFFSET UNITYSDK_OFFSET(0x13A9F230)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_21_TypeDefinitionIndex = 70434;

class Class_1_F9FBCC956DFCF137_21 : public ::System::Object
{
public:
	::Class_1_D243AE0767398AE4* _Response_k__BackingField; // 0x10

	::System::Void _ctor(::Class_1_D243AE0767398AE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D243AE0767398AE4*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_21__CTOR_OFFSET))(this, a1);
	}

	::Class_1_D243AE0767398AE4* get_Response()
	{
		return ((::Class_1_D243AE0767398AE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_21_GET_RESPONSE_OFFSET))(this);
	}
};
