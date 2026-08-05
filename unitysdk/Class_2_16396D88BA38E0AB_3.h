#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_16396D88BA38E0AB_3_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x126E1A30)
#define CLASS_2_16396D88BA38E0AB_3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x126E1AE0)
#define CLASS_2_16396D88BA38E0AB_3_METHOD_2_D0F74BA0038650D0_OFFSET UNITYSDK_OFFSET(0x126E1870)
#define CLASS_2_16396D88BA38E0AB_3__CTOR_OFFSET UNITYSDK_OFFSET(0x126E1AD0)

inline static constexpr unsigned int Class_2_16396D88BA38E0AB_3_TypeDefinitionIndex = 49043;

class Class_2_16396D88BA38E0AB_3 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x28
	::UnityEngine::GameObject* Field_2_7; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16396D88BA38E0AB_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D0F74BA0038650D0(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_16396D88BA38E0AB_3_METHOD_2_D0F74BA0038650D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_16396D88BA38E0AB_3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16396D88BA38E0AB_3_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
