#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"

class Class_1_C376DB68B1C74261;
class Class_2_9DCE2FC33F67E8A2;
namespace MoleMole::Config { class ConfigModifyPlugin; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_5_F9FDF9A1D34E5C18_METHOD_5_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x12E1C3E0)
#define CLASS_5_F9FDF9A1D34E5C18_METHOD_5_38EA4612D3DC6967_OFFSET UNITYSDK_OFFSET(0x12E1C370)
#define CLASS_5_F9FDF9A1D34E5C18_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12E1C650)
#define CLASS_5_F9FDF9A1D34E5C18__CTOR_OFFSET UNITYSDK_OFFSET(0x12E1C5F0)

inline static constexpr unsigned int Class_5_F9FDF9A1D34E5C18_TypeDefinitionIndex = 45901;

class Class_5_F9FDF9A1D34E5C18 : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigModifyPlugin*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F9FDF9A1D34E5C18__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_38EA4612D3DC6967(::MoleMole::Config::ConfigModifyPlugin* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigModifyPlugin*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_5_F9FDF9A1D34E5C18_METHOD_5_38EA4612D3DC6967_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F9FDF9A1D34E5C18_METHOD_5_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F9FDF9A1D34E5C18_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}
};
