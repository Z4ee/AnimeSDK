#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class LevelUpProgressWidget;
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_DBC51CF79F50022E_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x10977CD0)
#define CLASS_2_DBC51CF79F50022E_METHOD_2_8AE01EFA7526266A_OFFSET UNITYSDK_OFFSET(0x10977AC0)
#define CLASS_2_DBC51CF79F50022E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10977D60)
#define CLASS_2_DBC51CF79F50022E__CTOR_OFFSET UNITYSDK_OFFSET(0x10977D50)

inline static constexpr unsigned int Class_2_DBC51CF79F50022E_TypeDefinitionIndex = 76626;

class Class_2_DBC51CF79F50022E : public ::Class_1_EEA0111A28582B57
{
public:
	::LevelUpProgressWidget* Field_2_10; // 0x18
	::UnityEngine::Transform* Field_2_4; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x28
	::MoleMole::MonoInputKey* Field_2_8; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x40
	::UnityEngine::GameObject* Field_2_11; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x50
	::MoleMole::MonoInputKey* Field_2_9; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBC51CF79F50022E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AE01EFA7526266A(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DBC51CF79F50022E_METHOD_2_8AE01EFA7526266A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBC51CF79F50022E_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DBC51CF79F50022E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
