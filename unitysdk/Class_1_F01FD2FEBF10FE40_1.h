#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F22D5BBDDFD6C58E;

#define CLASS_1_F01FD2FEBF10FE40_1_CLEAR_OFFSET UNITYSDK_OFFSET(0xD398000)
#define CLASS_1_F01FD2FEBF10FE40_1_GET_TOKENQUEUE_OFFSET UNITYSDK_OFFSET(0xD397F40)
#define CLASS_1_F01FD2FEBF10FE40_1_METHOD_1_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0xD397F60)
#define CLASS_1_F01FD2FEBF10FE40_1_SET_TOKENQUEUE_OFFSET UNITYSDK_OFFSET(0xD397F50)
#define CLASS_1_F01FD2FEBF10FE40_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD398060)

inline static constexpr unsigned int Class_1_F01FD2FEBF10FE40_1_TypeDefinitionIndex = 50033;

class Class_1_F01FD2FEBF10FE40_1 : public ::System::Object
{
public:
	::Class_1_F22D5BBDDFD6C58E* _TokenQueue_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F01FD2FEBF10FE40_1__CTOR_OFFSET))(this);
	}

	::Class_1_F22D5BBDDFD6C58E* get_TokenQueue()
	{
		return ((::Class_1_F22D5BBDDFD6C58E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F01FD2FEBF10FE40_1_GET_TOKENQUEUE_OFFSET))(this);
	}

	::System::Void set_TokenQueue(::Class_1_F22D5BBDDFD6C58E* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F22D5BBDDFD6C58E*))((::PBYTE)hIl2Cpp + CLASS_1_F01FD2FEBF10FE40_1_SET_TOKENQUEUE_OFFSET))(this, value);
	}

	::System::Boolean Method_1_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F01FD2FEBF10FE40_1_METHOD_1_70589F89E4D22649_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F01FD2FEBF10FE40_1_CLEAR_OFFSET))(this);
	}
};
