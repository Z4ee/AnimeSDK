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

#define CLASS_2_F520CFAC469766FF_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x1142C100)
#define CLASS_2_F520CFAC469766FF_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x1142BE50)
#define CLASS_2_F520CFAC469766FF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1142C210)
#define CLASS_2_F520CFAC469766FF__CTOR_OFFSET UNITYSDK_OFFSET(0x1142C200)

inline static constexpr unsigned int Class_2_F520CFAC469766FF_TypeDefinitionIndex = 59258;

class Class_2_F520CFAC469766FF : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Text* Field_2_10; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_13; // 0x28
	::UnityEngine::GameObject* Field_2_6; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_12; // 0x38
	::UnityEngine::GameObject* Field_2_9; // 0x40
	::UnityEngine::GameObject* Field_2_4; // 0x48
	::UnityEngine::GameObject* Field_2_8; // 0x50
	::UnityEngine::GameObject* Field_2_2; // 0x58
	::UnityEngine::GameObject* Field_2_1; // 0x60
	::UnityEngine::GameObject* Field_2_0; // 0x68
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x70
	::UnityEngine::GameObject* Field_2_3; // 0x78
	::UnityEngine::GameObject* Field_2_11; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F520CFAC469766FF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F520CFAC469766FF_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F520CFAC469766FF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F520CFAC469766FF_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
