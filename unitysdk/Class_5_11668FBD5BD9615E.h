#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"

class Class_1_D3581D8A71834B25;
class Class_2_9DCE2FC33F67E8A2;
namespace MoleMole::Config { class ConfigClearIconAnimation; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_5_11668FBD5BD9615E_METHOD_5_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x112B6280)
#define CLASS_5_11668FBD5BD9615E_METHOD_5_791907CB052906DA_OFFSET UNITYSDK_OFFSET(0x112B6210)
#define CLASS_5_11668FBD5BD9615E_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x112B6960)
#define CLASS_5_11668FBD5BD9615E__CTOR_OFFSET UNITYSDK_OFFSET(0x112B6900)

inline static constexpr unsigned int Class_5_11668FBD5BD9615E_TypeDefinitionIndex = 69869;

class Class_5_11668FBD5BD9615E : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigClearIconAnimation*>
{
public:
	::MoleMole::Config::ConfigClearIconAnimation* Field_5_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_11668FBD5BD9615E__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_791907CB052906DA(::MoleMole::Config::ConfigClearIconAnimation* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigClearIconAnimation*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_5_11668FBD5BD9615E_METHOD_5_791907CB052906DA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_704FAC4600717444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_11668FBD5BD9615E_METHOD_5_704FAC4600717444_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_11668FBD5BD9615E_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}
};
