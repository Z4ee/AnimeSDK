#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_44340B2393166A74;
class Class_1_D17272E82AE804C2_695;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_7B5BC5F7531D3B01_2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2CD6C0)
#define CLASS_1_7B5BC5F7531D3B01_2___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB2CD700)
#define CLASS_1_7B5BC5F7531D3B01_2___C__SAVE_B__3_1_OFFSET UNITYSDK_OFFSET(0xB2CD710)

inline static constexpr unsigned int Class_1_7B5BC5F7531D3B01_2___c_TypeDefinitionIndex = 80243;

class Class_1_7B5BC5F7531D3B01_2___c : public ::System::Object
{
public:
	static ::Class_1_7B5BC5F7531D3B01_2___c** StaticGet___9()
	{
		return (::Class_1_7B5BC5F7531D3B01_2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B5BC5F7531D3B01_2___c_TypeDefinitionIndex)->GetStaticField(0x2E5B0);
	}
	static ::System::Func_2<::Class_1_44340B2393166A74*, ::Class_1_D17272E82AE804C2_695*>** StaticGet___9__3_1()
	{
		return (::System::Func_2<::Class_1_44340B2393166A74*, ::Class_1_D17272E82AE804C2_695*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B5BC5F7531D3B01_2___c_TypeDefinitionIndex)->GetStaticField(0x2E5B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7B5BC5F7531D3B01_2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B5BC5F7531D3B01_2___C__CTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_695* _Save_b__3_1(::Class_1_44340B2393166A74* a1)
	{
		return ((::Class_1_D17272E82AE804C2_695*(*)(::PVOID, ::Class_1_44340B2393166A74*))((::PBYTE)hIl2Cpp + CLASS_1_7B5BC5F7531D3B01_2___C__SAVE_B__3_1_OFFSET))(this, a1);
	}
};
