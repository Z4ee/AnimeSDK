#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropInteractionTrigger.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

class Class_0_16E4307DCC419505_582;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropInteractionTrigger_ButtonParam; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_3_1443D71C2B538871_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17461150)
#define CLASS_3_1443D71C2B538871_DOONENTER_OFFSET UNITYSDK_OFFSET(0x17461330)
#define CLASS_3_1443D71C2B538871_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x17461540)
#define CLASS_3_1443D71C2B538871_METHOD_3_0ABEB23FF62F8B8F_OFFSET UNITYSDK_OFFSET(0x17461690)
#define CLASS_3_1443D71C2B538871_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x17461230)
#define CLASS_3_1443D71C2B538871_METHOD_3_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x174613A0)
#define CLASS_3_1443D71C2B538871_ONTRIGGEREDLOGICFINISH_OFFSET UNITYSDK_OFFSET(0x174615A0)
#define CLASS_3_1443D71C2B538871__CCTOR_OFFSET UNITYSDK_OFFSET(0x17461AE0)
#define CLASS_3_1443D71C2B538871__CTOR_OFFSET UNITYSDK_OFFSET(0x17461030)
#define CLASS_3_1443D71C2B538871__TICKCD_OFFSET UNITYSDK_OFFSET(0x174615E0)

inline static constexpr unsigned int Class_3_1443D71C2B538871_TypeDefinitionIndex = 54955;

class Class_3_1443D71C2B538871 : public ::RPG::GameCore::PropInteractionTrigger
{
public:
	static ::System::String** StaticGet_Field_3_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1443D71C2B538871_TypeDefinitionIndex)->GetStaticField(0x36090);
	}
	::RPG::GameCore::PropInteractionTrigger_ButtonParam* Field_3_1; // 0xC8
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_2; // 0xD0
	::RPG::GameCore::PropInteractionTrigger_ButtonParam* Field_3_3; // 0xD8
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_4; // 0xE0
	::System::UInt32 Field_3_5; // 0xE8
	::System::Single Field_3_6; // 0xEC
	::System::Single Field_3_7; // 0xF0

	::System::Void _ctor(::RPG::GameCore::PropComponent* a1, ::RPG::GameCore::TaskContext* a2, ::Class_0_16E4307DCC419505_582* a3, ::Class_0_16E4307DCC419505_582* a4, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a5, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::RPG::GameCore::TaskContext*, ::Class_0_16E4307DCC419505_582*, ::Class_0_16E4307DCC419505_582*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1443D71C2B538871__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
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

	::System::Void Method_3_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1443D71C2B538871_METHOD_3_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1443D71C2B538871_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void _TickCD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1443D71C2B538871__TICKCD_OFFSET))(this, a1);
	}

	::System::Void Method_3_0ABEB23FF62F8B8F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_1443D71C2B538871_METHOD_3_0ABEB23FF62F8B8F_OFFSET))(this, a1);
	}
};
