#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F78D134D9EB09E5B.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"

class Class_1_43BD383C98B4C0C5_25;
class Class_1_D3581D8A71834B25;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigChessboardUiPostProcess; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_2BCB3FF28F54C5D9_METHOD_4_151350DB6BD4CAA1_OFFSET UNITYSDK_OFFSET(0x11E59C80)
#define CLASS_4_2BCB3FF28F54C5D9_METHOD_4_4DE65AB3A4860CEB_OFFSET UNITYSDK_OFFSET(0x11E598D0)
#define CLASS_4_2BCB3FF28F54C5D9_METHOD_4_56BA3C214A0172D8_OFFSET UNITYSDK_OFFSET(0x11E590D0)
#define CLASS_4_2BCB3FF28F54C5D9_METHOD_4_99053D1AE5A59190_OFFSET UNITYSDK_OFFSET(0x11E59260)
#define CLASS_4_2BCB3FF28F54C5D9_METHOD_4_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11E59BF0)
#define CLASS_4_2BCB3FF28F54C5D9_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11E59B50)
#define CLASS_4_2BCB3FF28F54C5D9_METHOD_4_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x11E59C90)
#define CLASS_4_2BCB3FF28F54C5D9__CTOR_OFFSET UNITYSDK_OFFSET(0x11E59AD0)

inline static constexpr unsigned int Class_4_2BCB3FF28F54C5D9_TypeDefinitionIndex = 79284;

class Class_4_2BCB3FF28F54C5D9 : public ::Class_3_F78D134D9EB09E5B
{
public:
	::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* Field_4_7; // 0x40
	::MoleMole::Config::ConfigChessboardUiPostProcess* Field_4_5; // 0x48
	::MoleMole::UIHollowMainPageController* Field_4_6; // 0x50
	::System::Single Field_4_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2BCB3FF28F54C5D9__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_56BA3C214A0172D8(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_4_2BCB3FF28F54C5D9_METHOD_4_56BA3C214A0172D8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_99053D1AE5A59190()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2BCB3FF28F54C5D9_METHOD_4_99053D1AE5A59190_OFFSET))(this);
	}

	::System::Void Method_4_4DE65AB3A4860CEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2BCB3FF28F54C5D9_METHOD_4_4DE65AB3A4860CEB_OFFSET))(this);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2BCB3FF28F54C5D9_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_4_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2BCB3FF28F54C5D9_METHOD_4_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_4_151350DB6BD4CAA1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_4_2BCB3FF28F54C5D9_METHOD_4_151350DB6BD4CAA1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2BCB3FF28F54C5D9_METHOD_4_F4DD08A31BA3F883_OFFSET))(this);
	}
};
