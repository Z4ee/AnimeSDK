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

#define CLASS_2_12E4B5B11A3081AF_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xF78F2D0)
#define CLASS_2_12E4B5B11A3081AF_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0xF78F0B0)
#define CLASS_2_12E4B5B11A3081AF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xF78F360)
#define CLASS_2_12E4B5B11A3081AF__CTOR_OFFSET UNITYSDK_OFFSET(0xF78F350)

inline static constexpr unsigned int Class_2_12E4B5B11A3081AF_TypeDefinitionIndex = 45581;

class Class_2_12E4B5B11A3081AF : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_4; // 0x18
	::MoleMole::MonoInputKey* Field_2_11; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x30
	::Class_2_FDFE69FE7B72463B* Field_2_7; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x40
	::UnityEngine::RectTransform* Field_2_5; // 0x48
	::Class_2_FDFE69FE7B72463B* Field_2_6; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12E4B5B11A3081AF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_12E4B5B11A3081AF_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_12E4B5B11A3081AF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12E4B5B11A3081AF_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
