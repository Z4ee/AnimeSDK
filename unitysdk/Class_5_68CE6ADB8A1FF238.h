#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_C8A4CA21E9D7DEAD.h"
#include "unitysdk/MoleMole/Config/ConfigChessboardCalStartIndexNode_CalStartIndexType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_1_43BD383C98B4C0C5_25;
class Class_1_C376DB68B1C74261;
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_5_68CE6ADB8A1FF238_METHOD_5_0A99B4412D79936D_OFFSET UNITYSDK_OFFSET(0x123F87E0)
#define CLASS_5_68CE6ADB8A1FF238_METHOD_5_151350DB6BD4CAA1_OFFSET UNITYSDK_OFFSET(0x123F8BC0)
#define CLASS_5_68CE6ADB8A1FF238_METHOD_5_2FE2714C60BDE2E2_OFFSET UNITYSDK_OFFSET(0x123F86D0)
#define CLASS_5_68CE6ADB8A1FF238_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x123F8BD0)
#define CLASS_5_68CE6ADB8A1FF238_METHOD_5_E32E42AB3B714AB7_OFFSET UNITYSDK_OFFSET(0x123F8910)
#define CLASS_5_68CE6ADB8A1FF238__CTOR_OFFSET UNITYSDK_OFFSET(0x123F8B70)

inline static constexpr unsigned int Class_5_68CE6ADB8A1FF238_TypeDefinitionIndex = 44501;

class Class_5_68CE6ADB8A1FF238 : public ::Class_4_C8A4CA21E9D7DEAD
{
public:
	::MoleMole::Config::ConfigChessboardCalStartIndexNode_CalStartIndexType Field_5_0; // 0x40
	::System::Int32 Field_5_1; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_68CE6ADB8A1FF238__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_2FE2714C60BDE2E2(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_5_68CE6ADB8A1FF238_METHOD_5_2FE2714C60BDE2E2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_0A99B4412D79936D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_68CE6ADB8A1FF238_METHOD_5_0A99B4412D79936D_OFFSET))(this);
	}

	::System::Void Method_5_151350DB6BD4CAA1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_5_68CE6ADB8A1FF238_METHOD_5_151350DB6BD4CAA1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_68CE6ADB8A1FF238_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell Method_5_E32E42AB3B714AB7()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_68CE6ADB8A1FF238_METHOD_5_E32E42AB3B714AB7_OFFSET))(this);
	}
};
