#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"

class Class_1_C376DB68B1C74261;
class Class_2_9DCE2FC33F67E8A2;
namespace MoleMole::Config { class ConfigViewRangeChangeChessboard; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_5_EA441355EB31CA03_METHOD_5_A0A0C93972A3DEFA_OFFSET UNITYSDK_OFFSET(0x12DB6530)
#define CLASS_5_EA441355EB31CA03_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12DB6BC0)
#define CLASS_5_EA441355EB31CA03_METHOD_5_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0x12DB65A0)
#define CLASS_5_EA441355EB31CA03__CTOR_OFFSET UNITYSDK_OFFSET(0x12DB6B60)

inline static constexpr unsigned int Class_5_EA441355EB31CA03_TypeDefinitionIndex = 76642;

class Class_5_EA441355EB31CA03 : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigViewRangeChangeChessboard*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_EA441355EB31CA03__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_A0A0C93972A3DEFA(::MoleMole::Config::ConfigViewRangeChangeChessboard* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigViewRangeChangeChessboard*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_5_EA441355EB31CA03_METHOD_5_A0A0C93972A3DEFA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_EBAB6A35C21A2A5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_EA441355EB31CA03_METHOD_5_EBAB6A35C21A2A5B_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_EA441355EB31CA03_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}
};
