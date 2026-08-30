#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_218.h"
#include "unitysdk/RPG/Client/Prop/LogisticsRobotState.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_4371E687C098A41A__CTOR_OFFSET UNITYSDK_OFFSET(0x160FCBF0)

inline static constexpr unsigned int Class_2_4371E687C098A41A_TypeDefinitionIndex = 78471;

class Class_2_4371E687C098A41A : public ::Class_1_43BD383C98B4C0C5_218
{
public:
	::UnityEngine::Quaternion CCAHBOJLPAC; // 0x10
	::UnityEngine::Vector3 LCGNINJHEMI; // 0x20
	::System::Int32 KCKMILLHIIA; // 0x2C
	::System::Boolean HDFBNKLCAMN; // 0x30
	::RPG::Client::Prop::LogisticsRobotState MEPFOEEGBEA; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4371E687C098A41A__CTOR_OFFSET))(this);
	}
};
