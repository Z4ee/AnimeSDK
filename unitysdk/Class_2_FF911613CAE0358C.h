#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_FF911613CAE0358C_Class_2_6A6090F5B24320FB;
class Class_2_FF911613CAE0358C_Class_2_C843BD4406843552_1;
class Class_2_FF911613CAE0358C_Class_2_F346330BE476315C;
class MonoUITableScrollGroup;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralBtn03WidgetController; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_FF911613CAE0358C_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x138D2DB0)
#define CLASS_2_FF911613CAE0358C_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x138D3050)
#define CLASS_2_FF911613CAE0358C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x138D3190)
#define CLASS_2_FF911613CAE0358C__CTOR_OFFSET UNITYSDK_OFFSET(0x138D3180)

inline static constexpr unsigned int Class_2_FF911613CAE0358C_TypeDefinitionIndex = 72980;

class Class_2_FF911613CAE0358C : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_FF911613CAE0358C_Class_2_F346330BE476315C*>* Field_2_2; // 0x18
	::MonoUITableScrollGroup* Field_2_8; // 0x20
	::UnityEngine::UI::Extension::UIToggleButton* Field_2_4; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_FF911613CAE0358C_Class_2_C843BD4406843552_1*>* Field_2_7; // 0x30
	::Class_3_30A064D7BE47C07D<::MoleMole::UIGeneralBtn03WidgetController*>* Field_2_1; // 0x38
	::Class_2_0D31A1661D004892<::Class_2_FF911613CAE0358C_Class_2_6A6090F5B24320FB*>* Field_2_6; // 0x40
	::UnityEngine::UI::Extension::UIToggleButton* Field_2_5; // 0x48
	::UnityEngine::CanvasGroup* Field_2_0; // 0x50
	::MonoUITableScrollV2* Field_2_3; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF911613CAE0358C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FF911613CAE0358C_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FF911613CAE0358C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF911613CAE0358C_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
