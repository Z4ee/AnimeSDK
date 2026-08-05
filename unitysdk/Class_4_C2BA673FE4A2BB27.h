#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9D68647294614D68.h"

class Class_1_43BD383C98B4C0C5_25;
class Class_1_D3581D8A71834B25;
class Class_5_F60EFCE4D76BF533;
class Class_5_F638703ACD0FA08E;
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_4_C2BA673FE4A2BB27_METHOD_4_F485AE7370063313_OFFSET UNITYSDK_OFFSET(0x15D4AEA0)
#define CLASS_4_C2BA673FE4A2BB27_METHOD_4_FE7CF23E00ACD3DF_OFFSET UNITYSDK_OFFSET(0x15D4B0B0)
#define CLASS_4_C2BA673FE4A2BB27__CTOR_OFFSET UNITYSDK_OFFSET(0x15D4B0A0)

inline static constexpr unsigned int Class_4_C2BA673FE4A2BB27_TypeDefinitionIndex = 79000;

class Class_4_C2BA673FE4A2BB27 : public ::Class_3_9D68647294614D68
{
public:
	::Class_5_F638703ACD0FA08E* Field_4_0; // 0x40
	::Class_5_F60EFCE4D76BF533* Field_4_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C2BA673FE4A2BB27__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_F485AE7370063313(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_4_C2BA673FE4A2BB27_METHOD_4_F485AE7370063313_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_FE7CF23E00ACD3DF(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_4_C2BA673FE4A2BB27_METHOD_4_FE7CF23E00ACD3DF_OFFSET))(this, a1, a2, a3, a4);
	}
};
