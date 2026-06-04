#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PackedConsistencyCheckData.h"
#include "unitysdk/System/Object.h"

class Class_1_333B902B2174BECA_5;
class Class_1_4BC858D7C27E10ED_25;
class Class_1_A16A135FC5A0DDB9_2;

#define CLASS_1_766364A11460DE78_1_METHOD_1_30D28DB045DA28F0_OFFSET UNITYSDK_OFFSET(0xA6A25B0)
#define CLASS_1_766364A11460DE78_1_METHOD_1_5061E76286BF4DBB_OFFSET UNITYSDK_OFFSET(0xA6A2810)
#define CLASS_1_766364A11460DE78_1_METHOD_1_E9A575D18A0748D9_1_OFFSET UNITYSDK_OFFSET(0xA6A2EF0)
#define CLASS_1_766364A11460DE78_1_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xA6A2EA0)
#define CLASS_1_766364A11460DE78_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA6A2590)
#define CLASS_1_766364A11460DE78_1__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA6A25A0)
#define CLASS_1_766364A11460DE78_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA6A2580)

inline static constexpr unsigned int Class_1_766364A11460DE78_1_TypeDefinitionIndex = 71136;

class Class_1_766364A11460DE78_1 : public ::System::Object
{
public:
	::Class_1_4BC858D7C27E10ED_25* Field_1_0; // 0x10
	::Class_1_4BC858D7C27E10ED_25* Field_1_1; // 0x18
	::Class_1_333B902B2174BECA_5* Field_1_2; // 0x20
	::Class_1_A16A135FC5A0DDB9_2* Field_1_3; // 0x28
	::Class_1_333B902B2174BECA_5* Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766364A11460DE78_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A16A135FC5A0DDB9_2* a1, ::Class_1_4BC858D7C27E10ED_25* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A16A135FC5A0DDB9_2*, ::Class_1_4BC858D7C27E10ED_25*))((::PBYTE)hIl2Cpp + CLASS_1_766364A11460DE78_1__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_2(::Class_1_A16A135FC5A0DDB9_2* a1, ::Class_1_333B902B2174BECA_5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A16A135FC5A0DDB9_2*, ::Class_1_333B902B2174BECA_5*))((::PBYTE)hIl2Cpp + CLASS_1_766364A11460DE78_1__CTOR_2_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::PackedConsistencyCheckData Method_1_30D28DB045DA28F0()
	{
		return ((::RPG::Client::LittleGame::PackedConsistencyCheckData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766364A11460DE78_1_METHOD_1_30D28DB045DA28F0_OFFSET))(this);
	}

	static ::Class_1_766364A11460DE78_1* Method_1_5061E76286BF4DBB(::RPG::Client::LittleGame::PackedConsistencyCheckData& a1)
	{
		return ((::Class_1_766364A11460DE78_1*(*)(::RPG::Client::LittleGame::PackedConsistencyCheckData&))((::PBYTE)hIl2Cpp + CLASS_1_766364A11460DE78_1_METHOD_1_5061E76286BF4DBB_OFFSET))(a1);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_333B902B2174BECA_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_333B902B2174BECA_5*))((::PBYTE)hIl2Cpp + CLASS_1_766364A11460DE78_1_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9_1(::Class_1_4BC858D7C27E10ED_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_25*))((::PBYTE)hIl2Cpp + CLASS_1_766364A11460DE78_1_METHOD_1_E9A575D18A0748D9_1_OFFSET))(this, a1);
	}
};
