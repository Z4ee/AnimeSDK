#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_834D5E50EF6D17E3_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x193A93C0)
#define CLASS_2_834D5E50EF6D17E3_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x193A95C0)
#define CLASS_2_834D5E50EF6D17E3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x193A96D0)
#define CLASS_2_834D5E50EF6D17E3__CTOR_OFFSET UNITYSDK_OFFSET(0x193A96C0)

inline static constexpr unsigned int Class_2_834D5E50EF6D17E3_TypeDefinitionIndex = 41879;

class Class_2_834D5E50EF6D17E3 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_7; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x20
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_4; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x30
	::UnityEngine::GameObject* Field_2_5; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x40
	::MonoUITableScrollV2* Field_2_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_834D5E50EF6D17E3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_834D5E50EF6D17E3_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_834D5E50EF6D17E3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_834D5E50EF6D17E3_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
