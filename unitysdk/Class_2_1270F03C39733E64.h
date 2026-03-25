#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7DC1DFEA80680036.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_1270F03C39733E64_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x89C1060)
#define CLASS_2_1270F03C39733E64__CTOR_OFFSET UNITYSDK_OFFSET(0x89C0F80)

inline static constexpr unsigned int Class_2_1270F03C39733E64_TypeDefinitionIndex = 49121;

class Class_2_1270F03C39733E64 : public ::Class_1_7DC1DFEA80680036
{
public:
	::System::Int32 _AreaID_k__BackingField; // 0x78

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_1270F03C39733E64__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 get_AreaID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1270F03C39733E64_GET_AREAID_OFFSET))(this);
	}
};
