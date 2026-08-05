#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F78D134D9EB09E5B.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_1_43BD383C98B4C0C5_25;
class Class_1_D3581D8A71834B25;
namespace MoleMole::Config { class ConfigChessboardChessAnim; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_1044F5BD83473C30_METHOD_4_151350DB6BD4CAA1_OFFSET UNITYSDK_OFFSET(0xECC79E0)
#define CLASS_4_1044F5BD83473C30_METHOD_4_2FE2714C60BDE2E2_OFFSET UNITYSDK_OFFSET(0xECC6CA0)
#define CLASS_4_1044F5BD83473C30_METHOD_4_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xECC78C0)
#define CLASS_4_1044F5BD83473C30_METHOD_4_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xECC6FC0)
#define CLASS_4_1044F5BD83473C30_METHOD_4_76CA994BCF8AC78A_OFFSET UNITYSDK_OFFSET(0xECC7080)
#define CLASS_4_1044F5BD83473C30_METHOD_4_83A4F25B5A765095_OFFSET UNITYSDK_OFFSET(0xECC7000)
#define CLASS_4_1044F5BD83473C30_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xECC7950)
#define CLASS_4_1044F5BD83473C30__CTOR_OFFSET UNITYSDK_OFFSET(0xECC7830)

inline static constexpr unsigned int Class_4_1044F5BD83473C30_TypeDefinitionIndex = 58630;

class Class_4_1044F5BD83473C30 : public ::Class_3_F78D134D9EB09E5B
{
public:
	::MoleMole::Config::ConfigChessboardChessAnim* Field_4_0; // 0x40
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_4_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1044F5BD83473C30__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_2FE2714C60BDE2E2(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_4_1044F5BD83473C30_METHOD_4_2FE2714C60BDE2E2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_4_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1044F5BD83473C30_METHOD_4_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_4_83A4F25B5A765095()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1044F5BD83473C30_METHOD_4_83A4F25B5A765095_OFFSET))(this);
	}

	::System::Boolean Method_4_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1044F5BD83473C30_METHOD_4_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1044F5BD83473C30_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_4_151350DB6BD4CAA1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_4_1044F5BD83473C30_METHOD_4_151350DB6BD4CAA1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_76CA994BCF8AC78A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1044F5BD83473C30_METHOD_4_76CA994BCF8AC78A_OFFSET))(this);
	}
};
