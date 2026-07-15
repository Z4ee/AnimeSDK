#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapNpcDef; }

#define CLASS_2_0748E0E1B406181B___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1859E290)
#define CLASS_2_0748E0E1B406181B___C__DISPLAYCLASS40_0___UPDATENPCMONSTEREXTRAINFO_B__0_OFFSET UNITYSDK_OFFSET(0x185A05E0)

inline static constexpr unsigned int Class_2_0748E0E1B406181B___c__DisplayClass40_0_TypeDefinitionIndex = 59364;

class Class_2_0748E0E1B406181B___c__DisplayClass40_0 : public ::System::Object
{
public:
	::System::UInt32 serverEntityID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0748E0E1B406181B___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __UpdateNpcMonsterExtraInfo_b__0(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_0748E0E1B406181B___C__DISPLAYCLASS40_0___UPDATENPCMONSTEREXTRAINFO_B__0_OFFSET))(this, a1);
	}
};
