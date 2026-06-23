#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"

class Class_1_C376DB68B1C74261;
class Class_2_9DCE2FC33F67E8A2;
namespace MoleMole::Config { class ConfigChessboardMuteAudioNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_5_47BDCE65FF472D6E_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11D340C0)
#define CLASS_5_47BDCE65FF472D6E_METHOD_5_D2E9F0CF824A6872_OFFSET UNITYSDK_OFFSET(0x11D33E40)
#define CLASS_5_47BDCE65FF472D6E_METHOD_5_D44942FF30D2BDFB_OFFSET UNITYSDK_OFFSET(0x11D33DC0)
#define CLASS_5_47BDCE65FF472D6E_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11D33E30)
#define CLASS_5_47BDCE65FF472D6E__CTOR_OFFSET UNITYSDK_OFFSET(0x11D34060)

inline static constexpr unsigned int Class_5_47BDCE65FF472D6E_TypeDefinitionIndex = 72887;

class Class_5_47BDCE65FF472D6E : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigChessboardMuteAudioNode*>
{
public:
	::MoleMole::Config::ConfigChessboardMuteAudioNode* Field_5_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_47BDCE65FF472D6E__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_D44942FF30D2BDFB(::MoleMole::Config::ConfigChessboardMuteAudioNode* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigChessboardMuteAudioNode*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_5_47BDCE65FF472D6E_METHOD_5_D44942FF30D2BDFB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_5_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_47BDCE65FF472D6E_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_5_D2E9F0CF824A6872()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_47BDCE65FF472D6E_METHOD_5_D2E9F0CF824A6872_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_47BDCE65FF472D6E_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}
};
