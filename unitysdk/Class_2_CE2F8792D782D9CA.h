#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_CE2F8792D782D9CA_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x14304240)
#define CLASS_2_CE2F8792D782D9CA_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x143042D0)
#define CLASS_2_CE2F8792D782D9CA_METHOD_2_FA381B9E901D74DC_OFFSET UNITYSDK_OFFSET(0x143040A0)
#define CLASS_2_CE2F8792D782D9CA__CTOR_OFFSET UNITYSDK_OFFSET(0x143042C0)

inline static constexpr unsigned int Class_2_CE2F8792D782D9CA_TypeDefinitionIndex = 52077;

class Class_2_CE2F8792D782D9CA : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x20
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_3; // 0x28
	::UnityEngine::RectTransform* Field_2_2; // 0x30
	::MonoUITableScrollV2* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE2F8792D782D9CA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_FA381B9E901D74DC(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CE2F8792D782D9CA_METHOD_2_FA381B9E901D74DC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE2F8792D782D9CA_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CE2F8792D782D9CA_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
