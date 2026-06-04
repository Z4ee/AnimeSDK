#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_1E4F9B0ED3BF21DE;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace UnityEngine { class Collider; }

#define CLASS_2_5ACCE6C91E261DE6_CLEAR_OFFSET UNITYSDK_OFFSET(0x18D191D0)
#define CLASS_2_5ACCE6C91E261DE6_METHOD_2_8660C3A27B56FE60_OFFSET UNITYSDK_OFFSET(0x18D19290)
#define CLASS_2_5ACCE6C91E261DE6_ONALLOC_OFFSET UNITYSDK_OFFSET(0x18D190C0)
#define CLASS_2_5ACCE6C91E261DE6__CTOR_OFFSET UNITYSDK_OFFSET(0x18D19640)
#define CLASS_2_5ACCE6C91E261DE6___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x18D196D0)
#define CLASS_2_5ACCE6C91E261DE6___IFIXBASEPROXY_ONALLOC_OFFSET UNITYSDK_OFFSET(0x18D19650)

inline static constexpr unsigned int Class_2_5ACCE6C91E261DE6_TypeDefinitionIndex = 40119;

class Class_2_5ACCE6C91E261DE6 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::RPG::PoolHashSet_1<::UnityEngine::Collider*>* Field_2_0; // 0x338
	::RPG::PoolHashSet_1<::System::Int32>* Field_2_1; // 0x340
	::System::Boolean Field_2_2; // 0x348
	::System::Boolean Field_2_3; // 0x349
	::System::Single Field_2_4; // 0x34C
	::UnityEngine::Vector3 Field_2_5; // 0x350
	::System::Single Field_2_6; // 0x35C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5ACCE6C91E261DE6__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5ACCE6C91E261DE6_ONALLOC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5ACCE6C91E261DE6_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_8660C3A27B56FE60(::Class_3_1E4F9B0ED3BF21DE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_2_5ACCE6C91E261DE6_METHOD_2_8660C3A27B56FE60_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5ACCE6C91E261DE6___IFIXBASEPROXY_ONALLOC_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5ACCE6C91E261DE6___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
