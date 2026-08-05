#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
class UIControllerExtensionData;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIWorkbenchMainPageBigBtnWidgetController; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_118B0BB7260905B4_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x16ED7360)
#define CLASS_2_118B0BB7260905B4_METHOD_2_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x16ED7130)
#define CLASS_2_118B0BB7260905B4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16ED7470)
#define CLASS_2_118B0BB7260905B4__CTOR_OFFSET UNITYSDK_OFFSET(0x16ED7460)

inline static constexpr unsigned int Class_2_118B0BB7260905B4_TypeDefinitionIndex = 60447;

class Class_2_118B0BB7260905B4 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x18
	::MoleMole::MonoGamepadModule* Field_2_11; // 0x20
	::Class_3_826A30478DA34A69<::MoleMole::UIWorkbenchMainPageBigBtnWidgetController*>* Field_2_10; // 0x28
	::UIControllerExtensionData* Field_2_4; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x38
	::UnityEngine::RectTransform* Field_2_6; // 0x40
	::MonoUITableScrollV2* Field_2_7; // 0x48
	::MonoUITableScrollV2* Field_2_0; // 0x50
	::MoleMole::MonoGamepadModule* Field_2_9; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_118B0BB7260905B4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_929BD2659F9FA6CA(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_118B0BB7260905B4_METHOD_2_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_118B0BB7260905B4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_118B0BB7260905B4_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
