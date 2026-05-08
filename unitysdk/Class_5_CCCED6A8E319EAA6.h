#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_1_C376DB68B1C74261;
class Class_2_9DCE2FC33F67E8A2;
class Class_3_6FA4D205CC40A95D;
namespace MoleMole::Config { class ConfigPlayInnerWorldDiffusionAnimation; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_5_CCCED6A8E319EAA6_METHOD_5_0BDCE45D5AFF4247_OFFSET UNITYSDK_OFFSET(0x10929830)
#define CLASS_5_CCCED6A8E319EAA6_METHOD_5_1C82B0464A6F73F2_OFFSET UNITYSDK_OFFSET(0x10929D50)
#define CLASS_5_CCCED6A8E319EAA6_METHOD_5_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x109298A0)
#define CLASS_5_CCCED6A8E319EAA6_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10929F60)
#define CLASS_5_CCCED6A8E319EAA6__CTOR_OFFSET UNITYSDK_OFFSET(0x10929F00)

inline static constexpr unsigned int Class_5_CCCED6A8E319EAA6_TypeDefinitionIndex = 59004;

class Class_5_CCCED6A8E319EAA6 : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigPlayInnerWorldDiffusionAnimation*>
{
public:
	::MoleMole::Config::ConfigPlayInnerWorldDiffusionAnimation* Field_5_0; // 0x40
	::Class_3_6FA4D205CC40A95D* Field_5_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_CCCED6A8E319EAA6__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_0BDCE45D5AFF4247(::MoleMole::Config::ConfigPlayInnerWorldDiffusionAnimation* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPlayInnerWorldDiffusionAnimation*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_5_CCCED6A8E319EAA6_METHOD_5_0BDCE45D5AFF4247_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_CCCED6A8E319EAA6_METHOD_5_33E2FA8E6403B93D_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_CCCED6A8E319EAA6_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_5_1C82B0464A6F73F2(::MoleMole::HollowChessboard::HollowCell& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell&))((::PBYTE)hIl2Cpp + CLASS_5_CCCED6A8E319EAA6_METHOD_5_1C82B0464A6F73F2_OFFSET))(this, a1);
	}
};
