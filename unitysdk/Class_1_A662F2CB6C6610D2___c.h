#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_15.h"
#include "unitysdk/System/Object.h"

class Class_1_A662F2CB6C6610D2;

#define CLASS_1_A662F2CB6C6610D2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA96DD0)
#define CLASS_1_A662F2CB6C6610D2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA96E00)
#define CLASS_1_A662F2CB6C6610D2___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1EA96E10)
#define CLASS_1_A662F2CB6C6610D2___C___CCTOR_B__68_1_OFFSET UNITYSDK_OFFSET(0x1EA96E40)
#define CLASS_1_A662F2CB6C6610D2___C___CCTOR_B__68_2_OFFSET UNITYSDK_OFFSET(0x1EA96E50)

inline static constexpr unsigned int Class_1_A662F2CB6C6610D2___c_TypeDefinitionIndex = 26315;

class Class_1_A662F2CB6C6610D2___c : public ::System::Object
{
public:
	static ::Class_1_A662F2CB6C6610D2___c** StaticGet___9()
	{
		return (::Class_1_A662F2CB6C6610D2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A662F2CB6C6610D2___c_TypeDefinitionIndex)->GetStaticField(0x59E50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A662F2CB6C6610D2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A662F2CB6C6610D2___C__CTOR_OFFSET))(this);
	}

	::Class_1_A662F2CB6C6610D2* __cctor_b__68_0()
	{
		return ((::Class_1_A662F2CB6C6610D2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A662F2CB6C6610D2___C___CCTOR_B__68_0_OFFSET))(this);
	}

	::System::Int32 __cctor_b__68_1(::Enum_3_ED790DAC948A65A9_15 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_15))((::PBYTE)hIl2Cpp + CLASS_1_A662F2CB6C6610D2___C___CCTOR_B__68_1_OFFSET))(this, a1);
	}

	::Enum_3_ED790DAC948A65A9_15 __cctor_b__68_2(::System::Int32 a1)
	{
		return ((::Enum_3_ED790DAC948A65A9_15(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A662F2CB6C6610D2___C___CCTOR_B__68_2_OFFSET))(this, a1);
	}
};
