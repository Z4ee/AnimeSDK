#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F78D134D9EB09E5B.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_C376DB68B1C74261;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigChessboardUiPostProcess; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_2BCB3FF28F54C5D9_METHOD_4_151350DB6BD4CAA1_OFFSET UNITYSDK_OFFSET(0x1549A5C0)
#define CLASS_4_2BCB3FF28F54C5D9_METHOD_4_4DE65AB3A4860CEB_OFFSET UNITYSDK_OFFSET(0x1549A340)
#define CLASS_4_2BCB3FF28F54C5D9_METHOD_4_56BA3C214A0172D8_OFFSET UNITYSDK_OFFSET(0x15499B60)
#define CLASS_4_2BCB3FF28F54C5D9_METHOD_4_99053D1AE5A59190_OFFSET UNITYSDK_OFFSET(0x15499CF0)
#define CLASS_4_2BCB3FF28F54C5D9_METHOD_4_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1549A6A0)
#define CLASS_4_2BCB3FF28F54C5D9_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1549A610)
#define CLASS_4_2BCB3FF28F54C5D9_METHOD_4_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x1549A5D0)
#define CLASS_4_2BCB3FF28F54C5D9__CTOR_OFFSET UNITYSDK_OFFSET(0x1549A540)

inline static constexpr unsigned int Class_4_2BCB3FF28F54C5D9_TypeDefinitionIndex = 66682;

class Class_4_2BCB3FF28F54C5D9 : public ::Class_3_F78D134D9EB09E5B
{
public:
	::MoleMole::Config::ConfigChessboardUiPostProcess* Field_4_3; // 0x40
	::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* Field_4_1; // 0x48
	::MoleMole::UIHollowMainPageController* Field_4_2; // 0x50
	::System::Single Field_4_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2BCB3FF28F54C5D9__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_56BA3C214A0172D8(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_4_2BCB3FF28F54C5D9_METHOD_4_56BA3C214A0172D8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_99053D1AE5A59190()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2BCB3FF28F54C5D9_METHOD_4_99053D1AE5A59190_OFFSET))(this);
	}

	::System::Void Method_4_4DE65AB3A4860CEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2BCB3FF28F54C5D9_METHOD_4_4DE65AB3A4860CEB_OFFSET))(this);
	}

	::System::Void Method_4_151350DB6BD4CAA1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_4_2BCB3FF28F54C5D9_METHOD_4_151350DB6BD4CAA1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2BCB3FF28F54C5D9_METHOD_4_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2BCB3FF28F54C5D9_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_4_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2BCB3FF28F54C5D9_METHOD_4_CA373AA1C7054598_1_OFFSET))(this);
	}
};
