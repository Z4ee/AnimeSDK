#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_25;
class Class_1_C376DB68B1C74261;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole::Config { class ConfigLoginCameraRotateNode; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_3_DB25A80BE89E21A4_METHOD_3_1C1D8F032CA6010E_OFFSET UNITYSDK_OFFSET(0x114F71E0)
#define CLASS_3_DB25A80BE89E21A4_METHOD_3_2FE2714C60BDE2E2_OFFSET UNITYSDK_OFFSET(0x114F6D70)
#define CLASS_3_DB25A80BE89E21A4_METHOD_3_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0x114F6F00)
#define CLASS_3_DB25A80BE89E21A4_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x114F7370)
#define CLASS_3_DB25A80BE89E21A4_METHOD_3_F2A1D3C2AD5054B1_OFFSET UNITYSDK_OFFSET(0x114F72C0)
#define CLASS_3_DB25A80BE89E21A4__CTOR_OFFSET UNITYSDK_OFFSET(0x114F71D0)

inline static constexpr unsigned int Class_3_DB25A80BE89E21A4_TypeDefinitionIndex = 45760;

class Class_3_DB25A80BE89E21A4 : public ::Class_2_A48F3719AA1CF200_3
{
public:
	::Cinemachine::CinemachineVirtualCamera* Field_3_0; // 0x28
	::MoleMole::Config::ConfigLoginCameraRotateNode* Field_3_1; // 0x30
	::UnityEngine::Vector3 Field_3_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB25A80BE89E21A4__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_2FE2714C60BDE2E2(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_3_DB25A80BE89E21A4_METHOD_3_2FE2714C60BDE2E2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_B235E757922104A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB25A80BE89E21A4_METHOD_3_B235E757922104A8_OFFSET))(this);
	}

	::System::Void Method_3_1C1D8F032CA6010E(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_3_DB25A80BE89E21A4_METHOD_3_1C1D8F032CA6010E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_F2A1D3C2AD5054B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB25A80BE89E21A4_METHOD_3_F2A1D3C2AD5054B1_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB25A80BE89E21A4_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
