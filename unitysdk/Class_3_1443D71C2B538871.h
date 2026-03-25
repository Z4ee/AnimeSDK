#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropInteractionTrigger.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

class Class_0_16E4307DCC419505_453;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropInteractionTrigger_ButtonParam; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_3_1443D71C2B538871_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1179AAA0)
#define CLASS_3_1443D71C2B538871_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1179AC40)
#define CLASS_3_1443D71C2B538871_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x1179AE40)
#define CLASS_3_1443D71C2B538871_METHOD_3_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x1179ACB0)
#define CLASS_3_1443D71C2B538871_METHOD_3_916B8A6B72C96F5C_OFFSET UNITYSDK_OFFSET(0x1179AF90)
#define CLASS_3_1443D71C2B538871_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1179AB60)
#define CLASS_3_1443D71C2B538871_ONTRIGGEREDLOGICFINISH_OFFSET UNITYSDK_OFFSET(0x1179AEA0)
#define CLASS_3_1443D71C2B538871__CCTOR_OFFSET UNITYSDK_OFFSET(0x1179B300)
#define CLASS_3_1443D71C2B538871__CTOR_OFFSET UNITYSDK_OFFSET(0x1179A980)
#define CLASS_3_1443D71C2B538871__TICKCD_OFFSET UNITYSDK_OFFSET(0x1179AEE0)
#define CLASS_3_1443D71C2B538871___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1179B340)
#define CLASS_3_1443D71C2B538871___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1179B350)
#define CLASS_3_1443D71C2B538871___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x1179B3D0)
#define CLASS_3_1443D71C2B538871___IFIXBASEPROXY_ONTRIGGEREDLOGICFINISH_OFFSET UNITYSDK_OFFSET(0x1179B450)
#define CLASS_3_1443D71C2B538871___IFIXBASEPROXY__TICKCD_OFFSET UNITYSDK_OFFSET(0x1179B460)

inline static constexpr unsigned int Class_3_1443D71C2B538871_TypeDefinitionIndex = 46351;

class Class_3_1443D71C2B538871 : public ::RPG::GameCore::PropInteractionTrigger
{
public:
	static ::System::String** StaticGet_Field_3_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1443D71C2B538871_TypeDefinitionIndex)->GetStaticField(0x44FA0);
	}
	::RPG::GameCore::PropInteractionTrigger_ButtonParam* Field_3_1; // 0xC8
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_3; // 0xD0
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_4; // 0xD8
	::RPG::GameCore::PropInteractionTrigger_ButtonParam* Field_3_2; // 0xE0
	::System::UInt32 Field_3_5; // 0xE8
	::System::Single Field_3_7; // 0xEC
	::System::Single Field_3_6; // 0xF0

	::System::Void _ctor(::RPG::GameCore::PropComponent* a1, ::RPG::GameCore::TaskContext* a2, ::Class_0_16E4307DCC419505_453* a3, ::Class_0_16E4307DCC419505_453* a4, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a5, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::RPG::GameCore::TaskContext*, ::Class_0_16E4307DCC419505_453*, ::Class_0_16E4307DCC419505_453*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1443D71C2B538871__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_1443D71C2B538871__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1443D71C2B538871_DISPOSE_OFFSET))(this);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_1443D71C2B538871_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_3_1443D71C2B538871_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void OnTriggeredLogicFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1443D71C2B538871_ONTRIGGEREDLOGICFINISH_OFFSET))(this);
	}

	::System::Void Method_3_907E24F785836BA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1443D71C2B538871_METHOD_3_907E24F785836BA0_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1443D71C2B538871_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void _TickCD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1443D71C2B538871__TICKCD_OFFSET))(this, a1);
	}

	::System::Void Method_3_916B8A6B72C96F5C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_1443D71C2B538871_METHOD_3_916B8A6B72C96F5C_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1443D71C2B538871___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_1443D71C2B538871___IFIXBASEPROXY_DOONENTER_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TriggerExitReason P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_3_1443D71C2B538871___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnTriggeredLogicFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1443D71C2B538871___IFIXBASEPROXY_ONTRIGGEREDLOGICFINISH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__TickCD(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1443D71C2B538871___IFIXBASEPROXY__TICKCD_OFFSET))(this, P0);
	}
};
