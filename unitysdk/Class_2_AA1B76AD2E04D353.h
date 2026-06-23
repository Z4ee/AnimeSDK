#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_AA1B76AD2E04D353_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x16B1D600)
#define CLASS_2_AA1B76AD2E04D353_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x16B1D810)
#define CLASS_2_AA1B76AD2E04D353_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16B1D8C0)
#define CLASS_2_AA1B76AD2E04D353__CTOR_OFFSET UNITYSDK_OFFSET(0x16B1D8B0)

inline static constexpr unsigned int Class_2_AA1B76AD2E04D353_TypeDefinitionIndex = 46948;

class Class_2_AA1B76AD2E04D353 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_2; // 0x18
	::UnityEngine::CanvasGroup* Field_2_4; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x30
	::UnityEngine::RectTransform* Field_2_3; // 0x38
	::UIControllerExtensionData* Field_2_5; // 0x40
	::Class_2_FDFE69FE7B72463B* Field_2_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA1B76AD2E04D353__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AA1B76AD2E04D353_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AA1B76AD2E04D353_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA1B76AD2E04D353_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
