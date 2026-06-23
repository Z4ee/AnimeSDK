#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_07C4412B5A0F6218.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_23.h"
#include "unitysdk/Enum_3_2D62068BBE5EBDDC.h"
#include "unitysdk/Enum_3_4692A44270FF84F6.h"
#include "unitysdk/MoleMole/UI/FlowerShop/EFinishJudge.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6C8544ADE249616A_METHOD_1_0FCDBDCAF46702C9_OFFSET UNITYSDK_OFFSET(0x16C69300)
#define CLASS_1_6C8544ADE249616A_METHOD_1_83C62D2130E2E0BC_OFFSET UNITYSDK_OFFSET(0x16C693A0)
#define CLASS_1_6C8544ADE249616A_METHOD_1_8ACAC0A71B897BEA_OFFSET UNITYSDK_OFFSET(0x16C693F0)
#define CLASS_1_6C8544ADE249616A_METHOD_1_F08183F245BCB533_OFFSET UNITYSDK_OFFSET(0x16C69350)

inline static constexpr unsigned int Class_1_6C8544ADE249616A_TypeDefinitionIndex = 48589;

class Class_1_6C8544ADE249616A : public ::System::Object
{
public:
	static ::System::Boolean Method_1_0FCDBDCAF46702C9(::MoleMole::UI::FlowerShop::EFinishJudge a1, ::MoleMole::UI::FlowerShop::EFinishJudge a2)
	{
		return ((::System::Boolean(*)(::MoleMole::UI::FlowerShop::EFinishJudge, ::MoleMole::UI::FlowerShop::EFinishJudge))((::PBYTE)hIl2Cpp + CLASS_1_6C8544ADE249616A_METHOD_1_0FCDBDCAF46702C9_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F08183F245BCB533(::Enum_3_07C4412B5A0F6218 a1, ::Enum_3_07C4412B5A0F6218 a2)
	{
		return ((::System::Boolean(*)(::Enum_3_07C4412B5A0F6218, ::Enum_3_07C4412B5A0F6218))((::PBYTE)hIl2Cpp + CLASS_1_6C8544ADE249616A_METHOD_1_F08183F245BCB533_OFFSET))(a1, a2);
	}

	static ::Enum_3_0A3761FE34514D6C_23 Method_1_83C62D2130E2E0BC(::Enum_3_4692A44270FF84F6 a1)
	{
		return ((::Enum_3_0A3761FE34514D6C_23(*)(::Enum_3_4692A44270FF84F6))((::PBYTE)hIl2Cpp + CLASS_1_6C8544ADE249616A_METHOD_1_83C62D2130E2E0BC_OFFSET))(a1);
	}

	static ::MoleMole::UI::FlowerShop::ESlotType Method_1_8ACAC0A71B897BEA(::Enum_3_2D62068BBE5EBDDC a1)
	{
		return ((::MoleMole::UI::FlowerShop::ESlotType(*)(::Enum_3_2D62068BBE5EBDDC))((::PBYTE)hIl2Cpp + CLASS_1_6C8544ADE249616A_METHOD_1_8ACAC0A71B897BEA_OFFSET))(a1);
	}
};
