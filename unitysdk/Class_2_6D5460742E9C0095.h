#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIBackFlowActivitySelectAvatarWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_6D5460742E9C0095_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x13752E10)
#define CLASS_2_6D5460742E9C0095_METHOD_2_8CE71901D76EEEA9_OFFSET UNITYSDK_OFFSET(0x13752A20)
#define CLASS_2_6D5460742E9C0095_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13752EE0)
#define CLASS_2_6D5460742E9C0095_METHOD_2_CADE20366AA39505_OFFSET UNITYSDK_OFFSET(0x13752C30)
#define CLASS_2_6D5460742E9C0095__CTOR_OFFSET UNITYSDK_OFFSET(0x13752ED0)

inline static constexpr unsigned int Class_2_6D5460742E9C0095_TypeDefinitionIndex = 43464;

class Class_2_6D5460742E9C0095 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x20
	::MoleMole::MonoGamepadCustomList* Field_2_7; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x30
	::UnityEngine::Animation* Field_2_6; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x50
	::System::Collections::Generic::List_1<::Class_3_6F805C3FA3D1D41D<::MoleMole::UIBackFlowActivitySelectAvatarWidgetController*>*>* Field_2_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D5460742E9C0095__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE71901D76EEEA9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6D5460742E9C0095_METHOD_2_8CE71901D76EEEA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D5460742E9C0095_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_6F805C3FA3D1D41D<::MoleMole::UIBackFlowActivitySelectAvatarWidgetController*>*>* Method_2_CADE20366AA39505(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_6F805C3FA3D1D41D<::MoleMole::UIBackFlowActivitySelectAvatarWidgetController*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6D5460742E9C0095_METHOD_2_CADE20366AA39505_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6D5460742E9C0095_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
