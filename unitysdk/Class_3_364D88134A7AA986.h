#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_3.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_C376DB68B1C74261;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole::Config { class ConfigLoginCameraFovNode; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_3_364D88134A7AA986_METHOD_3_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x16253E90)
#define CLASS_3_364D88134A7AA986_METHOD_3_1C1D8F032CA6010E_OFFSET UNITYSDK_OFFSET(0x16254320)
#define CLASS_3_364D88134A7AA986_METHOD_3_2FE2714C60BDE2E2_OFFSET UNITYSDK_OFFSET(0x16253D10)
#define CLASS_3_364D88134A7AA986_METHOD_3_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x16254250)
#define CLASS_3_364D88134A7AA986_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16254400)
#define CLASS_3_364D88134A7AA986_METHOD_3_F2A1D3C2AD5054B1_OFFSET UNITYSDK_OFFSET(0x16254270)
#define CLASS_3_364D88134A7AA986_METHOD_3_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x16254490)
#define CLASS_3_364D88134A7AA986__CTOR_OFFSET UNITYSDK_OFFSET(0x16254240)

inline static constexpr unsigned int Class_3_364D88134A7AA986_TypeDefinitionIndex = 75079;

class Class_3_364D88134A7AA986 : public ::Class_2_A48F3719AA1CF200_3
{
public:
	::MoleMole::Config::ConfigLoginCameraFovNode* Field_3_1; // 0x28
	::Cinemachine::CinemachineVirtualCamera* Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_364D88134A7AA986__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_2FE2714C60BDE2E2(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_3_364D88134A7AA986_METHOD_3_2FE2714C60BDE2E2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_19844080C13BA28F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_364D88134A7AA986_METHOD_3_19844080C13BA28F_OFFSET))(this);
	}

	::System::Void Method_3_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_364D88134A7AA986_METHOD_3_3C927B51D2142A24_OFFSET))(this, a1);
	}

	::System::Void Method_3_F2A1D3C2AD5054B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_364D88134A7AA986_METHOD_3_F2A1D3C2AD5054B1_OFFSET))(this);
	}

	::System::Void Method_3_1C1D8F032CA6010E(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_3_364D88134A7AA986_METHOD_3_1C1D8F032CA6010E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_364D88134A7AA986_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Single Method_3_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_364D88134A7AA986_METHOD_3_FB4BE762B6186C23_OFFSET))(this);
	}
};
