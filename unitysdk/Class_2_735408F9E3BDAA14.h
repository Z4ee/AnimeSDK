#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_735408F9E3BDAA14_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x134EA660)
#define CLASS_2_735408F9E3BDAA14_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x134EA920)
#define CLASS_2_735408F9E3BDAA14_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x134EAA60)
#define CLASS_2_735408F9E3BDAA14__CTOR_OFFSET UNITYSDK_OFFSET(0x134EAA50)

inline static constexpr unsigned int Class_2_735408F9E3BDAA14_TypeDefinitionIndex = 63402;

class Class_2_735408F9E3BDAA14 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_9; // 0x18
	::UnityEngine::GameObject* Field_2_7; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x30
	::UnityEngine::GameObject* Field_2_13; // 0x38
	::MoleMole::UIGeneralButtonController* Field_2_6; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x48
	::UnityEngine::Transform* Field_2_1; // 0x50
	::UnityEngine::Transform* Field_2_0; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x60
	::Class_2_1A39E1B51756BF41* Field_2_8; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_12; // 0x78
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_735408F9E3BDAA14__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_735408F9E3BDAA14_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_735408F9E3BDAA14_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_735408F9E3BDAA14_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
