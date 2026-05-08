#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_321489CFFF7B18E7.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/EBrSpeedLevel.h"
#include "unitysdk/Struct_2_4930D2C214CA4F0A.h"
#include "unitysdk/Struct_2_642E45C6B0A5D00A.h"

class Class_2_785FDC7D0DA58280;
class Class_4_6B5E197F92845903;
class Class_4_D02C44FA813EDE0B;
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineTrackedDolly; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole::Arcade::BallsRace::Client { class BrCinemachinePath; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CLASS_2_B0DD2738962C64AF_METHOD_2_125AC30F7B145735_OFFSET UNITYSDK_OFFSET(0x1C35F820)
#define CLASS_2_B0DD2738962C64AF_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1C35E2C0)
#define CLASS_2_B0DD2738962C64AF_METHOD_2_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x1C35F960)
#define CLASS_2_B0DD2738962C64AF_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1C35F810)
#define CLASS_2_B0DD2738962C64AF_METHOD_2_7FF36CBC118F3968_OFFSET UNITYSDK_OFFSET(0x1C35E4F0)
#define CLASS_2_B0DD2738962C64AF_METHOD_2_9313ED03DFEB0BE0_OFFSET UNITYSDK_OFFSET(0x1C35DE40)
#define CLASS_2_B0DD2738962C64AF_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x1C35E490)
#define CLASS_2_B0DD2738962C64AF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C35F4F0)
#define CLASS_2_B0DD2738962C64AF_METHOD_2_E46509D2BC81F8FB_OFFSET UNITYSDK_OFFSET(0x1C35F530)
#define CLASS_2_B0DD2738962C64AF_METHOD_2_ECF912AE8CD24448_OFFSET UNITYSDK_OFFSET(0x1C35E250)
#define CLASS_2_B0DD2738962C64AF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C35E470)

inline static constexpr unsigned int Class_2_B0DD2738962C64AF_TypeDefinitionIndex = 83930;

class Class_2_B0DD2738962C64AF : public ::Class_1_321489CFFF7B18E7
{
public:
	::UnityEngine::Transform* Field_2_21; // 0x18
	::Cinemachine::CinemachineVirtualCamera* Field_2_13; // 0x20
	::UnityEngine::Transform* Field_2_22; // 0x28
	::Cinemachine::CinemachineVirtualCamera* Field_2_12; // 0x30
	::UnityEngine::Camera* Field_2_23; // 0x38
	::Cinemachine::CinemachineBrain* Field_2_1; // 0x40
	::MoleMole::Arcade::BallsRace::Client::BrCinemachinePath* Field_2_14; // 0x48
	::Cinemachine::CinemachineTrackedDolly* Field_2_15; // 0x50
	::Class_4_D02C44FA813EDE0B* Field_2_0; // 0x58
	::System::UInt64 Field_2_10; // 0x60
	::System::Single Field_2_19; // 0x68
	::System::Single Field_2_18; // 0x6C
	::System::Single Field_2_6; // 0x70
	::System::Single Field_2_2; // 0x74
	::System::UInt64 Field_2_9; // 0x78
	::System::Single Field_2_5; // 0x80
	::System::Single Field_2_11; // 0x84
	::System::Single Field_2_20; // 0x88
	::System::Single Field_2_17; // 0x8C
	::System::Single Field_2_4; // 0x90
	::System::Single Field_2_3; // 0x94
	::System::Boolean Field_2_8; // 0x98
	::System::Boolean Field_2_7; // 0x99
	::System::Single Field_2_16; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0DD2738962C64AF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9313ED03DFEB0BE0(::Class_2_785FDC7D0DA58280* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_785FDC7D0DA58280*))((::PBYTE)hIl2Cpp + CLASS_2_B0DD2738962C64AF_METHOD_2_9313ED03DFEB0BE0_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0DD2738962C64AF_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_4930D2C214CA4F0A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_4930D2C214CA4F0A))((::PBYTE)hIl2Cpp + CLASS_2_B0DD2738962C64AF_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_7FF36CBC118F3968(::MoleMole::Arcade::BallsRace::EBrSpeedLevel a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Arcade::BallsRace::EBrSpeedLevel, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B0DD2738962C64AF_METHOD_2_7FF36CBC118F3968_OFFSET))(this, a1, a2);
	}

	::Class_4_6B5E197F92845903* Method_2_ECF912AE8CD24448()
	{
		return ((::Class_4_6B5E197F92845903*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0DD2738962C64AF_METHOD_2_ECF912AE8CD24448_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0DD2738962C64AF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_E46509D2BC81F8FB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B0DD2738962C64AF_METHOD_2_E46509D2BC81F8FB_OFFSET))(this, a1);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0DD2738962C64AF_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_2_125AC30F7B145735(::Struct_2_642E45C6B0A5D00A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_642E45C6B0A5D00A))((::PBYTE)hIl2Cpp + CLASS_2_B0DD2738962C64AF_METHOD_2_125AC30F7B145735_OFFSET))(this, a1);
	}

	::System::Single Method_2_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0DD2738962C64AF_METHOD_2_5323F2DF46A044DA_1_OFFSET))(this);
	}
};
