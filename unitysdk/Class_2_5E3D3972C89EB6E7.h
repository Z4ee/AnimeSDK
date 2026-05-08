#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UISuibianDirectionIconWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_5E3D3972C89EB6E7_METHOD_2_43B30E80E60A7693_OFFSET UNITYSDK_OFFSET(0xF60DC90)
#define CLASS_2_5E3D3972C89EB6E7_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xF60DE50)
#define CLASS_2_5E3D3972C89EB6E7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xF60DF00)
#define CLASS_2_5E3D3972C89EB6E7__CTOR_OFFSET UNITYSDK_OFFSET(0xF60DEF0)

inline static constexpr unsigned int Class_2_5E3D3972C89EB6E7_TypeDefinitionIndex = 72087;

class Class_2_5E3D3972C89EB6E7 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x18
	::Class_3_30A064D7BE47C07D<::MoleMole::UISuibianDirectionIconWidgetController*>* Field_2_2; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x28
	::UnityEngine::RectTransform* Field_2_1; // 0x30
	::UnityEngine::RectTransform* Field_2_0; // 0x38
	::Class_3_30A064D7BE47C07D<::MoleMole::UISuibianDirectionIconWidgetController*>* Field_2_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E3D3972C89EB6E7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43B30E80E60A7693(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5E3D3972C89EB6E7_METHOD_2_43B30E80E60A7693_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5E3D3972C89EB6E7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E3D3972C89EB6E7_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
