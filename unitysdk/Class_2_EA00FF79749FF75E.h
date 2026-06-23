#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UICommonTimeCoolDownWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_EA00FF79749FF75E_METHOD_2_8AE01EFA7526266A_OFFSET UNITYSDK_OFFSET(0x125C4CC0)
#define CLASS_2_EA00FF79749FF75E_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x125C4F10)
#define CLASS_2_EA00FF79749FF75E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x125C4FC0)
#define CLASS_2_EA00FF79749FF75E__CTOR_OFFSET UNITYSDK_OFFSET(0x125C4FB0)

inline static constexpr unsigned int Class_2_EA00FF79749FF75E_TypeDefinitionIndex = 53751;

class Class_2_EA00FF79749FF75E : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_4; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x20
	::UnityEngine::GameObject* Field_2_2; // 0x28
	::UnityEngine::GameObject* Field_2_3; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x38
	::Class_2_FDFE69FE7B72463B* Field_2_7; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x48
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UICommonTimeCoolDownWidgetController*>* Field_2_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA00FF79749FF75E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AE01EFA7526266A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_EA00FF79749FF75E_METHOD_2_8AE01EFA7526266A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA00FF79749FF75E_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_EA00FF79749FF75E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
