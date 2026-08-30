#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DE1F9F8297133D40.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::ParkourGame { class ParkourSkillConfig_Fire; }

#define CLASS_3_C569D2AC747B277C_METHOD_3_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0x16174160)
#define CLASS_3_C569D2AC747B277C_METHOD_3_97BE07E876064FAC_OFFSET UNITYSDK_OFFSET(0x16174770)
#define CLASS_3_C569D2AC747B277C_METHOD_3_B277B698D08E4824_OFFSET UNITYSDK_OFFSET(0x161742D0)
#define CLASS_3_C569D2AC747B277C_METHOD_3_EABB18034444947D_OFFSET UNITYSDK_OFFSET(0x16174350)
#define CLASS_3_C569D2AC747B277C__CTOR_OFFSET UNITYSDK_OFFSET(0x16174990)

inline static constexpr unsigned int Class_3_C569D2AC747B277C_TypeDefinitionIndex = 74082;

class Class_3_C569D2AC747B277C : public ::Class_2_DE1F9F8297133D40
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C569D2AC747B277C__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_07E567B3C6C3D7D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C569D2AC747B277C_METHOD_3_07E567B3C6C3D7D7_OFFSET))(this);
	}

	::RPG::Client::ParkourGame::ParkourSkillConfig_Fire* Method_3_B277B698D08E4824()
	{
		return ((::RPG::Client::ParkourGame::ParkourSkillConfig_Fire*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C569D2AC747B277C_METHOD_3_B277B698D08E4824_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Vector3> Method_3_EABB18034444947D()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C569D2AC747B277C_METHOD_3_EABB18034444947D_OFFSET))(this);
	}

	::System::Boolean Method_3_97BE07E876064FAC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C569D2AC747B277C_METHOD_3_97BE07E876064FAC_OFFSET))(this);
	}
};
