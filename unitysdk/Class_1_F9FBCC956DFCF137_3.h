#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_79A79C1737406323;

#define CLASS_1_F9FBCC956DFCF137_3_CLEAR_OFFSET UNITYSDK_OFFSET(0x1522D200)
#define CLASS_1_F9FBCC956DFCF137_3_GET_TOKENQUEUE_OFFSET UNITYSDK_OFFSET(0x1522D180)
#define CLASS_1_F9FBCC956DFCF137_3_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1522D1A0)
#define CLASS_1_F9FBCC956DFCF137_3_SET_TOKENQUEUE_OFFSET UNITYSDK_OFFSET(0x1522D190)
#define CLASS_1_F9FBCC956DFCF137_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1522D260)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_3_TypeDefinitionIndex = 51782;

class Class_1_F9FBCC956DFCF137_3 : public ::System::Object
{
public:
	::Class_1_79A79C1737406323* _TokenQueue_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_3__CTOR_OFFSET))(this);
	}

	::Class_1_79A79C1737406323* get_TokenQueue()
	{
		return ((::Class_1_79A79C1737406323*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_3_GET_TOKENQUEUE_OFFSET))(this);
	}

	::System::Void set_TokenQueue(::Class_1_79A79C1737406323* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_79A79C1737406323*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_3_SET_TOKENQUEUE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_3_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_3_CLEAR_OFFSET))(this);
	}
};
