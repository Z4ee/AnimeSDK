#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_17FF45354BFD2872_METHOD_2_20A4393B69FD7D94_OFFSET UNITYSDK_OFFSET(0x3C4D130)
#define STRUCT_2_17FF45354BFD2872_METHOD_2_382662E2F6AFAFB5_OFFSET UNITYSDK_OFFSET(0x3C4D190)
#define STRUCT_2_17FF45354BFD2872_METHOD_2_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x3C4CF50)
#define STRUCT_2_17FF45354BFD2872_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x3C4CF40)
#define STRUCT_2_17FF45354BFD2872_METHOD_2_550AA5BBA1EAF6CF_OFFSET UNITYSDK_OFFSET(0x3C4CF70)
#define STRUCT_2_17FF45354BFD2872_METHOD_2_79D0F112A4AC4733_OFFSET UNITYSDK_OFFSET(0x3C4D050)
#define STRUCT_2_17FF45354BFD2872_METHOD_2_869D4E9E8338E106_OFFSET UNITYSDK_OFFSET(0x1DD43B70)
#define STRUCT_2_17FF45354BFD2872_METHOD_2_ECCA756770148A2E_OFFSET UNITYSDK_OFFSET(0x1DD43740)
#define STRUCT_2_17FF45354BFD2872_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C4D1F0)
#define STRUCT_2_17FF45354BFD2872__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C4CD60)
#define STRUCT_2_17FF45354BFD2872__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3C4CE50)
#define STRUCT_2_17FF45354BFD2872__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3C4CEC0)
#define STRUCT_2_17FF45354BFD2872__CTOR_OFFSET UNITYSDK_OFFSET(0x3C4CC70)

inline static constexpr unsigned int Struct_2_17FF45354BFD2872_TypeDefinitionIndex = 6292;

struct alignas(4) Struct_2_17FF45354BFD2872
{
	::RPG::MVector3 BHCMCMADHBF; // 0x10
	::RPG::MVector3 IIGAMHGPKGE; // 0x1C
	::RPG::MVector3 KBBHCJKLPHH; // 0x28
	::RPG::MVector3 NKDECDGECFL; // 0x34
	::System::Single IDKONBFPBLH; // 0x40

	::System::Void _ctor(::RPG::MVector3& a1, ::RPG::MVector3& a2, ::RPG::MVector3& a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3&, ::RPG::MVector3&, ::RPG::MVector3&, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_17FF45354BFD2872__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_1(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_17FF45354BFD2872__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_2(::RPG::MVector3& a1, ::RPG::MVector3& a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3&, ::RPG::MVector3&, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_17FF45354BFD2872__CTOR_2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_3(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_17FF45354BFD2872__CTOR_3_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_2_ECCA756770148A2E(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::Struct_2_17FF45354BFD2872& a4)
	{
		return ((::System::Boolean(*)(::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::Struct_2_17FF45354BFD2872&))((::PBYTE)hIl2Cpp + STRUCT_2_17FF45354BFD2872_METHOD_2_ECCA756770148A2E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_2_869D4E9E8338E106(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::Struct_2_17FF45354BFD2872& a4)
	{
		return ((::System::Boolean(*)(::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::Struct_2_17FF45354BFD2872&))((::PBYTE)hIl2Cpp + STRUCT_2_17FF45354BFD2872_METHOD_2_869D4E9E8338E106_OFFSET))(a1, a2, a3, a4);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_17FF45354BFD2872_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_17FF45354BFD2872_METHOD_2_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::RPG::MVector3 Method_2_550AA5BBA1EAF6CF(::System::Single a1)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_17FF45354BFD2872_METHOD_2_550AA5BBA1EAF6CF_OFFSET))(this, a1);
	}

	::RPG::MVector3 Method_2_79D0F112A4AC4733(::System::Single a1, ::System::Single a2)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_17FF45354BFD2872_METHOD_2_79D0F112A4AC4733_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_20A4393B69FD7D94(::RPG::MVector3 a1, ::System::Boolean a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::MVector3, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_17FF45354BFD2872_METHOD_2_20A4393B69FD7D94_OFFSET))(this, a1, a2);
	}

	::RPG::MVector3 Method_2_382662E2F6AFAFB5(::RPG::MVector3 a1, ::System::Boolean a2)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_17FF45354BFD2872_METHOD_2_382662E2F6AFAFB5_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_17FF45354BFD2872_TOSTRING_OFFSET))(this);
	}
};
