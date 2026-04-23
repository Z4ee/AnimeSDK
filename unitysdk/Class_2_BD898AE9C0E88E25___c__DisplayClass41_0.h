#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapNpcDef; }

#define CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11900E10)
#define CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS41_0___UPDATENPCEXTRAINFO_B__0_OFFSET UNITYSDK_OFFSET(0x11902F80)

inline static constexpr unsigned int Class_2_BD898AE9C0E88E25___c__DisplayClass41_0_TypeDefinitionIndex = 57309;

class Class_2_BD898AE9C0E88E25___c__DisplayClass41_0 : public ::System::Object
{
public:
	::System::UInt32 serverEntityID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __UpdateNpcExtraInfo_b__0(::RPG::Client::MapNpcDef* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS41_0___UPDATENPCEXTRAINFO_B__0_OFFSET))(this, x);
	}
};
