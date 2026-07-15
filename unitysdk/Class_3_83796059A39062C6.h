#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DE1F9F8297133D40.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::ParkourGame { class ParkourSkillConfig; }
namespace RPG::Client::ParkourGame { class ParkourSkillConfig_Random; }

#define CLASS_3_83796059A39062C6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B163A0)
#define CLASS_3_83796059A39062C6_METHOD_3_57D5ED2C4C06D908_OFFSET UNITYSDK_OFFSET(0x15B164E0)
#define CLASS_3_83796059A39062C6_METHOD_3_5D98BFFD90819CDA_OFFSET UNITYSDK_OFFSET(0x15B16070)
#define CLASS_3_83796059A39062C6_METHOD_3_5E72916301E347E2_1_OFFSET UNITYSDK_OFFSET(0x15B16E40)
#define CLASS_3_83796059A39062C6_METHOD_3_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0x15B16D70)
#define CLASS_3_83796059A39062C6_METHOD_3_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x15B16540)
#define CLASS_3_83796059A39062C6_METHOD_3_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x15B16C20)
#define CLASS_3_83796059A39062C6_METHOD_3_D6B4D20061FB5D24_OFFSET UNITYSDK_OFFSET(0x15B16C90)
#define CLASS_3_83796059A39062C6_METHOD_3_E1D855A35819E641_OFFSET UNITYSDK_OFFSET(0x15B16320)
#define CLASS_3_83796059A39062C6_METHOD_3_E2ACF3FF064F9810_OFFSET UNITYSDK_OFFSET(0x15B16B50)
#define CLASS_3_83796059A39062C6__CTOR_OFFSET UNITYSDK_OFFSET(0x15B16F10)

inline static constexpr unsigned int Class_3_83796059A39062C6_TypeDefinitionIndex = 70785;

class Class_3_83796059A39062C6 : public ::Class_2_DE1F9F8297133D40
{
public:
	::Class_2_DE1F9F8297133D40* Field_3_0; // 0x70
	::System::Single Field_3_1; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83796059A39062C6__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_5D98BFFD90819CDA(::RPG::Client::ParkourGame::ParkourSkillConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::ParkourSkillConfig*))((::PBYTE)hIl2Cpp + CLASS_3_83796059A39062C6_METHOD_3_5D98BFFD90819CDA_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83796059A39062C6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_57D5ED2C4C06D908()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83796059A39062C6_METHOD_3_57D5ED2C4C06D908_OFFSET))(this);
	}

	::System::Void Method_3_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83796059A39062C6_METHOD_3_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_3_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_83796059A39062C6_METHOD_3_D09831639F615812_OFFSET))(this, a1);
	}

	::System::UInt32 Method_3_E2ACF3FF064F9810()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83796059A39062C6_METHOD_3_E2ACF3FF064F9810_OFFSET))(this);
	}

	::RPG::Client::ParkourGame::ParkourSkillConfig_Random* Method_3_E1D855A35819E641()
	{
		return ((::RPG::Client::ParkourGame::ParkourSkillConfig_Random*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83796059A39062C6_METHOD_3_E1D855A35819E641_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Vector3> Method_3_D6B4D20061FB5D24()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83796059A39062C6_METHOD_3_D6B4D20061FB5D24_OFFSET))(this);
	}

	::System::Boolean Method_3_5E72916301E347E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83796059A39062C6_METHOD_3_5E72916301E347E2_OFFSET))(this);
	}

	::System::Boolean Method_3_5E72916301E347E2_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83796059A39062C6_METHOD_3_5E72916301E347E2_1_OFFSET))(this);
	}
};
