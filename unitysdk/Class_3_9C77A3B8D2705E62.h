#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3.h"
#include "unitysdk/Class_2_55373297DA27393D.h"
#include "unitysdk/Class_3_9C77A3B8D2705E62_EMoveState.h"

class Class_1_C47576BEFCFAD595;
namespace RPG::Client::ParkourGame { class MonoParkourItem; }
namespace RPG::Client::ParkourGame { class MonoParkourItemObstacleMovable; }

#define CLASS_3_9C77A3B8D2705E62_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17E87F30)
#define CLASS_3_9C77A3B8D2705E62_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x17E88380)
#define CLASS_3_9C77A3B8D2705E62_METHOD_3_479759059E440327_OFFSET UNITYSDK_OFFSET(0x17E87FA0)
#define CLASS_3_9C77A3B8D2705E62_METHOD_3_638979F923BB7B47_OFFSET UNITYSDK_OFFSET(0x17E88430)
#define CLASS_3_9C77A3B8D2705E62_METHOD_3_775CEAE18042A6CC_OFFSET UNITYSDK_OFFSET(0x17E87E80)
#define CLASS_3_9C77A3B8D2705E62_METHOD_3_C4E811BDCD70DCD6_OFFSET UNITYSDK_OFFSET(0x17E87DE0)
#define CLASS_3_9C77A3B8D2705E62_METHOD_3_D3D47EEF8815289B_OFFSET UNITYSDK_OFFSET(0x17E88310)
#define CLASS_3_9C77A3B8D2705E62_METHOD_3_E34BA9A8492F38D2_OFFSET UNITYSDK_OFFSET(0x17E88290)
#define CLASS_3_9C77A3B8D2705E62__CTOR_OFFSET UNITYSDK_OFFSET(0x17E87D20)

inline static constexpr unsigned int Class_3_9C77A3B8D2705E62_TypeDefinitionIndex = 74113;

class Class_3_9C77A3B8D2705E62 : public ::Class_2_55373297DA27393D
{
public:
	::System::Single GCEKLOFGBFO; // 0x58
	::System::Single MGMKFOEKAEF; // 0x5C
	::Class_3_9C77A3B8D2705E62_EMoveState CKMDHLPCLFH; // 0x60
	::System::Single NEHCJJMOPJF; // 0x64
	::System::Single HMMDNJIEDEK; // 0x68

	::System::Void _ctor(::Class_1_C47576BEFCFAD595* a1, ::RPG::Client::ParkourGame::MonoParkourItem* a2, ::Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3 a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C47576BEFCFAD595*, ::RPG::Client::ParkourGame::MonoParkourItem*, ::Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_9C77A3B8D2705E62__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_C4E811BDCD70DCD6(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9C77A3B8D2705E62_METHOD_3_C4E811BDCD70DCD6_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9C77A3B8D2705E62_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9C77A3B8D2705E62_METHOD_3_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_3_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9C77A3B8D2705E62_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
	}

	::Class_3_9C77A3B8D2705E62_EMoveState Method_3_D3D47EEF8815289B()
	{
		return ((::Class_3_9C77A3B8D2705E62_EMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9C77A3B8D2705E62_METHOD_3_D3D47EEF8815289B_OFFSET))(this);
	}

	::System::Void Method_3_775CEAE18042A6CC(::Class_3_9C77A3B8D2705E62_EMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_9C77A3B8D2705E62_EMoveState))((::PBYTE)hIl2Cpp + CLASS_3_9C77A3B8D2705E62_METHOD_3_775CEAE18042A6CC_OFFSET))(this, a1);
	}

	::Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3 Method_3_638979F923BB7B47()
	{
		return ((::Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9C77A3B8D2705E62_METHOD_3_638979F923BB7B47_OFFSET))(this);
	}

	::RPG::Client::ParkourGame::MonoParkourItemObstacleMovable* Method_3_E34BA9A8492F38D2()
	{
		return ((::RPG::Client::ParkourGame::MonoParkourItemObstacleMovable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9C77A3B8D2705E62_METHOD_3_E34BA9A8492F38D2_OFFSET))(this);
	}
};
