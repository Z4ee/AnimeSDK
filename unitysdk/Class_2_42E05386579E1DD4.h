#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_42E05386579E1DD4_Class_2_37F28215027AF1A7;
class Class_2_42E05386579E1DD4_Class_2_7D6483DC96481CD2_1;
class Class_2_42E05386579E1DD4_Class_2_C1A00A759B0F2F5C;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_42E05386579E1DD4_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x116CDAD0)
#define CLASS_2_42E05386579E1DD4_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x116CD850)
#define CLASS_2_42E05386579E1DD4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x116CDBD0)
#define CLASS_2_42E05386579E1DD4__CTOR_OFFSET UNITYSDK_OFFSET(0x116CDBC0)

inline static constexpr unsigned int Class_2_42E05386579E1DD4_TypeDefinitionIndex = 77562;

class Class_2_42E05386579E1DD4 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_42E05386579E1DD4_Class_2_C1A00A759B0F2F5C*>* Field_2_2; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_42E05386579E1DD4_Class_2_37F28215027AF1A7*>* Field_2_3; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_42E05386579E1DD4_Class_2_7D6483DC96481CD2_1*>* Field_2_6; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x38
	::MoleMole::MonoInputKey* Field_2_7; // 0x40
	::MoleMole::UIGeneralButtonController* Field_2_1; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42E05386579E1DD4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_42E05386579E1DD4_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42E05386579E1DD4_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_42E05386579E1DD4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
