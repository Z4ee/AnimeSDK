#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIHollowCardItemBtnWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_C17E577DC0190DF1_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x15075990)
#define CLASS_2_C17E577DC0190DF1_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0x150757C0)
#define CLASS_2_C17E577DC0190DF1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15075A80)
#define CLASS_2_C17E577DC0190DF1__CTOR_OFFSET UNITYSDK_OFFSET(0x15075A70)

inline static constexpr unsigned int Class_2_C17E577DC0190DF1_TypeDefinitionIndex = 51120;

class Class_2_C17E577DC0190DF1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x20
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIHollowCardItemBtnWidgetController*>* Field_2_0; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x30
	::UnityEngine::RectTransform* Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C17E577DC0190DF1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C17E577DC0190DF1_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C17E577DC0190DF1_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C17E577DC0190DF1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
