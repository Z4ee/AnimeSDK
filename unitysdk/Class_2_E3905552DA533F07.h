#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57_1.h"

class Class_2_1A39E1B51756BF41;
class Class_2_570B24F7B3EBE11A;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_E3905552DA533F07_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x1405AFD0)
#define CLASS_2_E3905552DA533F07_METHOD_2_3C8305164A0C9B06_OFFSET UNITYSDK_OFFSET(0x1405B230)
#define CLASS_2_E3905552DA533F07_METHOD_2_7A0E335452FE2056_OFFSET UNITYSDK_OFFSET(0x1405B2D0)
#define CLASS_2_E3905552DA533F07_METHOD_2_AD399A63502445B7_OFFSET UNITYSDK_OFFSET(0x1405B100)
#define CLASS_2_E3905552DA533F07_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1405B060)
#define CLASS_2_E3905552DA533F07_METHOD_2_ECD1B788BD780B17_OFFSET UNITYSDK_OFFSET(0x1405AE50)
#define CLASS_2_E3905552DA533F07__CTOR_OFFSET UNITYSDK_OFFSET(0x1405B050)

inline static constexpr unsigned int Class_2_E3905552DA533F07_TypeDefinitionIndex = 58477;

class Class_2_E3905552DA533F07 : public ::Class_1_EEA0111A28582B57_1
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::UI::Text* Field_2_3; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x20
	::UnityEngine::RectTransform* Field_2_1; // 0x28
	::UnityEngine::RectTransform* Field_2_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3905552DA533F07__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ECD1B788BD780B17(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E3905552DA533F07_METHOD_2_ECD1B788BD780B17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E3905552DA533F07_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_AD399A63502445B7(::MoleMole::UIControlCollection* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E3905552DA533F07_METHOD_2_AD399A63502445B7_OFFSET))(a1);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3905552DA533F07_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_3C8305164A0C9B06(::Class_2_570B24F7B3EBE11A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_570B24F7B3EBE11A*))((::PBYTE)hIl2Cpp + CLASS_2_E3905552DA533F07_METHOD_2_3C8305164A0C9B06_OFFSET))(this, a1);
	}

	static ::Class_2_E3905552DA533F07* Method_2_7A0E335452FE2056(::Class_2_570B24F7B3EBE11A* a1, ::Class_2_A9A857AD270B9CE1* a2, ::MoleMole::UIControlCollection* a3)
	{
		return ((::Class_2_E3905552DA533F07*(*)(::Class_2_570B24F7B3EBE11A*, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E3905552DA533F07_METHOD_2_7A0E335452FE2056_OFFSET))(a1, a2, a3);
	}
};
