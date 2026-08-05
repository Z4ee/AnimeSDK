#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_80927B392D07AC08_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x1296DF60)
#define CLASS_2_80927B392D07AC08_METHOD_2_4B641F764AEF5BEB_OFFSET UNITYSDK_OFFSET(0x1296DDF0)
#define CLASS_2_80927B392D07AC08_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1296DFF0)
#define CLASS_2_80927B392D07AC08__CTOR_OFFSET UNITYSDK_OFFSET(0x1296DFE0)

inline static constexpr unsigned int Class_2_80927B392D07AC08_TypeDefinitionIndex = 47896;

class Class_2_80927B392D07AC08 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::NotificationBadgeEx* Field_2_6; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x20
	::UnityEngine::UI::Text* Field_2_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80927B392D07AC08__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4B641F764AEF5BEB(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_80927B392D07AC08_METHOD_2_4B641F764AEF5BEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_80927B392D07AC08_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80927B392D07AC08_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
