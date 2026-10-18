#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A43918C2BD46500;

#define CLASS_1_F9FBCC956DFCF137_23_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x15C13B00)
#define CLASS_1_F9FBCC956DFCF137_23__CTOR_OFFSET UNITYSDK_OFFSET(0x15C13B10)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_23_TypeDefinitionIndex = 75564;

class Class_1_F9FBCC956DFCF137_23 : public ::System::Object
{
public:
	::Class_1_7A43918C2BD46500* _Response_k__BackingField; // 0x10

	::System::Void _ctor(::Class_1_7A43918C2BD46500* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7A43918C2BD46500*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_23__CTOR_OFFSET))(this, a1);
	}

	::Class_1_7A43918C2BD46500* get_Response()
	{
		return ((::Class_1_7A43918C2BD46500*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_23_GET_RESPONSE_OFFSET))(this);
	}
};
