#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57_1.h"

class Class_2_27C81EA3CFB263AC;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_7308E367F36F0D7D_METHOD_2_3C8305164A0C9B06_OFFSET UNITYSDK_OFFSET(0x12A6E950)
#define CLASS_2_7308E367F36F0D7D_METHOD_2_7A0E335452FE2056_OFFSET UNITYSDK_OFFSET(0x12A6E7B0)
#define CLASS_2_7308E367F36F0D7D_METHOD_2_AD399A63502445B7_OFFSET UNITYSDK_OFFSET(0x12A6E680)
#define CLASS_2_7308E367F36F0D7D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12A6E9F0)
#define CLASS_2_7308E367F36F0D7D_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x12A6E580)
#define CLASS_2_7308E367F36F0D7D__CTOR_OFFSET UNITYSDK_OFFSET(0x12A6E670)

inline static constexpr unsigned int Class_2_7308E367F36F0D7D_TypeDefinitionIndex = 60667;

class Class_2_7308E367F36F0D7D : public ::Class_1_EEA0111A28582B57_1
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::RectTransform* Field_2_4; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x28
	::UnityEngine::GameObject* Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7308E367F36F0D7D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7308E367F36F0D7D_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_AD399A63502445B7(::MoleMole::UIControlCollection* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7308E367F36F0D7D_METHOD_2_AD399A63502445B7_OFFSET))(a1);
	}

	static ::Class_2_7308E367F36F0D7D* Method_2_7A0E335452FE2056(::Class_2_27C81EA3CFB263AC* a1, ::Class_2_A9A857AD270B9CE1* a2, ::MoleMole::UIControlCollection* a3)
	{
		return ((::Class_2_7308E367F36F0D7D*(*)(::Class_2_27C81EA3CFB263AC*, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7308E367F36F0D7D_METHOD_2_7A0E335452FE2056_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7308E367F36F0D7D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3C8305164A0C9B06(::Class_2_27C81EA3CFB263AC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_27C81EA3CFB263AC*))((::PBYTE)hIl2Cpp + CLASS_2_7308E367F36F0D7D_METHOD_2_3C8305164A0C9B06_OFFSET))(this, a1);
	}
};
