#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_214D9C2B38669660_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x11B4B000)
#define CLASS_2_214D9C2B38669660_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x11B4B1D0)
#define CLASS_2_214D9C2B38669660_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11B4B2C0)
#define CLASS_2_214D9C2B38669660__CTOR_OFFSET UNITYSDK_OFFSET(0x11B4B2B0)

inline static constexpr unsigned int Class_2_214D9C2B38669660_TypeDefinitionIndex = 46864;

class Class_2_214D9C2B38669660 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x30
	::UnityEngine::GameObject* Field_2_2; // 0x38
	::UnityEngine::GameObject* Field_2_1; // 0x40
	::UnityEngine::UI::Extension::UIButtonEx* Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_214D9C2B38669660__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_214D9C2B38669660_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_214D9C2B38669660_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_214D9C2B38669660_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
