#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_12E4B5B11A3081AF_2_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x13D4DCA0)
#define CLASS_2_12E4B5B11A3081AF_2_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x13D4DA80)
#define CLASS_2_12E4B5B11A3081AF_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13D4DD30)
#define CLASS_2_12E4B5B11A3081AF_2__CTOR_OFFSET UNITYSDK_OFFSET(0x13D4DD20)

inline static constexpr unsigned int Class_2_12E4B5B11A3081AF_2_TypeDefinitionIndex = 84634;

class Class_2_12E4B5B11A3081AF_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_4; // 0x20
	::UnityEngine::Transform* Field_2_11; // 0x28
	::Class_2_FDFE69FE7B72463B* Field_2_6; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x38
	::MoleMole::MonoInputKey* Field_2_10; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x48
	::Class_2_FDFE69FE7B72463B* Field_2_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12E4B5B11A3081AF_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_12E4B5B11A3081AF_2_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_12E4B5B11A3081AF_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12E4B5B11A3081AF_2_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
