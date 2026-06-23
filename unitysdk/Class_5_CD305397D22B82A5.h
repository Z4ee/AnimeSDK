#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"

class Class_1_C376DB68B1C74261;
class Class_2_9DCE2FC33F67E8A2;
namespace MoleMole::Config { class ConfigPlayOverloadBarAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_5_CD305397D22B82A5_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x168081A0)
#define CLASS_5_CD305397D22B82A5_METHOD_5_CBF6DD6A0498CCCC_OFFSET UNITYSDK_OFFSET(0x16807EC0)
#define CLASS_5_CD305397D22B82A5_METHOD_5_D11D49A150087693_OFFSET UNITYSDK_OFFSET(0x16807E50)
#define CLASS_5_CD305397D22B82A5__CTOR_OFFSET UNITYSDK_OFFSET(0x16808140)

inline static constexpr unsigned int Class_5_CD305397D22B82A5_TypeDefinitionIndex = 72820;

class Class_5_CD305397D22B82A5 : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigPlayOverloadBarAnimationNode*>
{
public:
	::MoleMole::Config::ConfigPlayOverloadBarAnimationNode* Field_5_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_CD305397D22B82A5__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_D11D49A150087693(::MoleMole::Config::ConfigPlayOverloadBarAnimationNode* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPlayOverloadBarAnimationNode*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_5_CD305397D22B82A5_METHOD_5_D11D49A150087693_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_CBF6DD6A0498CCCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_CD305397D22B82A5_METHOD_5_CBF6DD6A0498CCCC_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_CD305397D22B82A5_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}
};
