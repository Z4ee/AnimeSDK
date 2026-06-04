#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D22BBD5AAECFE505.h"
#include "unitysdk/RPG/Client/LittleGame/TransformInterpolateMode.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_28;
namespace UnityEngine { class Transform; }

#define CLASS_2_70E038C54BE7E016_METHOD_2_3BCA2FBA8A14D9B5_OFFSET UNITYSDK_OFFSET(0xFF3C250)
#define CLASS_2_70E038C54BE7E016_METHOD_2_870C64E80B61FF79_OFFSET UNITYSDK_OFFSET(0xFF3C610)
#define CLASS_2_70E038C54BE7E016_METHOD_2_A0374C870A27A45B_OFFSET UNITYSDK_OFFSET(0xFF3C080)
#define CLASS_2_70E038C54BE7E016_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xFF3C200)
#define CLASS_2_70E038C54BE7E016_METHOD_2_D2DD6AE28AAF69CC_1_OFFSET UNITYSDK_OFFSET(0xFF3C5B0)
#define CLASS_2_70E038C54BE7E016_METHOD_2_D2DD6AE28AAF69CC_OFFSET UNITYSDK_OFFSET(0xFF3C550)
#define CLASS_2_70E038C54BE7E016__CTOR_OFFSET UNITYSDK_OFFSET(0xFF3C540)

inline static constexpr unsigned int Class_2_70E038C54BE7E016_TypeDefinitionIndex = 71118;

class Class_2_70E038C54BE7E016 : public ::Class_1_D22BBD5AAECFE505
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x18
	::UnityEngine::Vector3 Field_2_1; // 0x20
	::UnityEngine::Quaternion Field_2_2; // 0x2C
	::System::Single Field_2_3; // 0x3C
	::UnityEngine::Vector3 Field_2_4; // 0x40
	::RPG::Client::LittleGame::TransformInterpolateMode Field_2_5; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70E038C54BE7E016__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A0374C870A27A45B(::Class_0_16E4307DCC419505_28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_28*))((::PBYTE)hIl2Cpp + CLASS_2_70E038C54BE7E016_METHOD_2_A0374C870A27A45B_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_28*))((::PBYTE)hIl2Cpp + CLASS_2_70E038C54BE7E016_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_3BCA2FBA8A14D9B5(::Class_0_16E4307DCC419505_28* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_28*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_70E038C54BE7E016_METHOD_2_3BCA2FBA8A14D9B5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D2DD6AE28AAF69CC(::Class_0_16E4307DCC419505_28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_28*))((::PBYTE)hIl2Cpp + CLASS_2_70E038C54BE7E016_METHOD_2_D2DD6AE28AAF69CC_OFFSET))(this, a1);
	}

	::System::Void Method_2_D2DD6AE28AAF69CC_1(::Class_0_16E4307DCC419505_28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_28*))((::PBYTE)hIl2Cpp + CLASS_2_70E038C54BE7E016_METHOD_2_D2DD6AE28AAF69CC_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_870C64E80B61FF79(::Class_0_16E4307DCC419505_28* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_28*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_70E038C54BE7E016_METHOD_2_870C64E80B61FF79_OFFSET))(this, a1, a2);
	}
};
