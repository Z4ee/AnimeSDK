#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B18024BA966BD11D;

#define CLASS_1_F9FBCC956DFCF137_21_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1935E050)
#define CLASS_1_F9FBCC956DFCF137_21__CTOR_OFFSET UNITYSDK_OFFSET(0x1935E060)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_21_TypeDefinitionIndex = 71957;

class Class_1_F9FBCC956DFCF137_21 : public ::System::Object
{
public:
	::Class_1_B18024BA966BD11D* _Response_k__BackingField; // 0x10

	::System::Void _ctor(::Class_1_B18024BA966BD11D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B18024BA966BD11D*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_21__CTOR_OFFSET))(this, a1);
	}

	::Class_1_B18024BA966BD11D* get_Response()
	{
		return ((::Class_1_B18024BA966BD11D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_21_GET_RESPONSE_OFFSET))(this);
	}
};
