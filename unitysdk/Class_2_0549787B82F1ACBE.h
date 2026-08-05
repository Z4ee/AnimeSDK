#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_0549787B82F1ACBE_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x15562A60)
#define CLASS_2_0549787B82F1ACBE_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x15562C30)
#define CLASS_2_0549787B82F1ACBE_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15562D00)
#define CLASS_2_0549787B82F1ACBE__CTOR_OFFSET UNITYSDK_OFFSET(0x15562CF0)

inline static constexpr unsigned int Class_2_0549787B82F1ACBE_TypeDefinitionIndex = 44863;

class Class_2_0549787B82F1ACBE : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x20
	::UnityEngine::Transform* Field_2_5; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x30
	::UnityEngine::Transform* Field_2_6; // 0x38
	::UnityEngine::UI::Button* Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0549787B82F1ACBE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0549787B82F1ACBE_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0549787B82F1ACBE_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0549787B82F1ACBE_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
