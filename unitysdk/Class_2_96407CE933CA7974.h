#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_96407CE933CA7974_Class_2_657FCF08AA744B3D_1;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_96407CE933CA7974_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x12A83950)
#define CLASS_2_96407CE933CA7974_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12A83A00)
#define CLASS_2_96407CE933CA7974_METHOD_2_E29396CF1CC8FD8D_OFFSET UNITYSDK_OFFSET(0x12A83770)
#define CLASS_2_96407CE933CA7974__CTOR_OFFSET UNITYSDK_OFFSET(0x12A839F0)

inline static constexpr unsigned int Class_2_96407CE933CA7974_TypeDefinitionIndex = 51661;

class Class_2_96407CE933CA7974 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::UIGeneralButtonController* Field_2_2; // 0x18
	::MoleMole::MonoInputKey* Field_2_0; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_96407CE933CA7974_Class_2_657FCF08AA744B3D_1*>* Field_2_5; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x30
	::MoleMole::MonoGamepadModule* Field_2_1; // 0x38
	::MoleMole::NotificationBadgeEx* Field_2_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96407CE933CA7974__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E29396CF1CC8FD8D(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_96407CE933CA7974_METHOD_2_E29396CF1CC8FD8D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_96407CE933CA7974_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96407CE933CA7974_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
