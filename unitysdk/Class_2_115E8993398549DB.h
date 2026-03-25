#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_87854DF4F09D42E1.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_115E8993398549DB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA1B7A60)
#define CLASS_2_115E8993398549DB_DOONENTER_OFFSET UNITYSDK_OFFSET(0xA1B7C00)
#define CLASS_2_115E8993398549DB_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xA1B8000)
#define CLASS_2_115E8993398549DB_GET_BLOCKDIALOGUEINRANGE_OFFSET UNITYSDK_OFFSET(0xA1B8320)
#define CLASS_2_115E8993398549DB_GET_DISABLEAFTERTRIGGERED_OFFSET UNITYSDK_OFFSET(0xA1B8300)
#define CLASS_2_115E8993398549DB_GET_ENSUREIMMEDIATETASK_OFFSET UNITYSDK_OFFSET(0xA1B8340)
#define CLASS_2_115E8993398549DB_METHOD_2_227DBAAD8A7BA789_OFFSET UNITYSDK_OFFSET(0xA1B8360)
#define CLASS_2_115E8993398549DB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA1B7BB0)
#define CLASS_2_115E8993398549DB_ONTRIGGEREDLOGICFINISH_OFFSET UNITYSDK_OFFSET(0xA1B7AB0)
#define CLASS_2_115E8993398549DB_SET_BLOCKDIALOGUEINRANGE_OFFSET UNITYSDK_OFFSET(0xA1B8330)
#define CLASS_2_115E8993398549DB_SET_DISABLEAFTERTRIGGERED_OFFSET UNITYSDK_OFFSET(0xA1B8310)
#define CLASS_2_115E8993398549DB_SET_ENSUREIMMEDIATETASK_OFFSET UNITYSDK_OFFSET(0xA1B8350)
#define CLASS_2_115E8993398549DB__CCTOR_OFFSET UNITYSDK_OFFSET(0xA1B8460)
#define CLASS_2_115E8993398549DB__CTOR_OFFSET UNITYSDK_OFFSET(0xA1B7A00)
#define CLASS_2_115E8993398549DB___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA1B8480)
#define CLASS_2_115E8993398549DB___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0xA1B84A0)
#define CLASS_2_115E8993398549DB___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xA1B84B0)
#define CLASS_2_115E8993398549DB___IFIXBASEPROXY_ONTRIGGEREDLOGICFINISH_OFFSET UNITYSDK_OFFSET(0xA1B8490)

inline static constexpr unsigned int Class_2_115E8993398549DB_TypeDefinitionIndex = 46333;

class Class_2_115E8993398549DB : public ::Class_1_87854DF4F09D42E1
{
public:
	static ::System::String** StaticGet_Field_2_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_115E8993398549DB_TypeDefinitionIndex)->GetStaticField(0x22AE0);
	}
	::RPG::GameCore::TaskContext* Field_2_4; // 0x98
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_2_5; // 0xA0
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_2_6; // 0xA8
	::System::Boolean Field_2_1; // 0xB0
	::System::Boolean _EnsureImmediateTask_k__BackingField; // 0xB1
	::System::Boolean _DisableAfterTriggered_k__BackingField; // 0xB2
	::System::Boolean _BlockDialogueInRange_k__BackingField; // 0xB3

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a3, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_115E8993398549DB__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_115E8993398549DB__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_115E8993398549DB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTriggeredLogicFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_115E8993398549DB_ONTRIGGEREDLOGICFINISH_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_115E8993398549DB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_115E8993398549DB_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_115E8993398549DB_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_DisableAfterTriggered()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_115E8993398549DB_GET_DISABLEAFTERTRIGGERED_OFFSET))(this);
	}

	::System::Void set_DisableAfterTriggered(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_115E8993398549DB_SET_DISABLEAFTERTRIGGERED_OFFSET))(this, value);
	}

	::System::Boolean get_BlockDialogueInRange()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_115E8993398549DB_GET_BLOCKDIALOGUEINRANGE_OFFSET))(this);
	}

	::System::Void set_BlockDialogueInRange(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_115E8993398549DB_SET_BLOCKDIALOGUEINRANGE_OFFSET))(this, value);
	}

	::System::Boolean get_EnsureImmediateTask()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_115E8993398549DB_GET_ENSUREIMMEDIATETASK_OFFSET))(this);
	}

	::System::Void set_EnsureImmediateTask(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_115E8993398549DB_SET_ENSUREIMMEDIATETASK_OFFSET))(this, value);
	}

	static ::System::String* Method_2_227DBAAD8A7BA789(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_115E8993398549DB_METHOD_2_227DBAAD8A7BA789_OFFSET))(a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_115E8993398549DB___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTriggeredLogicFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_115E8993398549DB___IFIXBASEPROXY_ONTRIGGEREDLOGICFINISH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_115E8993398549DB___IFIXBASEPROXY_DOONENTER_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TriggerExitReason P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_115E8993398549DB___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, P0, P1);
	}
};
