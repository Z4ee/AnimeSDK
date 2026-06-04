#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_DD56E792A2635894;
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }

#define CLASS_1_BCDC191CF05491FA_GET_CTRLTYPE_OFFSET UNITYSDK_OFFSET(0x136C7030)
#define CLASS_1_BCDC191CF05491FA_GET_DISABLECOUNT_OFFSET UNITYSDK_OFFSET(0x136C7310)
#define CLASS_1_BCDC191CF05491FA_GET_OVERRIDEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x136C7050)
#define CLASS_1_BCDC191CF05491FA_GET_SLOTTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x136C72F0)
#define CLASS_1_BCDC191CF05491FA_METHOD_1_00977B442F01EE68_OFFSET UNITYSDK_OFFSET(0x136C7080)
#define CLASS_1_BCDC191CF05491FA_METHOD_1_370E7A8BBFC39E77_OFFSET UNITYSDK_OFFSET(0x136C7330)
#define CLASS_1_BCDC191CF05491FA_METHOD_1_46019E40A12B5629_1_OFFSET UNITYSDK_OFFSET(0x136C72E0)
#define CLASS_1_BCDC191CF05491FA_METHOD_1_46019E40A12B5629_OFFSET UNITYSDK_OFFSET(0x136C7070)
#define CLASS_1_BCDC191CF05491FA_METHOD_1_C97F07D4514E1BDA_OFFSET UNITYSDK_OFFSET(0x136C6FB0)
#define CLASS_1_BCDC191CF05491FA_SET_CTRLTYPE_OFFSET UNITYSDK_OFFSET(0x136C7040)
#define CLASS_1_BCDC191CF05491FA_SET_DISABLECOUNT_OFFSET UNITYSDK_OFFSET(0x136C7320)
#define CLASS_1_BCDC191CF05491FA_SET_OVERRIDEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x136C7060)
#define CLASS_1_BCDC191CF05491FA_SET_SLOTTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x136C7300)
#define CLASS_1_BCDC191CF05491FA__CTOR_OFFSET UNITYSDK_OFFSET(0x136C6F00)

inline static constexpr unsigned int Class_1_BCDC191CF05491FA_TypeDefinitionIndex = 53894;

class Class_1_BCDC191CF05491FA : public ::System::Object
{
public:
	::RPG::GameCore::SkillData* Field_1_0; // 0x10
	::Class_1_DD56E792A2635894* _OverrideProperties_k__BackingField; // 0x18
	::System::String* _SlotTriggerKey_k__BackingField; // 0x20
	::RPG::GameCore::SkillData* Field_1_3; // 0x28
	::System::Int32 _DisableCount_k__BackingField; // 0x30
	::RPG::GameCore::ControlSkillType _CtrlType_k__BackingField; // 0x34

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

	::RPG::GameCore::FixPoint Method_1_370E7A8BBFC39E77(::RPG::GameCore::SkillPropertyType a1, ::RPG::GameCore::SkillData* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::SkillPropertyType, ::RPG::GameCore::SkillData*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_BCDC191CF05491FA_METHOD_1_370E7A8BBFC39E77_OFFSET))(this, a1, a2, a3, a4);
	}
};
