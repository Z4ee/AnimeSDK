#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralIntimacyChangeWidgetController; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_222675B5E8E17837_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x12BC76F0)
#define CLASS_2_222675B5E8E17837_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x12BC78F0)
#define CLASS_2_222675B5E8E17837_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12BC7A50)
#define CLASS_2_222675B5E8E17837__CTOR_OFFSET UNITYSDK_OFFSET(0x12BC7A40)

inline static constexpr unsigned int Class_2_222675B5E8E17837_TypeDefinitionIndex = 69393;

class Class_2_222675B5E8E17837 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_30A064D7BE47C07D<::MoleMole::UIGeneralIntimacyChangeWidgetController*>* Field_2_1; // 0x18
	::Class_3_30A064D7BE47C07D<::MoleMole::UIGeneralIntimacyChangeWidgetController*>* Field_2_3; // 0x20
	::Class_3_30A064D7BE47C07D<::MoleMole::UIGeneralIntimacyChangeWidgetController*>* Field_2_2; // 0x28
	::Class_3_30A064D7BE47C07D<::MoleMole::UIGeneralIntimacyChangeWidgetController*>* Field_2_4; // 0x30
	::Class_3_30A064D7BE47C07D<::MoleMole::UIGeneralIntimacyChangeWidgetController*>* Field_2_5; // 0x38
	::UnityEngine::GameObject* Field_2_6; // 0x40
	::UIControllerExtensionData* Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_222675B5E8E17837__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_222675B5E8E17837_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_222675B5E8E17837_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_222675B5E8E17837_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}
};
