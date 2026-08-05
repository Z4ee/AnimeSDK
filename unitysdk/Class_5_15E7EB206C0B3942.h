#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"

class Class_1_D3581D8A71834B25;
class Class_2_9DCE2FC33F67E8A2;
namespace MoleMole::Config { class ConfigStopSequenceVENode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_5_15E7EB206C0B3942_METHOD_5_A6F3922CE954810E_OFFSET UNITYSDK_OFFSET(0x14192860)
#define CLASS_5_15E7EB206C0B3942_METHOD_5_B78E46EDF44B706C_OFFSET UNITYSDK_OFFSET(0x141927F0)
#define CLASS_5_15E7EB206C0B3942_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14192AD0)
#define CLASS_5_15E7EB206C0B3942__CTOR_OFFSET UNITYSDK_OFFSET(0x14192A70)

inline static constexpr unsigned int Class_5_15E7EB206C0B3942_TypeDefinitionIndex = 71159;

class Class_5_15E7EB206C0B3942 : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigStopSequenceVENode*>
{
public:
	::MoleMole::Config::ConfigStopSequenceVENode* Field_5_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_15E7EB206C0B3942__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_B78E46EDF44B706C(::MoleMole::Config::ConfigStopSequenceVENode* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigStopSequenceVENode*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_5_15E7EB206C0B3942_METHOD_5_B78E46EDF44B706C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_A6F3922CE954810E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_15E7EB206C0B3942_METHOD_5_A6F3922CE954810E_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_15E7EB206C0B3942_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}
};
