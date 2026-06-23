#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralActivityTagInfoWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_1060F418DF0EA240_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x13194720)
#define CLASS_2_1060F418DF0EA240_METHOD_2_65367CC4DD011F4E_OFFSET UNITYSDK_OFFSET(0x131945D0)
#define CLASS_2_1060F418DF0EA240_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x131947B0)
#define CLASS_2_1060F418DF0EA240_METHOD_2_D25F539834051480_OFFSET UNITYSDK_OFFSET(0x131943F0)
#define CLASS_2_1060F418DF0EA240__CTOR_OFFSET UNITYSDK_OFFSET(0x131947A0)

inline static constexpr unsigned int Class_2_1060F418DF0EA240_TypeDefinitionIndex = 60882;

class Class_2_1060F418DF0EA240 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralActivityTagInfoWidgetController*>* Field_2_6; // 0x20
	::MoleMole::MonoGamepadNestedListDelegate* Field_2_5; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_0; // 0x30
	::UnityEngine::RectTransform* Field_2_4; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x40
	::UnityEngine::RectTransform* Field_2_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1060F418DF0EA240__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D25F539834051480(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1060F418DF0EA240_METHOD_2_D25F539834051480_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1060F418DF0EA240_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Method_2_65367CC4DD011F4E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1060F418DF0EA240_METHOD_2_65367CC4DD011F4E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1060F418DF0EA240_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
