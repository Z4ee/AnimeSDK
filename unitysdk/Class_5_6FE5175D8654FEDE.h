#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"

class Class_1_C376DB68B1C74261;
class Class_2_9DCE2FC33F67E8A2;
namespace MoleMole::Config { class ConfigDelayedActivateAtmosphereAndFilter; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_5_6FE5175D8654FEDE_METHOD_5_8300D65E0AD2D1DA_OFFSET UNITYSDK_OFFSET(0xF3D6490)
#define CLASS_5_6FE5175D8654FEDE_METHOD_5_8F60F8EA8A4B6E2F_OFFSET UNITYSDK_OFFSET(0xF3D6500)
#define CLASS_5_6FE5175D8654FEDE_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF3D66F0)
#define CLASS_5_6FE5175D8654FEDE__CTOR_OFFSET UNITYSDK_OFFSET(0xF3D6690)

inline static constexpr unsigned int Class_5_6FE5175D8654FEDE_TypeDefinitionIndex = 53517;

class Class_5_6FE5175D8654FEDE : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigDelayedActivateAtmosphereAndFilter*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6FE5175D8654FEDE__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_8300D65E0AD2D1DA(::MoleMole::Config::ConfigDelayedActivateAtmosphereAndFilter* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDelayedActivateAtmosphereAndFilter*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_5_6FE5175D8654FEDE_METHOD_5_8300D65E0AD2D1DA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_8F60F8EA8A4B6E2F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6FE5175D8654FEDE_METHOD_5_8F60F8EA8A4B6E2F_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6FE5175D8654FEDE_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}
};
