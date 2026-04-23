#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A170EEF84D06CBD4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3AD2528CD53B1639_6;
class Class_2_15E317187C4E8254;

#define CLASS_2_9D9674E6BA49288D_1_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0xD9E6820)
#define CLASS_2_9D9674E6BA49288D_1_GET_STARTPOS_OFFSET UNITYSDK_OFFSET(0xD9E67F0)
#define CLASS_2_9D9674E6BA49288D_1_METHOD_2_1B9BAFE25893B138_OFFSET UNITYSDK_OFFSET(0xD9E69D0)
#define CLASS_2_9D9674E6BA49288D_1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xD9E6C10)
#define CLASS_2_9D9674E6BA49288D_1_METHOD_2_99AED502C9DC686D_OFFSET UNITYSDK_OFFSET(0xD9E6850)
#define CLASS_2_9D9674E6BA49288D_1_SET_ENDPOS_OFFSET UNITYSDK_OFFSET(0xD9E6840)
#define CLASS_2_9D9674E6BA49288D_1_SET_STARTPOS_OFFSET UNITYSDK_OFFSET(0xD9E6810)
#define CLASS_2_9D9674E6BA49288D_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD9E6C00)

inline static constexpr unsigned int Class_2_9D9674E6BA49288D_1_TypeDefinitionIndex = 71490;

class Class_2_9D9674E6BA49288D_1 : public ::Class_1_A170EEF84D06CBD4
{
public:
	::UnityEngine::Vector3 _EndPos_k__BackingField; // 0x28
	::UnityEngine::Vector3 _StartPos_k__BackingField; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D_1__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_StartPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D_1_GET_STARTPOS_OFFSET))(this);
	}

	::System::Void set_StartPos(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D_1_SET_STARTPOS_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_EndPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D_1_GET_ENDPOS_OFFSET))(this);
	}

	::System::Void set_EndPos(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D_1_SET_ENDPOS_OFFSET))(this, value);
	}

	static ::Class_2_9D9674E6BA49288D_1* Method_2_99AED502C9DC686D(::Class_2_15E317187C4E8254* a1, ::Class_1_3AD2528CD53B1639_6* a2)
	{
		return ((::Class_2_9D9674E6BA49288D_1*(*)(::Class_2_15E317187C4E8254*, ::Class_1_3AD2528CD53B1639_6*))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D_1_METHOD_2_99AED502C9DC686D_OFFSET))(a1, a2);
	}

	::System::Void Method_2_1B9BAFE25893B138()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D_1_METHOD_2_1B9BAFE25893B138_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D_1_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
