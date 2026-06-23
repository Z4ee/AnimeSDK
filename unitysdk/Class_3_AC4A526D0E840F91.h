#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_3_F97B015544BE936B;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define CLASS_3_AC4A526D0E840F91_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x109D3930)
#define CLASS_3_AC4A526D0E840F91_METHOD_3_16FA1849EEADCE9E_1_OFFSET UNITYSDK_OFFSET(0x109D6A70)
#define CLASS_3_AC4A526D0E840F91_METHOD_3_16FA1849EEADCE9E_OFFSET UNITYSDK_OFFSET(0x109D43C0)
#define CLASS_3_AC4A526D0E840F91_METHOD_3_343E20205DB12AC4_OFFSET UNITYSDK_OFFSET(0x109D5380)
#define CLASS_3_AC4A526D0E840F91_METHOD_3_4B325DD8DE4934F1_OFFSET UNITYSDK_OFFSET(0x109D5B80)
#define CLASS_3_AC4A526D0E840F91_METHOD_3_8762BF405BCB063F_1_OFFSET UNITYSDK_OFFSET(0x109D45B0)
#define CLASS_3_AC4A526D0E840F91_METHOD_3_8762BF405BCB063F_2_OFFSET UNITYSDK_OFFSET(0x109D5F90)
#define CLASS_3_AC4A526D0E840F91_METHOD_3_8762BF405BCB063F_3_OFFSET UNITYSDK_OFFSET(0x109D4490)
#define CLASS_3_AC4A526D0E840F91_METHOD_3_8762BF405BCB063F_OFFSET UNITYSDK_OFFSET(0x109D4990)
#define CLASS_3_AC4A526D0E840F91_METHOD_3_A8708E7A6677D4BE_1_OFFSET UNITYSDK_OFFSET(0x109D6B40)
#define CLASS_3_AC4A526D0E840F91_METHOD_3_A8708E7A6677D4BE_OFFSET UNITYSDK_OFFSET(0x109D4B30)
#define CLASS_3_AC4A526D0E840F91_METHOD_3_AF789C7DC4BF042C_1_OFFSET UNITYSDK_OFFSET(0x109D6360)
#define CLASS_3_AC4A526D0E840F91_METHOD_3_AF789C7DC4BF042C_OFFSET UNITYSDK_OFFSET(0x109D3B40)
#define CLASS_3_AC4A526D0E840F91_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x109D4AA0)
#define CLASS_3_AC4A526D0E840F91_METHOD_3_C91F7C6C1EAEEDF3_1_OFFSET UNITYSDK_OFFSET(0x109D60A0)
#define CLASS_3_AC4A526D0E840F91_METHOD_3_C91F7C6C1EAEEDF3_OFFSET UNITYSDK_OFFSET(0x109D46D0)
#define CLASS_3_AC4A526D0E840F91_METHOD_3_D14C3EE5C1A25E1A_OFFSET UNITYSDK_OFFSET(0x109D3F50)
#define CLASS_3_AC4A526D0E840F91_METHOD_3_F4D97839DCE92CB1_OFFSET UNITYSDK_OFFSET(0x109D6770)
#define CLASS_3_AC4A526D0E840F91__CTOR_OFFSET UNITYSDK_OFFSET(0x109D3AF0)

inline static constexpr unsigned int Class_3_AC4A526D0E840F91_TypeDefinitionIndex = 68147;

class Class_3_AC4A526D0E840F91 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC4A526D0E840F91__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_AC4A526D0E840F91_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::System::Single Method_3_AF789C7DC4BF042C(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_AC4A526D0E840F91_METHOD_3_AF789C7DC4BF042C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_3_D14C3EE5C1A25E1A(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_AC4A526D0E840F91_METHOD_3_D14C3EE5C1A25E1A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_3_16FA1849EEADCE9E(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_AC4A526D0E840F91_METHOD_3_16FA1849EEADCE9E_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_3_C91F7C6C1EAEEDF3(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_AC4A526D0E840F91_METHOD_3_C91F7C6C1EAEEDF3_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_3_8762BF405BCB063F(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_AC4A526D0E840F91_METHOD_3_8762BF405BCB063F_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_AC4A526D0E840F91_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Single Method_3_A8708E7A6677D4BE(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_AC4A526D0E840F91_METHOD_3_A8708E7A6677D4BE_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_3_8762BF405BCB063F_1(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_AC4A526D0E840F91_METHOD_3_8762BF405BCB063F_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_3_4B325DD8DE4934F1(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_AC4A526D0E840F91_METHOD_3_4B325DD8DE4934F1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_3_8762BF405BCB063F_2(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_AC4A526D0E840F91_METHOD_3_8762BF405BCB063F_2_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_3_C91F7C6C1EAEEDF3_1(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_AC4A526D0E840F91_METHOD_3_C91F7C6C1EAEEDF3_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_3_8762BF405BCB063F_3(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_AC4A526D0E840F91_METHOD_3_8762BF405BCB063F_3_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_3_AF789C7DC4BF042C_1(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_AC4A526D0E840F91_METHOD_3_AF789C7DC4BF042C_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_3_343E20205DB12AC4(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_AC4A526D0E840F91_METHOD_3_343E20205DB12AC4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_3_F4D97839DCE92CB1(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_AC4A526D0E840F91_METHOD_3_F4D97839DCE92CB1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_3_16FA1849EEADCE9E_1(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_AC4A526D0E840F91_METHOD_3_16FA1849EEADCE9E_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_3_A8708E7A6677D4BE_1(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_AC4A526D0E840F91_METHOD_3_A8708E7A6677D4BE_1_OFFSET))(a1, a2, a3, a4);
	}
};
