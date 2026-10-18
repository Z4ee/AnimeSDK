#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_220.h"
#include "unitysdk/RPG/Client/Prop/LogisticsRobotState.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_4371E687C098A41A__CTOR_OFFSET UNITYSDK_OFFSET(0x164B02C0)

inline static constexpr unsigned int Class_2_4371E687C098A41A_TypeDefinitionIndex = 78942;

class Class_2_4371E687C098A41A : public ::Class_1_43BD383C98B4C0C5_220
{
public:
	::RPG::Client::Prop::LogisticsRobotState MEPFOEEGBEA; // 0x10
	::System::Boolean HDFBNKLCAMN; // 0x14
	::UnityEngine::Quaternion CCAHBOJLPAC; // 0x18
	::System::Int32 KCKMILLHIIA; // 0x28
	::UnityEngine::Vector3 LCGNINJHEMI; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4371E687C098A41A__CTOR_OFFSET))(this);
	}
};
