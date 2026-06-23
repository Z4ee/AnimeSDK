#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E98A6D21B6642FAD.h"

class Class_0_16E4307DCC419505_33;
class Class_2_69FE2A2F26EAE95C;
namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Reflection { class PropertyInfo; }

#define CLASS_2_388462581BEEEA84_METHOD_2_324A61156E8792D7_OFFSET UNITYSDK_OFFSET(0x1E5B47D0)
#define CLASS_2_388462581BEEEA84_METHOD_2_7F3643CB10C3435F_OFFSET UNITYSDK_OFFSET(0x1E5B4A70)
#define CLASS_2_388462581BEEEA84_METHOD_2_A7FD041C3B0AC101_OFFSET UNITYSDK_OFFSET(0x1E5B49B0)
#define CLASS_2_388462581BEEEA84_METHOD_2_B2700A1FD3D0D6D6_OFFSET UNITYSDK_OFFSET(0x1E5B4A10)
#define CLASS_2_388462581BEEEA84__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B41F0)

inline static constexpr unsigned int Class_2_388462581BEEEA84_TypeDefinitionIndex = 18649;

class Class_2_388462581BEEEA84 : public ::Class_1_E98A6D21B6642FAD
{
public:
	::System::Action_2<::Class_0_16E4307DCC419505_33*, ::System::Object*>* Field_2_0; // 0x20
	::System::Func_2<::Class_0_16E4307DCC419505_33*, ::System::Boolean>* Field_2_2; // 0x28
	::System::Action_1<::Class_0_16E4307DCC419505_33*>* Field_2_1; // 0x30

	::System::Void _ctor(::System::Type* a1, ::System::Reflection::PropertyInfo* a2, ::Class_2_69FE2A2F26EAE95C* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Reflection::PropertyInfo*, ::Class_2_69FE2A2F26EAE95C*))((::PBYTE)hIl2Cpp + CLASS_2_388462581BEEEA84__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A7FD041C3B0AC101(::Class_0_16E4307DCC419505_33* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_33*))((::PBYTE)hIl2Cpp + CLASS_2_388462581BEEEA84_METHOD_2_A7FD041C3B0AC101_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B2700A1FD3D0D6D6(::Class_0_16E4307DCC419505_33* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_33*))((::PBYTE)hIl2Cpp + CLASS_2_388462581BEEEA84_METHOD_2_B2700A1FD3D0D6D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_7F3643CB10C3435F(::Class_0_16E4307DCC419505_33* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_33*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_388462581BEEEA84_METHOD_2_7F3643CB10C3435F_OFFSET))(this, a1, a2);
	}

	static ::System::Object* Method_2_324A61156E8792D7(::Class_2_69FE2A2F26EAE95C* a1)
	{
		return ((::System::Object*(*)(::Class_2_69FE2A2F26EAE95C*))((::PBYTE)hIl2Cpp + CLASS_2_388462581BEEEA84_METHOD_2_324A61156E8792D7_OFFSET))(a1);
	}
};
