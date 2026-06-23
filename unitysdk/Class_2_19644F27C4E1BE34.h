#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralIconCardRarityWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_19644F27C4E1BE34_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x123698F0)
#define CLASS_2_19644F27C4E1BE34_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x123696A0)
#define CLASS_2_19644F27C4E1BE34_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12369A10)
#define CLASS_2_19644F27C4E1BE34__CTOR_OFFSET UNITYSDK_OFFSET(0x12369A00)

inline static constexpr unsigned int Class_2_19644F27C4E1BE34_TypeDefinitionIndex = 58646;

class Class_2_19644F27C4E1BE34 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_8; // 0x28
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralIconCardRarityWidgetController*>* Field_2_3; // 0x30
	::UnityEngine::GameObject* Field_2_7; // 0x38
	::UnityEngine::GameObject* Field_2_4; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19644F27C4E1BE34__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_19644F27C4E1BE34_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_19644F27C4E1BE34_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19644F27C4E1BE34_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}
};
