#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_3_ECE1B0DC22E3457B;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_8D3570ADC4B3F732_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xDE9CBA0)
#define CLASS_3_8D3570ADC4B3F732_METHOD_3_058D8FEAB17208A6_OFFSET UNITYSDK_OFFSET(0xDE9CDD0)
#define CLASS_3_8D3570ADC4B3F732_METHOD_3_24700C72D68ED20A_OFFSET UNITYSDK_OFFSET(0xDE9D5C0)
#define CLASS_3_8D3570ADC4B3F732_METHOD_3_2D0EF4C8B528FC1E_OFFSET UNITYSDK_OFFSET(0xDE9CF00)
#define CLASS_3_8D3570ADC4B3F732_METHOD_3_59FC4F5AA24E4F67_OFFSET UNITYSDK_OFFSET(0xDE9D6D0)
#define CLASS_3_8D3570ADC4B3F732_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xDE9D530)
#define CLASS_3_8D3570ADC4B3F732_METHOD_3_FF1E56A6F6135170_OFFSET UNITYSDK_OFFSET(0xDE9D130)
#define CLASS_3_8D3570ADC4B3F732__CTOR_OFFSET UNITYSDK_OFFSET(0xDE9CD80)

inline static constexpr unsigned int Class_3_8D3570ADC4B3F732_TypeDefinitionIndex = 73391;

class Class_3_8D3570ADC4B3F732 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8D3570ADC4B3F732__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_8D3570ADC4B3F732_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_058D8FEAB17208A6(::Class_3_ECE1B0DC22E3457B* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_ECE1B0DC22E3457B*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8D3570ADC4B3F732_METHOD_3_058D8FEAB17208A6_OFFSET))(a1, a2);
	}

	::System::Void Method_3_2D0EF4C8B528FC1E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_8D3570ADC4B3F732_METHOD_3_2D0EF4C8B528FC1E_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_8D3570ADC4B3F732_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Single Method_3_24700C72D68ED20A(::Class_3_ECE1B0DC22E3457B* a1)
	{
		return ((::System::Single(*)(::Class_3_ECE1B0DC22E3457B*))((::PBYTE)hIl2Cpp + CLASS_3_8D3570ADC4B3F732_METHOD_3_24700C72D68ED20A_OFFSET))(a1);
	}

	::System::Void Method_3_59FC4F5AA24E4F67(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_8D3570ADC4B3F732_METHOD_3_59FC4F5AA24E4F67_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_FF1E56A6F6135170(::Class_3_ECE1B0DC22E3457B* a1)
	{
		return ((::System::Void(*)(::Class_3_ECE1B0DC22E3457B*))((::PBYTE)hIl2Cpp + CLASS_3_8D3570ADC4B3F732_METHOD_3_FF1E56A6F6135170_OFFSET))(a1);
	}
};
