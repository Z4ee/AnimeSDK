#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6F77E1501D42BF4A.h"
#include "unitysdk/UnityEngine/NetworkReachability.h"

#define CLASS_2_F238591C6EC1D26C_METHOD_2_70F996834AEFED46_OFFSET UNITYSDK_OFFSET(0x1175ECE0)
#define CLASS_2_F238591C6EC1D26C_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x1175EDA0)
#define CLASS_2_F238591C6EC1D26C__CTOR_OFFSET UNITYSDK_OFFSET(0x1175ED90)

inline static constexpr unsigned int Class_2_F238591C6EC1D26C_TypeDefinitionIndex = 49529;

class Class_2_F238591C6EC1D26C : public ::Class_1_6F77E1501D42BF4A
{
public:
	::UnityEngine::NetworkReachability Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F238591C6EC1D26C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_70F996834AEFED46(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F238591C6EC1D26C_METHOD_2_70F996834AEFED46_OFFSET))(this, a1);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F238591C6EC1D26C_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
