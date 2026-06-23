#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_231577D875B2EDD2_Class_2_C843BD4406843552_1;
class Class_2_A9A857AD270B9CE1;
class MonoUITableScrollGroup;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_231577D875B2EDD2_METHOD_2_47574FC129FD3CC7_OFFSET UNITYSDK_OFFSET(0xFFE4EB0)
#define CLASS_2_231577D875B2EDD2_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0xFFE5050)
#define CLASS_2_231577D875B2EDD2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xFFE5120)
#define CLASS_2_231577D875B2EDD2__CTOR_OFFSET UNITYSDK_OFFSET(0xFFE5110)

inline static constexpr unsigned int Class_2_231577D875B2EDD2_TypeDefinitionIndex = 75401;

class Class_2_231577D875B2EDD2 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_2; // 0x18
	::MonoUITableScrollGroup* Field_2_3; // 0x20
	::UnityEngine::UI::Extension::UIToggleButton* Field_2_1; // 0x28
	::UnityEngine::UI::Extension::UIToggleButton* Field_2_0; // 0x30
	::Class_2_0D31A1661D004892<::Class_2_231577D875B2EDD2_Class_2_C843BD4406843552_1*>* Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_231577D875B2EDD2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_47574FC129FD3CC7(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_231577D875B2EDD2_METHOD_2_47574FC129FD3CC7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_231577D875B2EDD2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_231577D875B2EDD2_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
