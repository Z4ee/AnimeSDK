#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_DD56E792A2635894;
class Class_1_E0B28F8F3DFBD083;
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }

#define CLASS_1_BCDC191CF05491FA_GET_CTRLTYPE_OFFSET UNITYSDK_OFFSET(0x15486F80)
#define CLASS_1_BCDC191CF05491FA_GET_DISABLECOUNT_OFFSET UNITYSDK_OFFSET(0x15487280)
#define CLASS_1_BCDC191CF05491FA_GET_LASTMANUALREPLACEDSKILL_OFFSET UNITYSDK_OFFSET(0x154872C0)
#define CLASS_1_BCDC191CF05491FA_GET_OCCUPYDATA_OFFSET UNITYSDK_OFFSET(0x154872A0)
#define CLASS_1_BCDC191CF05491FA_GET_OVERRIDEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x15486FA0)
#define CLASS_1_BCDC191CF05491FA_GET_SLOTTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x15487260)
#define CLASS_1_BCDC191CF05491FA_METHOD_1_00977B442F01EE68_OFFSET UNITYSDK_OFFSET(0x15486FD0)
#define CLASS_1_BCDC191CF05491FA_METHOD_1_370E7A8BBFC39E77_OFFSET UNITYSDK_OFFSET(0x154872E0)
#define CLASS_1_BCDC191CF05491FA_METHOD_1_46019E40A12B5629_1_OFFSET UNITYSDK_OFFSET(0x15487250)
#define CLASS_1_BCDC191CF05491FA_METHOD_1_46019E40A12B5629_OFFSET UNITYSDK_OFFSET(0x15486FC0)
#define CLASS_1_BCDC191CF05491FA_METHOD_1_C97F07D4514E1BDA_OFFSET UNITYSDK_OFFSET(0x15486F00)
#define CLASS_1_BCDC191CF05491FA_SET_CTRLTYPE_OFFSET UNITYSDK_OFFSET(0x15486F90)
#define CLASS_1_BCDC191CF05491FA_SET_DISABLECOUNT_OFFSET UNITYSDK_OFFSET(0x15487290)
#define CLASS_1_BCDC191CF05491FA_SET_LASTMANUALREPLACEDSKILL_OFFSET UNITYSDK_OFFSET(0x154872D0)
#define CLASS_1_BCDC191CF05491FA_SET_OCCUPYDATA_OFFSET UNITYSDK_OFFSET(0x154872B0)
#define CLASS_1_BCDC191CF05491FA_SET_OVERRIDEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x15486FB0)
#define CLASS_1_BCDC191CF05491FA_SET_SLOTTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x15487270)
#define CLASS_1_BCDC191CF05491FA__CTOR_OFFSET UNITYSDK_OFFSET(0x15486E50)

inline static constexpr unsigned int Class_1_BCDC191CF05491FA_TypeDefinitionIndex = 57839;

class Class_1_BCDC191CF05491FA : public ::System::Object
{
public:
	::System::String* _SlotTriggerKey_k__BackingField; // 0x10
	::Class_1_E0B28F8F3DFBD083* _OccupyData_k__BackingField; // 0x18
	::RPG::GameCore::SkillData* OIJCJPDGJBD; // 0x20
	::Class_1_DD56E792A2635894* _OverrideProperties_k__BackingField; // 0x28
	::RPG::GameCore::SkillData* _LastManualReplacedSkill_k__BackingField; // 0x30
	::RPG::GameCore::SkillData* ECPIHNLHNBM; // 0x38
	::System::Int32 _DisableCount_k__BackingField; // 0x40
	::RPG::GameCore::ControlSkillType _CtrlType_k__BackingField; // 0x44

	::System::Void _ctor(::RPG::GameCore::ControlSkillType a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ControlSkillType, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_BCDC191CF05491FA__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ControlSkillType get_CtrlType()
	{
		return ((::RPG::GameCore::ControlSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCDC191CF05491FA_GET_CTRLTYPE_OFFSET))(this);
	}

	::System::Void set_CtrlType(::RPG::GameCore::ControlSkillType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + CLASS_1_BCDC191CF05491FA_SET_CTRLTYPE_OFFSET))(this, a1);
	}

	::Class_1_DD56E792A2635894* get_OverrideProperties()
	{
		return ((::Class_1_DD56E792A2635894*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCDC191CF05491FA_GET_OVERRIDEPROPERTIES_OFFSET))(this);
	}

	::System::Void set_OverrideProperties(::Class_1_DD56E792A2635894* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD56E792A2635894*))((::PBYTE)hIl2Cpp + CLASS_1_BCDC191CF05491FA_SET_OVERRIDEPROPERTIES_OFFSET))(this, a1);
	}

	::RPG::GameCore::SkillData* Method_1_46019E40A12B5629()
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCDC191CF05491FA_METHOD_1_46019E40A12B5629_OFFSET))(this);
	}

	::System::Void Method_1_00977B442F01EE68(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_BCDC191CF05491FA_METHOD_1_00977B442F01EE68_OFFSET))(this, a1);
	}

	::RPG::GameCore::SkillData* Method_1_46019E40A12B5629_1()
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCDC191CF05491FA_METHOD_1_46019E40A12B5629_1_OFFSET))(this);
	}

	::System::Void Method_1_C97F07D4514E1BDA(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_BCDC191CF05491FA_METHOD_1_C97F07D4514E1BDA_OFFSET))(this, a1);
	}

	::System::String* get_SlotTriggerKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCDC191CF05491FA_GET_SLOTTRIGGERKEY_OFFSET))(this);
	}

	::System::Void set_SlotTriggerKey(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BCDC191CF05491FA_SET_SLOTTRIGGERKEY_OFFSET))(this, a1);
	}

	::System::Int32 get_DisableCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCDC191CF05491FA_GET_DISABLECOUNT_OFFSET))(this);
	}

	::System::Void set_DisableCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BCDC191CF05491FA_SET_DISABLECOUNT_OFFSET))(this, a1);
	}

	::Class_1_E0B28F8F3DFBD083* get_OccupyData()
	{
		return ((::Class_1_E0B28F8F3DFBD083*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCDC191CF05491FA_GET_OCCUPYDATA_OFFSET))(this);
	}

	::System::Void set_OccupyData(::Class_1_E0B28F8F3DFBD083* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E0B28F8F3DFBD083*))((::PBYTE)hIl2Cpp + CLASS_1_BCDC191CF05491FA_SET_OCCUPYDATA_OFFSET))(this, a1);
	}

	::RPG::GameCore::SkillData* get_LastManualReplacedSkill()
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCDC191CF05491FA_GET_LASTMANUALREPLACEDSKILL_OFFSET))(this);
	}

	::System::Void set_LastManualReplacedSkill(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_BCDC191CF05491FA_SET_LASTMANUALREPLACEDSKILL_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_370E7A8BBFC39E77(::RPG::GameCore::SkillPropertyType a1, ::RPG::GameCore::SkillData* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::SkillPropertyType, ::RPG::GameCore::SkillData*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_BCDC191CF05491FA_METHOD_1_370E7A8BBFC39E77_OFFSET))(this, a1, a2, a3, a4);
	}
};
