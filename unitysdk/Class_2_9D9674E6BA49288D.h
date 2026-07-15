#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1FB256EC3633CF9E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_52DCEE691286F89A_1;
class Class_2_46FD925988407D1E;

#define CLASS_2_9D9674E6BA49288D_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x176F2B00)
#define CLASS_2_9D9674E6BA49288D_GET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x176F2AD0)
#define CLASS_2_9D9674E6BA49288D_METHOD_2_1B9BAFE25893B138_OFFSET UNITYSDK_OFFSET(0x176F2CC0)
#define CLASS_2_9D9674E6BA49288D_METHOD_2_99AED502C9DC686D_OFFSET UNITYSDK_OFFSET(0x176F2B30)
#define CLASS_2_9D9674E6BA49288D_SET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x176F2B20)
#define CLASS_2_9D9674E6BA49288D_SET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x176F2AF0)
#define CLASS_2_9D9674E6BA49288D__CTOR_OFFSET UNITYSDK_OFFSET(0x176F2F40)

inline static constexpr unsigned int Class_2_9D9674E6BA49288D_TypeDefinitionIndex = 74033;

class Class_2_9D9674E6BA49288D : public ::Class_1_1FB256EC3633CF9E
{
public:
	::UnityEngine::Vector3 _StartPos_k__BackingField; // 0x28
	::UnityEngine::Vector3 _EndPos_k__BackingField; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_StartPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D_GET_STARTPOS_OFFSET))(this);
	}

	::System::Void set_StartPos(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D_SET_STARTPOS_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_EndPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D_GET_ENDPOS_OFFSET))(this);
	}

	::System::Void set_EndPos(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D_SET_ENDPOS_OFFSET))(this, a1);
	}

	static ::Class_2_9D9674E6BA49288D* Method_2_99AED502C9DC686D(::Class_2_46FD925988407D1E* a1, ::Class_1_52DCEE691286F89A_1* a2)
	{
		return ((::Class_2_9D9674E6BA49288D*(*)(::Class_2_46FD925988407D1E*, ::Class_1_52DCEE691286F89A_1*))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D_METHOD_2_99AED502C9DC686D_OFFSET))(a1, a2);
	}

	::System::Void Method_2_1B9BAFE25893B138()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D_METHOD_2_1B9BAFE25893B138_OFFSET))(this);
	}
};
