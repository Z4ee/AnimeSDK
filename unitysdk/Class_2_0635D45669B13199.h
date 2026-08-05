#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_0635D45669B13199_METHOD_2_8AE01EFA7526266A_OFFSET UNITYSDK_OFFSET(0x171590A0)
#define CLASS_2_0635D45669B13199_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x171592C0)
#define CLASS_2_0635D45669B13199_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17159370)
#define CLASS_2_0635D45669B13199__CTOR_OFFSET UNITYSDK_OFFSET(0x17159360)

inline static constexpr unsigned int Class_2_0635D45669B13199_TypeDefinitionIndex = 79155;

class Class_2_0635D45669B13199 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_9; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x28
	::MoleMole::NotificationBadgeEx* Field_2_6; // 0x30
	::MoleMole::MonoGamepadCustomList* Field_2_11; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x40
	::Class_2_FDFE69FE7B72463B* Field_2_5; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0635D45669B13199__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AE01EFA7526266A(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0635D45669B13199_METHOD_2_8AE01EFA7526266A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0635D45669B13199_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0635D45669B13199_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
