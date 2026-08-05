#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralIntimacyChangeWidgetController; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_222675B5E8E17837_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x120CA600)
#define CLASS_2_222675B5E8E17837_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x120CA800)
#define CLASS_2_222675B5E8E17837_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x120CA960)
#define CLASS_2_222675B5E8E17837__CTOR_OFFSET UNITYSDK_OFFSET(0x120CA950)

inline static constexpr unsigned int Class_2_222675B5E8E17837_TypeDefinitionIndex = 60147;

class Class_2_222675B5E8E17837 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralIntimacyChangeWidgetController*>* Field_2_1; // 0x18
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralIntimacyChangeWidgetController*>* Field_2_0; // 0x20
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralIntimacyChangeWidgetController*>* Field_2_6; // 0x28
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralIntimacyChangeWidgetController*>* Field_2_2; // 0x30
	::UIControllerExtensionData* Field_2_3; // 0x38
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralIntimacyChangeWidgetController*>* Field_2_7; // 0x40
	::UnityEngine::GameObject* Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_222675B5E8E17837__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_222675B5E8E17837_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_222675B5E8E17837_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_222675B5E8E17837_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}
};
