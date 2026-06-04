#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6E578B5591AE2BF1.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_3_1EEA34A9E9EED962_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xB03E260)
#define CLASS_3_1EEA34A9E9EED962_GET_CURSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xB03EA60)
#define CLASS_3_1EEA34A9E9EED962_GET_MAXSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xB03EA80)
#define CLASS_3_1EEA34A9E9EED962_GET_STYLEEXP_OFFSET UNITYSDK_OFFSET(0xB03EA40)
#define CLASS_3_1EEA34A9E9EED962_GET_STYLEID_OFFSET UNITYSDK_OFFSET(0xB03EA00)
#define CLASS_3_1EEA34A9E9EED962_GET_STYLELEVEL_OFFSET UNITYSDK_OFFSET(0xB03EA20)
#define CLASS_3_1EEA34A9E9EED962_METHOD_3_24D9C55DE696C1C6_OFFSET UNITYSDK_OFFSET(0xB03E470)
#define CLASS_3_1EEA34A9E9EED962_METHOD_3_441A337071A19F2A_OFFSET UNITYSDK_OFFSET(0xB03E870)
#define CLASS_3_1EEA34A9E9EED962_METHOD_3_7965052C3A01DCA5_OFFSET UNITYSDK_OFFSET(0xB03E980)
#define CLASS_3_1EEA34A9E9EED962_METHOD_3_AF930CE757E9BBF8_OFFSET UNITYSDK_OFFSET(0xB03E3F0)
#define CLASS_3_1EEA34A9E9EED962_METHOD_3_B6F0C2C831C5F31A_OFFSET UNITYSDK_OFFSET(0xB03E330)
#define CLASS_3_1EEA34A9E9EED962_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xB03E270)
#define CLASS_3_1EEA34A9E9EED962_SET_CURSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xB03EA70)
#define CLASS_3_1EEA34A9E9EED962_SET_MAXSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xB03EA90)
#define CLASS_3_1EEA34A9E9EED962_SET_STYLEEXP_OFFSET UNITYSDK_OFFSET(0xB03EA50)
#define CLASS_3_1EEA34A9E9EED962_SET_STYLEID_OFFSET UNITYSDK_OFFSET(0xB03EA10)
#define CLASS_3_1EEA34A9E9EED962_SET_STYLELEVEL_OFFSET UNITYSDK_OFFSET(0xB03EA30)
#define CLASS_3_1EEA34A9E9EED962__CTOR_OFFSET UNITYSDK_OFFSET(0xB03EAA0)
#define CLASS_3_1EEA34A9E9EED962___IFIXBASEPROXY_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xB03EAB0)

inline static constexpr unsigned int Class_3_1EEA34A9E9EED962_TypeDefinitionIndex = 52290;

class Class_3_1EEA34A9E9EED962 : public ::Class_2_6E578B5591AE2BF1
{
public:
	::RPG::GameCore::GameEntity* Field_3_0; // 0x40
	::RPG::GameCore::FixPoint _CurSpotlight_k__BackingField; // 0x48
	::System::UInt32 _StyleExp_k__BackingField; // 0x50
	::System::UInt32 _StyleID_k__BackingField; // 0x54
	::RPG::GameCore::FixPoint _MaxSpotlight_k__BackingField; // 0x58
	::System::UInt32 _StyleLevel_k__BackingField; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EEA34A9E9EED962__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
	{
		return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EEA34A9E9EED962_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
	}

	::System::Void OnBattleInstanceCreated()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EEA34A9E9EED962_ONBATTLEINSTANCECREATED_OFFSET))(this);
	}

	::System::Void Method_3_B6F0C2C831C5F31A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_1EEA34A9E9EED962_METHOD_3_B6F0C2C831C5F31A_OFFSET))(this, a1);
	}

	::System::Void Method_3_24D9C55DE696C1C6(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_1EEA34A9E9EED962_METHOD_3_24D9C55DE696C1C6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AF930CE757E9BBF8(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_1EEA34A9E9EED962_METHOD_3_AF930CE757E9BBF8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7965052C3A01DCA5(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_1EEA34A9E9EED962_METHOD_3_7965052C3A01DCA5_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_StyleID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EEA34A9E9EED962_GET_STYLEID_OFFSET))(this);
	}

	::System::Void set_StyleID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_1EEA34A9E9EED962_SET_STYLEID_OFFSET))(this, a1);
	}

	::System::UInt32 get_StyleLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EEA34A9E9EED962_GET_STYLELEVEL_OFFSET))(this);
	}

	::System::Void set_StyleLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_1EEA34A9E9EED962_SET_STYLELEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_StyleExp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EEA34A9E9EED962_GET_STYLEEXP_OFFSET))(this);
	}

	::System::Void set_StyleExp(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_1EEA34A9E9EED962_SET_STYLEEXP_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_CurSpotlight()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EEA34A9E9EED962_GET_CURSPOTLIGHT_OFFSET))(this);
	}

	::System::Void set_CurSpotlight(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_1EEA34A9E9EED962_SET_CURSPOTLIGHT_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_MaxSpotlight()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EEA34A9E9EED962_GET_MAXSPOTLIGHT_OFFSET))(this);
	}

	::System::Void set_MaxSpotlight(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_1EEA34A9E9EED962_SET_MAXSPOTLIGHT_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_3_441A337071A19F2A()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EEA34A9E9EED962_METHOD_3_441A337071A19F2A_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnBattleInstanceCreated()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EEA34A9E9EED962___IFIXBASEPROXY_ONBATTLEINSTANCECREATED_OFFSET))(this);
	}
};
