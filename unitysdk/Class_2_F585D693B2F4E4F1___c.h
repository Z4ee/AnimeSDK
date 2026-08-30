#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D2E90365D99FC7E6_7;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_F585D693B2F4E4F1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15720410)
#define CLASS_2_F585D693B2F4E4F1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15720450)
#define CLASS_2_F585D693B2F4E4F1___C__START_B__5_0_OFFSET UNITYSDK_OFFSET(0x15720460)

inline static constexpr unsigned int Class_2_F585D693B2F4E4F1___c_TypeDefinitionIndex = 60461;

class Class_2_F585D693B2F4E4F1___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_D2E90365D99FC7E6_7*, ::System::UInt32>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::Class_1_D2E90365D99FC7E6_7*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F585D693B2F4E4F1___c_TypeDefinitionIndex)->GetStaticField(0x2E820);
	}
	static ::Class_2_F585D693B2F4E4F1___c** StaticGet___9()
	{
		return (::Class_2_F585D693B2F4E4F1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F585D693B2F4E4F1___c_TypeDefinitionIndex)->GetStaticField(0x2E828);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F585D693B2F4E4F1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F585D693B2F4E4F1___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _Start_b__5_0(::Class_1_D2E90365D99FC7E6_7* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_D2E90365D99FC7E6_7*))((::PBYTE)hIl2Cpp + CLASS_2_F585D693B2F4E4F1___C__START_B__5_0_OFFSET))(this, a1);
	}
};
