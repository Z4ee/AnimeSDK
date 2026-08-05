#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_BCB661674264F407_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x165B9750)
#define CLASS_2_BCB661674264F407_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x165B9960)
#define CLASS_2_BCB661674264F407_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x165B9AA0)
#define CLASS_2_BCB661674264F407__CTOR_OFFSET UNITYSDK_OFFSET(0x165B9A90)

inline static constexpr unsigned int Class_2_BCB661674264F407_TypeDefinitionIndex = 73758;

class Class_2_BCB661674264F407 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::CanvasGroup* Field_2_4; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCB661674264F407__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BCB661674264F407_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BCB661674264F407_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCB661674264F407_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
