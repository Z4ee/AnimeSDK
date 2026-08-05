#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1B9E82423379AC42_Class_1_3008768648A5355A;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralActivityTagInfoWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_1B9E82423379AC42_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x1557F0A0)
#define CLASS_2_1B9E82423379AC42_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x1557F680)
#define CLASS_2_1B9E82423379AC42_METHOD_2_AEBC474B4659BDF1_OFFSET UNITYSDK_OFFSET(0x1557F2E0)
#define CLASS_2_1B9E82423379AC42_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1557F730)
#define CLASS_2_1B9E82423379AC42__CTOR_OFFSET UNITYSDK_OFFSET(0x1557F720)

inline static constexpr unsigned int Class_2_1B9E82423379AC42_TypeDefinitionIndex = 68630;

class Class_2_1B9E82423379AC42 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::MoleMole::MonoGamepadCustomList* Field_2_9; // 0x20
	::UnityEngine::Transform* Field_2_6; // 0x28
	::System::Collections::Generic::List_1<::Class_2_1B9E82423379AC42_Class_1_3008768648A5355A*>* Field_2_4; // 0x30
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralActivityTagInfoWidgetController*>* Field_2_8; // 0x38
	::MoleMole::MonoGamepadRegion* Field_2_11; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_10; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x50
	::UnityEngine::Transform* Field_2_5; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B9E82423379AC42__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1B9E82423379AC42_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_1B9E82423379AC42_Class_1_3008768648A5355A*>* Method_2_AEBC474B4659BDF1(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_1B9E82423379AC42_Class_1_3008768648A5355A*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1B9E82423379AC42_METHOD_2_AEBC474B4659BDF1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1B9E82423379AC42_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B9E82423379AC42_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
