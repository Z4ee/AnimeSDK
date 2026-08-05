#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_3B5926E5F38A0FB7_1_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x12A5A100)
#define CLASS_2_3B5926E5F38A0FB7_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12A5A190)
#define CLASS_2_3B5926E5F38A0FB7_1_METHOD_2_ECD1B788BD780B17_OFFSET UNITYSDK_OFFSET(0x12A59F80)
#define CLASS_2_3B5926E5F38A0FB7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12A5A180)

inline static constexpr unsigned int Class_2_3B5926E5F38A0FB7_1_TypeDefinitionIndex = 66408;

class Class_2_3B5926E5F38A0FB7_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_5; // 0x18
	::UnityEngine::CanvasGroup* Field_2_7; // 0x20
	::UnityEngine::RectTransform* Field_2_6; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B5926E5F38A0FB7_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ECD1B788BD780B17(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3B5926E5F38A0FB7_1_METHOD_2_ECD1B788BD780B17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B5926E5F38A0FB7_1_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3B5926E5F38A0FB7_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
