#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_79AE422BA06F6D26_25;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_3726593DCF5F2145_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x13A12390)
#define CLASS_2_3726593DCF5F2145_METHOD_2_63BBC99244640EE0_OFFSET UNITYSDK_OFFSET(0x13A12170)
#define CLASS_2_3726593DCF5F2145_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13A124A0)
#define CLASS_2_3726593DCF5F2145__CTOR_OFFSET UNITYSDK_OFFSET(0x13A12490)

inline static constexpr unsigned int Class_2_3726593DCF5F2145_TypeDefinitionIndex = 50954;

class Class_2_3726593DCF5F2145 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_2; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x20
	::MonoUITableScrollV2* Field_2_0; // 0x28
	::UnityEngine::RectTransform* Field_2_4; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x40
	::Class_2_0D31A1661D004892<::Class_2_79AE422BA06F6D26_25*>* Field_2_7; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3726593DCF5F2145__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_63BBC99244640EE0(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3726593DCF5F2145_METHOD_2_63BBC99244640EE0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3726593DCF5F2145_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3726593DCF5F2145_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
