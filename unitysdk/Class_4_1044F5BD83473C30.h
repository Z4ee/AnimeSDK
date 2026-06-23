#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F78D134D9EB09E5B.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_1_43BD383C98B4C0C5_25;
class Class_1_C376DB68B1C74261;
namespace MoleMole::Config { class ConfigChessboardChessAnim; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_1044F5BD83473C30_METHOD_4_151350DB6BD4CAA1_OFFSET UNITYSDK_OFFSET(0x10DBFB30)
#define CLASS_4_1044F5BD83473C30_METHOD_4_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x10DBF270)
#define CLASS_4_1044F5BD83473C30_METHOD_4_2FE2714C60BDE2E2_OFFSET UNITYSDK_OFFSET(0x10DBF110)
#define CLASS_4_1044F5BD83473C30_METHOD_4_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x10DBFB40)
#define CLASS_4_1044F5BD83473C30_METHOD_4_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x10DBF230)
#define CLASS_4_1044F5BD83473C30_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10DBFBD0)
#define CLASS_4_1044F5BD83473C30_METHOD_4_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x10DBF300)
#define CLASS_4_1044F5BD83473C30__CTOR_OFFSET UNITYSDK_OFFSET(0x10DBFAB0)

inline static constexpr unsigned int Class_4_1044F5BD83473C30_TypeDefinitionIndex = 80115;

class Class_4_1044F5BD83473C30 : public ::Class_3_F78D134D9EB09E5B
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_4_1; // 0x40
	::MoleMole::Config::ConfigChessboardChessAnim* Field_4_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1044F5BD83473C30__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_2FE2714C60BDE2E2(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_4_1044F5BD83473C30_METHOD_4_2FE2714C60BDE2E2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_4_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1044F5BD83473C30_METHOD_4_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_4_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1044F5BD83473C30_METHOD_4_2CBE0B79DD36047E_OFFSET))(this);
	}

	::System::Void Method_4_151350DB6BD4CAA1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_4_1044F5BD83473C30_METHOD_4_151350DB6BD4CAA1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_4_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1044F5BD83473C30_METHOD_4_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1044F5BD83473C30_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_4_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1044F5BD83473C30_METHOD_4_CD8EB704BDED69B6_OFFSET))(this);
	}
};
