#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_6B6F5758929283C6_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x16C1E190)
#define CLASS_2_6B6F5758929283C6_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x16C1DF40)
#define CLASS_2_6B6F5758929283C6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16C1E280)
#define CLASS_2_6B6F5758929283C6__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1E270)

inline static constexpr unsigned int Class_2_6B6F5758929283C6_TypeDefinitionIndex = 44720;

class Class_2_6B6F5758929283C6 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_10; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x30
	::UnityEngine::Transform* Field_2_6; // 0x38
	::UnityEngine::Transform* Field_2_5; // 0x40
	::UnityEngine::Transform* Field_2_8; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x58
	::UnityEngine::Transform* Field_2_4; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B6F5758929283C6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6B6F5758929283C6_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B6F5758929283C6_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6B6F5758929283C6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
