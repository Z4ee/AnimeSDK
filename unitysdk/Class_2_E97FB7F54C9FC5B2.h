#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_E97FB7F54C9FC5B2_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x16A2D320)
#define CLASS_2_E97FB7F54C9FC5B2_METHOD_2_4B641F764AEF5BEB_OFFSET UNITYSDK_OFFSET(0x16A2D1B0)
#define CLASS_2_E97FB7F54C9FC5B2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16A2D3B0)
#define CLASS_2_E97FB7F54C9FC5B2__CTOR_OFFSET UNITYSDK_OFFSET(0x16A2D3A0)

inline static constexpr unsigned int Class_2_E97FB7F54C9FC5B2_TypeDefinitionIndex = 72730;

class Class_2_E97FB7F54C9FC5B2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x20
	::UnityEngine::GameObject* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E97FB7F54C9FC5B2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4B641F764AEF5BEB(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E97FB7F54C9FC5B2_METHOD_2_4B641F764AEF5BEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E97FB7F54C9FC5B2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E97FB7F54C9FC5B2_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
