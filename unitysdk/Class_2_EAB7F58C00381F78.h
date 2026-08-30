#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1FB256EC3633CF9E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_52DCEE691286F89A_1;
class Class_2_46FD925988407D1E;

#define CLASS_2_EAB7F58C00381F78_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x15BA6150)
#define CLASS_2_EAB7F58C00381F78_METHOD_2_2340068C22DFE332_OFFSET UNITYSDK_OFFSET(0x15BA62F0)
#define CLASS_2_EAB7F58C00381F78_METHOD_2_2539C280729340FB_OFFSET UNITYSDK_OFFSET(0x15BA6180)
#define CLASS_2_EAB7F58C00381F78_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x15BA6170)
#define CLASS_2_EAB7F58C00381F78__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA6500)

inline static constexpr unsigned int Class_2_EAB7F58C00381F78_TypeDefinitionIndex = 77519;

class Class_2_EAB7F58C00381F78 : public ::Class_1_1FB256EC3633CF9E
{
public:
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAB7F58C00381F78__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAB7F58C00381F78_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_EAB7F58C00381F78_SET_POSITION_OFFSET))(this, a1);
	}

	static ::Class_2_EAB7F58C00381F78* Method_2_2539C280729340FB(::Class_2_46FD925988407D1E* a1, ::Class_1_52DCEE691286F89A_1* a2)
	{
		return ((::Class_2_EAB7F58C00381F78*(*)(::Class_2_46FD925988407D1E*, ::Class_1_52DCEE691286F89A_1*))((::PBYTE)hIl2Cpp + CLASS_2_EAB7F58C00381F78_METHOD_2_2539C280729340FB_OFFSET))(a1, a2);
	}

	::System::Void Method_2_2340068C22DFE332()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAB7F58C00381F78_METHOD_2_2340068C22DFE332_OFFSET))(this);
	}
};
