#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1FB256EC3633CF9E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3AD2528CD53B1639_4;
class Class_2_46FD925988407D1E;

#define CLASS_2_EAB7F58C00381F78_2_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xBA77DE0)
#define CLASS_2_EAB7F58C00381F78_2_METHOD_2_2340068C22DFE332_OFFSET UNITYSDK_OFFSET(0xBA77F70)
#define CLASS_2_EAB7F58C00381F78_2_METHOD_2_2539C280729340FB_OFFSET UNITYSDK_OFFSET(0xBA77E10)
#define CLASS_2_EAB7F58C00381F78_2_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xBA77E00)
#define CLASS_2_EAB7F58C00381F78_2__CTOR_OFFSET UNITYSDK_OFFSET(0xBA78170)

inline static constexpr unsigned int Class_2_EAB7F58C00381F78_2_TypeDefinitionIndex = 77995;

class Class_2_EAB7F58C00381F78_2 : public ::Class_1_1FB256EC3633CF9E
{
public:
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAB7F58C00381F78_2__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAB7F58C00381F78_2_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_EAB7F58C00381F78_2_SET_POSITION_OFFSET))(this, a1);
	}

	static ::Class_2_EAB7F58C00381F78_2* Method_2_2539C280729340FB(::Class_2_46FD925988407D1E* a1, ::Class_1_3AD2528CD53B1639_4* a2)
	{
		return ((::Class_2_EAB7F58C00381F78_2*(*)(::Class_2_46FD925988407D1E*, ::Class_1_3AD2528CD53B1639_4*))((::PBYTE)hIl2Cpp + CLASS_2_EAB7F58C00381F78_2_METHOD_2_2539C280729340FB_OFFSET))(a1, a2);
	}

	::System::Void Method_2_2340068C22DFE332()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAB7F58C00381F78_2_METHOD_2_2340068C22DFE332_OFFSET))(this);
	}
};
