#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F78D134D9EB09E5B.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_C376DB68B1C74261;
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_BA0A4993734971AC_METHOD_4_151350DB6BD4CAA1_OFFSET UNITYSDK_OFFSET(0x134DE840)
#define CLASS_4_BA0A4993734971AC_METHOD_4_63617D5D5992EC9F_OFFSET UNITYSDK_OFFSET(0x134DE1E0)
#define CLASS_4_BA0A4993734971AC_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x134DE7B0)
#define CLASS_4_BA0A4993734971AC_METHOD_4_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x134DE340)
#define CLASS_4_BA0A4993734971AC__CTOR_OFFSET UNITYSDK_OFFSET(0x134DE760)

inline static constexpr unsigned int Class_4_BA0A4993734971AC_TypeDefinitionIndex = 53018;

class Class_4_BA0A4993734971AC : public ::Class_3_F78D134D9EB09E5B
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_4_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BA0A4993734971AC__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_63617D5D5992EC9F(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_4_BA0A4993734971AC_METHOD_4_63617D5D5992EC9F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BA0A4993734971AC_METHOD_4_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BA0A4993734971AC_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_4_151350DB6BD4CAA1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_4_BA0A4993734971AC_METHOD_4_151350DB6BD4CAA1_OFFSET))(this, a1, a2, a3, a4);
	}
};
