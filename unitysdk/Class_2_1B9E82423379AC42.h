#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1B9E82423379AC42_Class_1_3008768648A5355A;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralActivityTagInfoWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_1B9E82423379AC42_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x10CAA6E0)
#define CLASS_2_1B9E82423379AC42_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x10CAACC0)
#define CLASS_2_1B9E82423379AC42_METHOD_2_AEBC474B4659BDF1_OFFSET UNITYSDK_OFFSET(0x10CAA920)
#define CLASS_2_1B9E82423379AC42_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10CAAD70)
#define CLASS_2_1B9E82423379AC42__CTOR_OFFSET UNITYSDK_OFFSET(0x10CAAD60)

inline static constexpr unsigned int Class_2_1B9E82423379AC42_TypeDefinitionIndex = 63640;

class Class_2_1B9E82423379AC42 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::MoleMole::MonoGamepadRegion* Field_2_5; // 0x20
	::UnityEngine::Transform* Field_2_3; // 0x28
	::MoleMole::MonoGamepadCustomList* Field_2_7; // 0x30
	::System::Collections::Generic::List_1<::Class_2_1B9E82423379AC42_Class_1_3008768648A5355A*>* Field_2_4; // 0x38
	::Class_3_30A064D7BE47C07D<::MoleMole::UIGeneralActivityTagInfoWidgetController*>* Field_2_8; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x48
	::UnityEngine::Transform* Field_2_2; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B9E82423379AC42__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1B9E82423379AC42_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B9E82423379AC42_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1B9E82423379AC42_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_1B9E82423379AC42_Class_1_3008768648A5355A*>* Method_2_AEBC474B4659BDF1(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_1B9E82423379AC42_Class_1_3008768648A5355A*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1B9E82423379AC42_METHOD_2_AEBC474B4659BDF1_OFFSET))(this, a1, a2);
	}
};
