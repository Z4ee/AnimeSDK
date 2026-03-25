#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapNpcDef; }

#define CLASS_2_D8257A310CAD757C___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x113CFF80)
#define CLASS_2_D8257A310CAD757C___C__DISPLAYCLASS40_0___UPDATENPCMONSTEREXTRAINFO_B__0_OFFSET UNITYSDK_OFFSET(0x113D20E0)

inline static constexpr unsigned int Class_2_D8257A310CAD757C___c__DisplayClass40_0_TypeDefinitionIndex = 50449;

class Class_2_D8257A310CAD757C___c__DisplayClass40_0 : public ::System::Object
{
public:
	::System::UInt32 serverEntityID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8257A310CAD757C___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __UpdateNpcMonsterExtraInfo_b__0(::RPG::Client::MapNpcDef* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_D8257A310CAD757C___C__DISPLAYCLASS40_0___UPDATENPCMONSTEREXTRAINFO_B__0_OFFSET))(this, x);
	}
};
