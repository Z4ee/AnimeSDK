#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapNpcDef; }

#define CLASS_2_0748E0E1B406181B___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x198A5DD0)
#define CLASS_2_0748E0E1B406181B___C__DISPLAYCLASS51_0__HASLOCALNPC_B__0_OFFSET UNITYSDK_OFFSET(0x198A6ED0)

inline static constexpr unsigned int Class_2_0748E0E1B406181B___c__DisplayClass51_0_TypeDefinitionIndex = 62205;

class Class_2_0748E0E1B406181B___c__DisplayClass51_0 : public ::System::Object
{
public:
	::System::UInt32 instanceID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0748E0E1B406181B___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _HasLocalNPC_b__0(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_0748E0E1B406181B___C__DISPLAYCLASS51_0__HASLOCALNPC_B__0_OFFSET))(this, a1);
	}
};
