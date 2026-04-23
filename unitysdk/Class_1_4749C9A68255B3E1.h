#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F9FBCC956DFCF137_17;
namespace RPG::Client { class ChimeraDuelGameShopStallData; }
namespace System { class Action; }

#define CLASS_1_4749C9A68255B3E1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x11D45500)
#define CLASS_1_4749C9A68255B3E1_TICK_OFFSET UNITYSDK_OFFSET(0x11D45580)
#define CLASS_1_4749C9A68255B3E1__CTOR_OFFSET UNITYSDK_OFFSET(0x11D454F0)

inline static constexpr unsigned int Class_1_4749C9A68255B3E1_TypeDefinitionIndex = 71846;

class Class_1_4749C9A68255B3E1 : public ::System::Object
{
public:
	::RPG::Client::ChimeraDuelGameShopStallData* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::ChimeraDuelGameShopStallData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameShopStallData*))((::PBYTE)hIl2Cpp + CLASS_1_4749C9A68255B3E1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_17* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_17*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4749C9A68255B3E1_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4749C9A68255B3E1_TICK_OFFSET))(this, a1);
	}
};
