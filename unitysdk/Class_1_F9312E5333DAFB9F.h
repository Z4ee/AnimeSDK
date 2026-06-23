#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_470;
class Class_1_88757C352B68BC6A;
namespace MoleMole { class UIInLevelSkillButtonBranchBaseController; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_F9312E5333DAFB9F_METHOD_1_1134362254038D15_OFFSET UNITYSDK_OFFSET(0x11E821E0)
#define CLASS_1_F9312E5333DAFB9F_METHOD_1_8A045220BBE84AD3_OFFSET UNITYSDK_OFFSET(0x11E82390)
#define CLASS_1_F9312E5333DAFB9F__CTOR_OFFSET UNITYSDK_OFFSET(0x11E821D0)

inline static constexpr unsigned int Class_1_F9312E5333DAFB9F_TypeDefinitionIndex = 58600;

class Class_1_F9312E5333DAFB9F : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9312E5333DAFB9F__CTOR_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIInLevelSkillButtonBranchBaseController* Method_1_1134362254038D15(::MoleMole::UIWindowController* a1, ::UnityEngine::Transform* a2, ::Class_1_88757C352B68BC6A* a3)
	{
		return ((::MoleMole::UIInLevelSkillButtonBranchBaseController*(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*, ::Class_1_88757C352B68BC6A*))((::PBYTE)hIl2Cpp + CLASS_1_F9312E5333DAFB9F_METHOD_1_1134362254038D15_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_470* Method_1_8A045220BBE84AD3(::MoleMole::UIWindowController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::Class_0_16E4307DCC419505_470*(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_F9312E5333DAFB9F_METHOD_1_8A045220BBE84AD3_OFFSET))(this, a1, a2);
	}
};
