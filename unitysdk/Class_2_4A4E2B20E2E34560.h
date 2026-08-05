#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_4A4E2B20E2E34560_METHOD_2_5200FEEACE882DF3_OFFSET UNITYSDK_OFFSET(0x156B01C0)
#define CLASS_2_4A4E2B20E2E34560_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x156B0390)
#define CLASS_2_4A4E2B20E2E34560_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x156B0460)
#define CLASS_2_4A4E2B20E2E34560__CTOR_OFFSET UNITYSDK_OFFSET(0x156B0450)

inline static constexpr unsigned int Class_2_4A4E2B20E2E34560_TypeDefinitionIndex = 73404;

class Class_2_4A4E2B20E2E34560 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A4E2B20E2E34560__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5200FEEACE882DF3(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4A4E2B20E2E34560_METHOD_2_5200FEEACE882DF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4A4E2B20E2E34560_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A4E2B20E2E34560_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
