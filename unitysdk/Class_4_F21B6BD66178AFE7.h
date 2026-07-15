#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_B63F7C0ABF5A1914.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/Struct_2_F31A7EC67A3AEEF7.h"

namespace System { class String; }

#define CLASS_4_F21B6BD66178AFE7_CLEAR_OFFSET UNITYSDK_OFFSET(0x176EF6F0)
#define CLASS_4_F21B6BD66178AFE7_METHOD_4_4327773764B6E011_OFFSET UNITYSDK_OFFSET(0x176EF660)
#define CLASS_4_F21B6BD66178AFE7_METHOD_4_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x176EFAE0)
#define CLASS_4_F21B6BD66178AFE7_METHOD_4_A5BF0BCECFDB4501_OFFSET UNITYSDK_OFFSET(0x176EF380)
#define CLASS_4_F21B6BD66178AFE7_METHOD_4_CA093BB04F99D5BB_OFFSET UNITYSDK_OFFSET(0x176EFBD0)
#define CLASS_4_F21B6BD66178AFE7_METHOD_4_D8F2A0E744FD5E9C_OFFSET UNITYSDK_OFFSET(0x176EF760)
#define CLASS_4_F21B6BD66178AFE7_METHOD_4_E1520618896C3FD4_OFFSET UNITYSDK_OFFSET(0x176EFB60)
#define CLASS_4_F21B6BD66178AFE7_METHOD_4_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0x176F0310)
#define CLASS_4_F21B6BD66178AFE7__CTOR_OFFSET UNITYSDK_OFFSET(0x176F0320)

inline static constexpr unsigned int Class_4_F21B6BD66178AFE7_TypeDefinitionIndex = 73019;

class Class_4_F21B6BD66178AFE7 : public ::Class_3_B63F7C0ABF5A1914
{
public:
	// static const ::System::String* Field_4_0; // 0x0
	::System::Boolean Field_4_1; // 0x110

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F21B6BD66178AFE7__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_A5BF0BCECFDB4501(::Struct_2_F31A7EC67A3AEEF7& a1, ::RPG::Client::LittleGame::Move::MoveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_4_F21B6BD66178AFE7_METHOD_4_A5BF0BCECFDB4501_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_4327773764B6E011(::Struct_2_F31A7EC67A3AEEF7& a1, ::RPG::Client::LittleGame::Move::MoveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_4_F21B6BD66178AFE7_METHOD_4_4327773764B6E011_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F21B6BD66178AFE7_CLEAR_OFFSET))(this);
	}

	::System::Void Method_4_D8F2A0E744FD5E9C(::Struct_2_F31A7EC67A3AEEF7& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_F21B6BD66178AFE7_METHOD_4_D8F2A0E744FD5E9C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_E1520618896C3FD4(::Struct_2_F31A7EC67A3AEEF7& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_F21B6BD66178AFE7_METHOD_4_E1520618896C3FD4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_CA093BB04F99D5BB(::Struct_2_F31A7EC67A3AEEF7& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&))((::PBYTE)hIl2Cpp + CLASS_4_F21B6BD66178AFE7_METHOD_4_CA093BB04F99D5BB_OFFSET))(this, a1);
	}

	::System::Void Method_4_8CE0803574BB66D7(::Struct_2_F31A7EC67A3AEEF7& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&))((::PBYTE)hIl2Cpp + CLASS_4_F21B6BD66178AFE7_METHOD_4_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_4_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F21B6BD66178AFE7_METHOD_4_F48B6E9D83D3B226_OFFSET))(this);
	}
};
