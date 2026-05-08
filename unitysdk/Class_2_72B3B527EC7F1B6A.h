#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_72B3B527EC7F1B6A_Class_2_657FCF08AA744B3D_2;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_72B3B527EC7F1B6A_METHOD_2_8AE01EFA7526266A_OFFSET UNITYSDK_OFFSET(0x14163CA0)
#define CLASS_2_72B3B527EC7F1B6A_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x14163EE0)
#define CLASS_2_72B3B527EC7F1B6A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14163FB0)
#define CLASS_2_72B3B527EC7F1B6A__CTOR_OFFSET UNITYSDK_OFFSET(0x14163FA0)

inline static constexpr unsigned int Class_2_72B3B527EC7F1B6A_TypeDefinitionIndex = 76784;

class Class_2_72B3B527EC7F1B6A : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_72B3B527EC7F1B6A_Class_2_657FCF08AA744B3D_2*>* Field_2_6; // 0x20
	::MoleMole::MonoInputKey* Field_2_2; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x30
	::MoleMole::UIGeneralButtonController* Field_2_0; // 0x38
	::UnityEngine::GameObject* Field_2_7; // 0x40
	::MoleMole::MonoGamepadModule* Field_2_1; // 0x48
	::MoleMole::NotificationBadgeEx* Field_2_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72B3B527EC7F1B6A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AE01EFA7526266A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_72B3B527EC7F1B6A_METHOD_2_8AE01EFA7526266A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_72B3B527EC7F1B6A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72B3B527EC7F1B6A_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
