#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_40AE66977C898EB6_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x16AF6D80)
#define CLASS_2_40AE66977C898EB6_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x16AF6F60)
#define CLASS_2_40AE66977C898EB6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16AF70A0)
#define CLASS_2_40AE66977C898EB6__CTOR_OFFSET UNITYSDK_OFFSET(0x16AF7090)

inline static constexpr unsigned int Class_2_40AE66977C898EB6_TypeDefinitionIndex = 66941;

class Class_2_40AE66977C898EB6 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x18
	::UnityEngine::Transform* Field_2_5; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x28
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_4; // 0x30
	::MonoUITableScrollV2* Field_2_1; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x40
	::MoleMole::NotificationBadgeEx* Field_2_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40AE66977C898EB6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_40AE66977C898EB6_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40AE66977C898EB6_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_40AE66977C898EB6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
