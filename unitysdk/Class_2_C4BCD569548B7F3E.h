#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/PropertyStacking.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterPropertyType.h"
#include "unitysdk/RPG/GameCore/RogueMagicUnitCounterType.h"
#include "unitysdk/RPG/GameCore/TaskState.h"

class Class_1_83AB3963F9C15714;
class Class_2_C4BCD569548B7F3E_Class_1_969D64C345B815AA;
class Class_3_E03EC9D105CCFA3C;
namespace RPG::GameCore { class BattleRogueMagicData_Scepter; }
namespace RPG::GameCore { class RogueMagicScepterRow; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_2_C4BCD569548B7F3E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159A2B70)
#define CLASS_2_C4BCD569548B7F3E_GET_ACTIVEUNITTRIGGERCOUNT_OFFSET UNITYSDK_OFFSET(0x159A43D0)
#define CLASS_2_C4BCD569548B7F3E_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x159A4370)
#define CLASS_2_C4BCD569548B7F3E_GET_SCEPTERID_OFFSET UNITYSDK_OFFSET(0x159A4350)
#define CLASS_2_C4BCD569548B7F3E_GET_SCEPTERROW_OFFSET UNITYSDK_OFFSET(0x159A4390)
#define CLASS_2_C4BCD569548B7F3E_GET_SCEPTERSTATE_OFFSET UNITYSDK_OFFSET(0x159A43B0)
#define CLASS_2_C4BCD569548B7F3E_METHOD_2_01109DD29CB4D216_OFFSET UNITYSDK_OFFSET(0x159A3340)
#define CLASS_2_C4BCD569548B7F3E_METHOD_2_19C3B33FDD3F6B23_OFFSET UNITYSDK_OFFSET(0x159A3630)
#define CLASS_2_C4BCD569548B7F3E_METHOD_2_1C4461A458CF59CD_OFFSET UNITYSDK_OFFSET(0x159A31D0)
#define CLASS_2_C4BCD569548B7F3E_METHOD_2_2D6B5189575B5B1D_OFFSET UNITYSDK_OFFSET(0x159A16E0)
#define CLASS_2_C4BCD569548B7F3E_METHOD_2_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0x159A2740)
#define CLASS_2_C4BCD569548B7F3E_METHOD_2_4DB6EE5849050ACC_OFFSET UNITYSDK_OFFSET(0x159A3510)
#define CLASS_2_C4BCD569548B7F3E_METHOD_2_523A872038B70139_OFFSET UNITYSDK_OFFSET(0x159A3D90)
#define CLASS_2_C4BCD569548B7F3E_METHOD_2_558A5C3FA2ED65F4_OFFSET UNITYSDK_OFFSET(0x159A2160)
#define CLASS_2_C4BCD569548B7F3E_METHOD_2_8C71BC317F276EA5_OFFSET UNITYSDK_OFFSET(0x159A3270)
#define CLASS_2_C4BCD569548B7F3E_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x159A3BE0)
#define CLASS_2_C4BCD569548B7F3E_METHOD_2_956AEE9BDB42F3E7_OFFSET UNITYSDK_OFFSET(0x159A39C0)
#define CLASS_2_C4BCD569548B7F3E_METHOD_2_9C05DE14215D544B_OFFSET UNITYSDK_OFFSET(0x159A3170)
#define CLASS_2_C4BCD569548B7F3E_METHOD_2_A500B07E8C29F95A_OFFSET UNITYSDK_OFFSET(0x159A3A40)
#define CLASS_2_C4BCD569548B7F3E_METHOD_2_A968E94CA97A159D_OFFSET UNITYSDK_OFFSET(0x159A2FD0)
#define CLASS_2_C4BCD569548B7F3E_METHOD_2_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x159A2C20)
#define CLASS_2_C4BCD569548B7F3E_METHOD_2_CC89E3E892322A55_OFFSET UNITYSDK_OFFSET(0x159A1AF0)
#define CLASS_2_C4BCD569548B7F3E_METHOD_2_CD7AEFCBBDCE7839_OFFSET UNITYSDK_OFFSET(0x159A2DE0)
#define CLASS_2_C4BCD569548B7F3E_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x159A3EB0)
#define CLASS_2_C4BCD569548B7F3E_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x159A43F0)
#define CLASS_2_C4BCD569548B7F3E_METHOD_2_F29BC4DE10A2D54D_OFFSET UNITYSDK_OFFSET(0x159A42F0)
#define CLASS_2_C4BCD569548B7F3E_METHOD_2_F4910A11D98F8F87_OFFSET UNITYSDK_OFFSET(0x159A38B0)
#define CLASS_2_C4BCD569548B7F3E_SET_ACTIVEUNITTRIGGERCOUNT_OFFSET UNITYSDK_OFFSET(0x159A43E0)
#define CLASS_2_C4BCD569548B7F3E_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x159A4380)
#define CLASS_2_C4BCD569548B7F3E_SET_SCEPTERID_OFFSET UNITYSDK_OFFSET(0x159A4360)
#define CLASS_2_C4BCD569548B7F3E_SET_SCEPTERROW_OFFSET UNITYSDK_OFFSET(0x159A43A0)
#define CLASS_2_C4BCD569548B7F3E_SET_SCEPTERSTATE_OFFSET UNITYSDK_OFFSET(0x159A43C0)
#define CLASS_2_C4BCD569548B7F3E_TICK_OFFSET UNITYSDK_OFFSET(0x159A2BC0)
#define CLASS_2_C4BCD569548B7F3E__CTOR_OFFSET UNITYSDK_OFFSET(0x159A4400)

inline static constexpr unsigned int Class_2_C4BCD569548B7F3E_TypeDefinitionIndex = 57814;

class Class_2_C4BCD569548B7F3E : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::RPG::GameCore::BattleRogueMagicData_Scepter** StaticGet_NILMNDJNOAA()
	{
		return (::RPG::GameCore::BattleRogueMagicData_Scepter**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C4BCD569548B7F3E_TypeDefinitionIndex)->GetStaticField(0x2DBB0);
	}
	::RPG::GameCore::RogueMagicScepterRow* _ScepterRow_k__BackingField; // 0x18
	::Il2CppArray<::Class_2_C4BCD569548B7F3E_Class_1_969D64C345B815AA*>* KHFBEGBEDAN; // 0x20
	::Class_3_E03EC9D105CCFA3C* JJLDMANFGFG; // 0x28
	::Il2CppArray<::Class_1_83AB3963F9C15714*>* KGLOIHNOFCM; // 0x30
	::Class_2_C4BCD569548B7F3E_Class_1_969D64C345B815AA* OLPKAFKGJLC; // 0x38
	::RPG::GameCore::TurnBasedAbilityComponent* POLIHAMFHCI; // 0x40
	::System::Boolean OICPIBMDKDA; // 0x48
	::System::UInt32 _ScepterID_k__BackingField; // 0x4C
	::RPG::GameCore::TaskState _ScepterState_k__BackingField; // 0x50
	::System::UInt32 _ActiveUnitTriggerCount_k__BackingField; // 0x54
	::System::UInt32 _Level_k__BackingField; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D6B5189575B5B1D(::RPG::GameCore::BattleRogueMagicData_Scepter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleRogueMagicData_Scepter*))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_METHOD_2_2D6B5189575B5B1D_OFFSET))(this, a1);
	}

	::System::Void Method_2_CC89E3E892322A55(::RPG::GameCore::BattleRogueMagicData_Scepter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleRogueMagicData_Scepter*))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_METHOD_2_CC89E3E892322A55_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskState Method_2_CD7AEFCBBDCE7839()
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_METHOD_2_CD7AEFCBBDCE7839_OFFSET))(this);
	}

	::System::Void Method_2_A968E94CA97A159D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_METHOD_2_A968E94CA97A159D_OFFSET))(this);
	}

	::System::Void Method_2_01109DD29CB4D216()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_METHOD_2_01109DD29CB4D216_OFFSET))(this);
	}

	::System::Int32 Method_2_4DB6EE5849050ACC(::RPG::GameCore::RogueMagicScepterPropertyType a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueMagicScepterPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_METHOD_2_4DB6EE5849050ACC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F4910A11D98F8F87(::RPG::GameCore::RogueMagicScepterPropertyType a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicScepterPropertyType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_METHOD_2_F4910A11D98F8F87_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_956AEE9BDB42F3E7(::RPG::GameCore::RogueMagicScepterPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RogueMagicScepterPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_METHOD_2_956AEE9BDB42F3E7_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_A500B07E8C29F95A(::RPG::GameCore::RogueMagicUnitCounterType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RogueMagicUnitCounterType))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_METHOD_2_A500B07E8C29F95A_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_METHOD_2_B2C52ACF9D9B435B_OFFSET))(this);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Boolean Method_2_9C05DE14215D544B(::Class_2_C4BCD569548B7F3E_Class_1_969D64C345B815AA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_C4BCD569548B7F3E_Class_1_969D64C345B815AA*))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_METHOD_2_9C05DE14215D544B_OFFSET))(this, a1);
	}

	::System::Void Method_2_558A5C3FA2ED65F4(::Class_2_C4BCD569548B7F3E_Class_1_969D64C345B815AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C4BCD569548B7F3E_Class_1_969D64C345B815AA*))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_METHOD_2_558A5C3FA2ED65F4_OFFSET))(this, a1);
	}

	::System::Void Method_2_1C4461A458CF59CD(::Class_2_C4BCD569548B7F3E_Class_1_969D64C345B815AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C4BCD569548B7F3E_Class_1_969D64C345B815AA*))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_METHOD_2_1C4461A458CF59CD_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C71BC317F276EA5(::Class_2_C4BCD569548B7F3E_Class_1_969D64C345B815AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C4BCD569548B7F3E_Class_1_969D64C345B815AA*))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_METHOD_2_8C71BC317F276EA5_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C56C1AF247AC1EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_METHOD_2_3C56C1AF247AC1EC_OFFSET))(this);
	}

	::System::Void Method_2_523A872038B70139(::RPG::GameCore::RogueMagicScepterPropertyType a1, ::RPG::GameCore::PropertyStacking a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicScepterPropertyType, ::RPG::GameCore::PropertyStacking, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_METHOD_2_523A872038B70139_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_METHOD_2_DD784213055292FB_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_19C3B33FDD3F6B23()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_METHOD_2_19C3B33FDD3F6B23_OFFSET))(this);
	}

	::System::Boolean Method_2_F29BC4DE10A2D54D(::RPG::GameCore::RogueMagicScepterPropertyType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueMagicScepterPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_METHOD_2_F29BC4DE10A2D54D_OFFSET))(this, a1);
	}

	::System::UInt32 get_ScepterID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_GET_SCEPTERID_OFFSET))(this);
	}

	::System::Void set_ScepterID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_SET_SCEPTERID_OFFSET))(this, a1);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_SET_LEVEL_OFFSET))(this, a1);
	}

	::RPG::GameCore::RogueMagicScepterRow* get_ScepterRow()
	{
		return ((::RPG::GameCore::RogueMagicScepterRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_GET_SCEPTERROW_OFFSET))(this);
	}

	::System::Void set_ScepterRow(::RPG::GameCore::RogueMagicScepterRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicScepterRow*))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_SET_SCEPTERROW_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskState get_ScepterState()
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_GET_SCEPTERSTATE_OFFSET))(this);
	}

	::System::Void set_ScepterState(::RPG::GameCore::TaskState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskState))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_SET_SCEPTERSTATE_OFFSET))(this, a1);
	}

	::System::UInt32 get_ActiveUnitTriggerCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_GET_ACTIVEUNITTRIGGERCOUNT_OFFSET))(this);
	}

	::System::Void set_ActiveUnitTriggerCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_SET_ACTIVEUNITTRIGGERCOUNT_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
