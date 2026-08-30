#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/RPG/IVec3.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }

#define STRUCT_2_0648CB3ED0A09425__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2DEAE40)
#define STRUCT_2_0648CB3ED0A09425__CTOR_2_OFFSET UNITYSDK_OFFSET(0x2DEAE80)
#define STRUCT_2_0648CB3ED0A09425__CTOR_3_OFFSET UNITYSDK_OFFSET(0x2DEAEA0)
#define STRUCT_2_0648CB3ED0A09425__CTOR_4_OFFSET UNITYSDK_OFFSET(0x2DEAEE0)
#define STRUCT_2_0648CB3ED0A09425__CTOR_OFFSET UNITYSDK_OFFSET(0x2DEAE20)

inline static constexpr unsigned int Struct_2_0648CB3ED0A09425_TypeDefinitionIndex = 54266;

struct alignas(8) Struct_2_0648CB3ED0A09425
{
	::RPG::GameCore::GameEntity* PPKKOLKCKOI; // 0x10
	::RPG::GameCore::FixVec3 BMFMHEOHAPP; // 0x18
	::RPG::IVec3 ADMAIBLHENJ; // 0x18

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + STRUCT_2_0648CB3ED0A09425__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::RPG::GameCore::FixVec3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + STRUCT_2_0648CB3ED0A09425__CTOR_1_OFFSET))(this, a1);
	}

	/*
	::System::Void _ctor_2(::RPG::GameCore::FixVec2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + STRUCT_2_0648CB3ED0A09425__CTOR_2_OFFSET))(this, a1);
	}
	*/

	::System::Void _ctor_3(::RPG::IVec3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::IVec3))((::PBYTE)hIl2Cpp + STRUCT_2_0648CB3ED0A09425__CTOR_3_OFFSET))(this, a1);
	}

	/*
	::System::Void _ctor_4(::RPG::GameCore::IVec2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + STRUCT_2_0648CB3ED0A09425__CTOR_4_OFFSET))(this, a1);
	}
	*/
};
