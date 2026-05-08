#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIMusicBattleInLevelInteractWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_5D5F44BBB4D4282F_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x11B03590)
#define CLASS_2_5D5F44BBB4D4282F_METHOD_2_5519EC69077F3A01_OFFSET UNITYSDK_OFFSET(0x11B03390)
#define CLASS_2_5D5F44BBB4D4282F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11B03620)
#define CLASS_2_5D5F44BBB4D4282F__CTOR_OFFSET UNITYSDK_OFFSET(0x11B03610)

inline static constexpr unsigned int Class_2_5D5F44BBB4D4282F_TypeDefinitionIndex = 45543;

class Class_2_5D5F44BBB4D4282F : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_3; // 0x18
	::UnityEngine::RectTransform* Field_2_2; // 0x20
	::Class_2_FDFE69FE7B72463B* Field_2_5; // 0x28
	::Class_3_30A064D7BE47C07D<::MoleMole::UIMusicBattleInLevelInteractWidgetController*>* Field_2_0; // 0x30
	::Class_2_FDFE69FE7B72463B* Field_2_4; // 0x38
	::Class_2_FDFE69FE7B72463B* Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D5F44BBB4D4282F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5519EC69077F3A01(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5D5F44BBB4D4282F_METHOD_2_5519EC69077F3A01_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5D5F44BBB4D4282F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D5F44BBB4D4282F_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
