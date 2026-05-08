#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_FD4AFA67063B0CAB_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x17905400)
#define CLASS_2_FD4AFA67063B0CAB_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x179055F0)
#define CLASS_2_FD4AFA67063B0CAB_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17905700)
#define CLASS_2_FD4AFA67063B0CAB__CTOR_OFFSET UNITYSDK_OFFSET(0x179056F0)

inline static constexpr unsigned int Class_2_FD4AFA67063B0CAB_TypeDefinitionIndex = 39300;

class Class_2_FD4AFA67063B0CAB : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x18
	::UnityEngine::GameObject* Field_2_1; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28
	::UnityEngine::UI::Text* Field_2_2; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD4AFA67063B0CAB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FD4AFA67063B0CAB_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FD4AFA67063B0CAB_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD4AFA67063B0CAB_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
