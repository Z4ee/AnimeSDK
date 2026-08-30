#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_B63F7C0ABF5A1914.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/Struct_2_F31A7EC67A3AEEF7.h"

#define CLASS_4_75DFF94C54F0E143_METHOD_4_4327773764B6E011_OFFSET UNITYSDK_OFFSET(0x1A6CC650)
#define CLASS_4_75DFF94C54F0E143_METHOD_4_A08DEEEE1A01931E_OFFSET UNITYSDK_OFFSET(0x1A6CC820)
#define CLASS_4_75DFF94C54F0E143_METHOD_4_A522FA794243DEB8_OFFSET UNITYSDK_OFFSET(0x1A6CC950)
#define CLASS_4_75DFF94C54F0E143_METHOD_4_B535A010AD7F7AF7_OFFSET UNITYSDK_OFFSET(0x1A6CC5A0)
#define CLASS_4_75DFF94C54F0E143_METHOD_4_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A6CD380)
#define CLASS_4_75DFF94C54F0E143_METHOD_4_F3499A860E58DA23_OFFSET UNITYSDK_OFFSET(0x1A6CC790)
#define CLASS_4_75DFF94C54F0E143__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6CD390)

inline static constexpr unsigned int Class_4_75DFF94C54F0E143_TypeDefinitionIndex = 76507;

class Class_4_75DFF94C54F0E143 : public ::Class_3_B63F7C0ABF5A1914
{
public:
	::System::Single PKLFJFDBFIB; // 0x110
	::System::Single KLJCDDBJHNE; // 0x114
	::System::Single BBFGIMIIBGH; // 0x118
	::System::Single PPMKMCPDLMH; // 0x11C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_75DFF94C54F0E143__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_B535A010AD7F7AF7(::Struct_2_F31A7EC67A3AEEF7& a1, ::RPG::Client::LittleGame::Move::MoveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_4_75DFF94C54F0E143_METHOD_4_B535A010AD7F7AF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_4327773764B6E011(::Struct_2_F31A7EC67A3AEEF7& a1, ::RPG::Client::LittleGame::Move::MoveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_4_75DFF94C54F0E143_METHOD_4_4327773764B6E011_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_F3499A860E58DA23(::Struct_2_F31A7EC67A3AEEF7& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_75DFF94C54F0E143_METHOD_4_F3499A860E58DA23_OFFSET))(this, a1, a2);
	}

	::System::Single Method_4_A522FA794243DEB8(::Struct_2_F31A7EC67A3AEEF7& a1, ::System::Single& a2, ::System::Boolean a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::System::Single&, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_75DFF94C54F0E143_METHOD_4_A522FA794243DEB8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_A08DEEEE1A01931E(::Struct_2_F31A7EC67A3AEEF7& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&))((::PBYTE)hIl2Cpp + CLASS_4_75DFF94C54F0E143_METHOD_4_A08DEEEE1A01931E_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_75DFF94C54F0E143_METHOD_4_F0088C88851A7DFB_OFFSET))(this);
	}
};
