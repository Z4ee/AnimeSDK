#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_B213EAEBAA108779;
namespace RPG::GameCore { class SkillData; }

#define CLASS_1_EABAA0FA9B3BC305_GET_CTRLTYPE_OFFSET UNITYSDK_OFFSET(0x109BEC10)
#define CLASS_1_EABAA0FA9B3BC305_GET_DISABLECOUNT_OFFSET UNITYSDK_OFFSET(0x109BEEF0)
#define CLASS_1_EABAA0FA9B3BC305_GET_OVERRIDEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x109BEC30)
#define CLASS_1_EABAA0FA9B3BC305_METHOD_1_00977B442F01EE68_OFFSET UNITYSDK_OFFSET(0x109BEC60)
#define CLASS_1_EABAA0FA9B3BC305_METHOD_1_46019E40A12B5629_1_OFFSET UNITYSDK_OFFSET(0x109BEEE0)
#define CLASS_1_EABAA0FA9B3BC305_METHOD_1_46019E40A12B5629_OFFSET UNITYSDK_OFFSET(0x109BEC50)
#define CLASS_1_EABAA0FA9B3BC305_METHOD_1_B34036B3632F4773_OFFSET UNITYSDK_OFFSET(0x109BEF10)
#define CLASS_1_EABAA0FA9B3BC305_METHOD_1_C97F07D4514E1BDA_OFFSET UNITYSDK_OFFSET(0x109BEB90)
#define CLASS_1_EABAA0FA9B3BC305_SET_CTRLTYPE_OFFSET UNITYSDK_OFFSET(0x109BEC20)
#define CLASS_1_EABAA0FA9B3BC305_SET_DISABLECOUNT_OFFSET UNITYSDK_OFFSET(0x109BEF00)
#define CLASS_1_EABAA0FA9B3BC305_SET_OVERRIDEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x109BEC40)
#define CLASS_1_EABAA0FA9B3BC305__CTOR_OFFSET UNITYSDK_OFFSET(0x109BEAF0)

inline static constexpr unsigned int Class_1_EABAA0FA9B3BC305_TypeDefinitionIndex = 46494;

class Class_1_EABAA0FA9B3BC305 : public ::System::Object
{
public:
	::RPG::GameCore::SkillData* Field_1_3; // 0x10
	::Class_1_B213EAEBAA108779* _OverrideProperties_k__BackingField; // 0x18
	::RPG::GameCore::SkillData* Field_1_4; // 0x20
	::RPG::GameCore::ControlSkillType _CtrlType_k__BackingField; // 0x28
	::System::Int32 _DisableCount_k__BackingField; // 0x2C

	::System::Void _ctor(::RPG::GameCore::ControlSkillType a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ControlSkillType, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_EABAA0FA9B3BC305__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ControlSkillType get_CtrlType()
	{
		return ((::RPG::GameCore::ControlSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EABAA0FA9B3BC305_GET_CTRLTYPE_OFFSET))(this);
	}

	::System::Void set_CtrlType(::RPG::GameCore::ControlSkillType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + CLASS_1_EABAA0FA9B3BC305_SET_CTRLTYPE_OFFSET))(this, value);
	}

	::Class_1_B213EAEBAA108779* get_OverrideProperties()
	{
		return ((::Class_1_B213EAEBAA108779*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EABAA0FA9B3BC305_GET_OVERRIDEPROPERTIES_OFFSET))(this);
	}

	::System::Void set_OverrideProperties(::Class_1_B213EAEBAA108779* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B213EAEBAA108779*))((::PBYTE)hIl2Cpp + CLASS_1_EABAA0FA9B3BC305_SET_OVERRIDEPROPERTIES_OFFSET))(this, value);
	}

	::RPG::GameCore::SkillData* Method_1_46019E40A12B5629()
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EABAA0FA9B3BC305_METHOD_1_46019E40A12B5629_OFFSET))(this);
	}

	::System::Void Method_1_00977B442F01EE68(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_EABAA0FA9B3BC305_METHOD_1_00977B442F01EE68_OFFSET))(this, a1);
	}

	::RPG::GameCore::SkillData* Method_1_46019E40A12B5629_1()
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EABAA0FA9B3BC305_METHOD_1_46019E40A12B5629_1_OFFSET))(this);
	}

	::System::Void Method_1_C97F07D4514E1BDA(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_EABAA0FA9B3BC305_METHOD_1_C97F07D4514E1BDA_OFFSET))(this, a1);
	}

	::System::Int32 get_DisableCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EABAA0FA9B3BC305_GET_DISABLECOUNT_OFFSET))(this);
	}

	::System::Void set_DisableCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EABAA0FA9B3BC305_SET_DISABLECOUNT_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint Method_1_B34036B3632F4773(::RPG::GameCore::SkillPropertyType a1, ::RPG::GameCore::SkillData* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::SkillPropertyType, ::RPG::GameCore::SkillData*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_EABAA0FA9B3BC305_METHOD_1_B34036B3632F4773_OFFSET))(this, a1, a2, a3, a4);
	}
};
