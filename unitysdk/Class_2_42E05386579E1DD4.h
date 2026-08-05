#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_42E05386579E1DD4_Class_2_37F28215027AF1A7;
class Class_2_42E05386579E1DD4_Class_2_7D6483DC96481CD2_6;
class Class_2_42E05386579E1DD4_Class_2_F0BE842FE13DA30F;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_42E05386579E1DD4_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x1597AA70)
#define CLASS_2_42E05386579E1DD4_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x1597A7F0)
#define CLASS_2_42E05386579E1DD4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1597AB70)
#define CLASS_2_42E05386579E1DD4__CTOR_OFFSET UNITYSDK_OFFSET(0x1597AB60)

inline static constexpr unsigned int Class_2_42E05386579E1DD4_TypeDefinitionIndex = 80275;

class Class_2_42E05386579E1DD4 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoInputKey* Field_2_10; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_42E05386579E1DD4_Class_2_F0BE842FE13DA30F*>* Field_2_7; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x38
	::Class_2_0D31A1661D004892<::Class_2_42E05386579E1DD4_Class_2_7D6483DC96481CD2_6*>* Field_2_11; // 0x40
	::Class_2_0D31A1661D004892<::Class_2_42E05386579E1DD4_Class_2_37F28215027AF1A7*>* Field_2_6; // 0x48
	::MoleMole::UIGeneralButtonController* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42E05386579E1DD4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_42E05386579E1DD4_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42E05386579E1DD4_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_42E05386579E1DD4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
