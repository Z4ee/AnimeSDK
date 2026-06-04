#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_916F5886E8F1F462;

#define CLASS_1_F9FBCC956DFCF137_4_CLEAR_OFFSET UNITYSDK_OFFSET(0xA7352F0)
#define CLASS_1_F9FBCC956DFCF137_4_GET_TOKENQUEUE_OFFSET UNITYSDK_OFFSET(0xA735270)
#define CLASS_1_F9FBCC956DFCF137_4_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA735290)
#define CLASS_1_F9FBCC956DFCF137_4_SET_TOKENQUEUE_OFFSET UNITYSDK_OFFSET(0xA735280)
#define CLASS_1_F9FBCC956DFCF137_4__CTOR_OFFSET UNITYSDK_OFFSET(0xA735350)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_4_TypeDefinitionIndex = 50700;

class Class_1_F9FBCC956DFCF137_4 : public ::System::Object
{
public:
	::Class_1_916F5886E8F1F462* _TokenQueue_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_4__CTOR_OFFSET))(this);
	}

	::Class_1_916F5886E8F1F462* get_TokenQueue()
	{
		return ((::Class_1_916F5886E8F1F462*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_4_GET_TOKENQUEUE_OFFSET))(this);
	}

	::System::Void set_TokenQueue(::Class_1_916F5886E8F1F462* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_916F5886E8F1F462*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_4_SET_TOKENQUEUE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_4_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_4_CLEAR_OFFSET))(this);
	}
};
