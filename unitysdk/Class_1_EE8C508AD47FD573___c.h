#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_58C02EFC41D1F04D_7;
class Class_1_945CD8F5346ED192;
class Class_1_A6B0B39A319DDDE2_1;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_EE8C508AD47FD573___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8747160)
#define CLASS_1_EE8C508AD47FD573___C__CTOR_OFFSET UNITYSDK_OFFSET(0x87471A0)
#define CLASS_1_EE8C508AD47FD573___C__REQUESTGETSTAGE_B__4_0_OFFSET UNITYSDK_OFFSET(0x87471D0)
#define CLASS_1_EE8C508AD47FD573___C__REQUESTSTARTSTAGE_B__3_0_OFFSET UNITYSDK_OFFSET(0x87471B0)

inline static constexpr unsigned int Class_1_EE8C508AD47FD573___c_TypeDefinitionIndex = 62000;

class Class_1_EE8C508AD47FD573___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_945CD8F5346ED192*, ::Class_1_A6B0B39A319DDDE2_1*>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::Class_1_945CD8F5346ED192*, ::Class_1_A6B0B39A319DDDE2_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EE8C508AD47FD573___c_TypeDefinitionIndex)->GetStaticField(0x1E130);
	}
	static ::System::Func_2<::Class_1_58C02EFC41D1F04D_7*, ::Class_1_A6B0B39A319DDDE2_1*>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::Class_1_58C02EFC41D1F04D_7*, ::Class_1_A6B0B39A319DDDE2_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EE8C508AD47FD573___c_TypeDefinitionIndex)->GetStaticField(0x1E138);
	}
	static ::Class_1_EE8C508AD47FD573___c** StaticGet___9()
	{
		return (::Class_1_EE8C508AD47FD573___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EE8C508AD47FD573___c_TypeDefinitionIndex)->GetStaticField(0x1E140);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EE8C508AD47FD573___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE8C508AD47FD573___C__CTOR_OFFSET))(this);
	}

	::Class_1_A6B0B39A319DDDE2_1* _RequestStartStage_b__3_0(::Class_1_58C02EFC41D1F04D_7* rsp)
	{
		return ((::Class_1_A6B0B39A319DDDE2_1*(*)(::PVOID, ::Class_1_58C02EFC41D1F04D_7*))((::PBYTE)hIl2Cpp + CLASS_1_EE8C508AD47FD573___C__REQUESTSTARTSTAGE_B__3_0_OFFSET))(this, rsp);
	}

	::Class_1_A6B0B39A319DDDE2_1* _RequestGetStage_b__4_0(::Class_1_945CD8F5346ED192* rsp)
	{
		return ((::Class_1_A6B0B39A319DDDE2_1*(*)(::PVOID, ::Class_1_945CD8F5346ED192*))((::PBYTE)hIl2Cpp + CLASS_1_EE8C508AD47FD573___C__REQUESTGETSTAGE_B__4_0_OFFSET))(this, rsp);
	}
};
