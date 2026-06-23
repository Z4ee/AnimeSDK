#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_3B5926E5F38A0FB7_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x167FF740)
#define CLASS_2_3B5926E5F38A0FB7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x167FF7D0)
#define CLASS_2_3B5926E5F38A0FB7_METHOD_2_ECD1B788BD780B17_OFFSET UNITYSDK_OFFSET(0x167FF5C0)
#define CLASS_2_3B5926E5F38A0FB7__CTOR_OFFSET UNITYSDK_OFFSET(0x167FF7C0)

inline static constexpr unsigned int Class_2_3B5926E5F38A0FB7_TypeDefinitionIndex = 73859;

class Class_2_3B5926E5F38A0FB7 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_2; // 0x20
	::UnityEngine::RectTransform* Field_2_3; // 0x28
	::UnityEngine::CanvasGroup* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B5926E5F38A0FB7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ECD1B788BD780B17(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3B5926E5F38A0FB7_METHOD_2_ECD1B788BD780B17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3B5926E5F38A0FB7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B5926E5F38A0FB7_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
