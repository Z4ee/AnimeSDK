#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F78D134D9EB09E5B.h"
#include "unitysdk/MoleMole/Config/AtmosphereSourceType.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_C376DB68B1C74261;
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class String; }

#define CLASS_4_309A214E9E60AC78_METHOD_4_0FC1CEE4654C1D74_OFFSET UNITYSDK_OFFSET(0x13562710)
#define CLASS_4_309A214E9E60AC78_METHOD_4_151350DB6BD4CAA1_OFFSET UNITYSDK_OFFSET(0x13562E70)
#define CLASS_4_309A214E9E60AC78_METHOD_4_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x13562F10)
#define CLASS_4_309A214E9E60AC78_METHOD_4_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x135627F0)
#define CLASS_4_309A214E9E60AC78_METHOD_4_5C8DC7010D8D68C0_OFFSET UNITYSDK_OFFSET(0x13562830)
#define CLASS_4_309A214E9E60AC78_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13562E80)
#define CLASS_4_309A214E9E60AC78__CTOR_OFFSET UNITYSDK_OFFSET(0x13562E20)

inline static constexpr unsigned int Class_4_309A214E9E60AC78_TypeDefinitionIndex = 46565;

class Class_4_309A214E9E60AC78 : public ::Class_3_F78D134D9EB09E5B
{
public:
	::System::String* Field_4_1; // 0x40
	::MoleMole::Config::AtmosphereSourceType Field_4_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_309A214E9E60AC78__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_0FC1CEE4654C1D74(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_4_309A214E9E60AC78_METHOD_4_0FC1CEE4654C1D74_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_4_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_309A214E9E60AC78_METHOD_4_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_4_5C8DC7010D8D68C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_309A214E9E60AC78_METHOD_4_5C8DC7010D8D68C0_OFFSET))(this);
	}

	::System::Void Method_4_151350DB6BD4CAA1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_4_309A214E9E60AC78_METHOD_4_151350DB6BD4CAA1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_309A214E9E60AC78_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_4_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_309A214E9E60AC78_METHOD_4_391A84BCD9F51317_1_OFFSET))(this);
	}
};
