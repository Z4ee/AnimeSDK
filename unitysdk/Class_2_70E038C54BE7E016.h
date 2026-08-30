#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D22BBD5AAECFE505.h"
#include "unitysdk/RPG/Client/LittleGame/TransformInterpolateMode.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_37;
namespace UnityEngine { class Transform; }

#define CLASS_2_70E038C54BE7E016_METHOD_2_3BCA2FBA8A14D9B5_OFFSET UNITYSDK_OFFSET(0x1D8BA270)
#define CLASS_2_70E038C54BE7E016_METHOD_2_A0374C870A27A45B_OFFSET UNITYSDK_OFFSET(0x1D8BA0A0)
#define CLASS_2_70E038C54BE7E016_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x1D8BA220)
#define CLASS_2_70E038C54BE7E016__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BA560)

inline static constexpr unsigned int Class_2_70E038C54BE7E016_TypeDefinitionIndex = 76067;

class Class_2_70E038C54BE7E016 : public ::Class_1_D22BBD5AAECFE505
{
public:
	::UnityEngine::Transform* PDJGEDNLBKJ; // 0x18
	::UnityEngine::Vector3 PIDMDPCMHKE; // 0x20
	::UnityEngine::Vector3 PGJJCGGBCKK; // 0x2C
	::RPG::Client::LittleGame::TransformInterpolateMode PHOKGMINOOB; // 0x38
	::UnityEngine::Quaternion NMBCMMJMIPA; // 0x3C
	::System::Single GGBKHGGBIBA; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70E038C54BE7E016__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A0374C870A27A45B(::Class_0_16E4307DCC419505_37* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_37*))((::PBYTE)hIl2Cpp + CLASS_2_70E038C54BE7E016_METHOD_2_A0374C870A27A45B_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_37* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_37*))((::PBYTE)hIl2Cpp + CLASS_2_70E038C54BE7E016_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_3BCA2FBA8A14D9B5(::Class_0_16E4307DCC419505_37* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_37*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_70E038C54BE7E016_METHOD_2_3BCA2FBA8A14D9B5_OFFSET))(this, a1, a2);
	}
};
