#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_536CDDA39763F81B_METHOD_2_21D544786F2D43F4_OFFSET UNITYSDK_OFFSET(0x16E931A0)
#define CLASS_2_536CDDA39763F81B_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x16E93310)
#define CLASS_2_536CDDA39763F81B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16E933E0)
#define CLASS_2_536CDDA39763F81B__CTOR_OFFSET UNITYSDK_OFFSET(0x16E933D0)

inline static constexpr unsigned int Class_2_536CDDA39763F81B_TypeDefinitionIndex = 42220;

class Class_2_536CDDA39763F81B : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Text* Field_2_0; // 0x18
	::UnityEngine::GameObject* Field_2_1; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_536CDDA39763F81B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_21D544786F2D43F4(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_536CDDA39763F81B_METHOD_2_21D544786F2D43F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_536CDDA39763F81B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_536CDDA39763F81B_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
