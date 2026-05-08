#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_1_C376DB68B1C74261;
class Class_2_9DCE2FC33F67E8A2;
class Class_3_6A5D580C9ADEA29C;
namespace MoleMole::Config { class ConfigPlayLightDiffusionAnimation; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_5_E47CF13179ACA7CD_METHOD_5_1C82B0464A6F73F2_OFFSET UNITYSDK_OFFSET(0x161F0B10)
#define CLASS_5_E47CF13179ACA7CD_METHOD_5_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x161F0660)
#define CLASS_5_E47CF13179ACA7CD_METHOD_5_6606398E5F2F86CF_OFFSET UNITYSDK_OFFSET(0x161F05F0)
#define CLASS_5_E47CF13179ACA7CD_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x161F0D20)
#define CLASS_5_E47CF13179ACA7CD__CTOR_OFFSET UNITYSDK_OFFSET(0x161F0CC0)

inline static constexpr unsigned int Class_5_E47CF13179ACA7CD_TypeDefinitionIndex = 49185;

class Class_5_E47CF13179ACA7CD : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigPlayLightDiffusionAnimation*>
{
public:
	::Class_3_6A5D580C9ADEA29C* Field_5_1; // 0x40
	::MoleMole::Config::ConfigPlayLightDiffusionAnimation* Field_5_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E47CF13179ACA7CD__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_6606398E5F2F86CF(::MoleMole::Config::ConfigPlayLightDiffusionAnimation* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPlayLightDiffusionAnimation*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_5_E47CF13179ACA7CD_METHOD_5_6606398E5F2F86CF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E47CF13179ACA7CD_METHOD_5_33E2FA8E6403B93D_OFFSET))(this);
	}

	::System::Boolean Method_5_1C82B0464A6F73F2(::MoleMole::HollowChessboard::HollowCell& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell&))((::PBYTE)hIl2Cpp + CLASS_5_E47CF13179ACA7CD_METHOD_5_1C82B0464A6F73F2_OFFSET))(this, a1);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E47CF13179ACA7CD_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}
};
