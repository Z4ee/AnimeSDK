#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_5F559DEFD2F7BB3D_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x153623C0)
#define CLASS_2_5F559DEFD2F7BB3D_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x153625B0)
#define CLASS_2_5F559DEFD2F7BB3D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x153626A0)
#define CLASS_2_5F559DEFD2F7BB3D__CTOR_OFFSET UNITYSDK_OFFSET(0x15362690)

inline static constexpr unsigned int Class_2_5F559DEFD2F7BB3D_TypeDefinitionIndex = 61550;

class Class_2_5F559DEFD2F7BB3D : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_3; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x30
	::UnityEngine::RectTransform* Field_2_7; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x40
	::UnityEngine::RectTransform* Field_2_2; // 0x48
	::MonoUITableScrollV2* Field_2_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F559DEFD2F7BB3D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5F559DEFD2F7BB3D_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5F559DEFD2F7BB3D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F559DEFD2F7BB3D_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
