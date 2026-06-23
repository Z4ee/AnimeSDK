#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define CLASS_2_D388887F4DEDDB9B_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x133A0460)
#define CLASS_2_D388887F4DEDDB9B_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x133A0630)
#define CLASS_2_D388887F4DEDDB9B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x133A0700)
#define CLASS_2_D388887F4DEDDB9B__CTOR_OFFSET UNITYSDK_OFFSET(0x133A06F0)

inline static constexpr unsigned int Class_2_D388887F4DEDDB9B_TypeDefinitionIndex = 73510;

class Class_2_D388887F4DEDDB9B : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x18
	::UnityEngine::Transform* Field_2_4; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28
	::MonoUITableScrollV2* Field_2_1; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x38
	::MoleMole::NotificationBadgeEx* Field_2_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D388887F4DEDDB9B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D388887F4DEDDB9B_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D388887F4DEDDB9B_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D388887F4DEDDB9B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
