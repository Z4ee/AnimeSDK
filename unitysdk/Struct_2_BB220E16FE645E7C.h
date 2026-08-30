#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_BB220E16FE645E7C_METHOD_2_A0AE59FC10A5CD5C_OFFSET UNITYSDK_OFFSET(0x3A53810)
#define STRUCT_2_BB220E16FE645E7C_METHOD_2_C4F24C83C3503C58_OFFSET UNITYSDK_OFFSET(0x3A537D0)
#define STRUCT_2_BB220E16FE645E7C_METHOD_2_EEB95CFE1E27DD81_OFFSET UNITYSDK_OFFSET(0x3A4FB30)
#define STRUCT_2_BB220E16FE645E7C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3A538E0)
#define STRUCT_2_BB220E16FE645E7C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x6BC260)
#define STRUCT_2_BB220E16FE645E7C__CTOR_OFFSET UNITYSDK_OFFSET(0x3A4FB10)

inline static constexpr unsigned int Struct_2_BB220E16FE645E7C_TypeDefinitionIndex = 6288;

struct alignas(4) Struct_2_BB220E16FE645E7C
{
	::RPG::MVector3 BHCMCMADHBF; // 0x10
	::RPG::MVector3 LJDHGFECMHJ; // 0x1C

	::System::Void _ctor(::RPG::MVector3& a1, ::RPG::MVector3& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3&, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + STRUCT_2_BB220E16FE645E7C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::RPG::MVector3 a1, ::RPG::MVector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + STRUCT_2_BB220E16FE645E7C__CTOR_1_OFFSET))(this, a1, a2);
	}

	::RPG::MVector3 Method_2_EEB95CFE1E27DD81(::System::Single a1)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_BB220E16FE645E7C_METHOD_2_EEB95CFE1E27DD81_OFFSET))(this, a1);
	}

	::System::Single Method_2_C4F24C83C3503C58(::RPG::MVector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + STRUCT_2_BB220E16FE645E7C_METHOD_2_C4F24C83C3503C58_OFFSET))(this, a1);
	}

	::RPG::MVector3 Method_2_A0AE59FC10A5CD5C(::RPG::MVector3 a1)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + STRUCT_2_BB220E16FE645E7C_METHOD_2_A0AE59FC10A5CD5C_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BB220E16FE645E7C_TOSTRING_OFFSET))(this);
	}
};
