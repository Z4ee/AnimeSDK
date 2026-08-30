#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_23F67DD15593C8D6;
class Class_2_469A56953483CA0D;
class Class_2_A0580152EB393340;
class Class_2_F67FF7EB526BF85C;
namespace RPG::GameCore { class AdvNPCChase; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventureCharacterDataComponent; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_2_996215DABDF63D23_DISPOSE_OFFSET UNITYSDK_OFFSET(0x188AE6F0)
#define CLASS_2_996215DABDF63D23_METHOD_2_3A9C03366E936C66_OFFSET UNITYSDK_OFFSET(0x188AEB30)
#define CLASS_2_996215DABDF63D23_METHOD_2_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0x188AF1B0)
#define CLASS_2_996215DABDF63D23_METHOD_2_52CA0F45BC3414DC_OFFSET UNITYSDK_OFFSET(0x188AF090)
#define CLASS_2_996215DABDF63D23_METHOD_2_CB7FCC6E483860D4_OFFSET UNITYSDK_OFFSET(0x188AF6B0)
#define CLASS_2_996215DABDF63D23_METHOD_2_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x188AF510)
#define CLASS_2_996215DABDF63D23_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x188AEA10)
#define CLASS_2_996215DABDF63D23_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x188AED40)
#define CLASS_2_996215DABDF63D23_TICK_OFFSET UNITYSDK_OFFSET(0x188AF460)
#define CLASS_2_996215DABDF63D23__CTOR_OFFSET UNITYSDK_OFFSET(0x188ADC30)

inline static constexpr unsigned int Class_2_996215DABDF63D23_TypeDefinitionIndex = 52676;

class Class_2_996215DABDF63D23 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_2_469A56953483CA0D* JABCHFIIFIC; // 0x18
	::Class_1_5F51D4049EA87B7B* BCBFMMBINNM; // 0x20
	::Class_1_5F51D4049EA87B7B* KGHMPFOLEHH; // 0x28
	::RPG::GameCore::AdventureCharacterDataComponent* IIOGGGKBBPA; // 0x30
	::RPG::GameCore::AdventureCharacterController* EEMOFHKBEBO; // 0x38
	::Class_2_F67FF7EB526BF85C* LKNDEOKIEAK; // 0x40
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x48
	::RPG::GameCore::AdvNPCChase* IGHAHBNLIJA; // 0x50
	::Class_1_5F51D4049EA87B7B* JLODFHKOJEE; // 0x58
	::Class_1_5F51D4049EA87B7B* EMCMCEEOIOI; // 0x60
	::Class_2_A0580152EB393340* AGJDABDMMEH; // 0x68
	::Class_1_5F51D4049EA87B7B* CHJAMLNAIOK; // 0x70
	::RPG::GameCore::TransformComponent* LMCMCFHLJEJ; // 0x78
	::Class_1_23F67DD15593C8D6* CPPMELMICIG; // 0x80
	::RPG::GameCore::NPCComponent* ACMDKOBBDNJ; // 0x88
	::UnityEngine::Vector3 PBFOFLKCMKL; // 0x90
	::System::Boolean GDHFPLIEMAK; // 0x9C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCChase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCChase*))((::PBYTE)hIl2Cpp + CLASS_2_996215DABDF63D23__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_996215DABDF63D23_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_996215DABDF63D23_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_996215DABDF63D23_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_52CA0F45BC3414DC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_996215DABDF63D23_METHOD_2_52CA0F45BC3414DC_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_996215DABDF63D23_TICK_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_CB7FCC6E483860D4()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_996215DABDF63D23_METHOD_2_CB7FCC6E483860D4_OFFSET))(this);
	}

	::System::Void Method_2_3A9C03366E936C66(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_996215DABDF63D23_METHOD_2_3A9C03366E936C66_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_996215DABDF63D23_METHOD_2_E5695720AB0F6E98_OFFSET))(this);
	}

	::System::Void Method_2_4A41C63BFE58D26F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_996215DABDF63D23_METHOD_2_4A41C63BFE58D26F_OFFSET))(this);
	}
};
