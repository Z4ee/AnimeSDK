#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_621BFCA8F4CDD0A1;

#define CLASS_2_EC9A90E156962139___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1599AA50)
#define CLASS_2_EC9A90E156962139___C__DISPLAYCLASS11_0___DOSPLIT_B__0_OFFSET UNITYSDK_OFFSET(0x1599B460)

inline static constexpr unsigned int Class_2_EC9A90E156962139___c__DisplayClass11_0_TypeDefinitionIndex = 77428;

class Class_2_EC9A90E156962139___c__DisplayClass11_0 : public ::System::Object
{
public:
	::UnityEngine::Vector3 center; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC9A90E156962139___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 __DoSplit_b__0(::Class_1_621BFCA8F4CDD0A1* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_621BFCA8F4CDD0A1*))((::PBYTE)hIl2Cpp + CLASS_2_EC9A90E156962139___C__DISPLAYCLASS11_0___DOSPLIT_B__0_OFFSET))(this, a1);
	}
};
