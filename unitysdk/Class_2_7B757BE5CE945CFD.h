#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_7B757BE5CE945CFD_METHOD_2_21D544786F2D43F4_OFFSET UNITYSDK_OFFSET(0xFE5A200)
#define CLASS_2_7B757BE5CE945CFD_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0xFE5A370)
#define CLASS_2_7B757BE5CE945CFD_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xFE5A440)
#define CLASS_2_7B757BE5CE945CFD__CTOR_OFFSET UNITYSDK_OFFSET(0xFE5A430)

inline static constexpr unsigned int Class_2_7B757BE5CE945CFD_TypeDefinitionIndex = 38531;

class Class_2_7B757BE5CE945CFD : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Animation* Field_2_1; // 0x18
	::UnityEngine::Transform* Field_2_0; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B757BE5CE945CFD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_21D544786F2D43F4(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7B757BE5CE945CFD_METHOD_2_21D544786F2D43F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B757BE5CE945CFD_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7B757BE5CE945CFD_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
