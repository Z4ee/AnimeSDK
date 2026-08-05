#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_D7D86686B0E3764C_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0x141CDDF0)
#define CLASS_2_D7D86686B0E3764C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x141CDF40)
#define CLASS_2_D7D86686B0E3764C__CTOR_OFFSET UNITYSDK_OFFSET(0x141CDF30)

inline static constexpr unsigned int Class_2_D7D86686B0E3764C_TypeDefinitionIndex = 88141;

class Class_2_D7D86686B0E3764C : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x18
	::UnityEngine::UI::LayoutElement* Field_2_7; // 0x20
	::Class_2_FDFE69FE7B72463B* Field_2_1; // 0x28
	::UnityEngine::UI::VerticalLayoutGroup* Field_2_0; // 0x30
	::Class_2_FDFE69FE7B72463B* Field_2_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7D86686B0E3764C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D7D86686B0E3764C_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D7D86686B0E3764C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
