#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_134E5210FBBAC6E5;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_FCADDB85DBCA6A4B_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x15720690)
#define CLASS_2_FCADDB85DBCA6A4B_METHOD_2_8D764EEFCE1E3A5F_OFFSET UNITYSDK_OFFSET(0x15720440)
#define CLASS_2_FCADDB85DBCA6A4B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15720720)
#define CLASS_2_FCADDB85DBCA6A4B__CTOR_OFFSET UNITYSDK_OFFSET(0x15720710)

inline static constexpr unsigned int Class_2_FCADDB85DBCA6A4B_TypeDefinitionIndex = 91132;

class Class_2_FCADDB85DBCA6A4B : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_11; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x20
	::Class_2_FDFE69FE7B72463B* Field_2_1; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x40
	::UnityEngine::UI::Text* Field_2_0; // 0x48
	::UnityEngine::RectTransform* Field_2_4; // 0x50
	::Class_2_134E5210FBBAC6E5* Field_2_5; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCADDB85DBCA6A4B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8D764EEFCE1E3A5F(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FCADDB85DBCA6A4B_METHOD_2_8D764EEFCE1E3A5F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FCADDB85DBCA6A4B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCADDB85DBCA6A4B_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
