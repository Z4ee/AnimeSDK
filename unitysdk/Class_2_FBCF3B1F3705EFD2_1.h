#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_FBCF3B1F3705EFD2_1_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x1AEC6AF0)
#define CLASS_2_FBCF3B1F3705EFD2_1_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x1AEC6C90)
#define CLASS_2_FBCF3B1F3705EFD2_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1AEC6D80)
#define CLASS_2_FBCF3B1F3705EFD2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEC6D70)

inline static constexpr unsigned int Class_2_FBCF3B1F3705EFD2_1_TypeDefinitionIndex = 85228;

class Class_2_FBCF3B1F3705EFD2_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x18
	::UnityEngine::GameObject* Field_2_3; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x28
	::UnityEngine::GameObject* Field_2_4; // 0x30
	::UnityEngine::UI::Text* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBCF3B1F3705EFD2_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FBCF3B1F3705EFD2_1_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FBCF3B1F3705EFD2_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBCF3B1F3705EFD2_1_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
