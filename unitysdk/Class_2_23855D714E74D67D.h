#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_23855D714E74D67D_METHOD_2_8CE71901D76EEEA9_OFFSET UNITYSDK_OFFSET(0x14137C10)
#define CLASS_2_23855D714E74D67D_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x14137E10)
#define CLASS_2_23855D714E74D67D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14137F50)
#define CLASS_2_23855D714E74D67D__CTOR_OFFSET UNITYSDK_OFFSET(0x14137F40)

inline static constexpr unsigned int Class_2_23855D714E74D67D_TypeDefinitionIndex = 64475;

class Class_2_23855D714E74D67D : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x20
	::UnityEngine::RectTransform* Field_2_5; // 0x28
	::UnityEngine::RectTransform* Field_2_4; // 0x30
	::UnityEngine::Transform* Field_2_6; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x40
	::UnityEngine::RectTransform* Field_2_3; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23855D714E74D67D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE71901D76EEEA9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_23855D714E74D67D_METHOD_2_8CE71901D76EEEA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23855D714E74D67D_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_23855D714E74D67D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
