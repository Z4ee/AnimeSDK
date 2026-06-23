#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_C5C76936C9D491E6_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x11CE95F0)
#define CLASS_2_C5C76936C9D491E6_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x11CE9800)
#define CLASS_2_C5C76936C9D491E6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11CE98D0)
#define CLASS_2_C5C76936C9D491E6__CTOR_OFFSET UNITYSDK_OFFSET(0x11CE98C0)

inline static constexpr unsigned int Class_2_C5C76936C9D491E6_TypeDefinitionIndex = 80098;

class Class_2_C5C76936C9D491E6 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_3; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x30
	::UnityEngine::GameObject* Field_2_1; // 0x38
	::UnityEngine::GameObject* Field_2_0; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5C76936C9D491E6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C5C76936C9D491E6_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C5C76936C9D491E6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5C76936C9D491E6_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
