#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E296C95827C90A8.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_3FAE6534A7702C32_GET_DIFFICULTYRATIO_OFFSET UNITYSDK_OFFSET(0x12393B40)
#define CLASS_2_3FAE6534A7702C32_GET_ISPERMANENT_OFFSET UNITYSDK_OFFSET(0x12393B20)
#define CLASS_2_3FAE6534A7702C32_METHOD_2_9581BE628286891C_OFFSET UNITYSDK_OFFSET(0x12393950)
#define CLASS_2_3FAE6534A7702C32_ONAFTERPLAYERCREATE_OFFSET UNITYSDK_OFFSET(0x123938E0)
#define CLASS_2_3FAE6534A7702C32_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0x12393830)
#define CLASS_2_3FAE6534A7702C32_SET_DIFFICULTYRATIO_OFFSET UNITYSDK_OFFSET(0x12393B50)
#define CLASS_2_3FAE6534A7702C32_SET_ISPERMANENT_OFFSET UNITYSDK_OFFSET(0x12393B30)
#define CLASS_2_3FAE6534A7702C32__CTOR_OFFSET UNITYSDK_OFFSET(0x12393B60)
#define CLASS_2_3FAE6534A7702C32___IFIXBASEPROXY_ONAFTERPLAYERCREATE_OFFSET UNITYSDK_OFFSET(0x12393BD0)
#define CLASS_2_3FAE6534A7702C32___IFIXBASEPROXY_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0x12393B70)

inline static constexpr unsigned int Class_2_3FAE6534A7702C32_TypeDefinitionIndex = 51616;

class Class_2_3FAE6534A7702C32 : public ::Class_1_9E296C95827C90A8
{
public:
	::RPG::GameCore::FixPoint _DifficultyRatio_k__BackingField; // 0x30
	::System::Boolean _IsPermanent_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FAE6534A7702C32__CTOR_OFFSET))(this);
	}

	::System::Void OnBattleInstanceCreated()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FAE6534A7702C32_ONBATTLEINSTANCECREATED_OFFSET))(this);
	}

	::System::Void OnAfterPlayerCreate(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3FAE6534A7702C32_ONAFTERPLAYERCREATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_9581BE628286891C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3FAE6534A7702C32_METHOD_2_9581BE628286891C_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPermanent()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FAE6534A7702C32_GET_ISPERMANENT_OFFSET))(this);
	}

	::System::Void set_IsPermanent(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3FAE6534A7702C32_SET_ISPERMANENT_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_DifficultyRatio()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FAE6534A7702C32_GET_DIFFICULTYRATIO_OFFSET))(this);
	}

	::System::Void set_DifficultyRatio(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_3FAE6534A7702C32_SET_DIFFICULTYRATIO_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_OnBattleInstanceCreated()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FAE6534A7702C32___IFIXBASEPROXY_ONBATTLEINSTANCECREATED_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnAfterPlayerCreate(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3FAE6534A7702C32___IFIXBASEPROXY_ONAFTERPLAYERCREATE_OFFSET))(this, P0);
	}
};
