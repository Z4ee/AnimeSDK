#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine { class CanvasGroup; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_8AC9F117F5B927F1_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x120A9C40)
#define CLASS_2_8AC9F117F5B927F1_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x120A9E30)
#define CLASS_2_8AC9F117F5B927F1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x120A9F00)
#define CLASS_2_8AC9F117F5B927F1__CTOR_OFFSET UNITYSDK_OFFSET(0x120A9EF0)

inline static constexpr unsigned int Class_2_8AC9F117F5B927F1_TypeDefinitionIndex = 62057;

class Class_2_8AC9F117F5B927F1 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_0; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x20
	::UnityEngine::CanvasGroup* Field_2_3; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x30
	::MoleMole::UIGeneralButtonController* Field_2_2; // 0x38
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC9F117F5B927F1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8AC9F117F5B927F1_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC9F117F5B927F1_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8AC9F117F5B927F1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
