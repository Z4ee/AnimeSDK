#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_3_F97B015544BE936B;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define CLASS_3_A05AFC4851C05872_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x16ED7510)
#define CLASS_3_A05AFC4851C05872_METHOD_3_16FA1849EEADCE9E_1_OFFSET UNITYSDK_OFFSET(0x16ED9180)
#define CLASS_3_A05AFC4851C05872_METHOD_3_16FA1849EEADCE9E_OFFSET UNITYSDK_OFFSET(0x16ED90A0)
#define CLASS_3_A05AFC4851C05872_METHOD_3_4B325DD8DE4934F1_OFFSET UNITYSDK_OFFSET(0x16EDA6A0)
#define CLASS_3_A05AFC4851C05872_METHOD_3_4DAAF31A4D9694C9_OFFSET UNITYSDK_OFFSET(0x16ED7F50)
#define CLASS_3_A05AFC4851C05872_METHOD_3_8762BF405BCB063F_1_OFFSET UNITYSDK_OFFSET(0x16ED8B20)
#define CLASS_3_A05AFC4851C05872_METHOD_3_8762BF405BCB063F_2_OFFSET UNITYSDK_OFFSET(0x16ED9370)
#define CLASS_3_A05AFC4851C05872_METHOD_3_8762BF405BCB063F_3_OFFSET UNITYSDK_OFFSET(0x16ED9260)
#define CLASS_3_A05AFC4851C05872_METHOD_3_8762BF405BCB063F_OFFSET UNITYSDK_OFFSET(0x16ED8740)
#define CLASS_3_A05AFC4851C05872_METHOD_3_94953135B052F117_1_OFFSET UNITYSDK_OFFSET(0x16ED97D0)
#define CLASS_3_A05AFC4851C05872_METHOD_3_94953135B052F117_OFFSET UNITYSDK_OFFSET(0x16ED7720)
#define CLASS_3_A05AFC4851C05872_METHOD_3_AF789C7DC4BF042C_1_OFFSET UNITYSDK_OFFSET(0x16EDA290)
#define CLASS_3_A05AFC4851C05872_METHOD_3_AF789C7DC4BF042C_OFFSET UNITYSDK_OFFSET(0x16ED9E80)
#define CLASS_3_A05AFC4851C05872_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x16ED9480)
#define CLASS_3_A05AFC4851C05872_METHOD_3_C91F7C6C1EAEEDF3_1_OFFSET UNITYSDK_OFFSET(0x16ED9510)
#define CLASS_3_A05AFC4851C05872_METHOD_3_C91F7C6C1EAEEDF3_OFFSET UNITYSDK_OFFSET(0x16ED8860)
#define CLASS_3_A05AFC4851C05872_METHOD_3_D14C3EE5C1A25E1A_OFFSET UNITYSDK_OFFSET(0x16ED8C40)
#define CLASS_3_A05AFC4851C05872_METHOD_3_F4D97839DCE92CB1_OFFSET UNITYSDK_OFFSET(0x16EDAAA0)
#define CLASS_3_A05AFC4851C05872__CTOR_OFFSET UNITYSDK_OFFSET(0x16ED76D0)

inline static constexpr unsigned int Class_3_A05AFC4851C05872_TypeDefinitionIndex = 87769;

class Class_3_A05AFC4851C05872 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A05AFC4851C05872__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_A05AFC4851C05872_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::System::Single Method_3_94953135B052F117(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A05AFC4851C05872_METHOD_3_94953135B052F117_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_3_8762BF405BCB063F(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A05AFC4851C05872_METHOD_3_8762BF405BCB063F_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_3_C91F7C6C1EAEEDF3(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A05AFC4851C05872_METHOD_3_C91F7C6C1EAEEDF3_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_3_8762BF405BCB063F_1(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A05AFC4851C05872_METHOD_3_8762BF405BCB063F_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_3_D14C3EE5C1A25E1A(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A05AFC4851C05872_METHOD_3_D14C3EE5C1A25E1A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_3_16FA1849EEADCE9E(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A05AFC4851C05872_METHOD_3_16FA1849EEADCE9E_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_3_16FA1849EEADCE9E_1(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A05AFC4851C05872_METHOD_3_16FA1849EEADCE9E_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_3_8762BF405BCB063F_2(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A05AFC4851C05872_METHOD_3_8762BF405BCB063F_2_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_3_8762BF405BCB063F_3(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A05AFC4851C05872_METHOD_3_8762BF405BCB063F_3_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_A05AFC4851C05872_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Single Method_3_4DAAF31A4D9694C9(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A05AFC4851C05872_METHOD_3_4DAAF31A4D9694C9_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_3_C91F7C6C1EAEEDF3_1(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A05AFC4851C05872_METHOD_3_C91F7C6C1EAEEDF3_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_3_94953135B052F117_1(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A05AFC4851C05872_METHOD_3_94953135B052F117_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_3_AF789C7DC4BF042C(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A05AFC4851C05872_METHOD_3_AF789C7DC4BF042C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_3_AF789C7DC4BF042C_1(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A05AFC4851C05872_METHOD_3_AF789C7DC4BF042C_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_3_4B325DD8DE4934F1(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A05AFC4851C05872_METHOD_3_4B325DD8DE4934F1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_3_F4D97839DCE92CB1(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A05AFC4851C05872_METHOD_3_F4D97839DCE92CB1_OFFSET))(a1, a2, a3, a4);
	}
};
