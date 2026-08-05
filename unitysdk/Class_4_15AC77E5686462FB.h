#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F78D134D9EB09E5B.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_1_43BD383C98B4C0C5_25;
class Class_1_D3581D8A71834B25;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigChessboardSlotMachine; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_15AC77E5686462FB_METHOD_4_151350DB6BD4CAA1_OFFSET UNITYSDK_OFFSET(0x14EEB430)
#define CLASS_4_15AC77E5686462FB_METHOD_4_18155128CE120193_OFFSET UNITYSDK_OFFSET(0x14EEAA20)
#define CLASS_4_15AC77E5686462FB_METHOD_4_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x14EEB300)
#define CLASS_4_15AC77E5686462FB_METHOD_4_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0x14EEA360)
#define CLASS_4_15AC77E5686462FB_METHOD_4_56BA3C214A0172D8_OFFSET UNITYSDK_OFFSET(0x14EEA200)
#define CLASS_4_15AC77E5686462FB_METHOD_4_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0x14EEB180)
#define CLASS_4_15AC77E5686462FB_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14EEB3A0)
#define CLASS_4_15AC77E5686462FB__CTOR_OFFSET UNITYSDK_OFFSET(0x14EEB2B0)

inline static constexpr unsigned int Class_4_15AC77E5686462FB_TypeDefinitionIndex = 50445;

class Class_4_15AC77E5686462FB : public ::Class_3_F78D134D9EB09E5B
{
public:
	::MoleMole::Config::ConfigChessboardSlotMachine* Field_4_0; // 0x40
	::MoleMole::UIHollowMainPageController* Field_4_1; // 0x48
	::System::Single Field_4_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_15AC77E5686462FB__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_56BA3C214A0172D8(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_4_15AC77E5686462FB_METHOD_4_56BA3C214A0172D8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_4857357D5C1BFCE8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_15AC77E5686462FB_METHOD_4_4857357D5C1BFCE8_OFFSET))(this);
	}

	::System::Void Method_4_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_15AC77E5686462FB_METHOD_4_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}

	::System::Void Method_4_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_15AC77E5686462FB_METHOD_4_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Method_4_18155128CE120193(::System::Int32 a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Collections::Generic::IList_1<::MoleMole::HollowChessboard::HollowCell>* a3, ::System::Single a4)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::Collections::Generic::IList_1<::MoleMole::HollowChessboard::HollowCell>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_15AC77E5686462FB_METHOD_4_18155128CE120193_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_15AC77E5686462FB_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_4_151350DB6BD4CAA1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_4_15AC77E5686462FB_METHOD_4_151350DB6BD4CAA1_OFFSET))(this, a1, a2, a3, a4);
	}
};
