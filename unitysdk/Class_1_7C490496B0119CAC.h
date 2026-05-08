#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_620;
class Class_1_F1489324C27A1B39;
namespace MoleMole { class UIInLevelSkillButtonBranchBaseController; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_7C490496B0119CAC_METHOD_1_037BB614FDBC3802_OFFSET UNITYSDK_OFFSET(0x11582D80)
#define CLASS_1_7C490496B0119CAC_METHOD_1_8A045220BBE84AD3_OFFSET UNITYSDK_OFFSET(0x11582EC0)
#define CLASS_1_7C490496B0119CAC__CTOR_OFFSET UNITYSDK_OFFSET(0x11582D70)

inline static constexpr unsigned int Class_1_7C490496B0119CAC_TypeDefinitionIndex = 71314;

class Class_1_7C490496B0119CAC : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7C490496B0119CAC__CTOR_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIInLevelSkillButtonBranchBaseController* Method_1_037BB614FDBC3802(::MoleMole::UIWindowController* a1, ::UnityEngine::Transform* a2, ::Class_1_F1489324C27A1B39* a3)
	{
		return ((::MoleMole::UIInLevelSkillButtonBranchBaseController*(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*, ::Class_1_F1489324C27A1B39*))((::PBYTE)hIl2Cpp + CLASS_1_7C490496B0119CAC_METHOD_1_037BB614FDBC3802_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_620* Method_1_8A045220BBE84AD3(::MoleMole::UIWindowController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::Class_0_16E4307DCC419505_620*(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_7C490496B0119CAC_METHOD_1_8A045220BBE84AD3_OFFSET))(this, a1, a2);
	}
};
