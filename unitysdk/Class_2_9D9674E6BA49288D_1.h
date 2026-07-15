#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1FB256EC3633CF9E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_52DCEE691286F89A_1;
class Class_2_46FD925988407D1E;

#define CLASS_2_9D9674E6BA49288D_1_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x15646450)
#define CLASS_2_9D9674E6BA49288D_1_GET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x15646420)
#define CLASS_2_9D9674E6BA49288D_1_METHOD_2_2340068C22DFE332_OFFSET UNITYSDK_OFFSET(0x15646610)
#define CLASS_2_9D9674E6BA49288D_1_METHOD_2_99AED502C9DC686D_OFFSET UNITYSDK_OFFSET(0x15646480)
#define CLASS_2_9D9674E6BA49288D_1_SET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x15646470)
#define CLASS_2_9D9674E6BA49288D_1_SET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x15646440)
#define CLASS_2_9D9674E6BA49288D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15646850)

inline static constexpr unsigned int Class_2_9D9674E6BA49288D_1_TypeDefinitionIndex = 74037;

class Class_2_9D9674E6BA49288D_1 : public ::Class_1_1FB256EC3633CF9E
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

	::System::Void set_StartPos(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D_1_SET_STARTPOS_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_EndPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D_1_GET_ENDPOS_OFFSET))(this);
	}

	::System::Void set_EndPos(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D_1_SET_ENDPOS_OFFSET))(this, a1);
	}

	static ::Class_2_9D9674E6BA49288D_1* Method_2_99AED502C9DC686D(::Class_2_46FD925988407D1E* a1, ::Class_1_52DCEE691286F89A_1* a2)
	{
		return ((::Class_2_9D9674E6BA49288D_1*(*)(::Class_2_46FD925988407D1E*, ::Class_1_52DCEE691286F89A_1*))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D_1_METHOD_2_99AED502C9DC686D_OFFSET))(a1, a2);
	}

	::System::Void Method_2_2340068C22DFE332()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D_1_METHOD_2_2340068C22DFE332_OFFSET))(this);
	}
};
