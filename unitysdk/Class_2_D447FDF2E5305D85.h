#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_134E5210FBBAC6E5;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIAddFriendWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFriendInfoWidgetController; }
namespace MoleMole { class UIPersonalInfoWidgetController; }
namespace MoleMole { class UIRecentPlayerWidgetController; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_D447FDF2E5305D85_METHOD_2_22001C50FA070A38_OFFSET UNITYSDK_OFFSET(0x13B18170)
#define CLASS_2_D447FDF2E5305D85_METHOD_2_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x13B184D0)
#define CLASS_2_D447FDF2E5305D85_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13B186A0)
#define CLASS_2_D447FDF2E5305D85__CTOR_OFFSET UNITYSDK_OFFSET(0x13B18690)

inline static constexpr unsigned int Class_2_D447FDF2E5305D85_TypeDefinitionIndex = 68806;

class Class_2_D447FDF2E5305D85 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_9; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_11; // 0x20
	::Class_2_134E5210FBBAC6E5* Field_2_0; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x38
	::UnityEngine::RectTransform* Field_2_8; // 0x40
	::Class_3_30A064D7BE47C07D<::MoleMole::UIFriendInfoWidgetController*>* Field_2_2; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x50
	::Class_3_30A064D7BE47C07D<::MoleMole::UIPersonalInfoWidgetController*>* Field_2_1; // 0x58
	::Class_3_30A064D7BE47C07D<::MoleMole::UIRecentPlayerWidgetController*>* Field_2_4; // 0x60
	::Class_3_30A064D7BE47C07D<::MoleMole::UIAddFriendWidgetController*>* Field_2_3; // 0x68
	::Class_2_B4378B46E0020E85* Field_2_10; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D447FDF2E5305D85__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_22001C50FA070A38(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D447FDF2E5305D85_METHOD_2_22001C50FA070A38_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D447FDF2E5305D85_METHOD_2_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D447FDF2E5305D85_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
