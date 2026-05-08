#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_3E1A0459A6647B99_2_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xF3D3B80)
#define CLASS_2_3E1A0459A6647B99_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xF3D3C10)
#define CLASS_2_3E1A0459A6647B99_2_METHOD_2_D25F539834051480_OFFSET UNITYSDK_OFFSET(0xF3D39A0)
#define CLASS_2_3E1A0459A6647B99_2__CTOR_OFFSET UNITYSDK_OFFSET(0xF3D3C00)

inline static constexpr unsigned int Class_2_3E1A0459A6647B99_2_TypeDefinitionIndex = 52868;

class Class_2_3E1A0459A6647B99_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_3; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x28
	::UnityEngine::RectTransform* Field_2_2; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x38
	::UnityEngine::RectTransform* Field_2_1; // 0x40
	::UnityEngine::RectTransform* Field_2_4; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E1A0459A6647B99_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D25F539834051480(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3E1A0459A6647B99_2_METHOD_2_D25F539834051480_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3E1A0459A6647B99_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E1A0459A6647B99_2_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
