#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIBabeltowerMenuBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_E9543FE9A535C10F_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0xEC8FFE0)
#define CLASS_2_E9543FE9A535C10F_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0xEC901F0)
#define CLASS_2_E9543FE9A535C10F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xEC902C0)
#define CLASS_2_E9543FE9A535C10F__CTOR_OFFSET UNITYSDK_OFFSET(0xEC902B0)

inline static constexpr unsigned int Class_2_E9543FE9A535C10F_TypeDefinitionIndex = 54243;

class Class_2_E9543FE9A535C10F : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::NotificationBadge* Field_2_6; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x20
	::UnityEngine::RectTransform* Field_2_4; // 0x28
	::UnityEngine::RectTransform* Field_2_11; // 0x30
	::MoleMole::NotificationBadge* Field_2_5; // 0x38
	::Class_3_826A30478DA34A69<::MoleMole::UIBabeltowerMenuBtnWidgetController*>* Field_2_7; // 0x40
	::Class_3_826A30478DA34A69<::MoleMole::UIBabeltowerMenuBtnWidgetController*>* Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9543FE9A535C10F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E9543FE9A535C10F_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E9543FE9A535C10F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9543FE9A535C10F_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
