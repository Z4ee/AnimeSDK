#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralSortWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_81A83A606854345F_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0xFBCA200)
#define CLASS_2_81A83A606854345F_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0xFBCA400)
#define CLASS_2_81A83A606854345F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xFBCA4F0)
#define CLASS_2_81A83A606854345F__CTOR_OFFSET UNITYSDK_OFFSET(0xFBCA4E0)

inline static constexpr unsigned int Class_2_81A83A606854345F_TypeDefinitionIndex = 76926;

class Class_2_81A83A606854345F : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralSortWidgetController*>* Field_2_0; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x28
	::UnityEngine::UI::Text* Field_2_4; // 0x30
	::UnityEngine::GameObject* Field_2_5; // 0x38
	::MonoUITableScrollV2* Field_2_3; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A83A606854345F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_81A83A606854345F_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A83A606854345F_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_81A83A606854345F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
