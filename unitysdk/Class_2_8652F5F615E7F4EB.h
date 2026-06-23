#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57_1.h"

class Class_2_21C0344331580084;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_8652F5F615E7F4EB_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x1144EB90)
#define CLASS_2_8652F5F615E7F4EB_METHOD_2_3C8305164A0C9B06_OFFSET UNITYSDK_OFFSET(0x1144EE60)
#define CLASS_2_8652F5F615E7F4EB_METHOD_2_7A0E335452FE2056_OFFSET UNITYSDK_OFFSET(0x1144ECC0)
#define CLASS_2_8652F5F615E7F4EB_METHOD_2_AD399A63502445B7_OFFSET UNITYSDK_OFFSET(0x1144EF00)
#define CLASS_2_8652F5F615E7F4EB_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1144EC20)
#define CLASS_2_8652F5F615E7F4EB_METHOD_2_ECD1B788BD780B17_OFFSET UNITYSDK_OFFSET(0x1144EA10)
#define CLASS_2_8652F5F615E7F4EB__CTOR_OFFSET UNITYSDK_OFFSET(0x1144EC10)

inline static constexpr unsigned int Class_2_8652F5F615E7F4EB_TypeDefinitionIndex = 61614;

class Class_2_8652F5F615E7F4EB : public ::Class_1_EEA0111A28582B57_1
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::MonoUITableScrollV2* Field_2_2; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x20
	::UnityEngine::UI::Text* Field_2_1; // 0x28
	::UnityEngine::Transform* Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8652F5F615E7F4EB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ECD1B788BD780B17(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8652F5F615E7F4EB_METHOD_2_ECD1B788BD780B17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8652F5F615E7F4EB_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	static ::Class_2_8652F5F615E7F4EB* Method_2_7A0E335452FE2056(::Class_2_21C0344331580084* a1, ::Class_2_A9A857AD270B9CE1* a2, ::MoleMole::UIControlCollection* a3)
	{
		return ((::Class_2_8652F5F615E7F4EB*(*)(::Class_2_21C0344331580084*, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8652F5F615E7F4EB_METHOD_2_7A0E335452FE2056_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_3C8305164A0C9B06(::Class_2_21C0344331580084* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21C0344331580084*))((::PBYTE)hIl2Cpp + CLASS_2_8652F5F615E7F4EB_METHOD_2_3C8305164A0C9B06_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_AD399A63502445B7(::MoleMole::UIControlCollection* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8652F5F615E7F4EB_METHOD_2_AD399A63502445B7_OFFSET))(a1);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8652F5F615E7F4EB_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
