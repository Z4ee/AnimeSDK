#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_CA08F1EE0CFF7DDD_Class_2_2B4A00883B7DDDB4_1;
class Class_2_CA08F1EE0CFF7DDD_Class_2_CC03AAEE6FCC732C_28;
class Class_2_CA67A9CEB871FFD3;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIShareBtnWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_CA08F1EE0CFF7DDD_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x17AEAEC0)
#define CLASS_2_CA08F1EE0CFF7DDD_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x17AEAB80)
#define CLASS_2_CA08F1EE0CFF7DDD_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17AEB000)
#define CLASS_2_CA08F1EE0CFF7DDD__CTOR_OFFSET UNITYSDK_OFFSET(0x17AEAFF0)

inline static constexpr unsigned int Class_2_CA08F1EE0CFF7DDD_TypeDefinitionIndex = 66591;

class Class_2_CA08F1EE0CFF7DDD : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UIImgEventTrigger* Field_2_5; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x20
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIShareBtnWidgetController*>* Field_2_1; // 0x28
	::UnityEngine::GameObject* Field_2_2; // 0x30
	::UnityEngine::GameObject* Field_2_11; // 0x38
	::UnityEngine::RectTransform* Field_2_8; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x48
	::UIControllerExtensionData* Field_2_6; // 0x50
	::Class_2_CA67A9CEB871FFD3* Field_2_4; // 0x58
	::Class_2_0D31A1661D004892<::Class_2_CA08F1EE0CFF7DDD_Class_2_CC03AAEE6FCC732C_28*>* Field_2_9; // 0x60
	::Class_2_0D31A1661D004892<::Class_2_CA08F1EE0CFF7DDD_Class_2_2B4A00883B7DDDB4_1*>* Field_2_3; // 0x68
	::UnityEngine::GameObject* Field_2_12; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_13; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA08F1EE0CFF7DDD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CA08F1EE0CFF7DDD_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CA08F1EE0CFF7DDD_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA08F1EE0CFF7DDD_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}
};
