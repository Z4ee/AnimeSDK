#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIVHSPlayerRoleWidgetController; }
namespace UnityEngine { class CanvasGroup; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_7E0B8A0505C257C2_METHOD_2_37917191637BFFF4_OFFSET UNITYSDK_OFFSET(0x1BC37280)
#define CLASS_2_7E0B8A0505C257C2_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x1BC373D0)
#define CLASS_2_7E0B8A0505C257C2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1BC374A0)
#define CLASS_2_7E0B8A0505C257C2__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC37490)

inline static constexpr unsigned int Class_2_7E0B8A0505C257C2_TypeDefinitionIndex = 56137;

class Class_2_7E0B8A0505C257C2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_826A30478DA34A69<::MoleMole::UIVHSPlayerRoleWidgetController*>* Field_2_0; // 0x18
	::UnityEngine::CanvasGroup* Field_2_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E0B8A0505C257C2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_37917191637BFFF4(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7E0B8A0505C257C2_METHOD_2_37917191637BFFF4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7E0B8A0505C257C2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E0B8A0505C257C2_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
