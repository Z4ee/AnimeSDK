#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D22BBD5AAECFE505.h"
#include "unitysdk/RPG/Client/LittleGame/TransformInterpolateMode.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_29;
namespace UnityEngine { class Transform; }

#define CLASS_2_70E038C54BE7E016_METHOD_2_3BCA2FBA8A14D9B5_OFFSET UNITYSDK_OFFSET(0xA5457D0)
#define CLASS_2_70E038C54BE7E016_METHOD_2_852D605DD5017E2C_1_OFFSET UNITYSDK_OFFSET(0xA545B40)
#define CLASS_2_70E038C54BE7E016_METHOD_2_852D605DD5017E2C_OFFSET UNITYSDK_OFFSET(0xA545AD0)
#define CLASS_2_70E038C54BE7E016_METHOD_2_A0374C870A27A45B_OFFSET UNITYSDK_OFFSET(0xA545600)
#define CLASS_2_70E038C54BE7E016_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xA545780)
#define CLASS_2_70E038C54BE7E016_METHOD_2_EF234F15056D86E0_OFFSET UNITYSDK_OFFSET(0xA545BB0)
#define CLASS_2_70E038C54BE7E016__CTOR_OFFSET UNITYSDK_OFFSET(0xA545AC0)

inline static constexpr unsigned int Class_2_70E038C54BE7E016_TypeDefinitionIndex = 70302;

class Class_2_70E038C54BE7E016 : public ::Class_1_D22BBD5AAECFE505
{
public:
	::UnityEngine::Transform* Field_2_5; // 0x18
	::UnityEngine::Vector3 Field_2_3; // 0x20
	::UnityEngine::Vector3 Field_2_1; // 0x2C
	::RPG::Client::LittleGame::TransformInterpolateMode Field_2_0; // 0x38
	::UnityEngine::Quaternion Field_2_2; // 0x3C
	::System::Single Field_2_4; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70E038C54BE7E016__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A0374C870A27A45B(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_70E038C54BE7E016_METHOD_2_A0374C870A27A45B_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_70E038C54BE7E016_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_3BCA2FBA8A14D9B5(::Class_0_16E4307DCC419505_29* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_70E038C54BE7E016_METHOD_2_3BCA2FBA8A14D9B5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_852D605DD5017E2C(::Class_0_16E4307DCC419505_29* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_70E038C54BE7E016_METHOD_2_852D605DD5017E2C_OFFSET))(this, P0);
	}

	::System::Void Method_2_852D605DD5017E2C_1(::Class_0_16E4307DCC419505_29* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_70E038C54BE7E016_METHOD_2_852D605DD5017E2C_1_OFFSET))(this, P0);
	}

	::System::Void Method_2_EF234F15056D86E0(::Class_0_16E4307DCC419505_29* P0, ::System::Single P1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_70E038C54BE7E016_METHOD_2_EF234F15056D86E0_OFFSET))(this, P0, P1);
	}
};
