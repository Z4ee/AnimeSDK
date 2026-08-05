#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1598DD1199C2D5EF_Class_2_80214E9C8BC13F36_1;
class Class_2_1598DD1199C2D5EF_Class_2_EF16346D79C18F15_12;
class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_1598DD1199C2D5EF_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x13EC61B0)
#define CLASS_2_1598DD1199C2D5EF_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x13EC63C0)
#define CLASS_2_1598DD1199C2D5EF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13EC6490)
#define CLASS_2_1598DD1199C2D5EF__CTOR_OFFSET UNITYSDK_OFFSET(0x13EC6480)

inline static constexpr unsigned int Class_2_1598DD1199C2D5EF_TypeDefinitionIndex = 77585;

class Class_2_1598DD1199C2D5EF : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_1; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_1598DD1199C2D5EF_Class_2_80214E9C8BC13F36_1*>* Field_2_7; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_1598DD1199C2D5EF_Class_2_EF16346D79C18F15_12*>* Field_2_5; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x30
	::MonoUITableScrollV2* Field_2_6; // 0x38
	::UnityEngine::GameObject* Field_2_11; // 0x40
	::Class_2_0D31A1661D004892<::Class_2_1598DD1199C2D5EF_Class_2_80214E9C8BC13F36_1*>* Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1598DD1199C2D5EF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1598DD1199C2D5EF_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1598DD1199C2D5EF_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1598DD1199C2D5EF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
