#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_7251A3702ED38135___C_METHOD_1_26E509975F92479C_OFFSET UNITYSDK_OFFSET(0x18B74170)
#define CLASS_2_7251A3702ED38135___C_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x18B74040)
#define CLASS_2_7251A3702ED38135___C_METHOD_1_F39234F2606D8D97_OFFSET UNITYSDK_OFFSET(0x18B73F70)
#define CLASS_2_7251A3702ED38135___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B73F20)
#define CLASS_2_7251A3702ED38135___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18B73F60)

inline static constexpr unsigned int Class_2_7251A3702ED38135___c_TypeDefinitionIndex = 76872;

class Class_2_7251A3702ED38135___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__29_26()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7251A3702ED38135___c_TypeDefinitionIndex)->GetStaticField(0x4F640);
	}
	static ::Class_2_7251A3702ED38135___c** StaticGet___9()
	{
		return (::Class_2_7251A3702ED38135___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7251A3702ED38135___c_TypeDefinitionIndex)->GetStaticField(0x4F648);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__29_43()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7251A3702ED38135___c_TypeDefinitionIndex)->GetStaticField(0x4F650);
	}
	static ::System::Action_1<::System::Boolean>** StaticGet___9__29_44()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7251A3702ED38135___c_TypeDefinitionIndex)->GetStaticField(0x4F658);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7251A3702ED38135___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7251A3702ED38135___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F39234F2606D8D97()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7251A3702ED38135___C_METHOD_1_F39234F2606D8D97_OFFSET))(this);
	}

	::System::Void Method_1_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7251A3702ED38135___C_METHOD_1_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_1_26E509975F92479C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7251A3702ED38135___C_METHOD_1_26E509975F92479C_OFFSET))(this, a1);
	}
};
