#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Enum_3_BD3C09A68C53DE66.h"

class Class_0_16E4307DCC419505_199;
class Class_2_D13F0A2D74DCF483_Class_2_572DD5F97D05D6AE;
namespace MoleMole { class UIEmojiTipRouletteWidgetController; }
namespace MoleMole { class UIEmojiTipWidgetController; }
namespace MoleMole { class UIInLevelEmoticonsTipWidgetController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_D13F0A2D74DCF483_METHOD_2_0F30679B05E70FC1_OFFSET UNITYSDK_OFFSET(0x187808C0)
#define CLASS_2_D13F0A2D74DCF483_METHOD_2_13D583A8E8628BFF_OFFSET UNITYSDK_OFFSET(0x187807A0)
#define CLASS_2_D13F0A2D74DCF483_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x187804C0)
#define CLASS_2_D13F0A2D74DCF483_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x187804D0)
#define CLASS_2_D13F0A2D74DCF483_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18780710)
#define CLASS_2_D13F0A2D74DCF483_METHOD_2_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x18780590)
#define CLASS_2_D13F0A2D74DCF483__CTOR_OFFSET UNITYSDK_OFFSET(0x18780700)

inline static constexpr unsigned int Class_2_D13F0A2D74DCF483_TypeDefinitionIndex = 87622;

class Class_2_D13F0A2D74DCF483 : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	::MoleMole::UIInLevelEmoticonsTipWidgetController* Field_2_2; // 0x28
	::MoleMole::UIEmojiTipRouletteWidgetController* Field_2_1; // 0x30
	::Class_2_D13F0A2D74DCF483_Class_2_572DD5F97D05D6AE* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D13F0A2D74DCF483__CTOR_OFFSET))(this);
	}

	::Enum_3_BD3C09A68C53DE66 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_BD3C09A68C53DE66(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D13F0A2D74DCF483_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_199* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_199*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_D13F0A2D74DCF483_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D13F0A2D74DCF483_METHOD_2_E52129E82CD2D7F8_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D13F0A2D74DCF483_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::MoleMole::UIEmojiTipWidgetController* Method_2_13D583A8E8628BFF()
	{
		return ((::MoleMole::UIEmojiTipWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D13F0A2D74DCF483_METHOD_2_13D583A8E8628BFF_OFFSET))(this);
	}

	::System::Boolean Method_2_0F30679B05E70FC1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D13F0A2D74DCF483_METHOD_2_0F30679B05E70FC1_OFFSET))(this);
	}
};
