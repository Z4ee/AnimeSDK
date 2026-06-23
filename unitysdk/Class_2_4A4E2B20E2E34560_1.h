#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_4A4E2B20E2E34560_1_METHOD_2_5200FEEACE882DF3_OFFSET UNITYSDK_OFFSET(0x12692170)
#define CLASS_2_4A4E2B20E2E34560_1_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x12692340)
#define CLASS_2_4A4E2B20E2E34560_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12692410)
#define CLASS_2_4A4E2B20E2E34560_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12692400)

inline static constexpr unsigned int Class_2_4A4E2B20E2E34560_1_TypeDefinitionIndex = 52503;

class Class_2_4A4E2B20E2E34560_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A4E2B20E2E34560_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5200FEEACE882DF3(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4A4E2B20E2E34560_1_METHOD_2_5200FEEACE882DF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A4E2B20E2E34560_1_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4A4E2B20E2E34560_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
