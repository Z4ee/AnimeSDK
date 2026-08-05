#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_137DB615CC6A5FB0_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x12E95E90)
#define CLASS_2_137DB615CC6A5FB0_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x12E95C50)
#define CLASS_2_137DB615CC6A5FB0_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12E95F20)
#define CLASS_2_137DB615CC6A5FB0__CTOR_OFFSET UNITYSDK_OFFSET(0x12E95F10)

inline static constexpr unsigned int Class_2_137DB615CC6A5FB0_TypeDefinitionIndex = 48215;

class Class_2_137DB615CC6A5FB0 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_8; // 0x18
	::UnityEngine::RectTransform* Field_2_11; // 0x20
	::UnityEngine::RectTransform* Field_2_4; // 0x28
	::UnityEngine::RectTransform* Field_2_9; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x38
	::Class_2_FDFE69FE7B72463B* Field_2_5; // 0x40
	::UnityEngine::RectTransform* Field_2_15; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x50
	::UnityEngine::RectTransform* Field_2_10; // 0x58
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_137DB615CC6A5FB0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_137DB615CC6A5FB0_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_137DB615CC6A5FB0_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_137DB615CC6A5FB0_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
