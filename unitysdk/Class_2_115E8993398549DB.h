#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_29B23DDF98AF43AC.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_115E8993398549DB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AB5AF0)
#define CLASS_2_115E8993398549DB_DOONENTER_OFFSET UNITYSDK_OFFSET(0x15AB5C90)
#define CLASS_2_115E8993398549DB_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x15AB6240)
#define CLASS_2_115E8993398549DB_GET_BLOCKDIALOGUEINRANGE_OFFSET UNITYSDK_OFFSET(0x15AB6640)
#define CLASS_2_115E8993398549DB_GET_DISABLEAFTERTRIGGERED_OFFSET UNITYSDK_OFFSET(0x15AB6620)
#define CLASS_2_115E8993398549DB_GET_ENSUREIMMEDIATETASK_OFFSET UNITYSDK_OFFSET(0x15AB6660)
#define CLASS_2_115E8993398549DB_METHOD_2_74505E341CB9A5FE_OFFSET UNITYSDK_OFFSET(0x15AB6680)
#define CLASS_2_115E8993398549DB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15AB5C40)
#define CLASS_2_115E8993398549DB_ONTRIGGEREDLOGICFINISH_OFFSET UNITYSDK_OFFSET(0x15AB5B40)
#define CLASS_2_115E8993398549DB_SET_BLOCKDIALOGUEINRANGE_OFFSET UNITYSDK_OFFSET(0x15AB6650)
#define CLASS_2_115E8993398549DB_SET_DISABLEAFTERTRIGGERED_OFFSET UNITYSDK_OFFSET(0x15AB6630)
#define CLASS_2_115E8993398549DB_SET_ENSUREIMMEDIATETASK_OFFSET UNITYSDK_OFFSET(0x15AB6670)
#define CLASS_2_115E8993398549DB__CCTOR_OFFSET UNITYSDK_OFFSET(0x15AB67D0)
#define CLASS_2_115E8993398549DB__CTOR_OFFSET UNITYSDK_OFFSET(0x15AB5A90)

inline static constexpr unsigned int Class_2_115E8993398549DB_TypeDefinitionIndex = 57661;

class Class_2_115E8993398549DB : public ::Class_1_29B23DDF98AF43AC
{
public:
	static ::System::String** StaticGet_BLABEGFKAOP()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_115E8993398549DB_TypeDefinitionIndex)->GetStaticField(0x5E9E0);
	}
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* IGAJPJJKPDF; // 0x98
	::RPG::GameCore::TaskContext* OELBMKNMMGO; // 0xA0
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* HAEDBJEGEJB; // 0xA8
	::System::Boolean IKOKPIGDJEO; // 0xB0
	::System::Boolean _DisableAfterTriggered_k__BackingField; // 0xB1
	::System::Boolean _EnsureImmediateTask_k__BackingField; // 0xB2
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

	::System::Void set_DisableAfterTriggered(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_115E8993398549DB_SET_DISABLEAFTERTRIGGERED_OFFSET))(this, a1);
	}

	::System::Boolean get_BlockDialogueInRange()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_115E8993398549DB_GET_BLOCKDIALOGUEINRANGE_OFFSET))(this);
	}

	::System::Void set_BlockDialogueInRange(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_115E8993398549DB_SET_BLOCKDIALOGUEINRANGE_OFFSET))(this, a1);
	}

	::System::Boolean get_EnsureImmediateTask()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_115E8993398549DB_GET_ENSUREIMMEDIATETASK_OFFSET))(this);
	}

	::System::Void set_EnsureImmediateTask(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_115E8993398549DB_SET_ENSUREIMMEDIATETASK_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_74505E341CB9A5FE(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_115E8993398549DB_METHOD_2_74505E341CB9A5FE_OFFSET))(a1);
	}
};
