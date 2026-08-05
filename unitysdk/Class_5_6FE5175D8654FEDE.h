#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"

class Class_1_D3581D8A71834B25;
class Class_2_9DCE2FC33F67E8A2;
namespace MoleMole::Config { class ConfigDelayedActivateAtmosphereAndFilter; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_5_6FE5175D8654FEDE_METHOD_5_0747954DF3B63AAB_OFFSET UNITYSDK_OFFSET(0x1871B180)
#define CLASS_5_6FE5175D8654FEDE_METHOD_5_8300D65E0AD2D1DA_OFFSET UNITYSDK_OFFSET(0x1871B110)
#define CLASS_5_6FE5175D8654FEDE_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1871B370)
#define CLASS_5_6FE5175D8654FEDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1871B310)

inline static constexpr unsigned int Class_5_6FE5175D8654FEDE_TypeDefinitionIndex = 48487;

class Class_5_6FE5175D8654FEDE : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigDelayedActivateAtmosphereAndFilter*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6FE5175D8654FEDE__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_8300D65E0AD2D1DA(::MoleMole::Config::ConfigDelayedActivateAtmosphereAndFilter* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDelayedActivateAtmosphereAndFilter*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_5_6FE5175D8654FEDE_METHOD_5_8300D65E0AD2D1DA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_0747954DF3B63AAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6FE5175D8654FEDE_METHOD_5_0747954DF3B63AAB_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6FE5175D8654FEDE_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}
};
