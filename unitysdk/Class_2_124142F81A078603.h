#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_124142F81A078603_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x131E3170)
#define CLASS_2_124142F81A078603_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x1171BA30)
#define CLASS_2_124142F81A078603_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x131E3370)
#define CLASS_2_124142F81A078603__CTOR_OFFSET UNITYSDK_OFFSET(0x131E3360)

inline static constexpr unsigned int Class_2_124142F81A078603_TypeDefinitionIndex = 57775;

class Class_2_124142F81A078603 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_1; // 0x18
	::UnityEngine::GameObject* Field_2_4; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x30
	::MoleMole::NotificationBadge* Field_2_6; // 0x38
	::UnityEngine::RectTransform* Field_2_5; // 0x40
	::UnityEngine::RectTransform* Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_124142F81A078603__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_124142F81A078603_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_124142F81A078603_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_124142F81A078603_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
