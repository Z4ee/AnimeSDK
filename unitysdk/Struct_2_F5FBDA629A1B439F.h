#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_1073;
namespace System { class IFormatProvider; }
namespace System { class String; }

#define STRUCT_2_F5FBDA629A1B439F_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x5B60)
#define STRUCT_2_F5FBDA629A1B439F_METHOD_2_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0x14410)
#define STRUCT_2_F5FBDA629A1B439F_METHOD_2_73BA9AF04F27F5C2_OFFSET UNITYSDK_OFFSET(0xAF68BB0)
#define STRUCT_2_F5FBDA629A1B439F_METHOD_2_9C48701E904F1792_OFFSET UNITYSDK_OFFSET(0xAF68B30)
#define STRUCT_2_F5FBDA629A1B439F_METHOD_2_C10177A721A28F6F_OFFSET UNITYSDK_OFFSET(0x60D0)
#define STRUCT_2_F5FBDA629A1B439F__CTOR_OFFSET UNITYSDK_OFFSET(0x2C890)

inline static constexpr unsigned int Struct_2_F5FBDA629A1B439F_TypeDefinitionIndex = 68521;

struct alignas(8) Struct_2_F5FBDA629A1B439F
{
	::System::String* Field_2_0; // 0x10
	::System::IFormatProvider* Field_2_1; // 0x18
	::Class_0_16E4307DCC419505_1073* Field_2_2; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::IFormatProvider* a2, ::Class_0_16E4307DCC419505_1073* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IFormatProvider*, ::Class_0_16E4307DCC419505_1073*))((::PBYTE)hIl2Cpp + STRUCT_2_F5FBDA629A1B439F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::Struct_2_F5FBDA629A1B439F Method_2_9C48701E904F1792(::System::String* a1, ::System::IFormatProvider* a2)
	{
		return ((::Struct_2_F5FBDA629A1B439F(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + STRUCT_2_F5FBDA629A1B439F_METHOD_2_9C48701E904F1792_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_1073* Method_2_73BA9AF04F27F5C2(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_1073*(*)(::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_F5FBDA629A1B439F_METHOD_2_73BA9AF04F27F5C2_OFFSET))(a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F5FBDA629A1B439F_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::IFormatProvider* Method_2_C10177A721A28F6F()
	{
		return ((::System::IFormatProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F5FBDA629A1B439F_METHOD_2_C10177A721A28F6F_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1073* Method_2_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_1073*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F5FBDA629A1B439F_METHOD_2_5C00C2EE4FCF347E_OFFSET))(this);
	}
};
