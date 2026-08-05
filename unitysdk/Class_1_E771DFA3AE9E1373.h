#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B4378B46E0020E85;
namespace System { class Action; }

#define CLASS_1_E771DFA3AE9E1373_METHOD_1_27CC4FBFEC17948C_OFFSET UNITYSDK_OFFSET(0x17005710)
#define CLASS_1_E771DFA3AE9E1373_METHOD_1_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x17005680)
#define CLASS_1_E771DFA3AE9E1373_METHOD_1_CB8CF89038C44C8A_OFFSET UNITYSDK_OFFSET(0x17005530)
#define CLASS_1_E771DFA3AE9E1373_METHOD_1_E6B4D8E9B33CB8DA_OFFSET UNITYSDK_OFFSET(0x17005580)
#define CLASS_1_E771DFA3AE9E1373__CTOR_OFFSET UNITYSDK_OFFSET(0x17005520)

inline static constexpr unsigned int Class_1_E771DFA3AE9E1373_TypeDefinitionIndex = 58136;

class Class_1_E771DFA3AE9E1373 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::Class_2_B4378B46E0020E85* Field_1_2; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E771DFA3AE9E1373__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CB8CF89038C44C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E771DFA3AE9E1373_METHOD_1_CB8CF89038C44C8A_OFFSET))(this);
	}

	::System::Void Method_1_E6B4D8E9B33CB8DA(::Class_2_B4378B46E0020E85* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B4378B46E0020E85*))((::PBYTE)hIl2Cpp + CLASS_1_E771DFA3AE9E1373_METHOD_1_E6B4D8E9B33CB8DA_OFFSET))(this, a1);
	}

	::System::Void Method_1_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E771DFA3AE9E1373_METHOD_1_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_1_27CC4FBFEC17948C(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E771DFA3AE9E1373_METHOD_1_27CC4FBFEC17948C_OFFSET))(this, a1);
	}
};
