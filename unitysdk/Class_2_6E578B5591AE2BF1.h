#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E296C95827C90A8.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_6E578B5591AE2BF1_GET_DIFFICULTYRATIO_OFFSET UNITYSDK_OFFSET(0x134AAC60)
#define CLASS_2_6E578B5591AE2BF1_GET_ISPERMANENT_OFFSET UNITYSDK_OFFSET(0x134AAC40)
#define CLASS_2_6E578B5591AE2BF1_METHOD_2_9581BE628286891C_OFFSET UNITYSDK_OFFSET(0x134AAA70)
#define CLASS_2_6E578B5591AE2BF1_ONAFTERPLAYERCREATE_OFFSET UNITYSDK_OFFSET(0x134AAA00)
#define CLASS_2_6E578B5591AE2BF1_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0x134AA950)
#define CLASS_2_6E578B5591AE2BF1_SET_DIFFICULTYRATIO_OFFSET UNITYSDK_OFFSET(0x134AAC70)
#define CLASS_2_6E578B5591AE2BF1_SET_ISPERMANENT_OFFSET UNITYSDK_OFFSET(0x134AAC50)
#define CLASS_2_6E578B5591AE2BF1__CTOR_OFFSET UNITYSDK_OFFSET(0x134AAC80)
#define CLASS_2_6E578B5591AE2BF1___IFIXBASEPROXY_ONAFTERPLAYERCREATE_OFFSET UNITYSDK_OFFSET(0x134AACF0)
#define CLASS_2_6E578B5591AE2BF1___IFIXBASEPROXY_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0x134AAC90)

inline static constexpr unsigned int Class_2_6E578B5591AE2BF1_TypeDefinitionIndex = 52289;

class Class_2_6E578B5591AE2BF1 : public ::Class_1_9E296C95827C90A8
{
public:
	::System::Boolean _IsPermanent_k__BackingField; // 0x30
	::RPG::GameCore::FixPoint _DifficultyRatio_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E578B5591AE2BF1__CTOR_OFFSET))(this);
	}

	::System::Void OnBattleInstanceCreated()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E578B5591AE2BF1_ONBATTLEINSTANCECREATED_OFFSET))(this);
	}

	::System::Void OnAfterPlayerCreate(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6E578B5591AE2BF1_ONAFTERPLAYERCREATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_9581BE628286891C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6E578B5591AE2BF1_METHOD_2_9581BE628286891C_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPermanent()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E578B5591AE2BF1_GET_ISPERMANENT_OFFSET))(this);
	}

	::System::Void set_IsPermanent(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6E578B5591AE2BF1_SET_ISPERMANENT_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_DifficultyRatio()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E578B5591AE2BF1_GET_DIFFICULTYRATIO_OFFSET))(this);
	}

	::System::Void set_DifficultyRatio(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_6E578B5591AE2BF1_SET_DIFFICULTYRATIO_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnBattleInstanceCreated()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E578B5591AE2BF1___IFIXBASEPROXY_ONBATTLEINSTANCECREATED_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnAfterPlayerCreate(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6E578B5591AE2BF1___IFIXBASEPROXY_ONAFTERPLAYERCREATE_OFFSET))(this, a1);
	}
};
