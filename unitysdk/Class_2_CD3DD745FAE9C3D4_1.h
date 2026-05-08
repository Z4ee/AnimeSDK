#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class RawImage; }

#define CLASS_2_CD3DD745FAE9C3D4_1_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x140B9B10)
#define CLASS_2_CD3DD745FAE9C3D4_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x140B9B90)
#define CLASS_2_CD3DD745FAE9C3D4_1_METHOD_2_F87973A9CF5B5F69_OFFSET UNITYSDK_OFFSET(0x140B9950)
#define CLASS_2_CD3DD745FAE9C3D4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x140B9B80)

inline static constexpr unsigned int Class_2_CD3DD745FAE9C3D4_1_TypeDefinitionIndex = 62434;

class Class_2_CD3DD745FAE9C3D4_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::CanvasGroup* Field_2_0; // 0x18
	::UnityEngine::GameObject* Field_2_2; // 0x20
	::UnityEngine::UI::RawImage* Field_2_3; // 0x28
	::UnityEngine::GameObject* Field_2_4; // 0x30
	::UnityEngine::GameObject* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD3DD745FAE9C3D4_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F87973A9CF5B5F69(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CD3DD745FAE9C3D4_1_METHOD_2_F87973A9CF5B5F69_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD3DD745FAE9C3D4_1_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CD3DD745FAE9C3D4_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
