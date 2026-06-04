#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C5E5FE6832D0C155.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_301046E588A5ED6C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12AB5B80)
#define CLASS_3_301046E588A5ED6C_DOONENTER_OFFSET UNITYSDK_OFFSET(0x12AB59F0)
#define CLASS_3_301046E588A5ED6C_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x12AB5AB0)
#define CLASS_3_301046E588A5ED6C_METHOD_3_8A4E7CFB6A3884DD_OFFSET UNITYSDK_OFFSET(0x12AB5E70)
#define CLASS_3_301046E588A5ED6C_METHOD_3_932EF970D713663B_OFFSET UNITYSDK_OFFSET(0x12AB5CD0)
#define CLASS_3_301046E588A5ED6C_METHOD_3_DFD7F5C5419FD422_OFFSET UNITYSDK_OFFSET(0x12AB6150)
#define CLASS_3_301046E588A5ED6C_METHOD_3_E97FC8C27C810984_OFFSET UNITYSDK_OFFSET(0x12AB5ED0)
#define CLASS_3_301046E588A5ED6C__CTOR_OFFSET UNITYSDK_OFFSET(0x12AB57D0)
#define CLASS_3_301046E588A5ED6C___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12AB6090)
#define CLASS_3_301046E588A5ED6C___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0x12AB5F90)
#define CLASS_3_301046E588A5ED6C___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x12AB6010)

inline static constexpr unsigned int Class_3_301046E588A5ED6C_TypeDefinitionIndex = 73398;

class Class_3_301046E588A5ED6C : public ::Class_2_C5E5FE6832D0C155
{
public:
	::Il2CppArray<::RPG::GameCore::EntityType>* Field_3_0; // 0xC0
	::System::Action* Field_3_1; // 0xC8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* Field_3_2; // 0xD0
	::System::Action* Field_3_3; // 0xD8
	::System::Boolean Field_3_4; // 0xE0
	::System::Boolean Field_3_5; // 0xE1

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* a3, ::Il2CppArray<::System::Action*>* a4, ::System::Func_1<::System::Boolean>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>*, ::Il2CppArray<::System::Action*>*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_301046E588A5ED6C__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_301046E588A5ED6C_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_3_301046E588A5ED6C_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_301046E588A5ED6C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_932EF970D713663B(::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>*))((::PBYTE)hIl2Cpp + CLASS_3_301046E588A5ED6C_METHOD_3_932EF970D713663B_OFFSET))(this, a1);
	}

	::System::Void Method_3_8A4E7CFB6A3884DD(::System::Action* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_301046E588A5ED6C_METHOD_3_8A4E7CFB6A3884DD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_E97FC8C27C810984(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_301046E588A5ED6C_METHOD_3_E97FC8C27C810984_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_301046E588A5ED6C___IFIXBASEPROXY_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_3_301046E588A5ED6C___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_301046E588A5ED6C___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_DFD7F5C5419FD422(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_301046E588A5ED6C_METHOD_3_DFD7F5C5419FD422_OFFSET))(this, a1);
	}
};
