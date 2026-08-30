#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D90D29A0DA06B4F8.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_4F3230E81B5CCA49_GET_DIFFICULTYRATIO_OFFSET UNITYSDK_OFFSET(0x18212F70)
#define CLASS_2_4F3230E81B5CCA49_GET_ISPERMANENT_OFFSET UNITYSDK_OFFSET(0x18212F50)
#define CLASS_2_4F3230E81B5CCA49_METHOD_2_164DA41B84B6F6E5_OFFSET UNITYSDK_OFFSET(0x18212D80)
#define CLASS_2_4F3230E81B5CCA49_ONAFTERPLAYERCREATE_OFFSET UNITYSDK_OFFSET(0x18212D10)
#define CLASS_2_4F3230E81B5CCA49_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0x18212C60)
#define CLASS_2_4F3230E81B5CCA49_SET_DIFFICULTYRATIO_OFFSET UNITYSDK_OFFSET(0x18212F80)
#define CLASS_2_4F3230E81B5CCA49_SET_ISPERMANENT_OFFSET UNITYSDK_OFFSET(0x18212F60)
#define CLASS_2_4F3230E81B5CCA49__CTOR_OFFSET UNITYSDK_OFFSET(0x18212F90)

inline static constexpr unsigned int Class_2_4F3230E81B5CCA49_TypeDefinitionIndex = 56202;

class Class_2_4F3230E81B5CCA49 : public ::Class_1_D90D29A0DA06B4F8
{
public:
	::System::Boolean _IsPermanent_k__BackingField; // 0x38
	::RPG::GameCore::FixPoint _DifficultyRatio_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F3230E81B5CCA49__CTOR_OFFSET))(this);
	}

	::System::Void OnBattleInstanceCreated()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F3230E81B5CCA49_ONBATTLEINSTANCECREATED_OFFSET))(this);
	}

	::System::Void OnAfterPlayerCreate(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4F3230E81B5CCA49_ONAFTERPLAYERCREATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_164DA41B84B6F6E5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4F3230E81B5CCA49_METHOD_2_164DA41B84B6F6E5_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPermanent()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F3230E81B5CCA49_GET_ISPERMANENT_OFFSET))(this);
	}

	::System::Void set_IsPermanent(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4F3230E81B5CCA49_SET_ISPERMANENT_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_DifficultyRatio()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F3230E81B5CCA49_GET_DIFFICULTYRATIO_OFFSET))(this);
	}

	::System::Void set_DifficultyRatio(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_4F3230E81B5CCA49_SET_DIFFICULTYRATIO_OFFSET))(this, a1);
	}
};
