#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
class MonoGeneralLevelUpConfig;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_AE31D568261C4659_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x11BCC680)
#define CLASS_2_AE31D568261C4659_METHOD_2_1D05C371EBD1713E_OFFSET UNITYSDK_OFFSET(0x11BCC490)
#define CLASS_2_AE31D568261C4659_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11BCC710)
#define CLASS_2_AE31D568261C4659__CTOR_OFFSET UNITYSDK_OFFSET(0x11BCC700)

inline static constexpr unsigned int Class_2_AE31D568261C4659_TypeDefinitionIndex = 53572;

class Class_2_AE31D568261C4659 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_4; // 0x18
	::Class_2_FDFE69FE7B72463B* Field_2_0; // 0x20
	::MonoGeneralLevelUpConfig* Field_2_1; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x38
	::UnityEngine::RectTransform* Field_2_5; // 0x40
	::UnityEngine::RectTransform* Field_2_11; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE31D568261C4659__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1D05C371EBD1713E(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AE31D568261C4659_METHOD_2_1D05C371EBD1713E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE31D568261C4659_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AE31D568261C4659_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
