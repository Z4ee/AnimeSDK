#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
class PopText;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_2E4B5538C9AB3846_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0x1769F200)
#define CLASS_2_2E4B5538C9AB3846_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1769F330)
#define CLASS_2_2E4B5538C9AB3846__CTOR_OFFSET UNITYSDK_OFFSET(0x1769F320)

inline static constexpr unsigned int Class_2_2E4B5538C9AB3846_TypeDefinitionIndex = 87838;

class Class_2_2E4B5538C9AB3846 : public ::Class_1_EEA0111A28582B57
{
public:
	::PopText* Field_2_6; // 0x18
	::UnityEngine::CanvasGroup* Field_2_5; // 0x20
	::Class_2_FDFE69FE7B72463B* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5538C9AB3846__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5538C9AB3846_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5538C9AB3846_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
