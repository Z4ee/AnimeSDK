#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_8C84B83D3715B347;
class Class_3_D6DA183EF60F02C8;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_3C50D3572726D70F___C_METHOD_1_CB1DF7D42FBFCDAE_OFFSET UNITYSDK_OFFSET(0x12A49790)
#define CLASS_3_3C50D3572726D70F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A49740)
#define CLASS_3_3C50D3572726D70F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12A49780)

inline static constexpr unsigned int Class_3_3C50D3572726D70F___c_TypeDefinitionIndex = 82633;

class Class_3_3C50D3572726D70F___c : public ::System::Object
{
public:
	static ::Class_3_3C50D3572726D70F___c** StaticGet___9()
	{
		return (::Class_3_3C50D3572726D70F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_3C50D3572726D70F___c_TypeDefinitionIndex)->GetStaticField(0x31340);
	}
	static ::System::Action_2<::Class_3_8C84B83D3715B347*, ::Class_3_D6DA183EF60F02C8*>** StaticGet___9__5_0()
	{
		return (::System::Action_2<::Class_3_8C84B83D3715B347*, ::Class_3_D6DA183EF60F02C8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_3C50D3572726D70F___c_TypeDefinitionIndex)->GetStaticField(0x31348);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3C50D3572726D70F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C50D3572726D70F___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CB1DF7D42FBFCDAE(::Class_3_8C84B83D3715B347* a1, ::Class_3_D6DA183EF60F02C8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_8C84B83D3715B347*, ::Class_3_D6DA183EF60F02C8*))((::PBYTE)hIl2Cpp + CLASS_3_3C50D3572726D70F___C_METHOD_1_CB1DF7D42FBFCDAE_OFFSET))(this, a1, a2);
	}
};
