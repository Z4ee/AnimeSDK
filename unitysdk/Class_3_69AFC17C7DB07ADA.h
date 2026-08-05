#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_3.h"

class Class_1_43BD383C98B4C0C5_25;
class Class_1_D3581D8A71834B25;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole::Config { class ConfigLoginCameraMoveToPlayerNode; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_3_69AFC17C7DB07ADA_METHOD_3_14AFBA2E8A242644_OFFSET UNITYSDK_OFFSET(0x11166D80)
#define CLASS_3_69AFC17C7DB07ADA_METHOD_3_1C1D8F032CA6010E_OFFSET UNITYSDK_OFFSET(0x11167870)
#define CLASS_3_69AFC17C7DB07ADA_METHOD_3_2FE2714C60BDE2E2_OFFSET UNITYSDK_OFFSET(0x11166C00)
#define CLASS_3_69AFC17C7DB07ADA_METHOD_3_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x11167950)
#define CLASS_3_69AFC17C7DB07ADA_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11167970)
#define CLASS_3_69AFC17C7DB07ADA_METHOD_3_CB8CF89038C44C8A_OFFSET UNITYSDK_OFFSET(0x11167A20)
#define CLASS_3_69AFC17C7DB07ADA_METHOD_3_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x11167A00)
#define CLASS_3_69AFC17C7DB07ADA__CTOR_OFFSET UNITYSDK_OFFSET(0x11167860)

inline static constexpr unsigned int Class_3_69AFC17C7DB07ADA_TypeDefinitionIndex = 50911;

class Class_3_69AFC17C7DB07ADA : public ::Class_2_A48F3719AA1CF200_3
{
public:
	::Cinemachine::CinemachineVirtualCamera* Field_3_0; // 0x28
	::MoleMole::Config::ConfigLoginCameraMoveToPlayerNode* Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69AFC17C7DB07ADA__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_2FE2714C60BDE2E2(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_3_69AFC17C7DB07ADA_METHOD_3_2FE2714C60BDE2E2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_14AFBA2E8A242644()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69AFC17C7DB07ADA_METHOD_3_14AFBA2E8A242644_OFFSET))(this);
	}

	::System::Void Method_3_1C1D8F032CA6010E(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_3_69AFC17C7DB07ADA_METHOD_3_1C1D8F032CA6010E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_69AFC17C7DB07ADA_METHOD_3_3C927B51D2142A24_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69AFC17C7DB07ADA_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Single Method_3_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69AFC17C7DB07ADA_METHOD_3_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Void Method_3_CB8CF89038C44C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69AFC17C7DB07ADA_METHOD_3_CB8CF89038C44C8A_OFFSET))(this);
	}
};
