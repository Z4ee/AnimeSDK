#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_CA67A9CEB871FFD3;
class MonoUIBtnScaleAnim;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_8DAF7F768CC9112A_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x10573AD0)
#define CLASS_2_8DAF7F768CC9112A_METHOD_2_8CE71901D76EEEA9_OFFSET UNITYSDK_OFFSET(0x105738B0)
#define CLASS_2_8DAF7F768CC9112A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10573BC0)
#define CLASS_2_8DAF7F768CC9112A__CTOR_OFFSET UNITYSDK_OFFSET(0x10573BB0)

inline static constexpr unsigned int Class_2_8DAF7F768CC9112A_TypeDefinitionIndex = 49923;

class Class_2_8DAF7F768CC9112A : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_1; // 0x18
	::UnityEngine::GameObject* Field_2_2; // 0x20
	::Class_2_CA67A9CEB871FFD3* Field_2_5; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x30
	::UnityEngine::GameObject* Field_2_6; // 0x38
	::MonoUIBtnScaleAnim* Field_2_4; // 0x40
	::UnityEngine::GameObject* Field_2_3; // 0x48
	::UnityEngine::GameObject* Field_2_8; // 0x50
	::UnityEngine::GameObject* Field_2_7; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DAF7F768CC9112A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE71901D76EEEA9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8DAF7F768CC9112A_METHOD_2_8CE71901D76EEEA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8DAF7F768CC9112A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DAF7F768CC9112A_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
