#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3FAE6534A7702C32.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_3_8B110DB69802966A_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xA043DD0)
#define CLASS_3_8B110DB69802966A_GET_CURSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xA044290)
#define CLASS_3_8B110DB69802966A_GET_MAXSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xA0442B0)
#define CLASS_3_8B110DB69802966A_GET_STYLEEXP_OFFSET UNITYSDK_OFFSET(0xA044270)
#define CLASS_3_8B110DB69802966A_GET_STYLEID_OFFSET UNITYSDK_OFFSET(0xA044230)
#define CLASS_3_8B110DB69802966A_GET_STYLELEVEL_OFFSET UNITYSDK_OFFSET(0xA044250)
#define CLASS_3_8B110DB69802966A_METHOD_3_51EA6E4FE028FA0D_OFFSET UNITYSDK_OFFSET(0xA043FE0)
#define CLASS_3_8B110DB69802966A_METHOD_3_5A33EBDE4F246CB0_OFFSET UNITYSDK_OFFSET(0xA0441B0)
#define CLASS_3_8B110DB69802966A_METHOD_3_69607B7E4783C654_OFFSET UNITYSDK_OFFSET(0xA044150)
#define CLASS_3_8B110DB69802966A_METHOD_3_B6F0C2C831C5F31A_OFFSET UNITYSDK_OFFSET(0xA043EA0)
#define CLASS_3_8B110DB69802966A_METHOD_3_E44560C8A4A9F35F_OFFSET UNITYSDK_OFFSET(0xA043F60)
#define CLASS_3_8B110DB69802966A_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xA043DE0)
#define CLASS_3_8B110DB69802966A_SET_CURSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xA0442A0)
#define CLASS_3_8B110DB69802966A_SET_MAXSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xA0442C0)
#define CLASS_3_8B110DB69802966A_SET_STYLEEXP_OFFSET UNITYSDK_OFFSET(0xA044280)
#define CLASS_3_8B110DB69802966A_SET_STYLEID_OFFSET UNITYSDK_OFFSET(0xA044240)
#define CLASS_3_8B110DB69802966A_SET_STYLELEVEL_OFFSET UNITYSDK_OFFSET(0xA044260)
#define CLASS_3_8B110DB69802966A__CTOR_OFFSET UNITYSDK_OFFSET(0xA0442D0)
#define CLASS_3_8B110DB69802966A___IFIXBASEPROXY_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xA0442E0)

inline static constexpr unsigned int Class_3_8B110DB69802966A_TypeDefinitionIndex = 51617;

class Class_3_8B110DB69802966A : public ::Class_2_3FAE6534A7702C32
{
public:
	::RPG::GameCore::GameEntity* Field_3_5; // 0x40
	::RPG::GameCore::FixPoint _MaxSpotlight_k__BackingField; // 0x48
	::System::UInt32 _StyleLevel_k__BackingField; // 0x50
	::System::UInt32 _StyleExp_k__BackingField; // 0x54
	::RPG::GameCore::FixPoint _CurSpotlight_k__BackingField; // 0x58
	::System::UInt32 _StyleID_k__BackingField; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B110DB69802966A__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
	{
		return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B110DB69802966A_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
	}

	::System::Void OnBattleInstanceCreated()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B110DB69802966A_ONBATTLEINSTANCECREATED_OFFSET))(this);
	}

	::System::Void Method_3_B6F0C2C831C5F31A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_8B110DB69802966A_METHOD_3_B6F0C2C831C5F31A_OFFSET))(this, a1);
	}

	::System::Void Method_3_51EA6E4FE028FA0D(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_8B110DB69802966A_METHOD_3_51EA6E4FE028FA0D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_E44560C8A4A9F35F(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_8B110DB69802966A_METHOD_3_E44560C8A4A9F35F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5A33EBDE4F246CB0(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_8B110DB69802966A_METHOD_3_5A33EBDE4F246CB0_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_StyleID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B110DB69802966A_GET_STYLEID_OFFSET))(this);
	}

	::System::Void set_StyleID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_8B110DB69802966A_SET_STYLEID_OFFSET))(this, value);
	}

	::System::UInt32 get_StyleLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B110DB69802966A_GET_STYLELEVEL_OFFSET))(this);
	}

	::System::Void set_StyleLevel(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_8B110DB69802966A_SET_STYLELEVEL_OFFSET))(this, value);
	}

	::System::UInt32 get_StyleExp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B110DB69802966A_GET_STYLEEXP_OFFSET))(this);
	}

	::System::Void set_StyleExp(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_8B110DB69802966A_SET_STYLEEXP_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_CurSpotlight()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B110DB69802966A_GET_CURSPOTLIGHT_OFFSET))(this);
	}

	::System::Void set_CurSpotlight(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_8B110DB69802966A_SET_CURSPOTLIGHT_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_MaxSpotlight()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B110DB69802966A_GET_MAXSPOTLIGHT_OFFSET))(this);
	}

	::System::Void set_MaxSpotlight(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_8B110DB69802966A_SET_MAXSPOTLIGHT_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint Method_3_69607B7E4783C654()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B110DB69802966A_METHOD_3_69607B7E4783C654_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnBattleInstanceCreated()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B110DB69802966A___IFIXBASEPROXY_ONBATTLEINSTANCECREATED_OFFSET))(this);
	}
};
