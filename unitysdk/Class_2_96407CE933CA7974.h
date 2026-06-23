#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_96407CE933CA7974_Class_2_657FCF08AA744B3D_2;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_96407CE933CA7974_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x137A2520)
#define CLASS_2_96407CE933CA7974_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x137A25D0)
#define CLASS_2_96407CE933CA7974_METHOD_2_E29396CF1CC8FD8D_OFFSET UNITYSDK_OFFSET(0x137A2340)
#define CLASS_2_96407CE933CA7974__CTOR_OFFSET UNITYSDK_OFFSET(0x137A25C0)

inline static constexpr unsigned int Class_2_96407CE933CA7974_TypeDefinitionIndex = 80271;

class Class_2_96407CE933CA7974 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x18
	::MoleMole::MonoInputKey* Field_2_2; // 0x20
	::MoleMole::MonoGamepadModule* Field_2_1; // 0x28
	::MoleMole::UIGeneralButtonController* Field_2_0; // 0x30
	::Class_2_0D31A1661D004892<::Class_2_96407CE933CA7974_Class_2_657FCF08AA744B3D_2*>* Field_2_5; // 0x38
	::MoleMole::NotificationBadgeEx* Field_2_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96407CE933CA7974__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E29396CF1CC8FD8D(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_96407CE933CA7974_METHOD_2_E29396CF1CC8FD8D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96407CE933CA7974_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_96407CE933CA7974_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
