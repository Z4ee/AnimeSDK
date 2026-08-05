#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_5934BFCF1206F4CB_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x1A891320)
#define CLASS_2_5934BFCF1206F4CB_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x1A891510)
#define CLASS_2_5934BFCF1206F4CB_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1A8915E0)
#define CLASS_2_5934BFCF1206F4CB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8915D0)

inline static constexpr unsigned int Class_2_5934BFCF1206F4CB_TypeDefinitionIndex = 49643;

class Class_2_5934BFCF1206F4CB : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_0; // 0x18
	::UnityEngine::GameObject* Field_2_6; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5934BFCF1206F4CB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5934BFCF1206F4CB_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5934BFCF1206F4CB_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5934BFCF1206F4CB_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
