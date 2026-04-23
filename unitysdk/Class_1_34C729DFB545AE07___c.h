#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_49CAB3DE74280C58;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_34C729DFB545AE07___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD3B9320)
#define CLASS_1_34C729DFB545AE07___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD3B9360)
#define CLASS_1_34C729DFB545AE07___C__EVALUATE_B__12_0_OFFSET UNITYSDK_OFFSET(0xD3B9370)

inline static constexpr unsigned int Class_1_34C729DFB545AE07___c_TypeDefinitionIndex = 71153;

class Class_1_34C729DFB545AE07___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_49CAB3DE74280C58*, ::System::Boolean>** StaticGet___9__12_0()
	{
		return (::System::Func_2<::Class_2_49CAB3DE74280C58*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_34C729DFB545AE07___c_TypeDefinitionIndex)->GetStaticField(0x6B370);
	}
	static ::Class_1_34C729DFB545AE07___c** StaticGet___9()
	{
		return (::Class_1_34C729DFB545AE07___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_34C729DFB545AE07___c_TypeDefinitionIndex)->GetStaticField(0x6B378);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_34C729DFB545AE07___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34C729DFB545AE07___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _Evaluate_b__12_0(::Class_2_49CAB3DE74280C58* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_1_34C729DFB545AE07___C__EVALUATE_B__12_0_OFFSET))(this, e);
	}
};
