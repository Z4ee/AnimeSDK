#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_1175;
namespace System { class IFormatProvider; }
namespace System { class String; }

#define STRUCT_2_F5FBDA629A1B439F_METHOD_2_218F2836DA51D562_OFFSET UNITYSDK_OFFSET(0x3A3C650)
#define STRUCT_2_F5FBDA629A1B439F_METHOD_2_73BA9AF04F27F5C2_OFFSET UNITYSDK_OFFSET(0x15220AE0)
#define STRUCT_2_F5FBDA629A1B439F_METHOD_2_7C03BEEEF87A3C6B_OFFSET UNITYSDK_OFFSET(0x3A3C600)
#define STRUCT_2_F5FBDA629A1B439F_METHOD_2_9C48701E904F1792_OFFSET UNITYSDK_OFFSET(0x15220A60)
#define STRUCT_2_F5FBDA629A1B439F_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x3A3C5B0)
#define STRUCT_2_F5FBDA629A1B439F__CTOR_OFFSET UNITYSDK_OFFSET(0x379FAA0)

inline static constexpr unsigned int Struct_2_F5FBDA629A1B439F_TypeDefinitionIndex = 73272;

struct alignas(8) Struct_2_F5FBDA629A1B439F
{
	::System::String* DKEFJBAMMIO; // 0x10
	::System::IFormatProvider* NHFLLHIFMDI; // 0x18
	::Class_0_16E4307DCC419505_1175* BPOKGBHHPIO; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::IFormatProvider* a2, ::Class_0_16E4307DCC419505_1175* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IFormatProvider*, ::Class_0_16E4307DCC419505_1175*))((::PBYTE)hIl2Cpp + STRUCT_2_F5FBDA629A1B439F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::Struct_2_F5FBDA629A1B439F Method_2_9C48701E904F1792(::System::String* a1, ::System::IFormatProvider* a2)
	{
		return ((::Struct_2_F5FBDA629A1B439F(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + STRUCT_2_F5FBDA629A1B439F_METHOD_2_9C48701E904F1792_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_1175* Method_2_73BA9AF04F27F5C2(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_1175*(*)(::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_F5FBDA629A1B439F_METHOD_2_73BA9AF04F27F5C2_OFFSET))(a1);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F5FBDA629A1B439F_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::IFormatProvider* Method_2_7C03BEEEF87A3C6B()
	{
		return ((::System::IFormatProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F5FBDA629A1B439F_METHOD_2_7C03BEEEF87A3C6B_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1175* Method_2_218F2836DA51D562()
	{
		return ((::Class_0_16E4307DCC419505_1175*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F5FBDA629A1B439F_METHOD_2_218F2836DA51D562_OFFSET))(this);
	}
};
