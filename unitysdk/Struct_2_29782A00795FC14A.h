#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_29782A00795FC14A_METHOD_2_3011C2ADD2E0B0F2_OFFSET UNITYSDK_OFFSET(0x3B959A0)
#define STRUCT_2_29782A00795FC14A_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x3B959B0)
#define STRUCT_2_29782A00795FC14A_METHOD_2_5E596AACCE006EE1_1_OFFSET UNITYSDK_OFFSET(0x1D762900)
#define STRUCT_2_29782A00795FC14A_METHOD_2_5E596AACCE006EE1_OFFSET UNITYSDK_OFFSET(0x1D762670)
#define STRUCT_2_29782A00795FC14A_METHOD_2_7D90263CF3A3B469_OFFSET UNITYSDK_OFFSET(0x3B95A10)
#define STRUCT_2_29782A00795FC14A_METHOD_2_7FC62A89472408B2_OFFSET UNITYSDK_OFFSET(0x3B95990)
#define STRUCT_2_29782A00795FC14A_METHOD_2_C4F24C83C3503C58_OFFSET UNITYSDK_OFFSET(0x3B959D0)
#define STRUCT_2_29782A00795FC14A_METHOD_2_CE75DC0E1B275911_OFFSET UNITYSDK_OFFSET(0x3B958D0)
#define STRUCT_2_29782A00795FC14A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B95A70)
#define STRUCT_2_29782A00795FC14A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B957F0)
#define STRUCT_2_29782A00795FC14A__CTOR_OFFSET UNITYSDK_OFFSET(0x3B95710)

inline static constexpr unsigned int Struct_2_29782A00795FC14A_TypeDefinitionIndex = 6289;

struct alignas(4) Struct_2_29782A00795FC14A
{
	::RPG::MVector3 BHCMCMADHBF; // 0x10
	::RPG::MVector3 IIGAMHGPKGE; // 0x1C
	::RPG::MVector3 KBBHCJKLPHH; // 0x28
	::RPG::MVector3 NKDECDGECFL; // 0x34
	::RPG::MVector2 JKGICKONCKE; // 0x40

	::System::Void _ctor(::RPG::MVector3& a1, ::RPG::MVector3& a2, ::RPG::MVector3& a3, ::RPG::MVector2& a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3&, ::RPG::MVector3&, ::RPG::MVector3&, ::RPG::MVector2&))((::PBYTE)hIl2Cpp + STRUCT_2_29782A00795FC14A__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_1(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::RPG::MVector2 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector2))((::PBYTE)hIl2Cpp + STRUCT_2_29782A00795FC14A__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::Struct_2_29782A00795FC14A Method_2_5E596AACCE006EE1(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::RPG::MVector3 a4)
	{
		return ((::Struct_2_29782A00795FC14A(*)(::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + STRUCT_2_29782A00795FC14A_METHOD_2_5E596AACCE006EE1_OFFSET))(a1, a2, a3, a4);
	}

	static ::Struct_2_29782A00795FC14A Method_2_5E596AACCE006EE1_1(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::RPG::MVector3 a4)
	{
		return ((::Struct_2_29782A00795FC14A(*)(::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + STRUCT_2_29782A00795FC14A_METHOD_2_5E596AACCE006EE1_1_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_2_CE75DC0E1B275911(::RPG::MVector3& a1, ::RPG::MVector3& a2, ::RPG::MVector3& a3, ::RPG::MVector3& a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3&, ::RPG::MVector3&, ::RPG::MVector3&, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + STRUCT_2_29782A00795FC14A_METHOD_2_CE75DC0E1B275911_OFFSET))(this, a1, a2, a3, a4);
	}

	::Il2CppArray<::RPG::MVector3>* Method_2_7FC62A89472408B2()
	{
		return ((::Il2CppArray<::RPG::MVector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_29782A00795FC14A_METHOD_2_7FC62A89472408B2_OFFSET))(this);
	}

	::System::Void Method_2_3011C2ADD2E0B0F2(::Il2CppArray<::RPG::MVector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::MVector3>*))((::PBYTE)hIl2Cpp + STRUCT_2_29782A00795FC14A_METHOD_2_3011C2ADD2E0B0F2_OFFSET))(this, a1);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_29782A00795FC14A_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_2_C4F24C83C3503C58(::RPG::MVector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + STRUCT_2_29782A00795FC14A_METHOD_2_C4F24C83C3503C58_OFFSET))(this, a1);
	}

	::RPG::MVector3 Method_2_7D90263CF3A3B469(::RPG::MVector3 a1)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + STRUCT_2_29782A00795FC14A_METHOD_2_7D90263CF3A3B469_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_29782A00795FC14A_TOSTRING_OFFSET))(this);
	}
};
