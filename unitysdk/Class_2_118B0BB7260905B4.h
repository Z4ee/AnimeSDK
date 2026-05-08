#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
class UIControllerExtensionData;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIWorkbenchMainPageBigBtnWidgetController; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_118B0BB7260905B4_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x12CC9EF0)
#define CLASS_2_118B0BB7260905B4_METHOD_2_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x12CC9CC0)
#define CLASS_2_118B0BB7260905B4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12CCA000)
#define CLASS_2_118B0BB7260905B4__CTOR_OFFSET UNITYSDK_OFFSET(0x12CC9FF0)

inline static constexpr unsigned int Class_2_118B0BB7260905B4_TypeDefinitionIndex = 76480;

class Class_2_118B0BB7260905B4 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x18
	::MoleMole::MonoGamepadModule* Field_2_8; // 0x20
	::UIControllerExtensionData* Field_2_5; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x30
	::MoleMole::MonoGamepadModule* Field_2_6; // 0x38
	::MonoUITableScrollV2* Field_2_2; // 0x40
	::UnityEngine::RectTransform* Field_2_3; // 0x48
	::MonoUITableScrollV2* Field_2_1; // 0x50
	::Class_3_30A064D7BE47C07D<::MoleMole::UIWorkbenchMainPageBigBtnWidgetController*>* Field_2_7; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_118B0BB7260905B4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_929BD2659F9FA6CA(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_118B0BB7260905B4_METHOD_2_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_118B0BB7260905B4_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_118B0BB7260905B4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
