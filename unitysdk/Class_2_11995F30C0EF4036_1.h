#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_23.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_99.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_11995F30C0EF4036_1_METHOD_2_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x14F112D0)
#define CLASS_2_11995F30C0EF4036_1_METHOD_2_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x14F10E90)
#define CLASS_2_11995F30C0EF4036_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14F10E80)

inline static constexpr unsigned int Class_2_11995F30C0EF4036_1_TypeDefinitionIndex = 11113;

class Class_2_11995F30C0EF4036_1 : public ::Class_1_5DA2E7556103D5A3_23
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_2_0; // 0x78

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_99 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_99, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_11995F30C0EF4036_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11995F30C0EF4036_1_METHOD_2_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_2_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11995F30C0EF4036_1_METHOD_2_BB881F05E41D3A04_OFFSET))(this);
	}
};
