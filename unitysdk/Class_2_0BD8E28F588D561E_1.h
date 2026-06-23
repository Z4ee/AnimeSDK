#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_0BD8E28F588D561E_1_METHOD_2_5A4C962718782000_OFFSET UNITYSDK_OFFSET(0x163E2CA0)
#define CLASS_2_0BD8E28F588D561E_1_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x163E2ED0)
#define CLASS_2_0BD8E28F588D561E_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x163E2FA0)
#define CLASS_2_0BD8E28F588D561E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x163E2F90)

inline static constexpr unsigned int Class_2_0BD8E28F588D561E_1_TypeDefinitionIndex = 73140;

class Class_2_0BD8E28F588D561E_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_0; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x20
	::UnityEngine::RectTransform* Field_2_6; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x38
	::UnityEngine::GameObject* Field_2_5; // 0x40
	::UnityEngine::RectTransform* Field_2_9; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x58
	::MoleMole::MonoGamepadCustomList* Field_2_4; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BD8E28F588D561E_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5A4C962718782000(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0BD8E28F588D561E_1_METHOD_2_5A4C962718782000_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BD8E28F588D561E_1_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0BD8E28F588D561E_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
