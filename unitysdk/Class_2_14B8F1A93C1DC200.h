#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_134E5210FBBAC6E5;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFriendSystemWidgetController; }
namespace UnityEngine::UI::Extension { class UITabButton; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_14B8F1A93C1DC200_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x18A41820)
#define CLASS_2_14B8F1A93C1DC200_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x18A41A40)
#define CLASS_2_14B8F1A93C1DC200_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x18A41AF0)
#define CLASS_2_14B8F1A93C1DC200__CTOR_OFFSET UNITYSDK_OFFSET(0x18A41AE0)

inline static constexpr unsigned int Class_2_14B8F1A93C1DC200_TypeDefinitionIndex = 90162;

class Class_2_14B8F1A93C1DC200 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UITabButton* Field_2_5; // 0x18
	::Class_2_134E5210FBBAC6E5* Field_2_6; // 0x20
	::UnityEngine::UI::Extension::UITabButton* Field_2_4; // 0x28
	::UnityEngine::UI::Extension::UITabButton* Field_2_11; // 0x30
	::Class_3_826A30478DA34A69<::MoleMole::UIFriendSystemWidgetController*>* Field_2_7; // 0x38
	::UnityEngine::UI::Extension::UITabButton* Field_2_10; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14B8F1A93C1DC200__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_14B8F1A93C1DC200_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14B8F1A93C1DC200_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_14B8F1A93C1DC200_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
