#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LevelDirector.h"

namespace RPG::GameCore { class GameWorld; }

#define CLASS_2_8D02D1A7CA88288C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143D55F0)
#define CLASS_2_8D02D1A7CA88288C_TICK_OFFSET UNITYSDK_OFFSET(0x143D5660)
#define CLASS_2_8D02D1A7CA88288C__CTOR_OFFSET UNITYSDK_OFFSET(0x143D55B0)
#define CLASS_2_8D02D1A7CA88288C___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143D5700)
#define CLASS_2_8D02D1A7CA88288C___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x143D5760)

inline static constexpr unsigned int Class_2_8D02D1A7CA88288C_TypeDefinitionIndex = 55421;

class Class_2_8D02D1A7CA88288C : public ::RPG::Client::LevelDirector
{
public:
	::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_2_8D02D1A7CA88288C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D02D1A7CA88288C_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8D02D1A7CA88288C_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D02D1A7CA88288C___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8D02D1A7CA88288C___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
