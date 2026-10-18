#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_220.h"
#include "unitysdk/RPG/Client/Prop/LogisticsRobotState.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_4371E687C098A41A__CTOR_OFFSET UNITYSDK_OFFSET(0x164A23A0)

inline static constexpr unsigned int Class_2_4371E687C098A41A_TypeDefinitionIndex = 78941;

class Class_2_4371E687C098A41A : public ::Class_1_43BD383C98B4C0C5_220
{
public:
	::UnityEngine::Vector3 LCGNINJHEMI; // 0x10
	::System::Int32 KCKMILLHIIA; // 0x1C
	::UnityEngine::Quaternion CCAHBOJLPAC; // 0x20
	::System::Boolean HDFBNKLCAMN; // 0x30
	::RPG::Client::Prop::LogisticsRobotState MEPFOEEGBEA; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4371E687C098A41A__CTOR_OFFSET))(this);
	}
};
