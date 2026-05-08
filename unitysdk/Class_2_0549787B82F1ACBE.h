#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_0549787B82F1ACBE_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0xECC7410)
#define CLASS_2_0549787B82F1ACBE_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0xECC75E0)
#define CLASS_2_0549787B82F1ACBE_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xECC76B0)
#define CLASS_2_0549787B82F1ACBE__CTOR_OFFSET UNITYSDK_OFFSET(0xECC76A0)

inline static constexpr unsigned int Class_2_0549787B82F1ACBE_TypeDefinitionIndex = 65016;

class Class_2_0549787B82F1ACBE : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x20
	::UnityEngine::Transform* Field_2_3; // 0x28
	::UnityEngine::Transform* Field_2_4; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x38
	::UnityEngine::UI::Button* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0549787B82F1ACBE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0549787B82F1ACBE_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0549787B82F1ACBE_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0549787B82F1ACBE_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
