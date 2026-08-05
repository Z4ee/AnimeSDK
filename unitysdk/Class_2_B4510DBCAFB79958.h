#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define CLASS_2_B4510DBCAFB79958_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x175C6220)
#define CLASS_2_B4510DBCAFB79958_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x175C6010)
#define CLASS_2_B4510DBCAFB79958_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x175C62B0)
#define CLASS_2_B4510DBCAFB79958__CTOR_OFFSET UNITYSDK_OFFSET(0x175C62A0)

inline static constexpr unsigned int Class_2_B4510DBCAFB79958_TypeDefinitionIndex = 81132;

class Class_2_B4510DBCAFB79958 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_6; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x30
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_5; // 0x38
	::UnityEngine::GameObject* Field_2_9; // 0x40
	::Class_2_FDFE69FE7B72463B* Field_2_10; // 0x48
	::UnityEngine::Transform* Field_2_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4510DBCAFB79958__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B4510DBCAFB79958_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4510DBCAFB79958_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B4510DBCAFB79958_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
