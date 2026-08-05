#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class TweenTextCount; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_7E79706B325D55F0_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x13B58720)
#define CLASS_2_7E79706B325D55F0_METHOD_2_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x13B584F0)
#define CLASS_2_7E79706B325D55F0_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13B58830)
#define CLASS_2_7E79706B325D55F0__CTOR_OFFSET UNITYSDK_OFFSET(0x13B58820)

inline static constexpr unsigned int Class_2_7E79706B325D55F0_TypeDefinitionIndex = 60923;

class Class_2_7E79706B325D55F0 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_6; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x30
	::UnityEngine::Transform* Field_2_7; // 0x38
	::UnityEngine::GameObject* Field_2_11; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x48
	::UnityEngine::GameObject* Field_2_5; // 0x50
	::MoleMole::TweenTextCount* Field_2_9; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E79706B325D55F0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_929BD2659F9FA6CA(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7E79706B325D55F0_METHOD_2_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7E79706B325D55F0_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E79706B325D55F0_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
