#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_C7387D40D4120A48_18_Class_2_2DB6A319A840A82A;
class Class_2_C7387D40D4120A48_18_Class_2_5E2178E03F02D57E;
class Class_2_C7387D40D4120A48_18_Class_2_FE9AAB17F4285D2D;
class Class_2_CA67A9CEB871FFD3;
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class UIActivityCompRewardBtnGroupWidgetController; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGoldMiningDayCollectionBtnWidgetController; }
namespace MoleMole { class UIGoldMiningDayTodoListBtnWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_C7387D40D4120A48_18_METHOD_2_218124418542E081_OFFSET UNITYSDK_OFFSET(0x185EEB50)
#define CLASS_2_C7387D40D4120A48_18_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x185EE6F0)
#define CLASS_2_C7387D40D4120A48_18_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x185EED90)
#define CLASS_2_C7387D40D4120A48_18__CTOR_OFFSET UNITYSDK_OFFSET(0x185EED80)

inline static constexpr unsigned int Class_2_C7387D40D4120A48_18_TypeDefinitionIndex = 83789;

class Class_2_C7387D40D4120A48_18 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadSpaceList* Field_2_4; // 0x18
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGoldMiningDayTodoListBtnWidgetController*>* Field_2_7; // 0x20
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_13; // 0x28
	::Class_2_CA67A9CEB871FFD3* Field_2_5; // 0x30
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIActivityCompRewardBtnGroupWidgetController*>* Field_2_14; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_12; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x48
	::Class_2_0D31A1661D004892<::Class_2_C7387D40D4120A48_18_Class_2_5E2178E03F02D57E*>* Field_2_9; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x58
	::Class_2_0D31A1661D004892<::Class_2_C7387D40D4120A48_18_Class_2_2DB6A319A840A82A*>* Field_2_10; // 0x60
	::Class_2_0D31A1661D004892<::Class_2_C7387D40D4120A48_18_Class_2_FE9AAB17F4285D2D*>* Field_2_11; // 0x68
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_2; // 0x70
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x78
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGoldMiningDayCollectionBtnWidgetController*>* Field_2_8; // 0x80
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_3; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48_18__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48_18_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48_18_METHOD_2_218124418542E081_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48_18_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
