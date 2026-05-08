#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIVHSPlayerRoleWidgetController; }
namespace UnityEngine { class CanvasGroup; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_7E0B8A0505C257C2_METHOD_2_37917191637BFFF4_OFFSET UNITYSDK_OFFSET(0x139F9E80)
#define CLASS_2_7E0B8A0505C257C2_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x139F9FD0)
#define CLASS_2_7E0B8A0505C257C2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x139FA0A0)
#define CLASS_2_7E0B8A0505C257C2__CTOR_OFFSET UNITYSDK_OFFSET(0x139FA090)

inline static constexpr unsigned int Class_2_7E0B8A0505C257C2_TypeDefinitionIndex = 41100;

class Class_2_7E0B8A0505C257C2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_30A064D7BE47C07D<::MoleMole::UIVHSPlayerRoleWidgetController*>* Field_2_0; // 0x18
	::UnityEngine::CanvasGroup* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E0B8A0505C257C2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_37917191637BFFF4(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7E0B8A0505C257C2_METHOD_2_37917191637BFFF4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E0B8A0505C257C2_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7E0B8A0505C257C2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
