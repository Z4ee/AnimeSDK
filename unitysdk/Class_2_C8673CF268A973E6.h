#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIWorkBenchInformation02InfoPanelWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_C8673CF268A973E6_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x114F84C0)
#define CLASS_2_C8673CF268A973E6_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x114F86C0)
#define CLASS_2_C8673CF268A973E6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x114F87D0)
#define CLASS_2_C8673CF268A973E6__CTOR_OFFSET UNITYSDK_OFFSET(0x114F87C0)

inline static constexpr unsigned int Class_2_C8673CF268A973E6_TypeDefinitionIndex = 72447;

class Class_2_C8673CF268A973E6 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x18
	::MonoUITableScrollV2* Field_2_4; // 0x20
	::UnityEngine::RectTransform* Field_2_3; // 0x28
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIWorkBenchInformation02InfoPanelWidgetController*>* Field_2_6; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x40
	::MonoUITableScrollV2* Field_2_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8673CF268A973E6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C8673CF268A973E6_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C8673CF268A973E6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8673CF268A973E6_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
