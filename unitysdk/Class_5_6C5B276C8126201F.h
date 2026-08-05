#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"

class Class_1_D3581D8A71834B25;
class Class_2_9DCE2FC33F67E8A2;
namespace MoleMole::Config { class ConfigChessboardPlayerOnSetDefaultNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_5_6C5B276C8126201F_METHOD_5_BD4834A33A98A277_OFFSET UNITYSDK_OFFSET(0x12A87600)
#define CLASS_5_6C5B276C8126201F_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12A877F0)
#define CLASS_5_6C5B276C8126201F_METHOD_5_CF149A6E9209861A_OFFSET UNITYSDK_OFFSET(0x12A87670)
#define CLASS_5_6C5B276C8126201F__CTOR_OFFSET UNITYSDK_OFFSET(0x12A87790)

inline static constexpr unsigned int Class_5_6C5B276C8126201F_TypeDefinitionIndex = 56465;

class Class_5_6C5B276C8126201F : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigChessboardPlayerOnSetDefaultNode*>
{
public:
	::MoleMole::Config::ConfigChessboardPlayerOnSetDefaultNode* Field_5_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6C5B276C8126201F__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_BD4834A33A98A277(::MoleMole::Config::ConfigChessboardPlayerOnSetDefaultNode* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigChessboardPlayerOnSetDefaultNode*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_5_6C5B276C8126201F_METHOD_5_BD4834A33A98A277_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_CF149A6E9209861A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6C5B276C8126201F_METHOD_5_CF149A6E9209861A_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6C5B276C8126201F_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}
};
