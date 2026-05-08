#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIBabeltowerMenuBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_E9543FE9A535C10F_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x14AA3CB0)
#define CLASS_2_E9543FE9A535C10F_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x14AA3EC0)
#define CLASS_2_E9543FE9A535C10F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14AA3F90)
#define CLASS_2_E9543FE9A535C10F__CTOR_OFFSET UNITYSDK_OFFSET(0x14AA3F80)

inline static constexpr unsigned int Class_2_E9543FE9A535C10F_TypeDefinitionIndex = 51809;

class Class_2_E9543FE9A535C10F : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_30A064D7BE47C07D<::MoleMole::UIBabeltowerMenuBtnWidgetController*>* Field_2_2; // 0x18
	::UnityEngine::RectTransform* Field_2_5; // 0x20
	::MoleMole::NotificationBadge* Field_2_4; // 0x28
	::MoleMole::NotificationBadge* Field_2_3; // 0x30
	::UnityEngine::RectTransform* Field_2_6; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x40
	::Class_3_30A064D7BE47C07D<::MoleMole::UIBabeltowerMenuBtnWidgetController*>* Field_2_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9543FE9A535C10F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E9543FE9A535C10F_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9543FE9A535C10F_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E9543FE9A535C10F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
