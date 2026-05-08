#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_3_9C5C55DC4E8586A6_1_METHOD_3_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x12C5AB70)
#define CLASS_3_9C5C55DC4E8586A6_1_METHOD_3_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x12C5ABF0)
#define CLASS_3_9C5C55DC4E8586A6_1_METHOD_3_496565A3E7357507_OFFSET UNITYSDK_OFFSET(0x12C5A9E0)
#define CLASS_3_9C5C55DC4E8586A6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12C5AE00)

inline static constexpr unsigned int Class_3_9C5C55DC4E8586A6_1_TypeDefinitionIndex = 51267;

class Class_3_9C5C55DC4E8586A6_1 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_1; // 0x28
	::Class_2_1A39E1B51756BF41* Field_3_0; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_2; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9C5C55DC4E8586A6_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_496565A3E7357507(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_9C5C55DC4E8586A6_1_METHOD_3_496565A3E7357507_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9C5C55DC4E8586A6_1_METHOD_3_21886A8411E71157_OFFSET))(this);
	}

	::System::Void Method_3_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9C5C55DC4E8586A6_1_METHOD_3_1B167429A8B82AD3_OFFSET))(this);
	}
};
