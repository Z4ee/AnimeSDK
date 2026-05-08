#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_2_9AA754434D23AD5B_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xFF4A740)
#define CLASS_2_9AA754434D23AD5B_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0xFF4A5A0)
#define CLASS_2_9AA754434D23AD5B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xFF4A7D0)
#define CLASS_2_9AA754434D23AD5B__CTOR_OFFSET UNITYSDK_OFFSET(0xFF4A7C0)

inline static constexpr unsigned int Class_2_9AA754434D23AD5B_TypeDefinitionIndex = 61729;

class Class_2_9AA754434D23AD5B : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_2; // 0x18
	::UnityEngine::UI::Extension::UITabButton* Field_2_0; // 0x20
	::UnityEngine::GameObject* Field_2_4; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9AA754434D23AD5B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9AA754434D23AD5B_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9AA754434D23AD5B_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9AA754434D23AD5B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
